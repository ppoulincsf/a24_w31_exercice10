#pragma once
#include "book.h"

/**
 * @class Node
 * @brief Repr�sente un n�ud dans une structure de donn�es cha�n�e contenant un livre et un pointeur vers le n�ud suivant.
 *
 * La classe Node est utilis�e dans les structures de donn�es comme les listes cha�n�es. Elle contient un objet Book et un pointeur vers le n�ud suivant.
 */
class Node
{
public:
  /**
   * @brief Constructeur par d�faut.
   *
   * Initialise un objet Node avec le livre par d�faut et le pointeur suivant � nullptr.
   */
  Node();

  /**
   * @brief Destructeur.
   *
   * Lib�re les ressources allou�es par l'objet Node.
   */
  ~Node();

  /**
   * @brief Obtient le pointeur vers le n�ud suivant.
   *
   * @return Pointeur constant vers le n�ud suivant.
   */
  Node* getNext() const;

  /**
   * @brief D�finit le pointeur vers le n�ud suivant.
   *
   * @param _next Pointeur vers le nouveau n�ud suivant.
   */
  void setNext(Node* _next);

  /**
   * @brief Obtient le livre contenu dans le n�ud.
   *
   * @return R�f�rence constante au livre contenu dans le n�ud.
   */
  const Book& getBook() const;

  /**
   * @brief D�finit le livre contenu dans le n�ud.
   *
   * @param _book R�f�rence constante au nouveau livre � stocker dans le n�ud.
   */
  void setBook(const Book& _book);

private:
  Book book; /**< Livre contenu dans le n�ud. */
  Node* next; /**< Pointeur vers le n�ud suivant. */
};

