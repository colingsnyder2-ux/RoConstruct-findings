// roc 2009-06 00453bd0  unit: CRobloxDoc  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00453bd0
//
// 00453bd0  6aff                 push -1
// 00453bd2  687aef8400           push 0x84ef7a
// 00453bd7  64a100000000         mov eax, dword ptr fs:[0]
// 00453bdd  50                   push eax
// 00453bde  64892500000000       mov dword ptr fs:[0], esp
// 00453be5  51                   push ecx
// 00453be6  68a0000000           push 0xa0
// 00453beb  e8484e2c00           call 0x718a38
// 00453bf0  83c404               add esp, 4
// 00453bf3  890424               mov dword ptr [esp], eax
// 00453bf6  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00453bfe  85c0                 test eax, eax
// 00453c00  7416                 je 0x453c18
// 00453c02  8bc8                 mov ecx, eax
// 00453c04  e8c7f1ffff           call 0x452dd0
// 00453c09  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00453c0d  64890d00000000       mov dword ptr fs:[0], ecx
// 00453c14  83c410               add esp, 0x10
// 00453c17  c3                   ret 
// 00453c18  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00453c1c  33c0                 xor eax, eax
// 00453c1e  64890d00000000       mov dword ptr fs:[0], ecx
// 00453c25  83c410               add esp, 0x10
// 00453c28  c3                   ret 
// library rbxgs-raknet/RakNetworkFactory.cpp (function ?GetLogCommandParser@RakNetworkFactory@@SAPAVLogCommandParser@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RakNetworkFactory.cpp
