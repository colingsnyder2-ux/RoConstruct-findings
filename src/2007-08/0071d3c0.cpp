// from server: 100% by colin
// roc 2007-08 0071d3c0  unit: CXTPTabPaintManager::CColorSetWhidbey  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071d3c0
//
// 0071d3c0  56                   push esi
// 0071d3c1  8bf1                 mov esi, ecx
// 0071d3c3  6a5c                 push 0x5c
// 0071d3c5  8d4604               lea eax, [esi + 4]
// 0071d3c8  6a00                 push 0
// 0071d3ca  50                   push eax
// 0071d3cb  c706500d7e00         mov dword ptr [esi], 0x7e0d50
// 0071d3d1  e8b637f1ff           call 0x630b8c
// 0071d3d6  83c40c               add esp, 0xc
// 0071d3d9  c7465c01000000       mov dword ptr [esi + 0x5c], 1
// 0071d3e0  c7466000000000       mov dword ptr [esi + 0x60], 0
// 0071d3e7  c7466400000000       mov dword ptr [esi + 0x64], 0
// 0071d3ee  8bc6                 mov eax, esi
// 0071d3f0  5e                   pop esi
// 0071d3f1  c3                   ret 

struct CXTPTabPaintManager_CColorSetWhidbey
{
    void* vtable;
    char pad[0x58];
    int field_5c;
    int field_60;
    int field_64;
    CXTPTabPaintManager_CColorSetWhidbey* construct();
};

extern "C" void* __cdecl memset(void*, int, unsigned int);

CXTPTabPaintManager_CColorSetWhidbey* CXTPTabPaintManager_CColorSetWhidbey::construct()
{
    this->vtable = (void*)0x7e0d50;
    memset((char*)this + 4, 0, 0x5c);
    this->field_5c = 1;
    this->field_60 = 0;
    this->field_64 = 0;
    return this;
}
