#include "interface.h"

namespace om636
{
	using namespace std::chrono;

	Elapsed::Elapsed()
	: m_previous( high_resolution_clock::now() )
	{}

	double Elapsed::seconds()
	{
		typedef duration<double> duration_type;
	    
	    time_type now( high_resolution_clock::now() );
	    duration_type time_slice( duration_cast<duration<double>>( now - m_previous ) );
	    m_previous = now;

	    return time_slice.count();
	}
}
