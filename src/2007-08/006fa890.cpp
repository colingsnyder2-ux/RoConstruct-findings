// from server: 100% by colin
// roc 2007-08 006fa890  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridNativeXPTheme  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fa890
//
// 006fa890  8b442404             mov eax, dword ptr [esp + 4]
// 006fa894  56                   push esi
// 006fa895  50                   push eax
// 006fa896  8bf1                 mov esi, ecx
// 006fa898  e813e9ffff           call 0x6f91b0
// 006fa89d  c70664c97d00         mov dword ptr [esi], 0x7dc964
// 006fa8a3  c7464000000000       mov dword ptr [esi + 0x40], 0
// 006fa8aa  c7460401000000       mov dword ptr [esi + 4], 1
// 006fa8b1  8bc6                 mov eax, esi
// 006fa8b3  5e                   pop esi
// 006fa8b4  c20400               ret 4

struct CXTPPropertyGridNativeXPTheme {
    CXTPPropertyGridNativeXPTheme* construct(int);
    char pad[0x40];
};

extern "C" void __stdcall sub_006f91b0(int);

CXTPPropertyGridNativeXPTheme* CXTPPropertyGridNativeXPTheme::construct(int arg)
{
    sub_006f91b0(arg);
    *(void**)this = (void*)0x7dc964;
    *(int*)((char*)this + 0x40) = 0;
    *(int*)((char*)this + 4) = 1;
    return this;
}
