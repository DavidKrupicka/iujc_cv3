# iujc_cv3
Třetí cvičení předmětu IUJC (10.10.2016)

##Příklad 1 
Mějme int a, b, *p_a, *p_b. Uložte do ukazatelů adresy statických proměnných a dále pracujte již pouze pomocí ukazatelů. 
- Načěe do proměných hodnoty (přs ukazatele). 
- Vypiše hodnotu statické proměné (přs ukazatel), hodnotu ukazatele (tedy adresu statické proměné, kterou obsahuje), adresu ukazatele (adresa proměné typu ukazatel), adresu statické proměné. 
- Sečěe a +b (přs ukazatele) 


##Příklad 2
Zadefinujte konstantu N=5 (pomocí makra), definujte statické pole o velikosti N. 
Načěe prvky do pole 
-  Z klávesnice 
-  Z generátoru 
Vypiše prvky pole 
Najděe Max/Min a jejich indexy -> informace ulože to přslušých proměných a vypiše. 
Prohoďe Max s Min a vypiše pole 
Pro načení a výpis použjte oba ekvivalentní způoby 
-  pole[i] ==*(pole+i) 
-  &pole[i]==pole+i 
