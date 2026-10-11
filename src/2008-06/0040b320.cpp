// roc 2008-06 0040b320  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040b320
//
// 0040b320  6aff                 push -1
// 0040b322  683b467d00           push 0x7d463b
// 0040b327  64a100000000         mov eax, dword ptr fs:[0]
// 0040b32d  50                   push eax
// 0040b32e  64892500000000       mov dword ptr fs:[0], esp
// 0040b335  83ec08               sub esp, 8
// 0040b338  c7042400000000       mov dword ptr [esp], 0
// 0040b33f  6834010000           push 0x134
// 0040b344  c644240400           mov byte ptr [esp + 4], 0
// 0040b349  ff15b0288000         call dword ptr [0x8028b0]
// 0040b34f  83c404               add esp, 4
// 0040b352  89442404             mov dword ptr [esp + 4], eax
// 0040b356  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0040b35e  85c0                 test eax, eax
// 0040b360  7409                 je 0x40b36b
// 0040b362  8bc8                 mov ecx, eax
// 0040b364  e8e7980300           call 0x444c50
// 0040b369  eb02                 jmp 0x40b36d
// 0040b36b  33c0                 xor eax, eax
// 0040b36d  8b0c24               mov ecx, dword ptr [esp]
// 0040b370  56                   push esi
// 0040b371  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0040b375  51                   push ecx
// 0040b376  50                   push eax
// 0040b377  8bce                 mov ecx, esi
// 0040b379  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0040b381  e8eafeffff           call 0x40b270
// 0040b386  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0040b38a  8bc6                 mov eax, esi
// 0040b38c  5e                   pop esi
// 0040b38d  64890d00000000       mov dword ptr fs:[0], ecx
// 0040b394  83c414               add esp, 0x14
// 0040b397  c3                   ret 
// library openrbx-client/App\v8datamodel\CharacterAppearance.cpp (function ??$create@VSkin@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VSkin@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/CharacterAppearance.cpp
