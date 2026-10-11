// roc 2008-06 0041ec30  unit: RBX::VPartInstance::?$FactoryProduct::Creator  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041ec30
//
// 0041ec30  6aff                 push -1
// 0041ec32  683b467d00           push 0x7d463b
// 0041ec37  64a100000000         mov eax, dword ptr fs:[0]
// 0041ec3d  50                   push eax
// 0041ec3e  64892500000000       mov dword ptr fs:[0], esp
// 0041ec45  83ec08               sub esp, 8
// 0041ec48  c7042400000000       mov dword ptr [esp], 0
// 0041ec4f  688c010000           push 0x18c
// 0041ec54  c644240400           mov byte ptr [esp + 4], 0
// 0041ec59  ff15b0288000         call dword ptr [0x8028b0]
// 0041ec5f  83c404               add esp, 4
// 0041ec62  89442404             mov dword ptr [esp + 4], eax
// 0041ec66  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0041ec6e  85c0                 test eax, eax
// 0041ec70  7409                 je 0x41ec7b
// 0041ec72  8bc8                 mov ecx, eax
// 0041ec74  e8370f1800           call 0x59fbb0
// 0041ec79  eb02                 jmp 0x41ec7d
// 0041ec7b  33c0                 xor eax, eax
// 0041ec7d  8b0c24               mov ecx, dword ptr [esp]
// 0041ec80  56                   push esi
// 0041ec81  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0041ec85  51                   push ecx
// 0041ec86  50                   push eax
// 0041ec87  8bce                 mov ecx, esi
// 0041ec89  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0041ec91  e8eafeffff           call 0x41eb80
// 0041ec96  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0041ec9a  8bc6                 mov eax, esi
// 0041ec9c  5e                   pop esi
// 0041ec9d  64890d00000000       mov dword ptr fs:[0], ecx
// 0041eca4  83c414               add esp, 0x14
// 0041eca7  c3                   ret 
// library openrbx-client/App\v8datamodel\Gyro.cpp (function ??$create@VRocket@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VRocket@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Gyro.cpp
