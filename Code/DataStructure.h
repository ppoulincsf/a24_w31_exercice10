#pragma once
#include "Node.h"
/**
 * @class DataStructure
 * @brief Classe de base abstraite pour diverses structures de donn�es.
 *
 * La classe DataStructure fournit une interface commune pour diff�rentes structures
 * de donn�es, avec des fonctionnalit�s de base pour la gestion des n�uds.
 */

class DataStructure
{
public:
  /**
   * @brief Constructeur par d�faut.
   *
   * Initialise un objet DataStructure avec le premier n�ud � nullptr.
   */
  DataStructure();

  /**
   * @brief Constructeur de copie.
   *
   * @param src R�f�rence constante � un objet DataStructure � copier.
   *
   * Cr�e une copie profonde de l'objet src, y compris ses n�uds.
   */
  DataStructure(const DataStructure& src);

  /**
   * @brief Destructeur virtuel.
   *
   * Lib�re les ressources allou�es par l'objet DataStructure.
   */
  virtual ~DataStructure();

  /**
   * @brief Affiche le contenu de la structure de donn�es.
   *
   * M�thode pure virtuelle qui doit �tre impl�ment�e par les classes d�riv�es.
   */
  virtual void display() const = 0;

  /**
   * @brief Renvoie la taille de la structure de donn�es.
   *
   * @return Le nombre d'�l�ments dans la structure de donn�es.
   */
  unsigned int size() const;

  /**
   * @brief V�rifie si la structure de donn�es est vide.
   *
   * @return true si la structure de donn�es est vide, sinon false.
   */
  virtual bool isEmpty() const;

protected:
  /**
   * @brief Renvoie un pointeur constant vers le premier n�ud.
   *
   * @return Pointeur constant vers le premier n�ud.
   */
  const Node* getFirstNode() const;

  /**
   * @brief Renvoie un pointeur vers le premier n�ud.
   *
   * @return Pointeur vers le premier n�ud.
   */
  Node* getFirstNode();

  /**
   * @brief D�finit le premier n�ud de la structure de donn�es.
   *
   * @param node Pointeur vers le nouveau premier n�ud.
   */
  void setFirstNode(Node* node);

private:
  Node* firstNode; /**< Pointeur vers le premier n�ud de la structure de donn�es. */
};

