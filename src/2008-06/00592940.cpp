// roc 2008-06 00592940  unit: ArchiveBinder  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00592940
//
// 00592940  6aff                 push -1
// 00592942  68031d7d00           push 0x7d1d03
// 00592947  64a100000000         mov eax, dword ptr fs:[0]
// 0059294d  50                   push eax
// 0059294e  64892500000000       mov dword ptr fs:[0], esp
// 00592955  83ec08               sub esp, 8
// 00592958  56                   push esi
// 00592959  8bf1                 mov esi, ecx
// 0059295b  89742408             mov dword ptr [esp + 8], esi
// 0059295f  e8ec14ebff           call 0x443e50
// 00592964  8d442407             lea eax, [esp + 7]
// 00592968  50                   push eax
// 00592969  8d54240b             lea edx, [esp + 0xb]
// 0059296d  8d4e1c               lea ecx, [esi + 0x1c]
// 00592970  52                   push edx
// 00592971  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00592979  c706cc1e8300         mov dword ptr [esi], 0x831ecc
// 0059297f  e84cf9ffff           call 0x5922d0
// 00592984  8d4e3c               lea ecx, [esi + 0x3c]
// 00592987  c644241401           mov byte ptr [esp + 0x14], 1
// 0059298c  e86ff4ffff           call 0x591e00
// 00592991  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00592995  8bc6                 mov eax, esi
// 00592997  5e                   pop esi
// 00592998  64890d00000000       mov dword ptr fs:[0], ecx
// 0059299f  83c414               add esp, 0x14
// 005929a2  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??0ArchiveBinder@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
