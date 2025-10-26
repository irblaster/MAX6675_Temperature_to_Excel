# MAX6675_Temperature_to_Excel

This is example code to stream the temperature readings from the MAX6675 D1 Mini hat directly over the RS232 Emulated COM port on the D1 mini rather than using wifi.  In this example we'll connect the device to the excel data streamer so that each temperature value shows up as it's own line in excel.  The same code could be used for any other program connected over the com port.

- MAX6675 Shield for the D1 Mini (includes the D1 mini as well as a K type thermocouple): https://ezmation.com/wifi/67-wifi-max6675-k-type-thermocouple.html
- Excel data streamer: https://support.microsoft.com/en-us/office/what-is-data-streamer-1d52ffce-261c-4d7b-8017-89e8ee2b806f


This example uses the adafruit MAX6675 library, which can be installed in the library manager.
