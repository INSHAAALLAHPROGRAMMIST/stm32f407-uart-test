# Loyiha Nomi (masalan, STM32F407-UART-Test)

Bu loyiha STM32F407VET6 mikrokontrolleri uchun ishlab chiqilgan bo'lib, uning USART1 periferiyasi orqali kompyuterga ma'lumot uzatishni namoyish etadi.

## Maqsad
Loyiha asosan USART1 porti orqali ketma-ket ma'lumotlar uzatishni tekshirish uchun mo'ljallangan. Dastur mikrokontrollerdan belgilangan ma'lumotni muntazam ravishda yuborib turadi.

## Xususiyatlar
* **Mikrokontroller:** STM32F407VET6
* **Periferiya:** USART1 (UART)
* **Baud Tezligi:** 115200 (ammo negadir termina 57600 dagina to'g'ri qabul qilyapti matnni)
* **Ishlash Rejimi:** Asinxron ma'lumot uzatish (Transmit)
* **Asosiy Funksiya:** "Subxanalloh" matnini har 1 millisekundda uzatish.

## Dasturiy ta'minot
* **IDE:** STM32CubeIDE
* **HAL Kutubxonasi:** STM32 HAL Library
* **Konfiguratsiya:** STM32CubeMX

## O'rnatish
1.  Bu omborni (repository) klonlang:
    `git clone https://github.com/INSHAAALLAHPROGRAMMIST/stm32f407-uart-test.git`
2.  STM32CubeIDE da `File -> Import... -> General -> Existing Projects into Workspace` orqali loyihani import qiling.
3.  Loyihani qurish (build) va mikrokontrollerga yuklash uchun kerakli sozlamalarni bajaring.

## Foydalanish
1.  Loyihani mikrokontrollerga yuklang.
2.  UART-to-USB konvertori orqali USART1 portini kompyuterga ulang.
3.  Serial terminal dasturini (masalan, PuTTY, RealTerm, Hercules yoki CubeIDE'ning o'zidagi Serial Monitor) oching va sozlamalarni moslang (masalan, baud tezligi 115200 (bunda ishlamasa 57600)).
4.  Terminalda mikrokontrollerdan kelayotgan ma'lumotlarni ko'rasiz.
