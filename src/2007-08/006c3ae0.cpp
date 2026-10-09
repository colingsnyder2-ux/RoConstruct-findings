// from server: 100% by colin
// roc 2007-08 006c3ae0  unit: XTPPaintThemes::CXTPNativeXPTheme  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006c3ae0
//
// 006c3ae0  56                   push esi
// 006c3ae1  8bf1                 mov esi, ecx
// 006c3ae3  e8d89df7ff           call 0x63d8c0
// 006c3ae8  b801000000           mov eax, 1
// 006c3aed  894678               mov dword ptr [esi + 0x78], eax
// 006c3af0  898628010000         mov dword ptr [esi + 0x128], eax
// 006c3af6  898630010000         mov dword ptr [esi + 0x130], eax
// 006c3afc  89862c010000         mov dword ptr [esi + 0x12c], eax
// 006c3b02  898634010000         mov dword ptr [esi + 0x134], eax
// 006c3b08  c7061c737d00         mov dword ptr [esi], 0x7d731c
// 006c3b0e  c7860c01000000000000 mov dword ptr [esi + 0x10c], 0
// 006c3b18  c7861001000003000000 mov dword ptr [esi + 0x110], 3
// 006c3b22  c7467c08000000       mov dword ptr [esi + 0x7c], 8
// 006c3b29  8bc6                 mov eax, esi
// 006c3b2b  5e                   pop esi
// 006c3b2c  c3                   ret 

struct XTPPaintThemes_CXTPNativeXPTheme {
    XTPPaintThemes_CXTPNativeXPTheme* construct();
};

extern "C" void __fastcall sub_63d8c0(void*);

XTPPaintThemes_CXTPNativeXPTheme* XTPPaintThemes_CXTPNativeXPTheme::construct()
{
    sub_63d8c0(this);
    *(int*)((char*)this + 0x78) = 1;
    *(int*)((char*)this + 0x128) = 1;
    *(int*)((char*)this + 0x130) = 1;
    *(int*)((char*)this + 0x12c) = 1;
    *(int*)((char*)this + 0x134) = 1;
    *(int*)((char*)this) = 0x7d731c;
    *(int*)((char*)this + 0x10c) = 0;
    *(int*)((char*)this + 0x110) = 3;
    *(int*)((char*)this + 0x7c) = 8;
    return this;
}
