//
// Created by joao on 18-03-2024.
//

#ifndef DA2324_PRJ1_G02_8_PARSER_H
#define DA2324_PRJ1_G02_8_PARSER_H
#include <unordered_map>
#include "../../DataStructures/Graph.h"
#include "string"
#include "City.h"
#include "Pipes.h"
#include "Reservoir.h"
#include "Stations.h"
using namespace std;


class Parser {
public:
    Parser();
    unordered_map<string,City,City::HashCity> parse_Cities();
    unordered_map<string,Reservoir ,Reservoir::ReservoirHash> parse_Reservoirs();
    unordered_map<string ,Station,Station::StationHash> parse_Stations();
    void parse_Pipes();
    Graph<string> getWater_Suply();
    string getCityName(string code);
    string findCityCode(string name);
    City findCity(string code);
private:
    Graph<string> water_suply;
};


#endif //DA2324_PRJ1_G02_8_PARSER_H
