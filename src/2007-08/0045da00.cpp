// from server: 62% by colin
// roc 2007-08 0045da00  unit: Scintilla::CScintillaView  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045da00
//
// 0045da00  83ec08               sub esp, 8
// 0045da03  56                   push esi
// 0045da04  57                   push edi
// 0045da05  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0045da09  8d442408             lea eax, [esp + 8]
// 0045da0d  8bf1                 mov esi, ecx
// 0045da0f  50                   push eax
// 0045da10  8bcf                 mov ecx, edi
// 0045da12  ff15c8dc7700         call dword ptr [0x77dcc8]
// 0045da18  50                   push eax
// 0045da19  8bcf                 mov ecx, edi
// 0045da1b  ff1598dd7700         call dword ptr [0x77dd98]
// 0045da21  8b4e08               mov ecx, dword ptr [esi + 8]
// 0045da24  50                   push eax
// 0045da25  51                   push ecx
// 0045da26  ff15b8d07700         call dword ptr [0x77d0b8]
// 0045da2c  8b442414             mov eax, dword ptr [esp + 0x14]
// 0045da30  8b542408             mov edx, dword ptr [esp + 8]
// 0045da34  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0045da38  5f                   pop edi
// 0045da39  8910                 mov dword ptr [eax], edx
// 0045da3b  894804               mov dword ptr [eax + 4], ecx
// 0045da3e  5e                   pop esi
// 0045da3f  83c408               add esp, 8
// 0045da42  c20800               ret 8

struct S_func_0045da00 {
    char pad0[8];
    int m_hdc;
    void f(int a1, int a2);
};

extern "C" int __stdcall GetTextExtentPoint32A(int, const char*, int, int*);
extern "C" int __stdcall sub_77dcc8(int, int*);
extern "C" int __stdcall sub_77dd98(int, int);

void S_func_0045da00::f(int a1, int a2)
{
    int sz[2];
    int len;
    int hdc;
    hdc = a1;
    sub_77dcc8(hdc, sz);
    len = sub_77dd98(hdc, (int)sz);
    GetTextExtentPoint32A(m_hdc, (const char*)len, a2, sz);
    *(int*)a1 = sz[0];
    *(int*)(a1 + 4) = sz[1];
}
