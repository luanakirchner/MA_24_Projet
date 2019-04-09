# MA_24_Projet

 ---------------------------
## Pointeurs en C  
**Luana Kirchner Bannwart**  
**Version 1.0**  
**28.03.2019**  
-----------------------------    

Introduction
-------------


Dans le cours Ma-24, il nous est demandé de réaliser un petit projet informatique avec un thème que nous avons une difficulté.  
Pour le projet j'ai choisi les pointeurs en langage C, réalise en Code Blocks, mon choix était basé sur mon rencontre d’une difficulté en prendre plusieurs valeurs dans une fonction et pas seulement une avec un return.  

Les Pointeurs:
--------------

Pendant ma démarche d’apprentissage sur ma difficulté, j’ai appris :   

* Les pointeurs en C sont le seul moyen de changer le contenu de variables par tout dans le code, en différents fonctions.  
* Un pointeurs nos permet d’indiquer l’adresse d’une variable selon leurs adresse mémoire physique. En mettant le symbole « * » devant son nom un pourrait reprendre la valeur de la variable indiquer.  

##### Exemple 1:  
Int Monvaleur = 5 ;  
Int *PointeurSurMonvaleur = &Monvaleur ;  

Dans ce cas j’ai récupérer l’adresse de la variable Monvaleur dans PointeurSurMonvaleur.  
Je peux ainsi utiliser la valeur de la variable Monvaleur dans tout mon code et en différents fonctions. Pour ça je dois utiliser    PointeurSurMonvaleur.

##### Exemple 2:  
Printf("%d", *PointeurSurMonvaleur) ; avec ce bout de code je pourrais voir le résultat « 5 » qui apparaitre.  

* Les pointeurs sont très délicats à gérer, l’utilisation du « * » devant est très important.    
  

Realisation du projet 
---------------------  

Pour realiser le projet, j'ai réalisé différents étapes qui étaient comités.  

| Commit                           | objectif      | 
| -------------                    |:-------------:| 
| first attempt on pointers        | j'ai commencé avec une utilisation simple du pointeur pour voir sa fonctionnalité. |
|First function with pointers      | J’ai utilisé une fonction « Void » Pour changer la valeur du mon pointeur.|  
|Calculation with pointers, within a function | Dans cette commit j’ai réalisé plusieurs tests avec des calculs entre deux pointeurs, et différentes manières de placer un pointeur dans une fonction.     |
| Test: value entered by user, retrieved on a pointer | Dans cette partie j’ai essayé de récupérer des valeurs entrer par l’utilisateur pour l’indiquer dans un pointeurs.       | 
| First try of a calculator :  | Dans cette commit J'ai effectué des calculs entre deux pointeurs, (avec des valeurs entrer par l’utilisateur) Multiplication, addition, soustraction.       | 
| Calculation with comma :  | Dans cette partie j’ai ajouté la division comme chois pour calculer, à cause de ça j’ai dû changer les valeurs int des variables à floot.         | 
| Finished Calculator | J’ai effectué quelques commentaires dans le code, aussi des boucles pour que l’utilisateur puisse répéter l’opération.      | 
| Version 1.1 | J’ai effectué quelques modifications pour l’amélioration du code, mais n’en changent pas sa fonctionnalité          | 

Tests effectués 
---------------------   

* Printf dans le code pour vérifier que les pointeurs on bien pris les valeurs voulues  
* J'ai entrer plusieurs valeurs pour verifier les diferrents resultat.

Conclusion
-----------

Les pointeurs sont très importants dans la langage C, ils peuvent faciliter la récupération des différentes valeurs et dès pouvoir les utiliser en différents fonctions.  
Ce projet était important pour pouvoir avoir une connaissance dans mon problème rencontres avant.
Je sais qui il a encore beaucoup des choses à apprend sur les pointeurs, mais j’ai déjà une base pour poursuive mon apprentissage et avance chaque fois plus.    


**Liste de ressources pour résoudre la problématique en pointeurs**  

1. Pour avoir une connaissance dans les pointeurs j’utilise le site Openclassrooms. 
https://openclassrooms.com/fr/courses/19980-apprenez-a-programmer-en-c/15417-a-lassaut-des-pointeurs  
 
