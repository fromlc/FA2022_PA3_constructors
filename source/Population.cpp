//----------------------------------------------------------------------
// Population.cpp : class definition
//----------------------------------------------------------------------
#include "Population.h"

// constructor
Population::Population(int count, int births, int deaths) {
	m_count = count;
	m_births = births;
	m_deaths = deaths;
}

// getters
int Population::getCount() const { return m_count; }
int Population::getBirths() const { return m_births; }
int Population::getDeaths() const { return m_deaths; }

// setters
void Population::setCount(int count) { m_count = count; }
void Population::setBirths(int births) { m_births = births; }
void Population::setDeaths(int deaths) { m_deaths = deaths; }

// util
double Population::getBirthRate() { return (double)m_births / (double)m_count; }
double Population::getDeathRate() { return (double)m_deaths / (double)m_count; }
