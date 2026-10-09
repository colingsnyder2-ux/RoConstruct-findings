// roc 2008-06 00616ee0  unit: RBX::BoxSelectCommand  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00616ee0
//
// 00616ee0  6aff                 push -1
// 00616ee2  683b467d00           push 0x7d463b
// 00616ee7  64a100000000         mov eax, dword ptr fs:[0]
// 00616eed  50                   push eax
// 00616eee  64892500000000       mov dword ptr fs:[0], esp
// 00616ef5  83ec08               sub esp, 8
// 00616ef8  c7042400000000       mov dword ptr [esp], 0
// 00616eff  6854010000           push 0x154
// 00616f04  c644240400           mov byte ptr [esp + 4], 0
// 00616f09  ff15b0288000         call dword ptr [0x8028b0]
// 00616f0f  83c404               add esp, 4
// 00616f12  89442404             mov dword ptr [esp + 4], eax
// 00616f16  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00616f1e  85c0                 test eax, eax
// 00616f20  7409                 je 0x616f2b
// 00616f22  8bc8                 mov ecx, eax
// 00616f24  e8d7fbffff           call 0x616b00
// 00616f29  eb02                 jmp 0x616f2d
// 00616f2b  33c0                 xor eax, eax
// 00616f2d  8b0c24               mov ecx, dword ptr [esp]
// 00616f30  56                   push esi
// 00616f31  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00616f35  51                   push ecx
// 00616f36  50                   push eax
// 00616f37  8bce                 mov ecx, esi
// 00616f39  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00616f41  e8faf5ffff           call 0x616540
// 00616f46  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00616f4a  8bc6                 mov eax, esi
// 00616f4c  5e                   pop esi
// 00616f4d  64890d00000000       mov dword ptr fs:[0], ecx
// 00616f54  83c414               add esp, 0x14
// 00616f57  c3                   ret 
// library openrbx-client/App\v8datamodel\JointInstance.cpp (function ??$create@VGlue@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VGlue@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/JointInstance.cpp
