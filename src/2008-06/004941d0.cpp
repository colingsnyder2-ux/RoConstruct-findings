// roc 2008-06 004941d0  unit: RBX::Network::Player  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004941d0
//
// 004941d0  6aff                 push -1
// 004941d2  683b467d00           push 0x7d463b
// 004941d7  64a100000000         mov eax, dword ptr fs:[0]
// 004941dd  50                   push eax
// 004941de  64892500000000       mov dword ptr fs:[0], esp
// 004941e5  83ec08               sub esp, 8
// 004941e8  c7042400000000       mov dword ptr [esp], 0
// 004941ef  6874010000           push 0x174
// 004941f4  c644240400           mov byte ptr [esp + 4], 0
// 004941f9  ff15b0288000         call dword ptr [0x8028b0]
// 004941ff  83c404               add esp, 4
// 00494202  89442404             mov dword ptr [esp + 4], eax
// 00494206  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0049420e  85c0                 test eax, eax
// 00494210  7409                 je 0x49421b
// 00494212  8bc8                 mov ecx, eax
// 00494214  e807f7ffff           call 0x493920
// 00494219  eb02                 jmp 0x49421d
// 0049421b  33c0                 xor eax, eax
// 0049421d  8b0c24               mov ecx, dword ptr [esp]
// 00494220  56                   push esi
// 00494221  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00494225  51                   push ecx
// 00494226  50                   push eax
// 00494227  8bce                 mov ecx, esi
// 00494229  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00494231  e86ab7ffff           call 0x48f9a0
// 00494236  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0049423a  8bc6                 mov eax, esi
// 0049423c  5e                   pop esi
// 0049423d  64890d00000000       mov dword ptr fs:[0], ecx
// 00494244  83c414               add esp, 0x14
// 00494247  c3                   ret 
// library openrbx-client/App\v8datamodel\Selection.cpp (function ??$create@VSelection@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VSelection@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Selection.cpp
