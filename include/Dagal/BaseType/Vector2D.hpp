/** Le travail de Dagal **/
namespace Dagal
{
	/** Type de base pour les applications de Dagal **/
	namespace BaseType
	{
		/** Vecteur 3D pour représentation dans l'espace **/
		class Vector3D
		{
		private:

		public:
			/** Constructeur par défaut **/
			Vector3D();
			/** Constructeur de copie **/
			Vector3D(const Vector3D& v);
			/** Constructeur complet **/
			Vector3D(const Double& x, const Double& y, const Double& z);

			/** Destructeur **/
			~Vector3D();

			/** Opérateur d'égalité **/
			Vector3D& operator=(const Vector3D& v);
			/** Ajout d'un vecteur à celui ci **/
			Vector3D& operator+=(const Vector3D& v);
			/** Retrait d'un vecteur à celui ci **/
			Vector3D& operator-=(const Vector3D& v);
			/** Multiplication par un scalaire **/
			Vector3D& operator*=(const Double& v);
			/** Division par un scalaire **/
			Vector3D& operator/=(const Double& v);
			/** Produit vectoriel **/
			Vector3D& operator^=(const Vector3D& v);

			/** Somme de 2 vecteurs **/
			Vector3D operator+(const Vector3D& v);
			/** Différence de 2 vecteurs **/
			Vector3D operator-(const Vector3D& v);
			/** Produit d'un vecteur par un scalaire **/
			Vector3D operator*(const Double& v);
			/** Produit Scalaire de 2 vecteurs **/
			Double operator*(const Vector3D& v);
			/** Division d'un vecteur par un scalaire **/
			Vector3D operator/(const Double& v);
			/** Produit vectoriel de 2 vecteurs **/
			Vector3D operator^(const Vector3D& v);

			/** Vecteur unitaire **/
			Vector3D unify();
			/** Norme du vecteur **/
			Double norme();
		}
	}
}
