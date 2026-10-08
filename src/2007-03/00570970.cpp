// roc 2007-03 00570970  unit: seg_00570000  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00570970
//
// 00570970  51                   push ecx
// 00570971  53                   push ebx
// 00570972  55                   push ebp
// 00570973  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00570977  56                   push esi
// 00570978  8bf1                 mov esi, ecx
// 0057097a  57                   push edi
// 0057097b  8b7e04               mov edi, dword ptr [esi + 4]
// 0057097e  85ff                 test edi, edi
// 00570980  740c                 je 0x57098e
// 00570982  8b4608               mov eax, dword ptr [esi + 8]
// 00570985  8bc8                 mov ecx, eax
// 00570987  2bcf                 sub ecx, edi
// 00570989  c1f902               sar ecx, 2
// 0057098c  7504                 jne 0x570992
// 0057098e  33db                 xor ebx, ebx
// 00570990  eb21                 jmp 0x5709b3
// 00570992  3bf8                 cmp edi, eax
// 00570994  7606                 jbe 0x57099c
// 00570996  ff1544e97700         call dword ptr [0x77e944]
// 0057099c  85ed                 test ebp, ebp
// 0057099e  7404                 je 0x5709a4
// 005709a0  3bee                 cmp ebp, esi
// 005709a2  7406                 je 0x5709aa
// 005709a4  ff1544e97700         call dword ptr [0x77e944]
// 005709aa  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 005709ae  2bdf                 sub ebx, edi
// 005709b0  c1fb02               sar ebx, 2
// 005709b3  8b542424             mov edx, dword ptr [esp + 0x24]
// 005709b7  8b442420             mov eax, dword ptr [esp + 0x20]
// 005709bb  52                   push edx
// 005709bc  6a01                 push 1
// 005709be  50                   push eax
// 005709bf  55                   push ebp
// 005709c0  8bce                 mov ecx, esi
// 005709c2  e8e9fdffff           call 0x5707b0
// 005709c7  8b7e04               mov edi, dword ptr [esi + 4]
// 005709ca  3b7e08               cmp edi, dword ptr [esi + 8]
// 005709cd  7606                 jbe 0x5709d5
// 005709cf  ff1544e97700         call dword ptr [0x77e944]
// 005709d5  897c2420             mov dword ptr [esp + 0x20], edi
// 005709d9  8d3c9f               lea edi, [edi + ebx*4]
// 005709dc  3b7e08               cmp edi, dword ptr [esi + 8]
// 005709df  7705                 ja 0x5709e6
// 005709e1  3b7e04               cmp edi, dword ptr [esi + 4]
// 005709e4  7306                 jae 0x5709ec
// 005709e6  ff1544e97700         call dword ptr [0x77e944]
// 005709ec  8b442418             mov eax, dword ptr [esp + 0x18]
// 005709f0  897804               mov dword ptr [eax + 4], edi
// 005709f3  5f                   pop edi
// 005709f4  8930                 mov dword ptr [eax], esi
// 005709f6  5e                   pop esi
// 005709f7  5d                   pop ebp
// 005709f8  5b                   pop ebx
// 005709f9  59                   pop ecx
// 005709fa  c21000               ret 0x10
// library rbxgs/tool\DragUtilities.cpp (function ?insert@?$vector@PBVPrimitive@RBX@@V?$allocator@PBVPrimitive@RBX@@@std@@@std@@QAE?AV?$_Vector_iterator@PBVPrimitive@RBX@@V?$allocator@PBVPrimitive@RBX@@@std@@@2@V32@ABQBVPrimitive@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp
