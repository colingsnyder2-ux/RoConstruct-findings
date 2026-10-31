// roc 2009-12 007978d0  unit: lua_exception  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007978d0
//
// 007978d0  56                   push esi
// 007978d1  8bf1                 mov esi, ecx
// 007978d3  ff1554b79800         call dword ptr [0x98b754]
// 007978d9  8b442408             mov eax, dword ptr [esp + 8]
// 007978dd  c70690a99e00         mov dword ptr [esi], 0x9ea990
// 007978e3  8b480c               mov ecx, dword ptr [eax + 0xc]
// 007978e6  894e0c               mov dword ptr [esi + 0xc], ecx
// 007978e9  8b5010               mov edx, dword ptr [eax + 0x10]
// 007978ec  895610               mov dword ptr [esi + 0x10], edx
// 007978ef  8a4814               mov cl, byte ptr [eax + 0x14]
// 007978f2  884e14               mov byte ptr [esi + 0x14], cl
// 007978f5  c6401401             mov byte ptr [eax + 0x14], 1
// 007978f9  8bc6                 mov eax, esi
// 007978fb  5e                   pop esi
// 007978fc  c20400               ret 4
// copied from an identical function in another client (function ??0lua_exception@@QAE@ABV0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: lua-5.1.2-dll roc_unit_6878e048cc528e62.cpp