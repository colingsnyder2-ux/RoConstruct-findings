// roc 2008-06 00573b10  unit: RBX::PercentPanel  size: 197 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00573b10
//
// 00573b10  6aff                 push -1
// 00573b12  6801047d00           push 0x7d0401
// 00573b17  64a100000000         mov eax, dword ptr fs:[0]
// 00573b1d  50                   push eax
// 00573b1e  64892500000000       mov dword ptr fs:[0], esp
// 00573b25  83ec20               sub esp, 0x20
// 00573b28  56                   push esi
// 00573b29  8bf1                 mov esi, ecx
// 00573b2b  89742404             mov dword ptr [esp + 4], esi
// 00573b2f  e89cfeffff           call 0x5739d0
// 00573b34  6860fa8200           push 0x82fa60
// 00573b39  8d4c240c             lea ecx, [esp + 0xc]
// 00573b3d  c744243000000000     mov dword ptr [esp + 0x30], 0
// 00573b45  c706fcf98200         mov dword ptr [esi], 0x82f9fc
// 00573b4b  c74610ecf98200       mov dword ptr [esi + 0x10], 0x82f9ec
// 00573b52  c74614e4f98200       mov dword ptr [esi + 0x14], 0x82f9e4
// 00573b59  c74620dcf98200       mov dword ptr [esi + 0x20], 0x82f9dc
// 00573b60  c74624ccf98200       mov dword ptr [esi + 0x24], 0x82f9cc
// 00573b67  c74644bcf98200       mov dword ptr [esi + 0x44], 0x82f9bc
// 00573b6e  c74664acf98200       mov dword ptr [esi + 0x64], 0x82f9ac
// 00573b75  c786840000009cf98200 mov dword ptr [esi + 0x84], 0x82f99c
// 00573b7f  c786a40000008cf98200 mov dword ptr [esi + 0xa4], 0x82f98c
// 00573b89  c786c40000007cf98200 mov dword ptr [esi + 0xc4], 0x82f97c
// 00573b93  c7863001000074f98200 mov dword ptr [esi + 0x130], 0x82f974
// 00573b9d  ff1558248000         call dword ptr [0x802458]
// 00573ba3  8d442408             lea eax, [esp + 8]
// 00573ba7  50                   push eax
// 00573ba8  8bce                 mov ecx, esi
// 00573baa  c644243001           mov byte ptr [esp + 0x30], 1
// 00573baf  e8dc73feff           call 0x55af90
// 00573bb4  8d4c2408             lea ecx, [esp + 8]
// 00573bb8  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00573bbd  ff1568248000         call dword ptr [0x802468]
// 00573bc3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00573bc7  8bc6                 mov eax, esi
// 00573bc9  5e                   pop esi
// 00573bca  64890d00000000       mov dword ptr fs:[0], ecx
// 00573bd1  83c42c               add esp, 0x2c
// 00573bd4  c3                   ret 
// library openrbx-client/App\gui\GUI.cpp (function ??0GuiRoot@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/gui/GUI.cpp
