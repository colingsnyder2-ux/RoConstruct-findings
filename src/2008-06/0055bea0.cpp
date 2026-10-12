// from server: 68% by colin
// roc 2008-06 0055bea0  unit: RBX::VInstance::?$SignalDesc  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055bea0

extern "C" __declspec(dllimport) void* __stdcall FindResourceExA(void*, unsigned short, unsigned short, unsigned short);
extern "C" void* __stdcall sub_7a5c83(void*, int);
extern "C" void* __stdcall sub_55be30(void*, void*, unsigned int);

struct S {
};

void* __cdecl f(unsigned int a, unsigned short b) {
    void* esi;
    void* edi = 0;
    int ebp = 1;
    esi = sub_7a5c83((void*)0x97f2a8, 0);
    while (esi != 0) {
        if (edi != 0)
            break;
        unsigned int ecx = a >> 4;
        ecx++;
        unsigned short edx = (unsigned short)ecx;
        void* eax = FindResourceExA(esi, 6, edx, b);
        if (eax != 0) {
            edi = sub_55be30(esi, eax, a);
            if (edi != 0)
                return esi;
        }
        esi = sub_7a5c83((void*)0x97f2a8, ebp);
        ebp++;
    }
    return 0;
}
