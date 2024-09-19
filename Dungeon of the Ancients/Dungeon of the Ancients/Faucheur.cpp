#include "Faucheur.h"

Faucheur::Faucheur(std::vector<int> pos, OptionnalValue& opt)
{
	option = opt;
	m_pos = pos;
	m_character = 'F';
	m_damage = option.FaucherDamage;
	m_health = option.FaucheurHealth;
}
