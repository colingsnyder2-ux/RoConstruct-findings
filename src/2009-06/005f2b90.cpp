// roc 2009-06 005f2b90  unit: RBX::VLocalBackpackSwitcher::?$FactoryProduct  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005f2b90
//
// 005f2b90  6aff                 push -1
// 005f2b92  686b088500           push 0x85086b
// 005f2b97  64a100000000         mov eax, dword ptr fs:[0]
// 005f2b9d  50                   push eax
// 005f2b9e  64892500000000       mov dword ptr fs:[0], esp
// 005f2ba5  83ec08               sub esp, 8
// 005f2ba8  c7042400000000       mov dword ptr [esp], 0
// 005f2baf  6888010000           push 0x188
// 005f2bb4  c644240400           mov byte ptr [esp + 4], 0
// 005f2bb9  e87a5e1200           call 0x718a38
// 005f2bbe  83c404               add esp, 4
// 005f2bc1  89442404             mov dword ptr [esp + 4], eax
// 005f2bc5  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005f2bcd  85c0                 test eax, eax
// 005f2bcf  7409                 je 0x5f2bda
// 005f2bd1  8bc8                 mov ecx, eax
// 005f2bd3  e868cc0a00           call 0x69f840
// 005f2bd8  eb02                 jmp 0x5f2bdc
// 005f2bda  33c0                 xor eax, eax
// 005f2bdc  8b0c24               mov ecx, dword ptr [esp]
// 005f2bdf  56                   push esi
// 005f2be0  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005f2be4  51                   push ecx
// 005f2be5  50                   push eax
// 005f2be6  8bce                 mov ecx, esi
// 005f2be8  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005f2bf0  e8ebfeffff           call 0x5f2ae0
// 005f2bf5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005f2bf9  8bc6                 mov eax, esi
// 005f2bfb  5e                   pop esi
// 005f2bfc  64890d00000000       mov dword ptr fs:[0], ecx
// 005f2c03  83c414               add esp, 0x14
// 005f2c06  c3                   ret 
// library openrbx-client/App\v8datamodel\Gyro.cpp (function ??$create@VBodyGyro@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VBodyGyro@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Gyro.cpp
