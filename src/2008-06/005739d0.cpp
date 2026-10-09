// roc 2008-06 005739d0  unit: RBX::PercentPanel  size: 236 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005739d0
//
// 005739d0  6aff                 push -1
// 005739d2  68df037d00           push 0x7d03df
// 005739d7  64a100000000         mov eax, dword ptr fs:[0]
// 005739dd  50                   push eax
// 005739de  64892500000000       mov dword ptr fs:[0], esp
// 005739e5  83ec20               sub esp, 0x20
// 005739e8  56                   push esi
// 005739e9  8bf1                 mov esi, ecx
// 005739eb  89742404             mov dword ptr [esp + 4], esi
// 005739ef  e8ec7dfeff           call 0x55b7e0
// 005739f4  c7863001000048f88200 mov dword ptr [esi + 0x130], 0x82f848
// 005739fe  33c0                 xor eax, eax
// 00573a00  c7060cf98200         mov dword ptr [esi], 0x82f90c
// 00573a06  c7461000f98200       mov dword ptr [esi + 0x10], 0x82f900
// 00573a0d  c74614f8f88200       mov dword ptr [esi + 0x14], 0x82f8f8
// 00573a14  c74620f0f88200       mov dword ptr [esi + 0x20], 0x82f8f0
// 00573a1b  c74624e0f88200       mov dword ptr [esi + 0x24], 0x82f8e0
// 00573a22  c74644d0f88200       mov dword ptr [esi + 0x44], 0x82f8d0
// 00573a29  c74664c0f88200       mov dword ptr [esi + 0x64], 0x82f8c0
// 00573a30  c78684000000b0f88200 mov dword ptr [esi + 0x84], 0x82f8b0
// 00573a3a  c786a4000000a0f88200 mov dword ptr [esi + 0xa4], 0x82f8a0
// 00573a44  c786c400000090f88200 mov dword ptr [esi + 0xc4], 0x82f890
// 00573a4e  c7863001000088f88200 mov dword ptr [esi + 0x130], 0x82f888
// 00573a58  898634010000         mov dword ptr [esi + 0x134], eax
// 00573a5e  8944242c             mov dword ptr [esp + 0x2c], eax
// 00573a62  898638010000         mov dword ptr [esi + 0x138], eax
// 00573a68  d9ee                 fldz 
// 00573a6a  d9963c010000         fst dword ptr [esi + 0x13c]
// 00573a70  6874f88200           push 0x82f874
// 00573a75  8d4c240c             lea ecx, [esp + 0xc]
// 00573a79  d99e40010000         fstp dword ptr [esi + 0x140]
// 00573a7f  c644243001           mov byte ptr [esp + 0x30], 1
// 00573a84  ff1558248000         call dword ptr [0x802458]
// 00573a8a  8d442408             lea eax, [esp + 8]
// 00573a8e  50                   push eax
// 00573a8f  8bce                 mov ecx, esi
// 00573a91  c644243002           mov byte ptr [esp + 0x30], 2
// 00573a96  e8f574feff           call 0x55af90
// 00573a9b  8d4c2408             lea ecx, [esp + 8]
// 00573a9f  c644242c01           mov byte ptr [esp + 0x2c], 1
// 00573aa4  ff1568248000         call dword ptr [0x802468]
// 00573aaa  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00573aae  8bc6                 mov eax, esi
// 00573ab0  5e                   pop esi
// 00573ab1  64890d00000000       mov dword ptr fs:[0], ecx
// 00573ab8  83c42c               add esp, 0x2c
// 00573abb  c3                   ret 
// library openrbx-client/App\gui\GUI.cpp (function ??0GuiItem@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/gui/GUI.cpp
