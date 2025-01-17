//
// Created by Shon on 21.02.2024.
//

#ifndef ECOSYSTEM_INITIALIZATION_H
#define ECOSYSTEM_INITIALIZATION_H

#include <vector>
#include <string>

#include "utils.h"
#include "cellTypes.h"
//#include "../objects/temperature.h"

using std::vector;

namespace utils {
    vector <CellParam> readCSV(const std::string &fileName);

// Начальная отрисовка всех клеток на поле
    Field initField(const vector <CellParam> &config, const std::string &fontPath, sf::RenderWindow &window);

// Отрисовка конкретного типа клетки
    template<class T>
    vector <T> createCells(const CellParam &param, sf::RenderWindow &window);
}

#endif //ECOSYSTEM_INITIALIZATION_H
