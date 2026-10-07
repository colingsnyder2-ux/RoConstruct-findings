// roc 2010-06 00432660  unit: CStandardOutputView  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00432660
//
// 00432660  6aff                 push -1
// 00432662  68da209800           push 0x9820da
// 00432667  64a100000000         mov eax, dword ptr fs:[0]
// 0043266d  50                   push eax
// 0043266e  64892500000000       mov dword ptr fs:[0], esp
// 00432675  51                   push ecx
// 00432676  6850010000           push 0x150
// 0043267b  e820533700           call 0x7a79a0
// 00432680  83c404               add esp, 4
// 00432683  890424               mov dword ptr [esp], eax
// 00432686  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0043268e  85c0                 test eax, eax
// 00432690  7416                 je 0x4326a8
// 00432692  8bc8                 mov ecx, eax
// 00432694  e8e7fcffff           call 0x432380
// 00432699  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0043269d  64890d00000000       mov dword ptr fs:[0], ecx
// 004326a4  83c410               add esp, 0x10
// 004326a7  c3                   ret 
// 004326a8  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004326ac  33c0                 xor eax, eax
// 004326ae  64890d00000000       mov dword ptr fs:[0], ecx
// 004326b5  83c410               add esp, 0x10
// 004326b8  c3                   ret 
// library rbx2016-raknet/RPC4Plugin.cpp (function ??$OP_NEW@VRPC4@RakNet@@@RakNet@@YAPAVRPC4@0@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RPC4Plugin.cpp
