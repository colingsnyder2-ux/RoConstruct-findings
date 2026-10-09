// roc 2008-06 004b2890  unit: RBX::VWeld::?$FactoryProduct::Creator  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b2890
//
// 004b2890  6aff                 push -1
// 004b2892  683b467d00           push 0x7d463b
// 004b2897  64a100000000         mov eax, dword ptr fs:[0]
// 004b289d  50                   push eax
// 004b289e  64892500000000       mov dword ptr fs:[0], esp
// 004b28a5  83ec08               sub esp, 8
// 004b28a8  c7042400000000       mov dword ptr [esp], 0
// 004b28af  6854010000           push 0x154
// 004b28b4  c644240400           mov byte ptr [esp + 4], 0
// 004b28b9  ff15b0288000         call dword ptr [0x8028b0]
// 004b28bf  83c404               add esp, 4
// 004b28c2  89442404             mov dword ptr [esp + 4], eax
// 004b28c6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004b28ce  85c0                 test eax, eax
// 004b28d0  7409                 je 0x4b28db
// 004b28d2  8bc8                 mov ecx, eax
// 004b28d4  e8c7201300           call 0x5e49a0
// 004b28d9  eb02                 jmp 0x4b28dd
// 004b28db  33c0                 xor eax, eax
// 004b28dd  8b0c24               mov ecx, dword ptr [esp]
// 004b28e0  56                   push esi
// 004b28e1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004b28e5  51                   push ecx
// 004b28e6  50                   push eax
// 004b28e7  8bce                 mov ecx, esi
// 004b28e9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004b28f1  e8eafeffff           call 0x4b27e0
// 004b28f6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b28fa  8bc6                 mov eax, esi
// 004b28fc  5e                   pop esi
// 004b28fd  64890d00000000       mov dword ptr fs:[0], ecx
// 004b2904  83c414               add esp, 0x14
// 004b2907  c3                   ret 
// library openrbx-client/App\v8datamodel\JointInstance.cpp (function ??$create@VGlue@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VGlue@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/JointInstance.cpp
