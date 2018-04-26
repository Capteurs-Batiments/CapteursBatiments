# Cahier de suivi du projet de Angélique Moglia


## Séance du 20 Décembre 2017 

J'ai formé mon groupe avec Perrine Barale.  
On a choisi un projet autour de capteurs intelligents pour bâtiments, capables de transmettre des données comme le taux d'humidité ou le taux de CO relevés dans une pièce.

Nous avons listé les élements les plus importants pour réaliser le projet (les cartes Arduino, les capteurs, les piles pour les boîtiers, les modules pour communiquer).

Il faut maintenant décider quels capteurs nous allons mettre dans nos boîtiers, pour cela nous avons envoyé un mail au directeur du département Bâtiments ; on souhaite en discuter avec lui, pour savoir quels capteurs il aimerait qu'on utilise.  
Il faut également décider quel type d'ondes nous allons utiliser pour faire communiquer les mini-boîtiers avec le serveur.



## Séance du 12 Janvier 2018

Nous sommes allées voir le directeur du département Bâtiments Intelligents de Polytech Sophia, Gérard Sauce, pour discuter du projet, de comment voit-il les choses, quels types de capteurs souhaite-t-il, quelles caractéristiques...  
Il nous a donc parlé des contraintes à gérer, par exemple il faudrait être capable de vérifier à distance si un capteur fonctionne toujours, et non devoir se déplacer en personne.  
Les boîtiers doivent également être mobiles (accrocables au mur ou déplaçables), c'est la principale caractéristique démandée.

Nous avons décidé d'utiliser les ondes LoRa pour communiquer, ces ondes ont une portée assez forte pour couvrir tout un bâtiment.

![LoRa](http://www.hubel.pt/uploads/media/78a3b6d303ffcef735622da14838aa6c.jpg)

De plus nous avons sélectionné les différents capteurs à utiliser : capteurs d'humidité, de monoxyde de carbone, de température, et de présence.

On a écrit un programme permettant de faire fonctionner le capteur DHT 11 (température et humidité).



## Séance du 19 Janvier 2018

Nous avons récupéré quelques composants : 
* une carte Arduino mini
* un PCB
* le module de communication
* un port USB série.  

Nous avons donc commencé par soudé l'Arduino sur le PCB, puis le module.  
On a ensuite commencé à écrire un programme permettant de faire fonctionner le capteur MQ-7, capteur de monoxyde de carbone (CO).



## Séance du 23 Janvier 2018

Aujourd'hui a eu lieu notre première présentation orale, nous avons donc expliqué nos motivations, nos objectifs, en quoi notre projet consiste et le matériel nécessaire (tout est renseigné dans le [power point](https://github.com/Capteurs-Batiments/CapteursBatiments/blob/master/doc/Capteurs%20B%C3%A2timents.pdf) mis en ligne).

Nous avons réalisé le circuit reliant le capteur MQ-7 à la carte Arduino. 

Malheureusement le programme écrit ne fonctionne pas, les données affichées sur le moniteur série sont aberrantes, vers les 600, or le taux habituel de CO dans l’air ambiant est d’environ 0,2 ppm (part par million).   
Je pense donc que nous n'avons pas bien compris le fonctionnement du capteur ; il va falloir faire des recherches plus poussées pour comprendre, et pouvoir écrire un programme adéquate.



## Séance du 6 février 2018

Nous avons réalisé le circuit du capteur de présence PIR, et téléversé le programme que j'ai écrit pour l'utiliser. 

![Capteur PIR](http://robotic-controls.com/sites/default/files/learn/PIRSensor_bb.png)


Nous avons alors testé le capteur à infrarouge en passant par exemple une main devant pour savoir si celle-ci était détectée ou non.  
Malheureusement cet essai a été infructueux, la main est parfois détectée, parfois non. 

Il faudra voir à la séance suivante si cela provient d'un manque de précision du capteur PIR ou si celui est du à une erreur dans le programme.



## Séance du 22 février 2018

Nous avons commencé à utiliser la gateway avec Monsieur Ferrero, et donc mis en place la communication LoRa.

On a créé un compte sur [The Things Network](https://www.thethingsnetwork.org/), pour se connecter à la gateway, mais ce site ne stockant pas les données, nous nous sommes également inscrit sur [MyDevices Cayenne](https://mydevices.com/), où les données récoltées seront envoyées.  

Malheureusement le programme écrit il y a quelques semaines pour faire fonctionner le capteur DHT11 n'est plus suffisant, car il ne permet pas d'établir la communication entre l'Arduino et la gateway, il va donc falloir le réécrire.



## Séance du 15 mars 2018

Nous avons trouvé un nouveau programme pour que le DHT11 puisse communiquer avec la gateway, et donc envoyer les données sur [MyDevices](https://mydevices.com/) comme voulu, et nous l'avons téléversé sur la carte Arduino.  
Nous avons également relié la carte à une pile, pour que celle-ci n'ait plus à être branchée en permanence sur un ordinateur. Notre capteur (ensemble PCB, carte Arduino, module LoRa, DHT11) est maintenant autonome et opérationnel.

Désormais nous pouvons consulter, à n'importe quel moment, les données relévées par le capteur sur notre compte Cayenne.  
Ce dernier nous permet de visualiser les relevés de différentes façons, on peut voir les variations sur des graphes :
* en live
* sur dix minutes
* sur une heure
* sur une journée
* sur une semaine
* sur un mois
* sur trois mois
* ou même sur une année

Il existe également une application mobile Cayenne, qui possède les mêmes fonctionnalités.  

![Apllication mobile Cayenne](https://i.pinimg.com/originals/78/59/74/78597482b2ecec8d816879c62e4f730e.jpg)

Nous sommes donc capables de vérifier que le capteur fonctionne sans l'avoir obligatoirement près de nous.

Nous avons également regardé le programme utilisé dans le Martian Rover Project, car ce projet utilise, comme nous, un capteur MQ-7 pour relever le taux de monoxyde de carbone. Nous avons donc copié la partie qui nous intéressait (quelques lignes) car nous avons été incapables d'écrire nous-même un programme qui affichait des valeurs raisonnables.



## Séance du 27 mars 2018

Nous avons testé le programme trouvé à la séance précédente (celui du MQ-7). Celui-ci affiche sur le moniteur série des valeurs convenables.  
Nous sommes donc en train d'ajouter ce programme à celui utilisé pour faire communiquer le DHT11 avec la gateway, pour que les relevés de monoxyde de carbone soient accessibles via myCayenne.



## Séance du 4 avril 2018

Aujourd'hui a eu lieu la deuxième présentation orale, où nous devions présenter nos avancées, les problèmes rencontrés, ainsi qu'une mise à jour de nos objectifs. Tout cela est résumé dans le [power point](https://github.com/Capteurs-Batiments/CapteursBatiments/blob/master/doc/Projet%20arduino2.pdf) présent sur ce GitHub.

Nous avons eu le temps d'ajouter le capteur MQ-7 au reste du circuit, il communique désormais avec la carte mini Arduino.
On a donc pu tester le nouveau programme, complété par Perrine durant la semaine : le capteur envoie désormais les données à myCayenne.  

Finalement, le circuit est au complet et est opérationnel, mais nous envisageons de remplacer le DHT11 par un capteur DHT22 plus précis dans les mesures.  
Il faudra également retirer les leds de tous les composants car celles-ci consomment trop d'énergie.  

Monsieur Masson nous a donné un nouveau capteur : le HB100 Doppler, pour pallier notre problème du capteur de présence PIR, trop imprécis pour être utlisé comme nous l'espérions.  
Cependant ce nouveau capteur n'est pas un détecteur de présence, mais de mouvement. Il est donc difficilement utilisable pour mesurer le taux d'occupation d'une pièce comme nous le voulions. Je vais cependant effectuer des recherches pour voir de quelles manières nous pourrions l'utiliser efficacement, mais je reste sceptique.



## Mardi 10 avril 2018

Nous ne recevons plus de données sur l'application myCayenne depuis quelques jours. Nous sommes donc allées jeter un coup d'oeil à notre capteur laissé dans la salle de TP.  
Nous avons remarqué que les leds des composants n'etaient pas allumées, cela signifie que les piles sont déchargées, il faut donc les remplacer dès que possible.



## Mardi 17 avril 2018

J'ai amené des piles, on a donc pu remplacer les anciennes qui avaient cessé d'alimenter le circuit. Désormais le capteur fonctionne à nouveau, on peut continuer de développer le projet.  
Aujourd'hui j'ai effectué des tests en brûlant un bout de papier près du capteur de monoxyde de carbone. Celui-ci a immédiatement détecté le changement, en effet le taux de CO affiché sur myCayenne est plus élevé.  
En revanche, je précise que les données de CO affichées sur le site correspondent au taux (en ppm) multiplié par 100. On a remarqué cela en observant les relevés et en les comparant à des taux normaux. Cependant le capteur manque tout de même de précision : il aurait fallu l'étalonner.


