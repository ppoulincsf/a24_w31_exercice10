#pragma once
#include <string>

using namespace std;

/**
 * @class Book
 * @brief Repr�sente un livre avec un identifiant, un titre et une ann�e de publication.
 *
 * La classe Book contient des informations de base sur un livre, y compris des m�thodes
 * pour afficher les informations et comparer les livres.
 */
class Book
{
public:
  /**
   * @brief Constructeur par d�faut.
   *
   * Initialise un objet Book avec des valeurs par d�faut.
   */
  Book();

  /**
   * @brief Constructeur de copie.
   *
   * @param src R�f�rence constante � un objet Book � copier.
   *
   * Cr�e une copie profonde de l'objet src.
   */
  Book(const Book& src);

  /**
   * @brief Constructeur avec param�tres.
   *
   * @param _id Identifiant du livre.
   * @param _title Titre du livre.
   * @param _year Ann�e de publication du livre.
   *
   * Initialise un objet Book avec les valeurs sp�cifi�es.
   */
  Book(unsigned int _id, std::string _title, unsigned int _year);

  /**
   * @brief Destructeur.
   *
   * Lib�re les ressources allou�es par l'objet Book.
   */
  ~Book();

  /**
   * @brief Affiche les informations du livre.
   *
   * Affiche l'identifiant, le titre et l'ann�e de publication du livre.
   */
  void display() const;

  /**
   * @brief Op�rateur de comparaison.
   *
   * @param book R�f�rence constante � un objet Book � comparer.
   * @return true si les livres sont identiques, sinon false.
   *
   * Compare les livres par identifiant, titre et ann�e de publication.
   */
  bool operator==(const Book& book) const;

private:
  unsigned int id; /**< Identifiant du livre. */
  std::string title; /**< Titre du livre. */
  unsigned int year; /**< Ann�e de publication du livre. */
};


