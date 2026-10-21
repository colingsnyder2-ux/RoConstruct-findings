// from server: 96% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbxgs-dll roc_espeon_colorwrapperstdcallc35ca0bb947d16c0.cpp

// Candidate translation unit (score above; library headers required).
#include "v8datamodel/BrickColor.h"
#include "G3D/Color3uint8.h"
struct Item {void setColor(unsigned);};
struct Container {char prefix[0x28];Item** items;int count;};
struct Owner {char prefix[0xfc];Container* container;};
struct View {virtual void* dispose(unsigned);int reserved;int index;char gap[8];Owner* owner;};
extern RBX::BrickColor selectedColor;
struct Wrapper {void destroy(View*);};
void __stdcall destroy(View* view){if(view->owner){Container* c=view->owner->container;Item* item=(view->index>=0 && view->index<c->count)?c->items[view->index]:0;RBX::BrickColor color=selectedColor;G3D::Color3uint8 rgb(color.color3());item->setColor(((unsigned(rgb.b)<<8|rgb.g)<<8)|rgb.r);}view->dispose(1);}
