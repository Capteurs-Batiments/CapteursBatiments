# CapteursBatiments

![Polytech logo](http://fr.academic.ru/pictures/frwiki/80/Polytechnicesophia.png "logo polytech")


Ce projet est réalisé dans le cadre de la formation de la prépa intégrée de Polytech'Nice Sophia. 
Ce projet est rendu possible grâce a Mr Masson ([siteweb]( http://users.polytech.unice.fr/~pmasson/Enseignement.htm)) et Mr Ferrero ([siteweb]( http://users.polytech.unice.fr/~ferrero/enseignement.html)), nos enseignants en électronique Peip2. 


## Description du projet

Nous allons réaliser différents capteurs pour le bâtiment comme des capteurs de température, d'humidité, de CO ou encore de présence. Ce projet est en lien avec le département Bâtiment de Polytech Nice-Sophia car actuellement ces capteurs coutent trop cher pour une université. Avec la technologie Arduino, nous allons essayer de produire des capteurs efficaces pour un moindre coût.

![Arduino logo](https://www.arduino.cc/arduino_logo.png)



Pour la transmission d'informations des capteurs jusqu'à un serveur sur le web, nous voudrions utiliser la technologie LoRa.

## Matériel utilisé

* Mini cartes Arduino
* Modules pour communication LoRa
* Capteurs 
* Convertisseur USB série
* PCB (printed circuit board) = circuit imprimé
* Piles
* Une gateway

## Avancé du projet

- [X] Programme du capteur DHT11_température/humidité (cf [DHT11](https://github.com/Capteurs-Batiments/CapteursBatiments/blob/master/Code%20Arduino/DHT11)).
- [X] Circuit du capteur DHT11_température/humidité (cf [Circuits]( https://github.com/Capteurs-Batiments/CapteursBatiments/blob/master/doc/Montage.md)).
- [X] Programme du capteur MQ-7_CO. (Consomme trop donc on ne le branchera pas)
- [X] Circuit du capteur MQ-7_CO (cf [Circuits]( https://github.com/Capteurs-Batiments/CapteursBatiments/blob/master/doc/Montage.md)). (Consomme trop donc on ne le branchera pas)
- [X] Communication LoRa.
- [X] Boitiers accrochables au mur.

## Projet terminé

Nous avons réalisé 2 capteurs identiques (comme ci-dessous) qui transmettent des informations sur la température et l'humidité à distance pour le suivi des bâtiments par les élèves ingénieurs.

Lien vers les données du capteurs : [Données](https://cayenne.mydevices.com/shared/5b0fb4ed6b3d5c1a6285a97d)
![photo du projet](https://s15.postimg.cc/9m2ih75ff/34101795_1912150418796277_991167414127296512_n.jpg)

