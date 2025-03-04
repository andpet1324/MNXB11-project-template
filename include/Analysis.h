#ifndef ANALYSIS_H
#define ANALYSIS_H
#include <TFile.h>
#include <TH1D.h>
#include <iostream>
#include <string>
#include <vector>
#include "Measurement.h"

// Create histograms of the signal and background measurements as well as a
// histogram representing the sum of the other two and store the results in a
// ROOT file with name given by output_filename
void mean_temp_over_a_year(const std::vector<Measurement>& measurements,
                           const std::string& output_filename);

void warmest_coldest_over_a_year(const std::vector<Measurement>& measurements, const std::string& output_filename);

void days_above_25_degrees(const std::vector<Measurement>& measurements,
                         const std::string& output_filename);
#endif /* ANALYSIS_H */