# Temperature-Monitor


# Goal: 

The goal for this project was to create a thermometer that would be able to measure both temperature and humidity, without being connected to my computer. Then transmit this data periodically to my computer, where the data would be organized and presnted on a graph against the temperature/humidity outside of my home. 

# Parts I used: 
An ESP8266 was used to handle some slight processing as well as transmitting data. This was chosen over an arduino, because of its innate ability to connect to wifi vs Arduino requiring a wifi Shield. In total, the esp8266 ended up being significantly cheaper than the arduino + shield as well. Additionally, the ESP8266 possesed more flash memory than the arduino in consideration as well, allowing more data to be stored being needing a transfer to computer.

A DHT11 was also utilized as it possesed the required ability to measure temperature and humidity within an acceptable error percantage. 

![image](https://user-images.githubusercontent.com/73033647/194955467-e2f63feb-6828-47ec-b987-499ba3747864.png)


#Usage: 

Usage is almost enitrely autonomus, the circuit is powered by a solar powered powerbank and requires no monitering. The server on computer end, runs always and collects data. To veiw the graph, graph.py must be executed. 
 
 ![image](https://user-images.githubusercontent.com/73033647/194958989-dc02abb6-2633-4afb-9ed3-bf287f291021.png)
  
 Image showcases graph of temperature and humidity in my room over a sample period.
