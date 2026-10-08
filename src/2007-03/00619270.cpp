// roc 2007-03 00619270  unit: seg_00610000  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00619270
//
// 00619270  83ec10               sub esp, 0x10
// 00619273  56                   push esi
// 00619274  8bf1                 mov esi, ecx
// 00619276  8b5604               mov edx, dword ptr [esi + 4]
// 00619279  8b4204               mov eax, dword ptr [edx + 4]
// 0061927c  80780e00             cmp byte ptr [eax + 0xe], 0
// 00619280  57                   push edi
// 00619281  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00619285  751d                 jne 0x6192a4
// 00619287  8a0f                 mov cl, byte ptr [edi]
// 00619289  8da42400000000       lea esp, [esp]
// 00619290  38480c               cmp byte ptr [eax + 0xc], cl
// 00619293  7d05                 jge 0x61929a
// 00619295  8b4008               mov eax, dword ptr [eax + 8]
// 00619298  eb04                 jmp 0x61929e
// 0061929a  8bd0                 mov edx, eax
// 0061929c  8b00                 mov eax, dword ptr [eax]
// 0061929e  80780e00             cmp byte ptr [eax + 0xe], 0
// 006192a2  74ec                 je 0x619290
// 006192a4  8b4604               mov eax, dword ptr [esi + 4]
// 006192a7  3bd0                 cmp edx, eax
// 006192a9  8954240c             mov dword ptr [esp + 0xc], edx
// 006192ad  89742408             mov dword ptr [esp + 8], esi
// 006192b1  740d                 je 0x6192c0
// 006192b3  8a0f                 mov cl, byte ptr [edi]
// 006192b5  3a4a0c               cmp cl, byte ptr [edx + 0xc]
// 006192b8  7c06                 jl 0x6192c0
// 006192ba  8d4c2408             lea ecx, [esp + 8]
// 006192be  eb0c                 jmp 0x6192cc
// 006192c0  89442414             mov dword ptr [esp + 0x14], eax
// 006192c4  89742410             mov dword ptr [esp + 0x10], esi
// 006192c8  8d4c2410             lea ecx, [esp + 0x10]
// 006192cc  8b11                 mov edx, dword ptr [ecx]
// 006192ce  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006192d2  8b4904               mov ecx, dword ptr [ecx + 4]
// 006192d5  5f                   pop edi
// 006192d6  8910                 mov dword ptr [eax], edx
// 006192d8  894804               mov dword ptr [eax + 4], ecx
// 006192db  5e                   pop esi
// 006192dc  83c410               add esp, 0x10
// 006192df  c20800               ret 8
// library rbxgs-net/Player.cpp (function ?find@?$_Tree@V?$_Tset_traits@DU?$less@D@std@@V?$allocator@D@2@$0A@@std@@@std@@QBE?AVconst_iterator@12@ABD@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
