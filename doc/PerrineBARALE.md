# Cahier de suivi du projet de Perrine Barale

## Séance du 20 Décembre 2017 _ SEANCE 1

J'ai formé mon groupe avec Angélique Moglia. 

On a décider de faire un projet autour du bâtiment. Nous allons faire des capteurs (CO, humidité, température, présence) en collaboration avec le département bâtiment de Polytech Nice-Sophia. Le but, à terme est de faire une mallette remplie de capteurs sans fil pour les bâtiments.
Aujourd’hui, une mallette de ce type coûte approximativement 20.000€, ce qui est trop cher pour une université, nous allons donc essayer de réduire les coûts grâce à la technologie Arduino.

![Arduino logo](https://www.arduino.cc/arduino_logo.png)

Durant cette séance, nous avons envoyé un mail au directeur du département bâtiment pour savoir quels capteurs utiliser. Pour savoir plus exactement ce qui est demandé dans ce projet.

On a prévu de faire plusieurs capteurs pour pouvoir les placer à différents endroits dans plusieurs pièces. Les capteurs étant munis d'une carte Arduino et de capteurs. Cette carte transmettra les données à un boitier qui transmettra les données à un ordinateur. Les données seront rassemblées dans un graphe pour voir l'évolution au cours du temps (Sur plusieurs semaines ou un mois).

![Malette](https://i2.cdscdn.com/pdt2/9/2/2/1/300x300/auc5411257035922/rw/valise-alu-425-x-305-x-125mm.jpg)


Nous avons alors décidé qu’il nous fallait, pour notre projet :
- Mini cartes Arduino
- Convertisseur USB série (pour programmer les mini Arduino)
- PCB 
- Piles

## Séance du 12 Janvier 2018 _ SEANCE 2

Aujourd'hui, nous avons eu rendez-vous avec Monsieur Sauce, le directeur de la spécialité Bâtiments de Polytech Nice-Sophia. Suite à ce rendez-vous, nous avons décidé de faire des capteurs de Température et d'Humidité ainsi que des capteurs de CO et également de présence. 
Mr Sauce nous a également demandé qu’il soit possible de vérifier à distance que les capteurs fonctionnent toujours. Que si le capteur s’arrête de fonctionner alors nous recevront un message d’erreur. De plus il faudrait pouvoir avoir accès aux informations sans être obligé de se déplacer. Les capteurs doivent être mobiles, on doit pouvoir les accrocher aux murs.

Nous avons commencé par définir le type de transmission que nous allons utiliser. On a donc décidé d'utiliser le système de transmission d'information LoRa. Ce système permet de transféré des données à plus de 15km, ce qui est suffisant pour l'ordre de grandeur d'un bâtiment. Cependant les bâtiments sont construits en pierres ou avec des portes métalliques ou autres qui empêchent les ondes de circuler comme il faut. Il est alors possible de rajouter une gateway.

Il nous faut donc rajouter à notre liste de matériel :
- Capteurs de température/humidité DHT11
-	Capteur de présence
-	Capteur de CO MQ-7
-	Une gateway
-	Modules LoRa

On récupèrera les données transmises à partir des capteurs sur un serveur web et les données seront donc visible de n'importe où. Une personne travaillant sur un bâtiment et ayant placé des capteurs à l'intérieur ne sera donc pas obligé de se déplacer pour récolter ses informations.

![LoRa](https://cdn-learn.adafruit.com/assets/assets/000/047/095/medium800/adafruit_io_loralog.png?1507526369)



Nous avons donc commencé par le capteur de température/humidité. Pour cela nous allons utiliser un capteur DHT11. « Ce capteur est capable de mesurer des températures de 0 à +50°C avec une précision de +/- 2°C et des taux d'humidité relative de 20 à 80% avec une précision de +/- 5%. Une mesure peut être réalisée toutes les secondes. »


![Capteur humidité](http://www.shop2tout.com/25026-thickbox/arduino-dht11-capteur-numerique-temperature-humidite.jpg "Capteur d'humidité")


Nous avons codé pour le capteur de température/humidité. Le programme comportait quelques erreurs, il faut donc que nous l'améliorons les séances à venir.
Nous avons également fait le circuit pour ce capteur.

![CircuitCapteurDHT11](http://cdn.shopify.com/s/files/1/1689/3027/files/schematic-dht11t-1024x560.png?v=1483733943 )


## Séance du 19 Janvier 2018 _ SEANCE 3

Nous avons réussi à faire marcher le capteur de température et d'humidité qui semble donner des valeurs exactes. Lorsque l’on place le capteur dans la salle la température est de 23°C puis si on le déplace à la fenêtre la température baisse à 19°C.

Le programme et le circuit pour le capteur de température/humidité fonctionne avec notre carte Arduino Genuino/Uno. J’ai donc soudé la carte mini Arduino et la puce de communication LoRa sur le PCB. Puis nous avons vérifier que le capteur de température et d'humidité (placé sur le PCB) marche bien avec la carte mini Arduino.  C’est le cas.

Une fois que le capteur de température et d'humidité fonctionne correctement, j’ai commencé à programmer le capteur de CO mais je n’ai pas encore testé sa validité car Arduino ne trouvait pas le port compatible avec l’Arduino mini. 
Pour ce capteur, on va utiliser un capteur MQ-7. « Le MQ-7 peut détecter des concentrations de CO de 20 à 2000ppm. Ce capteur a une haute sensibilité et un temps de réponse rapide. »

![Capteur de CO](https://i.ebayimg.com/images/g/324AAOSw4UtWSTrE/s-l300.jpg "Capteur de CO")


La séance prochaine, nous mettrons en place la communication LoRa si nous avons reçu la gateway.

## Séance du 23 janvier 2018 _ SEANCE 4

Aujourd'hui, nous avons fait la première présentation orale du projet (cf [Présentation.1](https://github.com/Capteurs-Batiments/CapteursBatiments/blob/master/doc/Capteurs%20Bâtiments.pdf)). 

Puis nous avons continuer le programme du capteur MQ-7 tout en vérifiant que ce que nous avions déjà fait marche toujours (capteur DHT11).

![CircuitCapteurMQ7](http://osoyoo.com/wp-content/uploads/2016/06/MQ-7_bb.jpg)

Nous n'avons pas pu mettre en place la communication LoRa car nous n'avions pas encore reçu la gateway.

J'ai rencontrer un problème car Arduino ne marchait pas sur mon ordinateur. Il faut que je trouve une solution mais malgré mes recherches je n'ai pas encore trouvé.

Nous avons testé le programme de CO écrit la semaine dernière et celui-ci ne semble pas marcher car il nous renvoi des valeurs tel que 500ppm. 

Quand nous auront trouvé un programme qui marche, pour valider notre programme et nos branchements, il faudrait penser à vérifier en faisant brûler quelque chose mais nous ne pouvons pas le faire en cours.

## Séance du 06 février 2018 _ SEANCE 5

Aujourd’hui, nous avons un programme pour le capteur CO (MQ-7) qui semble marcher, qui nous donne des valeurs tel que 0,04ppm qui semble se rapprocher des valeurs « normales ». Cependant, vers la fin de la séance, nous avions 0,00ppm donc il faudrait s’assurer que ce sont bien les bonnes valeurs. Il faudra vérifier en faisant brûler quelque chose pour voir si la fumée a un impact sur ce capteur.

De plus, nous avons commencé à écrire le programme du capteur de présence (PIR sensor) et fait le circuit de ce capteur. Cependant les tests que nous avons effectués avec ce capteur ne semblaient pas bon. En effet le capteur réagissait si nous bougions la main à environ 3m de lui ; ce qui correspondait à ce que nous avions programmé mais lorsque nous avons mis le capteur dans le couloir (sans passage) celui-ci renvoyait des moments ou il détectait du mouvement. Pourtant le programme ne semble pas comporter d'erreur. 

![CapteurPIRsensor](https://cdn-learn.adafruit.com/assets/assets/000/000/543/medium800/proximity_pirardbb.gif?1447976079 )

Nous avons également appris que Mr Ferrero avait reçu la gateway et attendait de voir avec le département informatique pour l’installer dans le bâtiment. Nous pourrons des lors connecter la mini Arduino par la communication LoRa.

## Séance du 22 février 2018 _ SEANCE 6

Aujourd’hui, nous avons mis en place la communication Lora. Nous nous sommes tout d’abord inscrit sur [The Things Network]( https://www.thethingsnetwork.org) pour enregistrer notre Arduino sur la gateway. Nous nous sommes également inscrit sur [MyDevice Cayenne]( https://mydevices.com), nous pourrons relever sur cette application les différentes données et nous pourrons les analyser grâce a différents graphes. 


![MyDevice]( http://claranova.fr/assets/images//pages/businesses/SellSheet-BackImage.png)


## Séance du 15 mars 2018 _ SEANCE 7

Aujourd’hui, nous avons continuer à mettre en place la communication Lora. Nous avons donc adapté les programmes que nous avions, notamment celui pour le DHT11 pour que les informations de notre capteur (la température et l’humidité) soit transmis à [The Things Network]( https://www.thethingsnetwork.org) et transmis sur [MyDevice Cayenne]( https://mydevices.com) pour pouvoir être exploité. (Le site [The Things Network]( https://www.thethingsnetwork.org) ne permet pas de stocker les informations, pour les exploités on doit donc les envoyés sur le site [MyDevice Cayenne]( https://mydevices.com)). 

Nous avons branché le capteur sur une pile pour vérifier que celui ci fonctionne bien sur plusieurs jours. Nous avons donc laissé le capteur dans une salle de cours puis nous vérifierons régulièrement que les valeurs se mettent à jour, qu’elles semblent correctes, ect.
Nous pouvons donc dire que le capteur DHT11 est opérationnel. Nous nous demandons cependant s’il ne faudrait pas changer pour un DHT22 pour améliorer la précision des mesures. 

Pour le capteur CO, il faut que nous réessayons le programme car celui-ci nous envoyé des valeurs aberrantes. En ayant fait des recherches, j’ai pu le modifier et il faudrait le tester pour vérifier si les valeurs sont exactes.

## 25 mars 2018

Cela fait 10 jours que nous avons laisser le capteur dans une salle de cours. Les données sont encore transmises à l’application [MyDevice Cayenne]( https://mydevices.com) et des graphes de température et d’humidité commencent à prendre forme. Le capteur DHT11 fonctionne comme il faut et nous pouvons nous concentrer sur les deux autres capteurs qui nous demandent plus de recherches.

## Séance du 27 mars 2018 _ SEANCE 8

Nous avons testé le programme du CO que nous avions fait il y a quelques séances. Les données étant de l'ordre du ppm sont en accord avec les normes ([Taux ppm](https://www.centreantipoisons.be/monoxyde-de-carbone/le-monoxyde-de-carbone-co-en-d-tail/quelles-sont-les-concentrations-toxiques-de)). On peut donc dire que notre capteur est fonctionnel. 
Le capteur MQ7 manque cependant de précision car nous aurions du l’étalonné dans un gaz pour qu’il donne des valeurs précises.

Il faut maintenant que l'on rajoute ce programme au programme qui gère la modulation LoRa pour que les données soient directement envoyée sur [MyDevice Cayenne]( https://mydevices.com) pour pouvoir être exploité.

## 30 mars 2018 

J’ai rajouté le programme du CO à celui de la communication LoRa ; pour le tester il faut récupérer la mini carte Arduino que nous avons laisser dans le labo d’électronique pour qu’elle continue à transmettre les données sur l’humidité et la température. 

## Séance du 04 avril 2018 _ SEANCE 9

Aujourd'hui, nous avons fait notre présentation orale de mi-parcours du projet (cf [Présentation.2](https://github.com/Capteurs-Batiments/CapteursBatiments/blob/master/doc/Projet%20arduino2.pdf)) : Nous avons mis à jour notre planning ainsi que présenté l’avancé de notre projet. Nous avons également fait un point sur le matériel dont nous pouvons avoir besoin dans la suite.

Puis nous avons connecté le MQ7 avec l’Arduino où est connecté la pile. Nous avons donc l’intérieur d’un boîtier terminé. Pour finir celui-ci, il ne manque que quelques soudages et la fabrication de l’extérieur du boîtier. Nous pensons également déssouder les led présentes dans la mini carte arduino et le capteur DHT11 pour éviter toutes pertes d’énergie inutile.

Puis nous avons commencé des recherches pour éventuellement remplacé le capteur de présence qui n’est pas très efficace par un capteur HB100 Doppler avec lequel nous détecterions une vitesse et en déduirons la présence de quelqu’un.

![HB100]( https://ae01.alicdn.com/kf/HTB18YyUadbJ8KJjy1zjq6yqapXaF/2-PCS-HB100-Micro-ondes-Radar-Doppler-Module-Sans-Fil-Motion-Sensor-HB100-micro-ondes-Motion.jpg_640x640.jpg)

## 06 avril 2018

J’ai trouvé un programme pour le doppler mais celui-ci ne pourra marcher que si on lui rajoute un amplificateur opérationnel. 

![AOP]( https://i.stack.imgur.com/N7aig.png)

J’ai donc envoyé la liste des composants dont nous aurions besoin.

## Séance du 17 avril 2018_SEANCE 10

Le capteur avait arrêté de fonctionnait une semaine auparavant. Nous pensions alors que les piles étaient mortes. Angélique à donc amener des piles pour que l’on puisse remplacer les piles des capteurs. En changeant les piles les capteurs ont recommencé a fonctionnait, cependant nous pensons que le capteur de CO consomme plus d’énergie car nous avons l’impression que les piles se vide plus rapidement.

Nous avons également voulu tester si les taux de CO fluctuait bien si on faisait bruler quelque chose a coté du capteur. Angélique a donc fait bruler du papier de façon a ce que la fumée soit directement en contact avec le capteur. Nous avons donc observé que le taux de CO à augmenter.

J’ai vu avec Mr MASSON pour l’AOP dont nous avons besoin pour faire marcher le doppler. Il m’a donc donné un AOP déjà tout câblé (CJMCU-333) et je dois regarder si celui-ci marcherai avec le HB100 car nous ne savons pas vraiment si l’AOP recommandé (voir 06/04/18) et le CJMCU-333 ont la même fonctionnalité.

![CJMCU-333]( https://microjpm.com/_files/200006395-a8a84a9a3e/AD30574%20uJPM.jpg)

Après avoir effectuer les branchements je remarque que l’Arduino ne renvoi aucune information. J’ai donc dans un premier tant vérifié si nous observions un signal grâce à l’oscilloscope et c’est le cas. Il faut donc que je continue les recherches sur le CJMCU-333 mais je ne pense pas que ce soit le bon AOP pour ce doppler.

