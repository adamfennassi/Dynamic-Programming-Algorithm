# BSQ - Plus Grand Carre

## Description

BSQ trouve le plus grand carre d'espace libre dans une grille. La grille est lue depuis un fichier ou `.` represente un espace vide et `o` un obstacle. Le programme remplace la zone du plus grand carre trouve par des `x` et affiche le resultat.

## Compilation

```
make        # compiler
make re     # recompiler
make clean  # supprimer les .o
make fclean # supprimer les .o et le binaire
```

## Utilisation

```
./bsq fichier_carte
```

## Exemple

Fichier d'entree :
```
5.o
.....
.o...
.....
.....
.o...
```

Sortie :
```
.....
.o...
.xxx.
.xxx.
.oxx.
```

Le programme a trouve un carre de 3x3 et l'a marque avec des `x`.

## Valeurs de retour

- 0 en cas de succes
- 84 en cas d'erreur
