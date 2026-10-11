// roc 2008-06 005c1ee0  unit: RBX::VBodyForce::?$FactoryProduct::Creator  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c1ee0
//
// 005c1ee0  6aff                 push -1
// 005c1ee2  683b467d00           push 0x7d463b
// 005c1ee7  64a100000000         mov eax, dword ptr fs:[0]
// 005c1eed  50                   push eax
// 005c1eee  64892500000000       mov dword ptr fs:[0], esp
// 005c1ef5  83ec08               sub esp, 8
// 005c1ef8  c7042400000000       mov dword ptr [esp], 0
// 005c1eff  6860010000           push 0x160
// 005c1f04  c644240400           mov byte ptr [esp + 4], 0
// 005c1f09  ff15b0288000         call dword ptr [0x8028b0]
// 005c1f0f  83c404               add esp, 4
// 005c1f12  89442404             mov dword ptr [esp + 4], eax
// 005c1f16  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c1f1e  85c0                 test eax, eax
// 005c1f20  7409                 je 0x5c1f2b
// 005c1f22  8bc8                 mov ecx, eax
// 005c1f24  e8b7060700           call 0x6325e0
// 005c1f29  eb02                 jmp 0x5c1f2d
// 005c1f2b  33c0                 xor eax, eax
// 005c1f2d  8b0c24               mov ecx, dword ptr [esp]
// 005c1f30  56                   push esi
// 005c1f31  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005c1f35  51                   push ecx
// 005c1f36  50                   push eax
// 005c1f37  8bce                 mov ecx, esi
// 005c1f39  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005c1f41  e8eafeffff           call 0x5c1e30
// 005c1f46  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c1f4a  8bc6                 mov eax, esi
// 005c1f4c  5e                   pop esi
// 005c1f4d  64890d00000000       mov dword ptr fs:[0], ecx
// 005c1f54  83c414               add esp, 0x14
// 005c1f57  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??$create@VScript@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VScript@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
