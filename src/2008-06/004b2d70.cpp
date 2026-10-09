// roc 2008-06 004b2d70  unit: RBX::VRotate::?$FactoryProduct::Creator  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b2d70
//
// 004b2d70  6aff                 push -1
// 004b2d72  683b467d00           push 0x7d463b
// 004b2d77  64a100000000         mov eax, dword ptr fs:[0]
// 004b2d7d  50                   push eax
// 004b2d7e  64892500000000       mov dword ptr fs:[0], esp
// 004b2d85  83ec08               sub esp, 8
// 004b2d88  c7042400000000       mov dword ptr [esp], 0
// 004b2d8f  6854010000           push 0x154
// 004b2d94  c644240400           mov byte ptr [esp + 4], 0
// 004b2d99  ff15b0288000         call dword ptr [0x8028b0]
// 004b2d9f  83c404               add esp, 4
// 004b2da2  89442404             mov dword ptr [esp + 4], eax
// 004b2da6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004b2dae  85c0                 test eax, eax
// 004b2db0  7409                 je 0x4b2dbb
// 004b2db2  8bc8                 mov ecx, eax
// 004b2db4  e8a71e1300           call 0x5e4c60
// 004b2db9  eb02                 jmp 0x4b2dbd
// 004b2dbb  33c0                 xor eax, eax
// 004b2dbd  8b0c24               mov ecx, dword ptr [esp]
// 004b2dc0  56                   push esi
// 004b2dc1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004b2dc5  51                   push ecx
// 004b2dc6  50                   push eax
// 004b2dc7  8bce                 mov ecx, esi
// 004b2dc9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004b2dd1  e8eafeffff           call 0x4b2cc0
// 004b2dd6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b2dda  8bc6                 mov eax, esi
// 004b2ddc  5e                   pop esi
// 004b2ddd  64890d00000000       mov dword ptr fs:[0], ecx
// 004b2de4  83c414               add esp, 0x14
// 004b2de7  c3                   ret 
// library openrbx-client/App\v8datamodel\JointInstance.cpp (function ??$create@VGlue@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VGlue@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/JointInstance.cpp
