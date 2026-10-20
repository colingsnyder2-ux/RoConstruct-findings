// from server: 96% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbxgs-dll roc_espeon_filteredmodelselection40474f06ef600842.cpp

// Candidate translation unit (score above; library headers required).
#include <vector>
#include <algorithm>
namespace RBX { class Instance { public: virtual ~Instance(); }; class ModelInstance : public Instance {}; }
struct Change { RBX::Instance* added; void* reserved; RBX::Instance* removed; };
struct FilteredSelection {
 char reserved[12]; std::vector<RBX::ModelInstance*> selection;
 void update(Change* change);
};
void FilteredSelection::update(Change* change) {
 RBX::ModelInstance* added=dynamic_cast<RBX::ModelInstance*>(change->added);
 if(added) selection.push_back(added);
 RBX::Instance* removed=change->removed;
 if(removed) {
  std::vector<RBX::ModelInstance*>::iterator it=std::find(selection.begin(),selection.end(),removed);
  if(it!=selection.end()) selection.erase(it);
 }
}
