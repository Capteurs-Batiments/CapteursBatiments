# Cahier de suivi du projet de Angélique Moglia

* Séance du 20 Décembre 2017 

J'ai formé mon groupe avec Perrine Barale. 
On a choisi un projet autour de capteurs intelligents pour bâtiments, capables de transmettre des données comme le taux d'humidité ou le taux de CO relevés dans une pièce.

Nous avons listé les élements les plus importants pour réaliser le projet (les cartes Arduino, les capteurs, les piles pour les boîtiers, les modules pour communiquer).

Il faut maintenant décider quels capteurs nous allons mettre dans nos boîtiers, pour cela nous avons envoyé un mail au directeur du département Bâtiments ; on souhaite en discuter avec lui, pour savoir quels capteurs il aimerait qu'on utilise.
Il faut également décider quel type d'ondes nous allons utiliser pour faire communiquer les mini-boîtiers avec le serveur.


* Séance du 12 Janvier 2018

Nous sommes allées voir le directeur du département Bâtiments Intelligents de Polytech Sophia, Gérard Sauce, pour discuter du projet, de comment voit-il les choses, quels types de capteurs souhaite-t-il, quelles caractéristiques...
Il nous a donc parlé des contraintes à gérer, par exemple il faudrait être capable de vérifier à distance si un capteur fonctionne toujours, et non devoir se déplacer en personne.
Les boîtiers doivent également être mobiles (accrocables au mur ou déplaçables), c'est la principale caractéristique démandée.

Nous avons décidé d'utiliser les ondes LoRa pour communiquer, ces ondes ont une portée assez forte pour couvrir tout un bâtiment. De plus nous avons sélectionné les différents capteurs à utiliser : capteurs d'humidité, de monoxyde de carbone, de température, et de présence.

On a écrit un programme permettant de faire fonctionner le capteur DHT 11 (température et humidité).

* Séance du 19 Janvier 2018

Nous avons récupéré quelques composants : une carte Arduino mini, un PCB, le module de communication ainsi qu'un port USB série. Nous avons donc commencé par soudé l'Arduino sur le PCB, puis le module.
On a ensuite commencé à écrire un programme permettant de faire fonctionner le capteur MQ-7, capteur de monoxyde de carbone (CO).

* Séance du 23 Janvier 2018

Aujourd'hui a eu lieu notre première présentation orale, nous avons donc expliqué nos motivations, nos objectifs, en quoi notre projet consiste et le matériel nécessaire (tout est renseigné dans le power point mis en ligne).

Nous avons réalisé le circuit reliant le capteur MQ-7 à la carte Arduino. 

Malheureusement le programme écrit ne fonctionne pas, les données affichées sur le moniteur série sont aberrantes, vers les 600, or le taux habituel de CO dans l’air ambiant est d’environ 0,2 ppm (part par million). 
Je pense donc que nous n'avons pas bien compris le fonctionnement du capteur ; il va falloir faire des recherches plus poussées pour comprendre, et pouvoir écrire un programme adéquate.


* Séance du 6 février 2018

Nous avons réalisé le circuit du capteur de présence PIR, et téléversé le programme que j'ai écrit pour l'utiliser. 

![Capteur PIR](http://robotic-controls.com/sites/default/files/learn/PIRSensor_bb.png)


Nous avons alors testé le capteur à infrarouge en passant par exemple une main devant pour savoir si celle-ci était détectée ou non. 
Malheureusement cet essai a été infructueux, la main est parfois détectée, parfois non. 
Il faudra voir à la séance suivante si cela provient d'un manque de précision du capteur PIR ou si celui est du à une erreur dans le programme.



