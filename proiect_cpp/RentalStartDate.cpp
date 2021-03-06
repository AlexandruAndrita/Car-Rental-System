#include "RentalStartDate.h"


RentalStartDate::RentalStartDate(const std::string startDay, const std::string startMonth, const std::string startYear, StartTime startTime)
{
	m_startDay = startDay;
	m_startMonth = startMonth;
	m_startYear = startYear;
	m_startTime = startTime;
}


RentalStartDate::RentalStartDate()
	:m_startDay{"\0"}, m_startMonth{"\0"}, m_startYear{"\0"}
{}


// Getters

std::string RentalStartDate::GetStartDay()const { return m_startDay; }


std::string RentalStartDate::GetStartMonth()const { return m_startMonth; }


std::string RentalStartDate::GetStartYear()const { return m_startYear; }


StartTime RentalStartDate::GetStartTime()const { return m_startTime; }


//------------------------------------------------------------------


//Setters

void RentalStartDate::SetStartDay(const std::string init) { m_startDay = init; }


void RentalStartDate::SetStartMonth(const std::string init) { m_startMonth = init; }


void RentalStartDate::SetStartYear(const std::string init) { m_startYear = init; }


//--------------------------------------------------------------------------------------