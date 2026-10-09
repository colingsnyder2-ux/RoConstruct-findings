// roc 2008-06 004b2b00  unit: RBX::VGlue::?$FactoryProduct::Creator  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b2b00
//
// 004b2b00  6aff                 push -1
// 004b2b02  683b467d00           push 0x7d463b
// 004b2b07  64a100000000         mov eax, dword ptr fs:[0]
// 004b2b0d  50                   push eax
// 004b2b0e  64892500000000       mov dword ptr fs:[0], esp
// 004b2b15  83ec08               sub esp, 8
// 004b2b18  c7042400000000       mov dword ptr [esp], 0
// 004b2b1f  6854010000           push 0x154
// 004b2b24  c644240400           mov byte ptr [esp + 4], 0
// 004b2b29  ff15b0288000         call dword ptr [0x8028b0]
// 004b2b2f  83c404               add esp, 4
// 004b2b32  89442404             mov dword ptr [esp + 4], eax
// 004b2b36  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004b2b3e  85c0                 test eax, eax
// 004b2b40  7409                 je 0x4b2b4b
// 004b2b42  8bc8                 mov ecx, eax
// 004b2b44  e8871f1300           call 0x5e4ad0
// 004b2b49  eb02                 jmp 0x4b2b4d
// 004b2b4b  33c0                 xor eax, eax
// 004b2b4d  8b0c24               mov ecx, dword ptr [esp]
// 004b2b50  56                   push esi
// 004b2b51  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004b2b55  51                   push ecx
// 004b2b56  50                   push eax
// 004b2b57  8bce                 mov ecx, esi
// 004b2b59  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004b2b61  e8eafeffff           call 0x4b2a50
// 004b2b66  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b2b6a  8bc6                 mov eax, esi
// 004b2b6c  5e                   pop esi
// 004b2b6d  64890d00000000       mov dword ptr fs:[0], ecx
// 004b2b74  83c414               add esp, 0x14
// 004b2b77  c3                   ret 
// library openrbx-client/App\v8datamodel\JointInstance.cpp (function ??$create@VGlue@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VGlue@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/JointInstance.cpp
