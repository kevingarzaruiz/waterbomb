# waterbomb
This project is meant to help comunities to face the drought and avoid getting damage on their water-bombs.

This C program is mounted in an Arduino nano with a relay and a water level sensor

The main issue in the comunity with the water is that when they turn the water-bomb on, the hole of water only stands with water between 60 and 20 mins, depending on the season of the year, humidity, temperature, etc. This situation can lead to the water-bomb to be working without water in the water hole which can lead the engine to be broken eventually. In consequence the situation for this comunity would be even worse to face the draught.

This project uses the water level sensor to constantly check the level of the water and stops the engine once it has been reached critical levels, the starts a "sleep delay" where the engine is off by the relay letting the wtarehole to be full again. once the sleep delay (30 mins) has passed, the engine starts automatically again. This works in cycles until the user does not need more water and turn the devide off.
