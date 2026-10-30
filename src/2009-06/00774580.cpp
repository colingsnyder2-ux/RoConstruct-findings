// roc 2009-06 00774580  unit: PAVCXTPPropertyGridVerb::?$CArray  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00774580
//
// 00774580  6aff                 push -1
// 00774582  68d3938700           push 0x8793d3
// 00774587  64a100000000         mov eax, dword ptr fs:[0]
// 0077458d  50                   push eax
// 0077458e  51                   push ecx
// 0077458f  56                   push esi
// 00774590  57                   push edi
// 00774591  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00774596  33c4                 xor eax, esp
// 00774598  50                   push eax
// 00774599  8d442410             lea eax, [esp + 0x10]
// 0077459d  64a300000000         mov dword ptr fs:[0], eax
// 007745a3  8bf9                 mov edi, ecx
// 007745a5  897c240c             mov dword ptr [esp + 0xc], edi
// 007745a9  c70784bb8f00         mov dword ptr [edi], 0x8fbb84
// 007745af  33f6                 xor esi, esi
// 007745b1  397728               cmp dword ptr [edi + 0x28], esi
// 007745b4  c744241801000000     mov dword ptr [esp + 0x18], 1
// 007745bc  7e1f                 jle 0x7745dd
// 007745be  8bff                 mov edi, edi
// 007745c0  85f6                 test esi, esi
// 007745c2  7c47                 jl 0x77460b
// 007745c4  3b7728               cmp esi, dword ptr [edi + 0x28]
// 007745c7  7d42                 jge 0x77460b
// 007745c9  8b4724               mov eax, dword ptr [edi + 0x24]
// 007745cc  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 007745cf  8d04b0               lea eax, [eax + esi*4]
// 007745d2  e8d149faff           call 0x718fa8
// 007745d7  46                   inc esi
// 007745d8  3b7728               cmp esi, dword ptr [edi + 0x28]
// 007745db  7ce3                 jl 0x7745c0
// 007745dd  8d4f20               lea ecx, [edi + 0x20]
// 007745e0  c644241800           mov byte ptr [esp + 0x18], 0
// 007745e5  e8f6feffff           call 0x7744e0
// 007745ea  8bcf                 mov ecx, edi
// 007745ec  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 007745f4  e8bb4ffaff           call 0x7195b4
// 007745f9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007745fd  64890d00000000       mov dword ptr fs:[0], ecx
// 00774604  59                   pop ecx
// 00774605  5f                   pop edi
// 00774606  5e                   pop esi
// 00774607  83c410               add esp, 0x10
// 0077460a  c3                   ret 
// 0077460b  e8d446faff           call 0x718ce4
// copied from an identical function in another client (function ??1CXTPPropertyGridVerbs@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGrid.cpp