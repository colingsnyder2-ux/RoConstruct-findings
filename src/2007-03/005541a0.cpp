// roc 2007-03 005541a0  unit: seg_00550000  size: 223 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005541a0
//
// 005541a0  6aff                 push -1
// 005541a2  68bc3a7500           push 0x753abc
// 005541a7  64a100000000         mov eax, dword ptr fs:[0]
// 005541ad  50                   push eax
// 005541ae  64892500000000       mov dword ptr fs:[0], esp
// 005541b5  81ec20010000         sub esp, 0x120
// 005541bb  dd4648               fld qword ptr [esi + 0x48]
// 005541be  83ec08               sub esp, 8
// 005541c1  d9ee                 fldz 
// 005541c3  c744240800000000     mov dword ptr [esp + 8], 0
// 005541cb  ded9                 fcompp 
// 005541cd  dfe0                 fnstsw ax
// 005541cf  dd4648               fld qword ptr [esi + 0x48]
// 005541d2  f6c405               test ah, 5
// 005541d5  dd1c24               fstp qword ptr [esp]
// 005541d8  0f8a81000000         jp 0x55425f
// 005541de  8d44240c             lea eax, [esp + 0xc]
// 005541e2  50                   push eax
// 005541e3  e8a8ae0200           call 0x57f090
// 005541e8  83c40c               add esp, 0xc
// 005541eb  dd4648               fld qword ptr [esi + 0x48]
// 005541ee  837c241c10           cmp dword ptr [esp + 0x1c], 0x10
// 005541f3  8b442408             mov eax, dword ptr [esp + 8]
// 005541f7  c784242801000000000000 mov dword ptr [esp + 0x128], 0
// 00554202  7304                 jae 0x554208
// 00554204  8d442408             lea eax, [esp + 8]
// 00554208  d9e8                 fld1 
// 0055420a  83ec08               sub esp, 8
// 0055420d  def1                 fdivrp st(1)
// 0055420f  8d4c2428             lea ecx, [esp + 0x28]
// 00554213  dd1c24               fstp qword ptr [esp]
// 00554216  50                   push eax
// 00554217  68788c7a00           push 0x7a8c78
// 0055421c  51                   push ecx
// 0055421d  ff15c8e97700         call dword ptr [0x77e9c8]
// 00554223  83c414               add esp, 0x14
// 00554226  8d542420             lea edx, [esp + 0x20]
// 0055422a  52                   push edx
// 0055422b  8bcf                 mov ecx, edi
// 0055422d  ff1578e77700         call dword ptr [0x77e778]
// 00554233  8d4c2404             lea ecx, [esp + 4]
// 00554237  c7842428010000ffffffff mov dword ptr [esp + 0x128], 0xffffffff
// 00554242  ff158ce77700         call dword ptr [0x77e78c]
// 00554248  8bc7                 mov eax, edi
// 0055424a  8b8c2420010000       mov ecx, dword ptr [esp + 0x120]
// 00554251  64890d00000000       mov dword ptr fs:[0], ecx
// 00554258  81c42c010000         add esp, 0x12c
// 0055425e  c3                   ret 
// 0055425f  57                   push edi
// 00554260  e82bae0200           call 0x57f090
// 00554265  8b8c242c010000       mov ecx, dword ptr [esp + 0x12c]
// 0055426c  83c40c               add esp, 0xc
// 0055426f  8bc7                 mov eax, edi
// 00554271  64890d00000000       mov dword ptr fs:[0], ecx
// 00554278  81c42c010000         add esp, 0x12c
// 0055427e  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ?report@RBX@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABVStopwatch@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
