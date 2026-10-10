// from server: 76% by why2
// roc 2009-06 0077f5e0  unit: CXTThemeManager  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0077f5e0

struct CXTThemeManager;

extern "C" CXTThemeManager* __cdecl sub_77EE50();
extern "C" void __fastcall sub_77F560(CXTThemeManager*);

void __fastcall sub_77F5E0()
{
    CXTThemeManager* p = sub_77EE50();
    if (p == 0)
        return;
    sub_77F560(p);
}
