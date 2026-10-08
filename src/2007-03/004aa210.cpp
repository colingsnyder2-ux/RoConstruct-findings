// roc 2007-03 004aa210  unit: seg_004a0000  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004aa210
//
// 004aa210  6aff                 push -1
// 004aa212  68c8c67400           push 0x74c6c8
// 004aa217  64a100000000         mov eax, dword ptr fs:[0]
// 004aa21d  50                   push eax
// 004aa21e  64892500000000       mov dword ptr fs:[0], esp
// 004aa225  51                   push ecx
// 004aa226  53                   push ebx
// 004aa227  56                   push esi
// 004aa228  8bf1                 mov esi, ecx
// 004aa22a  89742408             mov dword ptr [esp + 8], esi
// 004aa22e  8b4608               mov eax, dword ptr [esi + 8]
// 004aa231  33db                 xor ebx, ebx
// 004aa233  3bc3                 cmp eax, ebx
// 004aa235  895c2414             mov dword ptr [esp + 0x14], ebx
// 004aa239  885e14               mov byte ptr [esi + 0x14], bl
// 004aa23c  741a                 je 0x4aa258
// 004aa23e  3d00020000           cmp eax, 0x200
// 004aa243  7610                 jbe 0x4aa255
// 004aa245  8b06                 mov eax, dword ptr [esi]
// 004aa247  50                   push eax
// 004aa248  e8a33e1700           call 0x61e0f0
// 004aa24d  83c404               add esp, 4
// 004aa250  895e08               mov dword ptr [esi + 8], ebx
// 004aa253  891e                 mov dword ptr [esi], ebx
// 004aa255  895e04               mov dword ptr [esi + 4], ebx
// 004aa258  8bce                 mov ecx, esi
// 004aa25a  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004aa262  e839820000           call 0x4b24a0
// 004aa267  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004aa26b  5e                   pop esi
// 004aa26c  5b                   pop ebx
// 004aa26d  64890d00000000       mov dword ptr fs:[0], ecx
// 004aa274  83c410               add esp, 0x10
// 004aa277  c3                   ret 
// library rbxgs-raknet/LightweightDatabaseServer.cpp (function ??1?$Map@PADPAUDatabaseTable@LightweightDatabaseServer@@$1?DatabaseTableComp@2@SAHABQAD0@Z@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet LightweightDatabaseServer.cpp
