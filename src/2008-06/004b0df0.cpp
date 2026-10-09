// roc 2008-06 004b0df0  unit: RBX::Network::Replicator::NewInstanceItem  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b0df0
//
// 004b0df0  6aff                 push -1
// 004b0df2  683b467d00           push 0x7d463b
// 004b0df7  64a100000000         mov eax, dword ptr fs:[0]
// 004b0dfd  50                   push eax
// 004b0dfe  64892500000000       mov dword ptr fs:[0], esp
// 004b0e05  83ec08               sub esp, 8
// 004b0e08  c7042400000000       mov dword ptr [esp], 0
// 004b0e0f  6854010000           push 0x154
// 004b0e14  c644240400           mov byte ptr [esp + 4], 0
// 004b0e19  ff15b0288000         call dword ptr [0x8028b0]
// 004b0e1f  83c404               add esp, 4
// 004b0e22  89442404             mov dword ptr [esp + 4], eax
// 004b0e26  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004b0e2e  85c0                 test eax, eax
// 004b0e30  7409                 je 0x4b0e3b
// 004b0e32  8bc8                 mov ecx, eax
// 004b0e34  e8f7ebffff           call 0x4afa30
// 004b0e39  eb02                 jmp 0x4b0e3d
// 004b0e3b  33c0                 xor eax, eax
// 004b0e3d  8b0c24               mov ecx, dword ptr [esp]
// 004b0e40  56                   push esi
// 004b0e41  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004b0e45  51                   push ecx
// 004b0e46  50                   push eax
// 004b0e47  8bce                 mov ecx, esi
// 004b0e49  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004b0e51  e8bac7ffff           call 0x4ad610
// 004b0e56  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b0e5a  8bc6                 mov eax, esi
// 004b0e5c  5e                   pop esi
// 004b0e5d  64890d00000000       mov dword ptr fs:[0], ecx
// 004b0e64  83c414               add esp, 0x14
// 004b0e67  c3                   ret 
// library openrbx-client/App\v8datamodel\JointInstance.cpp (function ??$create@VGlue@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VGlue@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/JointInstance.cpp
