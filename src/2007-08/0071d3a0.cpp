// from server: 100% by colin
// roc 2007-08 0071d3a0  unit: CXTPTabPaintManager::CColorSetWhidbey  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071d3a0
//
// 0071d3a0  56                   push esi
// 0071d3a1  8bf1                 mov esi, ecx
// 0071d3a3  e8680df9ff           call 0x6ae110
// 0071d3a8  c706200d7e00         mov dword ptr [esi], 0x7e0d20
// 0071d3ae  c7861802000000000000 mov dword ptr [esi + 0x218], 0
// 0071d3b8  8bc6                 mov eax, esi
// 0071d3ba  5e                   pop esi
// 0071d3bb  c3                   ret 

struct CXTPTabPaintManager_CColorSetWhidbey
{
    CXTPTabPaintManager_CColorSetWhidbey* construct();
    int field_0;
    char pad[0x214];
    int field_218;
};

extern "C" void __stdcall sub_6ae110();

CXTPTabPaintManager_CColorSetWhidbey* CXTPTabPaintManager_CColorSetWhidbey::construct()
{
    sub_6ae110();
    *(int*)this = 0x7e0d20;
    field_218 = 0;
    return this;
}
