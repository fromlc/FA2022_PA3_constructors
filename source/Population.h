//----------------------------------------------------------------------
// Population.h : class declaration
//----------------------------------------------------------------------
#pragma once

class Population {
private:
	int m_count;
	int m_births;
	int m_deaths;

public:
	// constructor
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