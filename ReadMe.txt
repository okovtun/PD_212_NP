﻿https://github.com/okovtun/PD_212_NP.git
https://www.youtube.com/playlist?list=PLeqyOOqxeiIOMQ1taaMBs3DgZygna2ctz

TODO:
1. При старте сервера и при подключении к серверу пользователь должен вводить свое имя,
   и при получении сообщения, должно отображаться имя пользователя, который его отправил;
2. К одному серверу должны иметь возможность подключаться сразу несколько клиентов;

TODO:
Реализовать программу, которая ослеживает заданные узлы в сети, 
и определяет качество связи с этими узлами, а именно, задержку в миллисекндах 
и количество отправленных и потерянных пакетов.

TODO:
1. Проверить маску на корректность, т.е., если 1 и 0 идут не подряд, то это нужно исправить;
2. При изменении префикса, должна меняться и маска;		DONE
3. Инвертировать стрелочки в Spin control, и ограничить максимальное значение до 32;	DONE

DONE:
Написать калькулятор IP-адресов, который по введенному IP-адресу и маске определяет:
	-адрес сети;
	-широковещательный адрес в эту сеть;
	-максимальное количество IP-адресов;

DONE:
1. Изучить структуру IP-пакета: https://www.rfc-editor.org/rfc/pdfrfc/rfc791.txt.pdf
2. Используя анализатор протоколов 'Wireshark' выяснить и описать алгоритм работы команды 'tracert';
	https://www.rfc-editor.org/rfc/pdfrfc/rfc792.txt.pdf