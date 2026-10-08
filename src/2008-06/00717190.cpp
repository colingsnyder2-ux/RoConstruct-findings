// from server: 100% by auto
// roc 2008-06 00717190  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 364 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00717190
//
// 00717190  8b442404             mov eax, dword ptr [esp + 4]
// 00717194  83ec20               sub esp, 0x20
// 00717197  56                   push esi
// 00717198  50                   push eax
// 00717199  8bf1                 mov esi, ecx
// 0071719b  e830850700           call 0x78f6d0
// 007171a0  83f8ff               cmp eax, -1
// 007171a3  7509                 jne 0x7171ae
// 007171a5  0bc0                 or eax, eax
// 007171a7  5e                   pop esi
// 007171a8  83c420               add esp, 0x20
// 007171ab  c20400               ret 4
// 007171ae  8bce                 mov ecx, esi
// 007171b0  e82b750700           call 0x78e6e0
// 007171b5  33c9                 xor ecx, ecx
// 007171b7  394808               cmp dword ptr [eax + 8], ecx
// 007171ba  6a20                 push 0x20
// 007171bc  0f95c1               setne cl
// 007171bf  8bc1                 mov eax, ecx
// 007171c1  8bce                 mov ecx, esi
// 007171c3  85c0                 test eax, eax
// 007171c5  0f84a1000000         je 0x71726c
// 007171cb  6a00                 push 0
// 007171cd  680000c400           push 0xc40000
// 007171d2  e83b9cf8ff           call 0x6a0e12
// 007171d7  6a20                 push 0x20
// 007171d9  6a00                 push 0
// 007171db  6801010200           push 0x20101
// 007171e0  8bce                 mov ecx, esi
// 007171e2  e8519af8ff           call 0x6a0c38
// 007171e7  e8d49affff           call 0x710cc0
// 007171ec  83b84801000000       cmp dword ptr [eax + 0x148], 0
// 007171f3  7420                 je 0x717215
// 007171f5  83be6801000000       cmp dword ptr [esi + 0x168], 0
// 007171fc  7417                 je 0x717215
// 007171fe  8b4620               mov eax, dword ptr [esi + 0x20]
// 00717201  8d966c010000         lea edx, [esi + 0x16c]
// 00717207  52                   push edx
// 00717208  50                   push eax
// 00717209  e862950700           call 0x790770
// 0071720e  8bc8                 mov ecx, eax
// 00717210  e89ba00700           call 0x7912b0
// 00717215  53                   push ebx
// 00717216  55                   push ebp
// 00717217  57                   push edi
// 00717218  56                   push esi
// 00717219  8d4c2414             lea ecx, [esp + 0x14]
// 0071721d  e8ae08feff           call 0x6f7ad0
// 00717222  8d4c2410             lea ecx, [esp + 0x10]
// 00717226  51                   push ecx
// 00717227  8d542424             lea edx, [esp + 0x24]
// 0071722b  52                   push edx
// 0071722c  e84f1efdff           call 0x6e9080
// 00717231  8bc8                 mov ecx, eax
// 00717233  e8a819fdff           call 0x6e8be0
// 00717238  8b542418             mov edx, dword ptr [esp + 0x18]
// 0071723c  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00717240  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00717244  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00717248  8bc2                 mov eax, edx
// 0071724a  8bfd                 mov edi, ebp
// 0071724c  2b7c2414             sub edi, dword ptr [esp + 0x14]
// 00717250  2bc1                 sub eax, ecx
// 00717252  3bcb                 cmp ecx, ebx
// 00717254  c644243400           mov byte ptr [esp + 0x34], 0
// 00717259  7d1f                 jge 0x71727a
// 0071725b  8bcb                 mov ecx, ebx
// 0071725d  8d1418               lea edx, [eax + ebx]
// 00717260  894c2410             mov dword ptr [esp + 0x10], ecx
// 00717264  89542418             mov dword ptr [esp + 0x18], edx
// 00717268  b301                 mov bl, 1
// 0071726a  eb2c                 jmp 0x717298
// 0071726c  6800004000           push 0x400000
// 00717271  6a00                 push 0
// 00717273  e89a9bf8ff           call 0x6a0e12
// 00717278  eb9b                 jmp 0x717215
// 0071727a  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0071727e  3bd3                 cmp edx, ebx
// 00717280  7e12                 jle 0x717294
// 00717282  8bd3                 mov edx, ebx
// 00717284  2bd8                 sub ebx, eax
// 00717286  8bcb                 mov ecx, ebx
// 00717288  89542418             mov dword ptr [esp + 0x18], edx
// 0071728c  894c2410             mov dword ptr [esp + 0x10], ecx
// 00717290  b301                 mov bl, 1
// 00717292  eb04                 jmp 0x717298
// 00717294  8a5c2434             mov bl, byte ptr [esp + 0x34]
// 00717298  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0071729c  3be8                 cmp ebp, eax
// 0071729e  7e0e                 jle 0x7172ae
// 007172a0  8be8                 mov ebp, eax
// 007172a2  2bc7                 sub eax, edi
// 007172a4  896c241c             mov dword ptr [esp + 0x1c], ebp
// 007172a8  89442414             mov dword ptr [esp + 0x14], eax
// 007172ac  eb08                 jmp 0x7172b6
// 007172ae  84db                 test bl, bl
// 007172b0  7415                 je 0x7172c7
// 007172b2  8b442414             mov eax, dword ptr [esp + 0x14]
// 007172b6  6a01                 push 1
// 007172b8  2be8                 sub ebp, eax
// 007172ba  55                   push ebp
// 007172bb  2bd1                 sub edx, ecx
// 007172bd  52                   push edx
// 007172be  50                   push eax
// 007172bf  51                   push ecx
// 007172c0  8bce                 mov ecx, esi
// 007172c2  e88597f8ff           call 0x6a0a4c
// 007172c7  56                   push esi
// 007172c8  e8032efeff           call 0x6fa0d0
// 007172cd  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 007172d3  8b8eb0000000         mov ecx, dword ptr [esi + 0xb0]
// 007172d9  8b5678               mov edx, dword ptr [esi + 0x78]
// 007172dc  83c404               add esp, 4
// 007172df  50                   push eax
// 007172e0  8b4220               mov eax, dword ptr [edx + 0x20]
// 007172e3  51                   push ecx
// 007172e4  682a270000           push 0x272a
// 007172e9  50                   push eax
// 007172ea  ff15142e8000         call dword ptr [0x802e14]
// 007172f0  5f                   pop edi
// 007172f1  5d                   pop ebp
// 007172f2  5b                   pop ebx
// 007172f3  33c0                 xor eax, eax
// 007172f5  5e                   pop esi
// 007172f6  83c420               add esp, 0x20
// 007172f9  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTColorPopup.cpp (function ?OnCreate@CXTColorPopup@@IAEHPAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPopup.cpp
