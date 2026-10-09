// roc 2008-06 0048f490  unit: RBX::VSpawnerService::?$FactoryProduct::Creator  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048f490
//
// 0048f490  6aff                 push -1
// 0048f492  683b467d00           push 0x7d463b
// 0048f497  64a100000000         mov eax, dword ptr fs:[0]
// 0048f49d  50                   push eax
// 0048f49e  64892500000000       mov dword ptr fs:[0], esp
// 0048f4a5  83ec08               sub esp, 8
// 0048f4a8  c7042400000000       mov dword ptr [esp], 0
// 0048f4af  6854010000           push 0x154
// 0048f4b4  c644240400           mov byte ptr [esp + 4], 0
// 0048f4b9  ff15b0288000         call dword ptr [0x8028b0]
// 0048f4bf  83c404               add esp, 4
// 0048f4c2  89442404             mov dword ptr [esp + 4], eax
// 0048f4c6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0048f4ce  85c0                 test eax, eax
// 0048f4d0  7409                 je 0x48f4db
// 0048f4d2  8bc8                 mov ecx, eax
// 0048f4d4  e837601400           call 0x5d5510
// 0048f4d9  eb02                 jmp 0x48f4dd
// 0048f4db  33c0                 xor eax, eax
// 0048f4dd  8b0c24               mov ecx, dword ptr [esp]
// 0048f4e0  56                   push esi
// 0048f4e1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0048f4e5  51                   push ecx
// 0048f4e6  50                   push eax
// 0048f4e7  8bce                 mov ecx, esi
// 0048f4e9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0048f4f1  e8eafeffff           call 0x48f3e0
// 0048f4f6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0048f4fa  8bc6                 mov eax, esi
// 0048f4fc  5e                   pop esi
// 0048f4fd  64890d00000000       mov dword ptr fs:[0], ecx
// 0048f504  83c414               add esp, 0x14
// 0048f507  c3                   ret 
// library openrbx-client/App\v8datamodel\JointInstance.cpp (function ??$create@VGlue@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VGlue@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/JointInstance.cpp
