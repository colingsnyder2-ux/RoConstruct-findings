// from server: 47% by Intel
typedef int DWORD;

struct RBxMeshPartAdapter {
    DWORD f0;
    DWORD f1;
    DWORD f2;
    DWORD f3;
    DWORD f4;
    DWORD f5;
    DWORD f6;
    DWORD f7;
    DWORD f8;
    DWORD f9;
    DWORD func(DWORD arg1);
};

extern "C" DWORD __stdcall func_098811a(DWORD);

DWORD RBxMeshPartAdapter::func(DWORD arg1) {
    RBxMeshPartAdapter* esi = this;
    esi->f0 = 0;
    DWORD local = 0;
    DWORD eax = func_098811a(0xaa90a0);
    if (eax != 0) {
        esi->f1 = 1;
        esi->f2 = 1;
        *(DWORD*)eax = 0x00b6a7b0;
        *(DWORD*)(eax + 0xC) = 1;
        esi->f3 = 1;
    }
    eax = 0;
    eax = local;
    esi->f0 = eax;
    return eax;
}
