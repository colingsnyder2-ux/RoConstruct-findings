// roc 2012-06 006de8e0  unit: RBX::VNotificationBox::?$FactoryProduct::Creator  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006de8e0
//
// 006de8e0  6aff                 push -1
// 006de8e2  68ebd7a900           push 0xa9d7eb
// 006de8e7  64a100000000         mov eax, dword ptr fs:[0]
// 006de8ed  50                   push eax
// 006de8ee  64892500000000       mov dword ptr fs:[0], esp
// 006de8f5  83ec08               sub esp, 8
// 006de8f8  c7042400000000       mov dword ptr [esp], 0
// 006de8ff  68c0010000           push 0x1c0
// 006de904  c644240400           mov byte ptr [esp + 4], 0
// 006de909  e80c382a00           call 0x98211a
// 006de90e  83c404               add esp, 4
// 006de911  89442404             mov dword ptr [esp + 4], eax
// 006de915  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006de91d  85c0                 test eax, eax
// 006de91f  7409                 je 0x6de92a
// 006de921  8bc8                 mov ecx, eax
// 006de923  e838951a00           call 0x887e60
// 006de928  eb02                 jmp 0x6de92c
// 006de92a  33c0                 xor eax, eax
// 006de92c  8b0c24               mov ecx, dword ptr [esp]
// 006de92f  56                   push esi
// 006de930  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 006de934  51                   push ecx
// 006de935  50                   push eax
// 006de936  8bce                 mov ecx, esi
// 006de938  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 006de940  e82bffffff           call 0x6de870
// 006de945  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006de949  8bc6                 mov eax, esi
// 006de94b  5e                   pop esi
// 006de94c  64890d00000000       mov dword ptr fs:[0], ecx
// 006de953  83c414               add esp, 0x14
// 006de956  c3                   ret 
// library rbxgs/v8datamodel\GlobalSettings.cpp (function ??$create@VGlobalSettings@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VGlobalSettings@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/GlobalSettings.cpp
