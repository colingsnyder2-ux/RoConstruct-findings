// roc 2009-12 0065a8e0  unit: RBX::VGuiTextButton::?$FactoryProduct::Creator  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0065a8e0
//
// 0065a8e0  6aff                 push -1
// 0065a8e2  684bad9300           push 0x93ad4b
// 0065a8e7  64a100000000         mov eax, dword ptr fs:[0]
// 0065a8ed  50                   push eax
// 0065a8ee  64892500000000       mov dword ptr fs:[0], esp
// 0065a8f5  83ec08               sub esp, 8
// 0065a8f8  c7042400000000       mov dword ptr [esp], 0
// 0065a8ff  68d8010000           push 0x1d8
// 0065a904  c644240400           mov byte ptr [esp + 4], 0
// 0065a909  e8528f1900           call 0x7f3860
// 0065a90e  83c404               add esp, 4
// 0065a911  89442404             mov dword ptr [esp + 4], eax
// 0065a915  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0065a91d  85c0                 test eax, eax
// 0065a91f  7409                 je 0x65a92a
// 0065a921  8bc8                 mov ecx, eax
// 0065a923  e888fd0f00           call 0x75a6b0
// 0065a928  eb02                 jmp 0x65a92c
// 0065a92a  33c0                 xor eax, eax
// 0065a92c  8b0c24               mov ecx, dword ptr [esp]
// 0065a92f  56                   push esi
// 0065a930  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0065a934  51                   push ecx
// 0065a935  50                   push eax
// 0065a936  8bce                 mov ecx, esi
// 0065a938  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0065a940  e8ebfeffff           call 0x65a830
// 0065a945  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0065a949  8bc6                 mov eax, esi
// 0065a94b  5e                   pop esi
// 0065a94c  64890d00000000       mov dword ptr fs:[0], ecx
// 0065a953  83c414               add esp, 0x14
// 0065a956  c3                   ret 
// library openrbx-client/App\v8datamodel\Accoutrement.cpp (function ??$create@VAccoutrement@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VAccoutrement@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Accoutrement.cpp
