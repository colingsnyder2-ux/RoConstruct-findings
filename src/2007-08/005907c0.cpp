// roc 2007-08 005907c0  unit: RBX::VObjectValue::?$FactoryProduct  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005907c0
//
// 005907c0  6aff                 push -1
// 005907c2  68bb6a7500           push 0x756abb
// 005907c7  64a100000000         mov eax, dword ptr fs:[0]
// 005907cd  50                   push eax
// 005907ce  64892500000000       mov dword ptr fs:[0], esp
// 005907d5  83ec08               sub esp, 8
// 005907d8  c7042400000000       mov dword ptr [esp], 0
// 005907df  6804010000           push 0x104
// 005907e4  c644240400           mov byte ptr [esp + 4], 0
// 005907e9  ff15d0e67700         call dword ptr [0x77e6d0]
// 005907ef  83c404               add esp, 4
// 005907f2  89442404             mov dword ptr [esp + 4], eax
// 005907f6  85c0                 test eax, eax
// 005907f8  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00590800  7409                 je 0x59080b
// 00590802  8bc8                 mov ecx, eax
// 00590804  e8d7900600           call 0x5f98e0
// 00590809  eb02                 jmp 0x59080d
// 0059080b  33c0                 xor eax, eax
// 0059080d  8b0c24               mov ecx, dword ptr [esp]
// 00590810  56                   push esi
// 00590811  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00590815  51                   push ecx
// 00590816  50                   push eax
// 00590817  8bce                 mov ecx, esi
// 00590819  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00590821  e8eafeffff           call 0x590710
// 00590826  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0059082a  8bc6                 mov eax, esi
// 0059082c  5e                   pop esi
// 0059082d  64890d00000000       mov dword ptr fs:[0], ecx
// 00590834  83c414               add esp, 0x14
// 00590837  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??$create@VGuiRoot@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VGuiRoot@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
