// roc 2007-03 00530cb0  unit: seg_00530000  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00530cb0
//
// 00530cb0  83ec08               sub esp, 8
// 00530cb3  53                   push ebx
// 00530cb4  55                   push ebp
// 00530cb5  56                   push esi
// 00530cb6  57                   push edi
// 00530cb7  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00530cbb  85ff                 test edi, edi
// 00530cbd  8bf1                 mov esi, ecx
// 00530cbf  8b4604               mov eax, dword ptr [esi + 4]
// 00530cc2  8b28                 mov ebp, dword ptr [eax]
// 00530cc4  7404                 je 0x530cca
// 00530cc6  3bfe                 cmp edi, esi
// 00530cc8  7406                 je 0x530cd0
// 00530cca  ff1544e97700         call dword ptr [0x77e944]
// 00530cd0  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00530cd4  3bdd                 cmp ebx, ebp
// 00530cd6  7559                 jne 0x530d31
// 00530cd8  8b442428             mov eax, dword ptr [esp + 0x28]
// 00530cdc  85c0                 test eax, eax
// 00530cde  8b6e04               mov ebp, dword ptr [esi + 4]
// 00530ce1  7404                 je 0x530ce7
// 00530ce3  3bc6                 cmp eax, esi
// 00530ce5  7406                 je 0x530ced
// 00530ce7  ff1544e97700         call dword ptr [0x77e944]
// 00530ced  396c242c             cmp dword ptr [esp + 0x2c], ebp
// 00530cf1  753e                 jne 0x530d31
// 00530cf3  8b4e04               mov ecx, dword ptr [esi + 4]
// 00530cf6  8b5104               mov edx, dword ptr [ecx + 4]
// 00530cf9  52                   push edx
// 00530cfa  8bce                 mov ecx, esi
// 00530cfc  e8bff5ffff           call 0x5302c0
// 00530d01  8b4604               mov eax, dword ptr [esi + 4]
// 00530d04  894004               mov dword ptr [eax + 4], eax
// 00530d07  8b4604               mov eax, dword ptr [esi + 4]
// 00530d0a  c7460800000000       mov dword ptr [esi + 8], 0
// 00530d11  8900                 mov dword ptr [eax], eax
// 00530d13  8b4604               mov eax, dword ptr [esi + 4]
// 00530d16  894008               mov dword ptr [eax + 8], eax
// 00530d19  8b4604               mov eax, dword ptr [esi + 4]
// 00530d1c  8b08                 mov ecx, dword ptr [eax]
// 00530d1e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00530d22  5f                   pop edi
// 00530d23  8930                 mov dword ptr [eax], esi
// 00530d25  5e                   pop esi
// 00530d26  5d                   pop ebp
// 00530d27  894804               mov dword ptr [eax + 4], ecx
// 00530d2a  5b                   pop ebx
// 00530d2b  83c408               add esp, 8
// 00530d2e  c21400               ret 0x14
// 00530d31  85ff                 test edi, edi
// 00530d33  7406                 je 0x530d3b
// 00530d35  3b7c2428             cmp edi, dword ptr [esp + 0x28]
// 00530d39  7406                 je 0x530d41
// 00530d3b  ff1544e97700         call dword ptr [0x77e944]
// 00530d41  3b5c242c             cmp ebx, dword ptr [esp + 0x2c]
// 00530d45  7421                 je 0x530d68
// 00530d47  8d4c2420             lea ecx, [esp + 0x20]
// 00530d4b  e880500800           call 0x5b5dd0
// 00530d50  53                   push ebx
// 00530d51  57                   push edi
// 00530d52  8d542418             lea edx, [esp + 0x18]
// 00530d56  52                   push edx
// 00530d57  8bce                 mov ecx, esi
// 00530d59  e802f6ffff           call 0x530360
// 00530d5e  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00530d62  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00530d66  ebc9                 jmp 0x530d31
// 00530d68  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00530d6c  8938                 mov dword ptr [eax], edi
// 00530d6e  5f                   pop edi
// 00530d6f  5e                   pop esi
// 00530d70  5d                   pop ebp
// 00530d71  895804               mov dword ptr [eax + 4], ebx
// 00530d74  5b                   pop ebx
// 00530d75  83c408               add esp, 8
// 00530d78  c21400               ret 0x14
// library rbxgs/tool\ToolsArrow.cpp (function ?erase@?$_Tree@V?$_Tset_traits@PAVInstance@RBX@@U?$less@PAVInstance@RBX@@@std@@V?$allocator@PAVInstance@RBX@@@4@$0A@@std@@@std@@QAE?AViterator@12@V312@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
