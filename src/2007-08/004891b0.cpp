// roc 2007-08 004891b0  unit: P8CRenderSettings::?$GetSetImpl  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004891b0
//
// 004891b0  83ec10               sub esp, 0x10
// 004891b3  56                   push esi
// 004891b4  8bf1                 mov esi, ecx
// 004891b6  8b5604               mov edx, dword ptr [esi + 4]
// 004891b9  8b4204               mov eax, dword ptr [edx + 4]
// 004891bc  80780e00             cmp byte ptr [eax + 0xe], 0
// 004891c0  57                   push edi
// 004891c1  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004891c5  751d                 jne 0x4891e4
// 004891c7  8a0f                 mov cl, byte ptr [edi]
// 004891c9  8da42400000000       lea esp, [esp]
// 004891d0  38480c               cmp byte ptr [eax + 0xc], cl
// 004891d3  7d05                 jge 0x4891da
// 004891d5  8b4008               mov eax, dword ptr [eax + 8]
// 004891d8  eb04                 jmp 0x4891de
// 004891da  8bd0                 mov edx, eax
// 004891dc  8b00                 mov eax, dword ptr [eax]
// 004891de  80780e00             cmp byte ptr [eax + 0xe], 0
// 004891e2  74ec                 je 0x4891d0
// 004891e4  8b4604               mov eax, dword ptr [esi + 4]
// 004891e7  3bd0                 cmp edx, eax
// 004891e9  8954240c             mov dword ptr [esp + 0xc], edx
// 004891ed  89742408             mov dword ptr [esp + 8], esi
// 004891f1  740d                 je 0x489200
// 004891f3  8a0f                 mov cl, byte ptr [edi]
// 004891f5  3a4a0c               cmp cl, byte ptr [edx + 0xc]
// 004891f8  7c06                 jl 0x489200
// 004891fa  8d4c2408             lea ecx, [esp + 8]
// 004891fe  eb0c                 jmp 0x48920c
// 00489200  89442414             mov dword ptr [esp + 0x14], eax
// 00489204  89742410             mov dword ptr [esp + 0x10], esi
// 00489208  8d4c2410             lea ecx, [esp + 0x10]
// 0048920c  8b11                 mov edx, dword ptr [ecx]
// 0048920e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00489212  8b4904               mov ecx, dword ptr [ecx + 4]
// 00489215  5f                   pop edi
// 00489216  8910                 mov dword ptr [eax], edx
// 00489218  894804               mov dword ptr [eax + 4], ecx
// 0048921b  5e                   pop esi
// 0048921c  83c410               add esp, 0x10
// 0048921f  c20800               ret 8
// library rbxgs-net/Player.cpp (function ?find@?$_Tree@V?$_Tset_traits@DU?$less@D@std@@V?$allocator@D@2@$0A@@std@@@std@@QBE?AVconst_iterator@12@ABD@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
