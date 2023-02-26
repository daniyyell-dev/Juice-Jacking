# Juice Jacking Code

This is a C implementation of a juice jacking attack, which is a type of malware that can be used to steal data from mobile devices through USB charging ports. The attack works by tricking the victim into plugging their device into a compromised charging station, which then injects malicious code into the device to steal sensitive data.

# How it works

This code is designed to be run on a compromised charging station, which is equipped with a microcontroller and USB interface. When a victim plugs their device into the charging station, the code begins to execute and attempts to exploit vulnerabilities in the victim's device to gain access to sensitive data.

The code is organized into several modules, including a USB driver module, a payload injection module, and a data exfiltration module. Each module is responsible for a specific task in the attack chain, and can be customized or replaced depending on the attacker's needs.

# Usage

To use this code, you will need a microcontroller with USB capabilities, as well as a charging station that can be compromised with the microcontroller. You will also need to compile the code using a C compiler that supports the microcontroller's architecture.

Once the code is compiled, you can upload it to the microcontroller and connect it to the charging station. When a victim plugs their device into the charging station, the attack will begin automatically and attempt to steal sensitive data from the victim's device.

# Hardware Requiremnts 

The hardware requirements for this code are as follows:

    A device running a Unix-based operating system such as Linux with the following tools installed:
        1. A C compiler (such as gcc)
       2. The wget command-line tool
       3. The adb (Android Debug Bridge) command-line tool

    An Android device to be targeted by the malware, connected to the Unix-based device via USB cable or Wi-Fi.

    A computer or server with an IP address of "192.168.1.10" and a listener running on port 4444 to receive the reverse shell connection from the malware.

# Disclaimer

This code is provided for educational and research purposes only, and should not be used to harm others or engage in illegal activities. The author assumes no responsibility for any damages or consequences that may result from the use of this code. Always use this code responsibly and follow responsible disclosure practices when reporting vulnerabilities to software vendors.
Contributing

If you would like to contribute to this code, please feel free to open a pull request with your changes or improvements. We welcome contributions from the security research community, and will review all submissions carefully.

Happy hacking!
