// roc 2010-06 007fa3d0  unit: CXTPControls  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007fa3d0
//
// 007fa3d0  53                   push ebx
// 007fa3d1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 007fa3d5  55                   push ebp
// 007fa3d6  f7db                 neg ebx
// 007fa3d8  56                   push esi
// 007fa3d9  1bdb                 sbb ebx, ebx
// 007fa3db  57                   push edi
// 007fa3dc  8bf9                 mov edi, ecx
// 007fa3de  8b472c               mov eax, dword ptr [edi + 0x2c]
// 007fa3e1  83e3fe               and ebx, 0xfffffffe
// 007fa3e4  83c302               add ebx, 2
// 007fa3e7  33f6                 xor esi, esi
// 007fa3e9  85c0                 test eax, eax
// 007fa3eb  7e37                 jle 0x7fa424
// 007fa3ed  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 007fa3f1  85f6                 test esi, esi
// 007fa3f3  7c11                 jl 0x7fa406
// 007fa3f5  3bf0                 cmp esi, eax
// 007fa3f7  7d0d                 jge 0x7fa406
// 007fa3f9  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 007fa3fc  7d2f                 jge 0x7fa42d
// 007fa3fe  8b4728               mov eax, dword ptr [edi + 0x28]
// 007fa401  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 007fa404  eb02                 jmp 0x7fa408
// 007fa406  33c9                 xor ecx, ecx
// 007fa408  8b11                 mov edx, dword ptr [ecx]
// 007fa40a  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 007fa410  53                   push ebx
// 007fa411  ffd0                 call eax
// 007fa413  85c0                 test eax, eax
// 007fa415  7405                 je 0x7fa41c
// 007fa417  85ed                 test ebp, ebp
// 007fa419  7417                 je 0x7fa432
// 007fa41b  4d                   dec ebp
// 007fa41c  8b472c               mov eax, dword ptr [edi + 0x2c]
// 007fa41f  46                   inc esi
// 007fa420  3bf0                 cmp esi, eax
// 007fa422  7ccd                 jl 0x7fa3f1
// 007fa424  5f                   pop edi
// 007fa425  5e                   pop esi
// 007fa426  5d                   pop ebp
// 007fa427  33c0                 xor eax, eax
// 007fa429  5b                   pop ebx
// 007fa42a  c20800               ret 8
// 007fa42d  e81ad8faff           call 0x7a7c4c
// 007fa432  85f6                 test esi, esi
// 007fa434  7cee                 jl 0x7fa424
// 007fa436  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 007fa439  7de9                 jge 0x7fa424
// 007fa43b  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 007fa43e  8b04b1               mov eax, dword ptr [ecx + esi*4]
// 007fa441  5f                   pop edi
// 007fa442  5e                   pop esi
// 007fa443  5d                   pop ebp
// 007fa444  5b                   pop ebx
// 007fa445  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPControls.cpp (function ?GetVisibleAt@CXTPControls@@QBEPAVCXTPControl@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControls.cpp
