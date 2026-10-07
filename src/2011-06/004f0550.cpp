// roc 2011-06 004f0550  unit: RBX::Network::IdSerializer  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f0550
//
// 004f0550  83ec08               sub esp, 8
// 004f0553  56                   push esi
// 004f0554  8bf1                 mov esi, ecx
// 004f0556  e8e56cffff           call 0x4e7240
// 004f055b  6a01                 push 1
// 004f055d  8bce                 mov ecx, esi
// 004f055f  6a40                 push 0x40
// 004f0561  84c0                 test al, al
// 004f0563  7534                 jne 0x4f0599
// 004f0565  8d44240c             lea eax, [esp + 0xc]
// 004f0569  50                   push eax
// 004f056a  e871c4ffff           call 0x4ec9e0
// 004f056f  84c0                 test al, al
// 004f0571  741d                 je 0x4f0590
// 004f0573  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004f0577  6a08                 push 8
// 004f0579  51                   push ecx
// 004f057a  8d54240c             lea edx, [esp + 0xc]
// 004f057e  52                   push edx
// 004f057f  e81cc8ffff           call 0x4ecda0
// 004f0584  83c40c               add esp, 0xc
// 004f0587  b001                 mov al, 1
// 004f0589  5e                   pop esi
// 004f058a  83c408               add esp, 8
// 004f058d  c20400               ret 4
// 004f0590  32c0                 xor al, al
// 004f0592  5e                   pop esi
// 004f0593  83c408               add esp, 8
// 004f0596  c20400               ret 4
// 004f0599  8b442418             mov eax, dword ptr [esp + 0x18]
// 004f059d  50                   push eax
// 004f059e  e83dc4ffff           call 0x4ec9e0
// 004f05a3  5e                   pop esi
// 004f05a4  83c408               add esp, 8
// 004f05a7  c20400               ret 4
// library rbx2016-raknet/CloudCommon.cpp (function ??$Read@_K@BitStream@RakNet@@QAE_NAA_K@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CloudCommon.cpp
