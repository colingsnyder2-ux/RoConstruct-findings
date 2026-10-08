// roc 2007-03 00439c50  unit: seg_00430000  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00439c50
//
// 00439c50  83ec08               sub esp, 8
// 00439c53  53                   push ebx
// 00439c54  55                   push ebp
// 00439c55  56                   push esi
// 00439c56  57                   push edi
// 00439c57  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00439c5b  85ff                 test edi, edi
// 00439c5d  8bf1                 mov esi, ecx
// 00439c5f  8b4604               mov eax, dword ptr [esi + 4]
// 00439c62  8b28                 mov ebp, dword ptr [eax]
// 00439c64  7404                 je 0x439c6a
// 00439c66  3bfe                 cmp edi, esi
// 00439c68  7406                 je 0x439c70
// 00439c6a  ff1544e97700         call dword ptr [0x77e944]
// 00439c70  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00439c74  3bdd                 cmp ebx, ebp
// 00439c76  7559                 jne 0x439cd1
// 00439c78  8b442428             mov eax, dword ptr [esp + 0x28]
// 00439c7c  85c0                 test eax, eax
// 00439c7e  8b6e04               mov ebp, dword ptr [esi + 4]
// 00439c81  7404                 je 0x439c87
// 00439c83  3bc6                 cmp eax, esi
// 00439c85  7406                 je 0x439c8d
// 00439c87  ff1544e97700         call dword ptr [0x77e944]
// 00439c8d  396c242c             cmp dword ptr [esp + 0x2c], ebp
// 00439c91  753e                 jne 0x439cd1
// 00439c93  8b4e04               mov ecx, dword ptr [esi + 4]
// 00439c96  8b5104               mov edx, dword ptr [ecx + 4]
// 00439c99  52                   push edx
// 00439c9a  8bce                 mov ecx, esi
// 00439c9c  e89f9ffcff           call 0x403c40
// 00439ca1  8b4604               mov eax, dword ptr [esi + 4]
// 00439ca4  894004               mov dword ptr [eax + 4], eax
// 00439ca7  8b4604               mov eax, dword ptr [esi + 4]
// 00439caa  c7460800000000       mov dword ptr [esi + 8], 0
// 00439cb1  8900                 mov dword ptr [eax], eax
// 00439cb3  8b4604               mov eax, dword ptr [esi + 4]
// 00439cb6  894008               mov dword ptr [eax + 8], eax
// 00439cb9  8b4604               mov eax, dword ptr [esi + 4]
// 00439cbc  8b08                 mov ecx, dword ptr [eax]
// 00439cbe  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00439cc2  5f                   pop edi
// 00439cc3  8930                 mov dword ptr [eax], esi
// 00439cc5  5e                   pop esi
// 00439cc6  5d                   pop ebp
// 00439cc7  894804               mov dword ptr [eax + 4], ecx
// 00439cca  5b                   pop ebx
// 00439ccb  83c408               add esp, 8
// 00439cce  c21400               ret 0x14
// 00439cd1  85ff                 test edi, edi
// 00439cd3  7406                 je 0x439cdb
// 00439cd5  3b7c2428             cmp edi, dword ptr [esp + 0x28]
// 00439cd9  7406                 je 0x439ce1
// 00439cdb  ff1544e97700         call dword ptr [0x77e944]
// 00439ce1  3b5c242c             cmp ebx, dword ptr [esp + 0x2c]
// 00439ce5  7421                 je 0x439d08
// 00439ce7  8d4c2420             lea ecx, [esp + 0x20]
// 00439ceb  e8d0210600           call 0x49bec0
// 00439cf0  53                   push ebx
// 00439cf1  57                   push edi
// 00439cf2  8d542418             lea edx, [esp + 0x18]
// 00439cf6  52                   push edx
// 00439cf7  8bce                 mov ecx, esi
// 00439cf9  e8f2fbffff           call 0x4398f0
// 00439cfe  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00439d02  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00439d06  ebc9                 jmp 0x439cd1
// 00439d08  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00439d0c  8938                 mov dword ptr [eax], edi
// 00439d0e  5f                   pop edi
// 00439d0f  5e                   pop esi
// 00439d10  5d                   pop ebp
// 00439d11  895804               mov dword ptr [eax + 4], ebx
// 00439d14  5b                   pop ebx
// 00439d15  83c408               add esp, 8
// 00439d18  c21400               ret 0x14
// library rbxgs/tool\ToolsArrow.cpp (function ?erase@?$_Tree@V?$_Tset_traits@PAVInstance@RBX@@U?$less@PAVInstance@RBX@@@std@@V?$allocator@PAVInstance@RBX@@@4@$0A@@std@@@std@@QAE?AViterator@12@V312@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
