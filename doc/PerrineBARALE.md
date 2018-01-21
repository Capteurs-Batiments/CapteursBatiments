 Cahier de suivi du projet de Perrine Barale

* Séance du 20 Décembre 2017 _ SEANCE 1

J'ai formé mon groupe avec Angélique Moglia. 
On a décider de faire un projet autour du bâtiment. Nous allons faire des capteurs (CO, humidité, température, présence) pour le département bâtiment de Polytech Nice-Sophia.

Durant cette séance, nous avons envoyé un mail au directeur de département bâtiment pour savoir quels capteurs utiliser.

On a prévu de faire plusieurs capteurs pour pouvoir les placer à différents endroits dans plusieurs pièces. Les capteurs étant munis d'une carte arduino et de capteurs. Cette carte transmettra les données à un boitier qui transmettra les données à un ordinateur. Les données seront rassemblées dans un graphe pour voir l'évolution au cours du temps (Sur plusieurs semaines ou un mois).



* Séance du 12 Janvier 2018 _ SEANCE 2

Aujourd'hui, nous avons eu rendez-vous avec Monsieur Sauce, le directeur de la spécialité Bâtiments de polytech Nice-Sophia. Suite à ce rendez-vous, nous avons décider de commencer par faire des capteurs de Température et d'Humidité. 

![Capteur humidité](http://www.shop2tout.com/25026-thickbox/arduino-dht11-capteur-numerique-temperature-humidite.jpg "Capteur d'humidité")

Nous avons commencé par définir le type de transmission que nous allons utiliser. On a donc décidé d'utiliser le système de transmission d'information LoRa. Ce système permet de transféré des données a plus de 15km, ce qui est suffisant pour l'ordre de grandeur d'un bâtiment. Cependant les bâtiments sont construits en pierres ou avec des portes métalliques ou autres qui empêchent les ondes de circulait comme il faut. Il est alors possible de rajouter une gateway.
On récupèrera les données transmises à partir des capteurs dans un serveur sur le cloud et les données seront donc visible de n'importe où. 

Une personne travaillant sur un bâtiment et ayant placé des capteurs à l'intérieur ne sera donc pas obliger de se déplacer pour récolté ses informations.

Nous avons également commencé à coder pour le capteur de température. Le programme comporter quelques erreurs, il faut donc que nous l'améliorons les séances a venir.

* Séance du 19 Janvier 2018 _ SEANCE 3

Nous avons réussit à faire marcher le capteur de température et d'humidité qui semble données les valeurs exact.

Nous avons soudé la carte mini arduino et la puce de communication LoRa sur le PCB. Puis nous avons vérifier que le capteur de température et d'humidité (placé sur le PCB) marche bien avec la carte mini arduino. 

Une fois que le capteur de température et d'humidité fonctionne correctement, on place le change par le capteur de CO, puis on commence le code. 

La séance prochaine, on mettra en place la communication LoRa.

![Capteur de CO](https://i.ebayimg.com/images/g/324AAOSw4UtWSTrE/s-l300.jpg "Capteur de CO")
