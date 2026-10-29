// roc 2011-06 0045d960  unit: CRobloxModule  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0045d960
//
// 0045d960  8b4958               mov ecx, dword ptr [ecx + 0x58]
// 0045d963  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 0045d966  e9a5fdffff           jmp 0x45d710
// copied from an identical function in another client (function ?f@CRobloxModule@@QAEXXZ)

// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// from server: 81% by king_originala
struct Target {
    void f();
};

struct Link {
    char padding[0x24];
    Target* volatile target;
};

struct CRobloxModule {
    char padding[0x58];
    Link* volatile link;
    void f();
};

void CRobloxModule::f()
{
    Link* lnk = link;
    lnk->target->f();
}