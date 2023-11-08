#include "SingleCharts.h"

void SingleCharts::AppendSingle(string artist, string title) {
  charts.push_back(Single(artist, title));
}

void SingleCharts::InsertSingle(string artist, string title, int position) {
  if (position - 1 > charts.size()){
      std::cout << "Position out of bounds." << std::endl;
      return;
  }else{
    charts.insert(charts.begin() + position - 1, { Single{artist, title } });
  } 
}

void SingleCharts::Print() {
  for (int i = 0; i < charts.size(); i++){
        auto& single = charts[i];
        std::cout << i + 1 << ". " << single.GetArtist() << " - " << single.GetTitle() << std::endl;
    }
}

void SingleCharts::PrintByArtist(string artist) {
  for (int i = 0; i < charts.size(); i++){
        auto& single = charts[i];
        if (single.GetArtist() == artist){
            std::cout << i + 1 << ". " << single.GetArtist() << " - " << single.GetTitle() << std::endl;
        }
  }
}

bool SingleCharts::Contains(string artist, string title) {
  for (auto& single : charts){
        if (single.GetArtist() == artist && single.GetTitle() == title){
            return true;
        }
  }
  return false;
}

bool SingleCharts::Contains(string title) {
  for (auto& single : charts){
      if (single.GetTitle() == title){
          return true;
      }
  }
  return false;
}