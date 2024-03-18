//
// Created by joao on 18-03-2024.
//

#ifndef DA2324_PRJ1_G02_8_PARSER_H
#define DA2324_PRJ1_G02_8_PARSER_H
#include <unordered_map>
#include "DataStructures/Graph.h"
#include "string"
#include "City.h"
#include "Pipes.h"
#include "Reservoir.h"
#include "Stations.h"
using namespace std;


class parser {
public:
    parser();
    unordered_map<string,City> parse_Cities();
    unordered_map<string ,Reservoir> parse_Reservoirs();
    unordered_map<string ,Station> parse_Stations();
    Graph<string> parse_Pipes();

private:
    unordered_map<string,City> Cities;
    unordered_map<string ,Reservoir> Reservoirs;
    unordered_map<string ,Station> Stations;
    Graph<string> pipes;
};


#endif //DA2324_PRJ1_G02_8_PARSER_H
