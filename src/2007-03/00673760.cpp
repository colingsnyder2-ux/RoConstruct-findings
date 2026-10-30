// roc 2007-03 00673760  unit: seg_00670000  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00673760
//
// 00673760  53                   push ebx
// 00673761  55                   push ebp
// 00673762  56                   push esi
// 00673763  57                   push edi
// 00673764  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00673768  f7df                 neg edi
// 0067376a  1bff                 sbb edi, edi
// 0067376c  8bd9                 mov ebx, ecx
// 0067376e  8b432c               mov eax, dword ptr [ebx + 0x2c]
// 00673771  83e7fe               and edi, 0xfffffffe
// 00673774  83c702               add edi, 2
// 00673777  33ed                 xor ebp, ebp
// 00673779  33f6                 xor esi, esi
// 0067377b  85c0                 test eax, eax
// 0067377d  7e34                 jle 0x6737b3
// 0067377f  90                   nop 
// 00673780  85f6                 test esi, esi
// 00673782  7c11                 jl 0x673795
// 00673784  3bf0                 cmp esi, eax
// 00673786  7d0d                 jge 0x673795
// 00673788  3b732c               cmp esi, dword ptr [ebx + 0x2c]
// 0067378b  7d2f                 jge 0x6737bc
// 0067378d  8b4328               mov eax, dword ptr [ebx + 0x28]
// 00673790  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 00673793  eb02                 jmp 0x673797
// 00673795  33c9                 xor ecx, ecx
// 00673797  8b11                 mov edx, dword ptr [ecx]
// 00673799  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 0067379f  57                   push edi
// 006737a0  ffd0                 call eax
// 006737a2  85c0                 test eax, eax
// 006737a4  7403                 je 0x6737a9
// 006737a6  83c501               add ebp, 1
// 006737a9  8b432c               mov eax, dword ptr [ebx + 0x2c]
// 006737ac  83c601               add esi, 1
// 006737af  3bf0                 cmp esi, eax
// 006737b1  7ccd                 jl 0x673780
// 006737b3  5f                   pop edi
// 006737b4  5e                   pop esi
// 006737b5  8bc5                 mov eax, ebp
// 006737b7  5d                   pop ebp
// 006737b8  5b                   pop ebx
// 006737b9  c20400               ret 4
// 006737bc  e8edabfaff           call 0x61e3ae
// copied from an identical function in another client (function ?GetVisibleCount@CXTPControls@@QBEHH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/CommandBars/XTPControls.cpp