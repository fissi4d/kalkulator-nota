# Llogaritësi i Notave në C++

Ky është një program i thjeshtë në C++ që kërkon nga përdoruesi pikët e fituara në provim dhe llogarit notën përkatëse bazuar në sistemin e vlerësimit universitar.

## Përshkrimi
Programi demonstron përdorimin e funksioneve për të ndarë logjikën e kodit në pjesë më të vogla (modularizim). Çdo funksion kryen një detyrë specifike: marrjen e inputit, validimin, llogaritjen dhe shfaqjen e rezultatit.

### Funksionalitetet:
- **Input:** Merr pikët nga përdoruesi.
- **Validim:** Siguron që pikët të jenë brenda intervalit logjik (0 - 100).
- **Logjikë:** Konverton pikët në nota (5, 6, 7, 8, 9, 10).
- **Output:** Shfaq mesazhin përfundimtar (Ngel ose Kalon).

---

## Struktura e Kodit (Ndarja e Detyrave)
Kodi është ndarë në 4 funksione kryesore, ku secili student ka implementuar pjesën e tij:

1. **`merrPiket()`** - Merr vlerën nga tastiera.
2. **`validoPiket()`** - Kontrollon nëse pikët janë 0-100.
3. **`llogaritNoten()`** - Përcakton notën bazuar në pikë (p.sh. < 50 është notë 5).
4. **`shfaqRezultatin()`** - Printon notën dhe mesazhin urues.

---

## Pamja e Ekzekutimit
Më poshtë mund të shihni një shembull se si duket programi kur ekzekutohet në terminal:

<img width="328" height="147" alt="image" src="https://github.com/user-attachments/assets/5c836ea3-380c-45d1-97af-f7e1d3010d38" />

---

## Si ta ekzekutoni kodin

1. **Shkarkoni kodin:**
   `git clone https://github.com/fissi4d/kalkulator-nota.git`

2. **Kompiloni programin (në terminal):**
   ```bash
   g++ main.cpp -o notat
3. Ekzekutoni:
   ```bash
   ./notat
