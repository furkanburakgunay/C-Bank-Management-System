# C-Bank-Management-System
# 🏦 Bank Account System / C ile Banka Hesap Yönetimi

[Türkçe açıklamalar için aşağı kaydırın / Scroll down for Turkish]

---

## 🇺🇸 Project Overview
A procedural programming project developed in **C** that manages banking operations. It uses file handling to store customer data permanently and structural logic to manage account details.

### 📋 Key Technical Features
- **File-Based Persistence:** Stores account information (balance, name, ID) in `.dat` or `.txt` files using `fopen` and `fwrite`.
- **Structural Data:** Uses `struct` to group related data points, demonstrating C's ability to handle complex entities without OOP.
- **Transaction Logic:** Includes functions for deposit, withdrawal, and account balance inquiries with basic error checking.
- **Menu-Driven Interface:** A clean console-based UI for seamless user interaction.

---

## 🇹🇷 Proje Hakkında
Banka işlemlerini yöneten, **C** dilinde geliştirilmiş prosedürel bir programlama projesidir. Müşteri verilerini kalıcı olarak saklamak için dosya işleme (file handling) ve hesap detaylarını yönetmek için yapı (struct) mantığını kullanır.

### 📋 Teknik Özellikler
- **Dosya Bazlı Kalıcılık:** `fopen` ve `fwrite` kullanarak hesap bilgilerini (bakiye, isim, ID) harici dosyalarda saklar.
- **Yapısal Veri (Struct):** Nesne yönelimli programlama kullanmadan, karmaşık verileri gruplamak için `struct` yapısını sergiler.
- **İşlem Mantığı:** Para yatırma, çekme ve bakiye sorgulama gibi temel hata kontrollü fonksiyonlar içerir.
- **Menü Tasarımı:** Kullanıcı etkileşimi için temiz, konsol tabanlı bir arayüz sunar.

---
## 📸 Preview / Önizleme
![Banka Sistemi Konsol Ekranı](furkan_bank_project.jpg)
*🇺🇸 Application interface showing account operations and menu options.*
*🇹🇷 Hesap işlemlerini ve menü seçeneklerini gösteren uygulama arayüzü.*

## 🚀 How to Run / Nasıl Çalıştırılır

### 🇺🇸 English
1. **Compiler:** You need a C compiler (GCC, Clang, etc.).
2. **Compile:** Open your terminal and run: 
   `gcc banka.c -o banka`
3. **Run:** Execute the compiled file:
   `./banka` (or `banka.exe` on Windows)
4. **Data:** A file named `banka.dat` will be created in the directory to store data persistently.

### 🇹🇷 Türkçe
1. **Derleyici:** Bir C derleyicisine (GCC, Clang vb.) ihtiyacınız var.
2. **Derleme:** Terminali açın ve şu komutu yazın: 
   `gcc banka.c -o banka`
3. **Çalıştırma:** Derlenen dosyayı çalıştırın:
   `./banka` (Windows için `banka.exe`)
4. **Veri:** Verilerin kalıcı saklanması için dizinde `banka.dat` adında bir dosya oluşacaktır.ler burada saklanır.
