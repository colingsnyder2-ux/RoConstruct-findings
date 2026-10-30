// roc 2009-12 0087eec0  unit: CXTPControlGalleryOffice2007Theme  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087eec0
//
// 0087eec0  51                   push ecx
// 0087eec1  56                   push esi
// 0087eec2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0087eec6  81c1c4000000         add ecx, 0xc4
// 0087eecc  51                   push ecx
// 0087eecd  8bce                 mov ecx, esi
// 0087eecf  c744240800000000     mov dword ptr [esp + 8], 0
// 0087eed7  ff1594de9800         call dword ptr [0x98de94]
// 0087eedd  8bc6                 mov eax, esi
// 0087eedf  5e                   pop esi
// 0087eee0  59                   pop ecx
// 0087eee1  c20400               ret 4
// copied from an identical function in another client (function ?copy@X_007a3f80@@QAEPAUStr_007a3f80@@PAU2@@Z)

// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
struct Str_007a3f80 { int words[8]; };
extern void (__thiscall* str_ctor_007a3f80)(Str_007a3f80*, Str_007a3f80*);
struct X_007a3f80 {
    char pad[0xc4];
    Str_007a3f80 value;
    Str_007a3f80* copy(Str_007a3f80* out);
};
Str_007a3f80* X_007a3f80::copy(Str_007a3f80* out)
{
    volatile int zero = 0;
    str_ctor_007a3f80(out, &value);
    return out;
}