// from server: 93% by colin
// roc 2007-08 006faa00  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridDelphiTheme  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006faa00
//
// 006faa00  56                   push esi
// 006faa01  8bf1                 mov esi, ecx
// 006faa03  e878e9ffff           call 0x6f9380
// 006faa08  e863e5f6ff           call 0x668f70
// 006faa0d  6a0f                 push 0xf
// 006faa0f  8bc8                 mov ecx, eax
// 006faa11  e85addf6ff           call 0x668770
// 006faa16  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006faa19  894174               mov dword ptr [ecx + 0x74], eax
// 006faa1c  8b5634               mov edx, dword ptr [esi + 0x34]
// 006faa1f  c7425c00008000       mov dword ptr [edx + 0x5c], 0x800000
// 006faa26  5e                   pop esi
// 006faa27  c3                   ret 

struct CXTPPropertyGridDelphiTheme {
    void Init();
    char pad[0x30];
    void* field_34;
};

extern "C" void __stdcall sub_6f9380();
extern "C" void* __stdcall sub_668f70();
extern "C" void* __stdcall sub_668770(void*, int);

void CXTPPropertyGridDelphiTheme::Init()
{
    sub_6f9380();
    void* p = sub_668f70();
    void* q = sub_668770(p, 0xf);
    void* r = *(void**)((char*)this + 0x34);
    *(void**)((char*)r + 0x74) = q;
    void* s = *(void**)((char*)this + 0x34);
    *(int*)((char*)s + 0x5c) = 0x800000;
}
