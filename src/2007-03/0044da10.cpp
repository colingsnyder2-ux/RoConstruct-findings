// roc 2007-03 0044da10  unit: seg_00440000  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0044da10
//
// 0044da10  83ec08               sub esp, 8
// 0044da13  53                   push ebx
// 0044da14  55                   push ebp
// 0044da15  56                   push esi
// 0044da16  57                   push edi
// 0044da17  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0044da1b  85ff                 test edi, edi
// 0044da1d  8bf1                 mov esi, ecx
// 0044da1f  8b4604               mov eax, dword ptr [esi + 4]
// 0044da22  8b28                 mov ebp, dword ptr [eax]
// 0044da24  7404                 je 0x44da2a
// 0044da26  3bfe                 cmp edi, esi
// 0044da28  7406                 je 0x44da30
// 0044da2a  ff1544e97700         call dword ptr [0x77e944]
// 0044da30  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0044da34  3bdd                 cmp ebx, ebp
// 0044da36  7559                 jne 0x44da91
// 0044da38  8b442428             mov eax, dword ptr [esp + 0x28]
// 0044da3c  85c0                 test eax, eax
// 0044da3e  8b6e04               mov ebp, dword ptr [esi + 4]
// 0044da41  7404                 je 0x44da47
// 0044da43  3bc6                 cmp eax, esi
// 0044da45  7406                 je 0x44da4d
// 0044da47  ff1544e97700         call dword ptr [0x77e944]
// 0044da4d  396c242c             cmp dword ptr [esp + 0x2c], ebp
// 0044da51  753e                 jne 0x44da91
// 0044da53  8b4e04               mov ecx, dword ptr [esi + 4]
// 0044da56  8b5104               mov edx, dword ptr [ecx + 4]
// 0044da59  52                   push edx
// 0044da5a  8bce                 mov ecx, esi
// 0044da5c  e85f280e00           call 0x5302c0
// 0044da61  8b4604               mov eax, dword ptr [esi + 4]
// 0044da64  894004               mov dword ptr [eax + 4], eax
// 0044da67  8b4604               mov eax, dword ptr [esi + 4]
// 0044da6a  c7460800000000       mov dword ptr [esi + 8], 0
// 0044da71  8900                 mov dword ptr [eax], eax
// 0044da73  8b4604               mov eax, dword ptr [esi + 4]
// 0044da76  894008               mov dword ptr [eax + 8], eax
// 0044da79  8b4604               mov eax, dword ptr [esi + 4]
// 0044da7c  8b08                 mov ecx, dword ptr [eax]
// 0044da7e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0044da82  5f                   pop edi
// 0044da83  8930                 mov dword ptr [eax], esi
// 0044da85  5e                   pop esi
// 0044da86  5d                   pop ebp
// 0044da87  894804               mov dword ptr [eax + 4], ecx
// 0044da8a  5b                   pop ebx
// 0044da8b  83c408               add esp, 8
// 0044da8e  c21400               ret 0x14
// 0044da91  85ff                 test edi, edi
// 0044da93  7406                 je 0x44da9b
// 0044da95  3b7c2428             cmp edi, dword ptr [esp + 0x28]
// 0044da99  7406                 je 0x44daa1
// 0044da9b  ff1544e97700         call dword ptr [0x77e944]
// 0044daa1  3b5c242c             cmp ebx, dword ptr [esp + 0x2c]
// 0044daa5  7421                 je 0x44dac8
// 0044daa7  8d4c2420             lea ecx, [esp + 0x20]
// 0044daab  e820831600           call 0x5b5dd0
// 0044dab0  53                   push ebx
// 0044dab1  57                   push edi
// 0044dab2  8d542418             lea edx, [esp + 0x18]
// 0044dab6  52                   push edx
// 0044dab7  8bce                 mov ecx, esi
// 0044dab9  e8a2fcffff           call 0x44d760
// 0044dabe  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0044dac2  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0044dac6  ebc9                 jmp 0x44da91
// 0044dac8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0044dacc  8938                 mov dword ptr [eax], edi
// 0044dace  5f                   pop edi
// 0044dacf  5e                   pop esi
// 0044dad0  5d                   pop ebp
// 0044dad1  895804               mov dword ptr [eax + 4], ebx
// 0044dad4  5b                   pop ebx
// 0044dad5  83c408               add esp, 8
// 0044dad8  c21400               ret 0x14
// library rbxgs/tool\ToolsArrow.cpp (function ?erase@?$_Tree@V?$_Tset_traits@PAVInstance@RBX@@U?$less@PAVInstance@RBX@@@std@@V?$allocator@PAVInstance@RBX@@@4@$0A@@std@@@std@@QAE?AViterator@12@V312@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
