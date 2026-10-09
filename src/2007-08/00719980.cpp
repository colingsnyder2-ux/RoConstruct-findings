// from server: 38% by colin
// roc 2007-08 00719980  unit: CXTPRibbonControlSystemButton  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00719980

extern "C" void __stdcall sub_670500();
extern "C" void __stdcall sub_63A120();

struct CXTPRibbonControlSystemButton {
    void* construct();
};

void* CXTPRibbonControlSystemButton::construct() {
    sub_670500();
    *(int*)this = 0x7dff34;
    *(int*)((char*)this + 0x20) = 0x7dfed4;
    sub_63A120();
    return this;
}
