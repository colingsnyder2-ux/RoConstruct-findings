// from server: 100% by king_originala
// roc 2008-06 00401910  unit: CAboutRobloxDialog  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00401910
//
// 00401910  56                   push esi
// 00401911  8bf1                 mov esi, ecx
// 00401913  e848920600           call 0x46ab60
// 00401918  c7066cae8000         mov dword ptr [esi], 0x80ae6c
// 0040191e  c7460458ae8000       mov dword ptr [esi + 4], 0x80ae58
// 00401925  c7460840ae8000       mov dword ptr [esi + 8], 0x80ae40
// 0040192c  c7461024ae8000       mov dword ptr [esi + 0x10], 0x80ae24
// 00401933  c7461818ae8000       mov dword ptr [esi + 0x18], 0x80ae18
// 0040193a  c7461c0cae8000       mov dword ptr [esi + 0x1c], 0x80ae0c
// 00401941  8b0d68c29600         mov ecx, dword ptr [0x96c268]
// 00401947  8b01                 mov eax, dword ptr [ecx]
// 00401949  8b5004               mov edx, dword ptr [eax + 4]
// 0040194c  ffd2                 call edx
// 0040194e  8bc6                 mov eax, esi
// 00401950  5e                   pop esi
// 00401951  c20400               ret 4

struct Service {
    virtual void first();
    virtual void second();
};

extern Service* service;

struct S {
    unsigned long table0;
    unsigned long table4;
    unsigned long table8;
    unsigned long paddingC;
    unsigned long table10;
    unsigned long padding14;
    unsigned long table18;
    unsigned long table1C;

    void prepare();
    S* initialize(int);
};

S* S::initialize(int)
{
    prepare();
    table0 = 0x0080AE6C;
    table4 = 0x0080AE58;
    table8 = 0x0080AE40;
    table10 = 0x0080AE24;
    table18 = 0x0080AE18;
    table1C = 0x0080AE0C;
    service->second();
    return this;
}
