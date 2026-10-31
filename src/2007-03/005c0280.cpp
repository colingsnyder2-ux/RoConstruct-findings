// roc 2007-03 005c0280  unit: seg_005c0000  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005c0280
//
// 005c0280  56                   push esi
// 005c0281  8bf1                 mov esi, ecx
// 005c0283  ff1560e97700         call dword ptr [0x77e960]
// 005c0289  8b442408             mov eax, dword ptr [esp + 8]
// 005c028d  c7060c977b00         mov dword ptr [esi], 0x7b970c
// 005c0293  8b480c               mov ecx, dword ptr [eax + 0xc]
// 005c0296  894e0c               mov dword ptr [esi + 0xc], ecx
// 005c0299  8b5010               mov edx, dword ptr [eax + 0x10]
// 005c029c  895610               mov dword ptr [esi + 0x10], edx
// 005c029f  8a4814               mov cl, byte ptr [eax + 0x14]
// 005c02a2  884e14               mov byte ptr [esi + 0x14], cl
// 005c02a5  c6401401             mov byte ptr [eax + 0x14], 1
// 005c02a9  8bc6                 mov eax, esi
// 005c02ab  5e                   pop esi
// 005c02ac  c20400               ret 4
// copied from an identical function in another client (function ??0lua_exception@@QAE@ABV0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: lua-5.1.2-dll roc_unit_6878e048cc528e62.cpp