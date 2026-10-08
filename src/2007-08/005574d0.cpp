// roc 2007-08 005574d0  unit: ChatEnter  size: 223 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005574d0
//
// 005574d0  6aff                 push -1
// 005574d2  689c317500           push 0x75319c
// 005574d7  64a100000000         mov eax, dword ptr fs:[0]
// 005574dd  50                   push eax
// 005574de  64892500000000       mov dword ptr fs:[0], esp
// 005574e5  81ec20010000         sub esp, 0x120
// 005574eb  dd4648               fld qword ptr [esi + 0x48]
// 005574ee  83ec08               sub esp, 8
// 005574f1  d9ee                 fldz 
// 005574f3  c744240800000000     mov dword ptr [esp + 8], 0
// 005574fb  ded9                 fcompp 
// 005574fd  dfe0                 fnstsw ax
// 005574ff  dd4648               fld qword ptr [esi + 0x48]
// 00557502  f6c405               test ah, 5
// 00557505  dd1c24               fstp qword ptr [esp]
// 00557508  0f8a81000000         jp 0x55758f
// 0055750e  8d44240c             lea eax, [esp + 0xc]
// 00557512  50                   push eax
// 00557513  e8588a0200           call 0x57ff70
// 00557518  83c40c               add esp, 0xc
// 0055751b  dd4648               fld qword ptr [esi + 0x48]
// 0055751e  837c241c10           cmp dword ptr [esp + 0x1c], 0x10
// 00557523  8b442408             mov eax, dword ptr [esp + 8]
// 00557527  c784242801000000000000 mov dword ptr [esp + 0x128], 0
// 00557532  7304                 jae 0x557538
// 00557534  8d442408             lea eax, [esp + 8]
// 00557538  d9e8                 fld1 
// 0055753a  83ec08               sub esp, 8
// 0055753d  def1                 fdivrp st(1)
// 0055753f  8d4c2428             lea ecx, [esp + 0x28]
// 00557543  dd1c24               fstp qword ptr [esp]
// 00557546  50                   push eax
// 00557547  687c887a00           push 0x7a887c
// 0055754c  51                   push ecx
// 0055754d  ff1568e97700         call dword ptr [0x77e968]
// 00557553  83c414               add esp, 0x14
// 00557556  8d542420             lea edx, [esp + 0x20]
// 0055755a  52                   push edx
// 0055755b  8bcf                 mov ecx, edi
// 0055755d  ff1598e67700         call dword ptr [0x77e698]
// 00557563  8d4c2404             lea ecx, [esp + 4]
// 00557567  c7842428010000ffffffff mov dword ptr [esp + 0x128], 0xffffffff
// 00557572  ff15ace67700         call dword ptr [0x77e6ac]
// 00557578  8bc7                 mov eax, edi
// 0055757a  8b8c2420010000       mov ecx, dword ptr [esp + 0x120]
// 00557581  64890d00000000       mov dword ptr fs:[0], ecx
// 00557588  81c42c010000         add esp, 0x12c
// 0055758e  c3                   ret 
// 0055758f  57                   push edi
// 00557590  e8db890200           call 0x57ff70
// 00557595  8b8c242c010000       mov ecx, dword ptr [esp + 0x12c]
// 0055759c  83c40c               add esp, 0xc
// 0055759f  8bc7                 mov eax, edi
// 005575a1  64890d00000000       mov dword ptr fs:[0], ecx
// 005575a8  81c42c010000         add esp, 0x12c
// 005575ae  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ?report@RBX@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABVStopwatch@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
