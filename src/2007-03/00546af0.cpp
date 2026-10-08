// roc 2007-03 00546af0  unit: seg_00540000  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00546af0
//
// 00546af0  83ec08               sub esp, 8
// 00546af3  53                   push ebx
// 00546af4  55                   push ebp
// 00546af5  56                   push esi
// 00546af6  57                   push edi
// 00546af7  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00546afb  85ff                 test edi, edi
// 00546afd  8bf1                 mov esi, ecx
// 00546aff  8b4604               mov eax, dword ptr [esi + 4]
// 00546b02  8b28                 mov ebp, dword ptr [eax]
// 00546b04  7404                 je 0x546b0a
// 00546b06  3bfe                 cmp edi, esi
// 00546b08  7406                 je 0x546b10
// 00546b0a  ff1544e97700         call dword ptr [0x77e944]
// 00546b10  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00546b14  3bdd                 cmp ebx, ebp
// 00546b16  7559                 jne 0x546b71
// 00546b18  8b442428             mov eax, dword ptr [esp + 0x28]
// 00546b1c  85c0                 test eax, eax
// 00546b1e  8b6e04               mov ebp, dword ptr [esi + 4]
// 00546b21  7404                 je 0x546b27
// 00546b23  3bc6                 cmp eax, esi
// 00546b25  7406                 je 0x546b2d
// 00546b27  ff1544e97700         call dword ptr [0x77e944]
// 00546b2d  396c242c             cmp dword ptr [esp + 0x2c], ebp
// 00546b31  753e                 jne 0x546b71
// 00546b33  8b4e04               mov ecx, dword ptr [esi + 4]
// 00546b36  8b5104               mov edx, dword ptr [ecx + 4]
// 00546b39  52                   push edx
// 00546b3a  8bce                 mov ecx, esi
// 00546b3c  e83ffcffff           call 0x546780
// 00546b41  8b4604               mov eax, dword ptr [esi + 4]
// 00546b44  894004               mov dword ptr [eax + 4], eax
// 00546b47  8b4604               mov eax, dword ptr [esi + 4]
// 00546b4a  c7460800000000       mov dword ptr [esi + 8], 0
// 00546b51  8900                 mov dword ptr [eax], eax
// 00546b53  8b4604               mov eax, dword ptr [esi + 4]
// 00546b56  894008               mov dword ptr [eax + 8], eax
// 00546b59  8b4604               mov eax, dword ptr [esi + 4]
// 00546b5c  8b08                 mov ecx, dword ptr [eax]
// 00546b5e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00546b62  5f                   pop edi
// 00546b63  8930                 mov dword ptr [eax], esi
// 00546b65  5e                   pop esi
// 00546b66  5d                   pop ebp
// 00546b67  894804               mov dword ptr [eax + 4], ecx
// 00546b6a  5b                   pop ebx
// 00546b6b  83c408               add esp, 8
// 00546b6e  c21400               ret 0x14
// 00546b71  85ff                 test edi, edi
// 00546b73  7406                 je 0x546b7b
// 00546b75  3b7c2428             cmp edi, dword ptr [esp + 0x28]
// 00546b79  7406                 je 0x546b81
// 00546b7b  ff1544e97700         call dword ptr [0x77e944]
// 00546b81  3b5c242c             cmp ebx, dword ptr [esp + 0x2c]
// 00546b85  7421                 je 0x546ba8
// 00546b87  8d4c2420             lea ecx, [esp + 0x20]
// 00546b8b  e8e06afeff           call 0x52d670
// 00546b90  53                   push ebx
// 00546b91  57                   push edi
// 00546b92  8d542418             lea edx, [esp + 0x18]
// 00546b96  52                   push edx
// 00546b97  8bce                 mov ecx, esi
// 00546b99  e812f9ffff           call 0x5464b0
// 00546b9e  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00546ba2  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00546ba6  ebc9                 jmp 0x546b71
// 00546ba8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00546bac  8938                 mov dword ptr [eax], edi
// 00546bae  5f                   pop edi
// 00546baf  5e                   pop esi
// 00546bb0  5d                   pop ebp
// 00546bb1  895804               mov dword ptr [eax + 4], ebx
// 00546bb4  5b                   pop ebx
// 00546bb5  83c408               add esp, 8
// 00546bb8  c21400               ret 0x14
// library rbxgs/tool\ToolsArrow.cpp (function ?erase@?$_Tree@V?$_Tset_traits@PAVInstance@RBX@@U?$less@PAVInstance@RBX@@@std@@V?$allocator@PAVInstance@RBX@@@4@$0A@@std@@@std@@QAE?AViterator@12@V312@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
