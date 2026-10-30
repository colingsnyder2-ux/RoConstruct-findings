// roc 2010-06 008231b0  unit: PAVCXTPCommandBar::?$CArray  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008231b0
//
// 008231b0  57                   push edi
// 008231b1  8bf9                 mov edi, ecx
// 008231b3  8b4710               mov eax, dword ptr [edi + 0x10]
// 008231b6  85c0                 test eax, eax
// 008231b8  744a                 je 0x823204
// 008231ba  7e4f                 jle 0x82320b
// 008231bc  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 008231bf  8b11                 mov edx, dword ptr [ecx]
// 008231c1  83ba2c01000000       cmp dword ptr [edx + 0x12c], 0
// 008231c8  7e3a                 jle 0x823204
// 008231ca  56                   push esi
// 008231cb  33f6                 xor esi, esi
// 008231cd  85c0                 test eax, eax
// 008231cf  7e32                 jle 0x823203
// 008231d1  85f6                 test esi, esi
// 008231d3  7c31                 jl 0x823206
// 008231d5  3b7710               cmp esi, dword ptr [edi + 0x10]
// 008231d8  7d2c                 jge 0x823206
// 008231da  8b470c               mov eax, dword ptr [edi + 0xc]
// 008231dd  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 008231e0  83b92c01000000       cmp dword ptr [ecx + 0x12c], 0
// 008231e7  7514                 jne 0x8231fd
// 008231e9  3b7710               cmp esi, dword ptr [edi + 0x10]
// 008231ec  7d18                 jge 0x823206
// 008231ee  8bd0                 mov edx, eax
// 008231f0  8b0cb2               mov ecx, dword ptr [edx + esi*4]
// 008231f3  8b01                 mov eax, dword ptr [ecx]
// 008231f5  8b9088010000         mov edx, dword ptr [eax + 0x188]
// 008231fb  ffd2                 call edx
// 008231fd  46                   inc esi
// 008231fe  3b7710               cmp esi, dword ptr [edi + 0x10]
// 00823201  7cce                 jl 0x8231d1
// 00823203  5e                   pop esi
// 00823204  5f                   pop edi
// 00823205  c3                   ret 
// 00823206  e8414af8ff           call 0x7a7c4c
// 0082320b  e83c4af8ff           call 0x7a7c4c
// copied from an identical function in another client (function ?SendTrackLostRecurse@CXTPMouseManager@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPMouseManager.cpp