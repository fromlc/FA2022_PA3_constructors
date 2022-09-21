//----------------------------------------------------------------------
// Population.h : class declaration
//----------------------------------------------------------------------
#pragma once

constexpr int DEF_COUNT = 100;
constexpr int DEF_BIRTHS = 6;
constexpr int DEF_DEATHS = 5;

class Population {
private:
	int m_count;
	int m_births;
	int m_deaths;

public:
	// constructors
	Population();
	Population(int count, int births, int deaths);

	// getters
	int getCount() const;
	int getBirths() const;
	int getDeaths() const;

	// setters
	void setCount(int count);
	void setBirths(int births);
	void setDeaths(int deaths);

	// util
	double getBirthRate();
	double getDeathRate();
};