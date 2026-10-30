// roc 2009-12 008462d0  unit: CXTPControls  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008462d0
//
// 008462d0  53                   push ebx
// 008462d1  55                   push ebp
// 008462d2  56                   push esi
// 008462d3  57                   push edi
// 008462d4  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008462d8  f7df                 neg edi
// 008462da  1bff                 sbb edi, edi
// 008462dc  8bd9                 mov ebx, ecx
// 008462de  8b432c               mov eax, dword ptr [ebx + 0x2c]
// 008462e1  83e7fe               and edi, 0xfffffffe
// 008462e4  83c702               add edi, 2
// 008462e7  33ed                 xor ebp, ebp
// 008462e9  33f6                 xor esi, esi
// 008462eb  85c0                 test eax, eax
// 008462ed  7e30                 jle 0x84631f
// 008462ef  90                   nop 
// 008462f0  85f6                 test esi, esi
// 008462f2  7c11                 jl 0x846305
// 008462f4  3bf0                 cmp esi, eax
// 008462f6  7d0d                 jge 0x846305
// 008462f8  3b732c               cmp esi, dword ptr [ebx + 0x2c]
// 008462fb  7d2b                 jge 0x846328
// 008462fd  8b4328               mov eax, dword ptr [ebx + 0x28]
// 00846300  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 00846303  eb02                 jmp 0x846307
// 00846305  33c9                 xor ecx, ecx
// 00846307  8b11                 mov edx, dword ptr [ecx]
// 00846309  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 0084630f  57                   push edi
// 00846310  ffd0                 call eax
// 00846312  85c0                 test eax, eax
// 00846314  7401                 je 0x846317
// 00846316  45                   inc ebp
// 00846317  8b432c               mov eax, dword ptr [ebx + 0x2c]
// 0084631a  46                   inc esi
// 0084631b  3bf0                 cmp esi, eax
// 0084631d  7cd1                 jl 0x8462f0
// 0084631f  5f                   pop edi
// 00846320  5e                   pop esi
// 00846321  8bc5                 mov eax, ebp
// 00846323  5d                   pop ebp
// 00846324  5b                   pop ebx
// 00846325  c20400               ret 4
// 00846328  e8dfd7faff           call 0x7f3b0c
// copied from an identical function in another client (function ?GetVisibleCount@CXTPControls@@QBEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControls.cpp