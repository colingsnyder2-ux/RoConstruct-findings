// roc 2007-03 00619dc0  unit: seg_00610000  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00619dc0
//
// 00619dc0  83ec08               sub esp, 8
// 00619dc3  53                   push ebx
// 00619dc4  55                   push ebp
// 00619dc5  56                   push esi
// 00619dc6  57                   push edi
// 00619dc7  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00619dcb  85ff                 test edi, edi
// 00619dcd  8bf1                 mov esi, ecx
// 00619dcf  8b4604               mov eax, dword ptr [esi + 4]
// 00619dd2  8b28                 mov ebp, dword ptr [eax]
// 00619dd4  7404                 je 0x619dda
// 00619dd6  3bfe                 cmp edi, esi
// 00619dd8  7406                 je 0x619de0
// 00619dda  ff1544e97700         call dword ptr [0x77e944]
// 00619de0  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00619de4  3bdd                 cmp ebx, ebp
// 00619de6  7559                 jne 0x619e41
// 00619de8  8b442428             mov eax, dword ptr [esp + 0x28]
// 00619dec  85c0                 test eax, eax
// 00619dee  8b6e04               mov ebp, dword ptr [esi + 4]
// 00619df1  7404                 je 0x619df7
// 00619df3  3bc6                 cmp eax, esi
// 00619df5  7406                 je 0x619dfd
// 00619df7  ff1544e97700         call dword ptr [0x77e944]
// 00619dfd  396c242c             cmp dword ptr [esp + 0x2c], ebp
// 00619e01  753e                 jne 0x619e41
// 00619e03  8b4e04               mov ecx, dword ptr [esi + 4]
// 00619e06  8b5104               mov edx, dword ptr [ecx + 4]
// 00619e09  52                   push edx
// 00619e0a  8bce                 mov ecx, esi
// 00619e0c  e84ffbffff           call 0x619960
// 00619e11  8b4604               mov eax, dword ptr [esi + 4]
// 00619e14  894004               mov dword ptr [eax + 4], eax
// 00619e17  8b4604               mov eax, dword ptr [esi + 4]
// 00619e1a  c7460800000000       mov dword ptr [esi + 8], 0
// 00619e21  8900                 mov dword ptr [eax], eax
// 00619e23  8b4604               mov eax, dword ptr [esi + 4]
// 00619e26  894008               mov dword ptr [eax + 8], eax
// 00619e29  8b4604               mov eax, dword ptr [esi + 4]
// 00619e2c  8b08                 mov ecx, dword ptr [eax]
// 00619e2e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00619e32  5f                   pop edi
// 00619e33  8930                 mov dword ptr [eax], esi
// 00619e35  5e                   pop esi
// 00619e36  5d                   pop ebp
// 00619e37  894804               mov dword ptr [eax + 4], ecx
// 00619e3a  5b                   pop ebx
// 00619e3b  83c408               add esp, 8
// 00619e3e  c21400               ret 0x14
// 00619e41  85ff                 test edi, edi
// 00619e43  7406                 je 0x619e4b
// 00619e45  3b7c2428             cmp edi, dword ptr [esp + 0x28]
// 00619e49  7406                 je 0x619e51
// 00619e4b  ff1544e97700         call dword ptr [0x77e944]
// 00619e51  3b5c242c             cmp ebx, dword ptr [esp + 0x2c]
// 00619e55  7421                 je 0x619e78
// 00619e57  8d4c2420             lea ecx, [esp + 0x20]
// 00619e5b  e8e0adeaff           call 0x4c4c40
// 00619e60  53                   push ebx
// 00619e61  57                   push edi
// 00619e62  8d542418             lea edx, [esp + 0x18]
// 00619e66  52                   push edx
// 00619e67  8bce                 mov ecx, esi
// 00619e69  e822f8ffff           call 0x619690
// 00619e6e  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00619e72  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00619e76  ebc9                 jmp 0x619e41
// 00619e78  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00619e7c  8938                 mov dword ptr [eax], edi
// 00619e7e  5f                   pop edi
// 00619e7f  5e                   pop esi
// 00619e80  5d                   pop ebp
// 00619e81  895804               mov dword ptr [eax + 4], ebx
// 00619e84  5b                   pop ebx
// 00619e85  83c408               add esp, 8
// 00619e88  c21400               ret 0x14
// library rbxgs/tool\ToolsArrow.cpp (function ?erase@?$_Tree@V?$_Tset_traits@PAVInstance@RBX@@U?$less@PAVInstance@RBX@@@std@@V?$allocator@PAVInstance@RBX@@@4@$0A@@std@@@std@@QAE?AViterator@12@V312@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
