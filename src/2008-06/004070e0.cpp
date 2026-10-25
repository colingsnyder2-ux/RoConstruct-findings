// from server: 100% by king_originala
// roc 2008-06 004070e0  unit: VCApp::?$CComObject  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004070e0
//
// 004070e0  83ec10               sub esp, 0x10
// 004070e3  e880982900           call 0x6a0968
// 004070e8  50                   push eax
// 004070e9  8d4c2404             lea ecx, [esp + 4]
// 004070ed  e870982900           call 0x6a0962
// 004070f2  a1ecdc9600           mov eax, dword ptr [0x96dcec]
// 004070f7  8b08                 mov ecx, dword ptr [eax]
// 004070f9  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 004070fc  8b442418             mov eax, dword ptr [esp + 0x18]
// 00407100  f7da                 neg edx
// 00407102  1bd2                 sbb edx, edx
// 00407104  668910               mov word ptr [eax], dx
// 00407107  8b442404             mov eax, dword ptr [esp + 4]
// 0040710b  85c0                 test eax, eax
// 0040710d  7406                 je 0x407115
// 0040710f  8b0c24               mov ecx, dword ptr [esp]
// 00407112  894804               mov dword ptr [eax + 4], ecx
// 00407115  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0040711a  740c                 je 0x407128
// 0040711c  8b542408             mov edx, dword ptr [esp + 8]
// 00407120  52                   push edx
// 00407121  6a00                 push 0
// 00407123  e834982900           call 0x6a095c
// 00407128  33c0                 xor eax, eax
// 0040712a  83c410               add esp, 0x10
// 0040712d  c20800               ret 8

struct State {
    char padding[28];
    int active;
};

struct Link {
    void* first;
    void* second;
};

struct Guard {
    void* saved;
    Link* link;
    void* resource;
    int cleanup;

    void acquire(void*);
};

extern State** globalState;
extern "C" void* __cdecl getResource();
extern "C" void __stdcall releaseResource(int, void*);

struct S {
    int f(int unused, short* result);
};

int S::f(int unused, short* result)
{
    Guard guard;
    guard.acquire(getResource());

    *result = (*globalState)->active ? -1 : 0;

    if (guard.link)
        guard.link->second = guard.saved;

    if (guard.cleanup)
        releaseResource(0, guard.resource);

    return 0;
}
