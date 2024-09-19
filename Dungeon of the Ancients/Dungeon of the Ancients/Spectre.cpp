#include "Spectre.h"

Spectre::Spectre(std::vector<int> pos, OptionnalValue& opt)
{
	option = opt;
	m_pos = pos;
	m_character = 'S';
	m_damage = option.SpectreDamage;
	m_health = option.SpectreHealth;
}
