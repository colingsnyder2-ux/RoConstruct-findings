// roc 2008-06 005c1a00  unit: RBX::VGeometryService::?$FactoryProduct::Creator  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c1a00
//
// 005c1a00  6aff                 push -1
// 005c1a02  683b467d00           push 0x7d463b
// 005c1a07  64a100000000         mov eax, dword ptr fs:[0]
// 005c1a0d  50                   push eax
// 005c1a0e  64892500000000       mov dword ptr fs:[0], esp
// 005c1a15  83ec08               sub esp, 8
// 005c1a18  c7042400000000       mov dword ptr [esp], 0
// 005c1a1f  688c010000           push 0x18c
// 005c1a24  c644240400           mov byte ptr [esp + 4], 0
// 005c1a29  ff15b0288000         call dword ptr [0x8028b0]
// 005c1a2f  83c404               add esp, 4
// 005c1a32  89442404             mov dword ptr [esp + 4], eax
// 005c1a36  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c1a3e  85c0                 test eax, eax
// 005c1a40  7409                 je 0x5c1a4b
// 005c1a42  8bc8                 mov ecx, eax
// 005c1a44  e827060700           call 0x632070
// 005c1a49  eb02                 jmp 0x5c1a4d
// 005c1a4b  33c0                 xor eax, eax
// 005c1a4d  8b0c24               mov ecx, dword ptr [esp]
// 005c1a50  56                   push esi
// 005c1a51  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005c1a55  51                   push ecx
// 005c1a56  50                   push eax
// 005c1a57  8bce                 mov ecx, esi
// 005c1a59  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005c1a61  e8eafeffff           call 0x5c1950
// 005c1a66  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c1a6a  8bc6                 mov eax, esi
// 005c1a6c  5e                   pop esi
// 005c1a6d  64890d00000000       mov dword ptr fs:[0], ecx
// 005c1a74  83c414               add esp, 0x14
// 005c1a77  c3                   ret 
// library openrbx-client/App\v8datamodel\Gyro.cpp (function ??$create@VRocket@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VRocket@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Gyro.cpp
