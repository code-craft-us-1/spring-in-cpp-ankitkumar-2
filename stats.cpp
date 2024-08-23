#include "stats.h"
#include<cmath>
#include<algorithm>
using namespace Statistics; 

Stats Statistics::ComputeStatistics(const std::vector<double>& numbers)
{
    //implement NaN for empty vector
    Stats  s1;
    if (numbers.empty())
    {
        s1.average = NAN;
        s1.min = NAN;
        s1.max = NAN;
        return s1;
        
    }

    //Implement statistics here
    
    s1.average = std::accumulate(numbers.begin(),numbers.end(),0.0) / numbers.size();
    s1.min= *std::min_element(numbers.begin(),numbers.end());
    s1.max= *std::max_element(numbers.begin(),numbers.end());

    return s1;
}
