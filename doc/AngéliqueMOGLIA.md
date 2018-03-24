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

Aujourd'hui a eu lieu notre première présentation orale, nous avons donc expliqué nos motivations, nos objectifs, en quoi notre projet consiste et le matériel nécessaire (tout est renseigné dans le [power point] (https://github.com/Capteurs-Batiments/CapteursBatiments/blob/master/doc/Capteurs%20B%C3%A2timents.pdf) mis en ligne .

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


