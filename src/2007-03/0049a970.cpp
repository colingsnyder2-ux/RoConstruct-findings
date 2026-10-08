// roc 2007-03 0049a970  unit: seg_00490000  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0049a970
//
// 0049a970  51                   push ecx
// 0049a971  53                   push ebx
// 0049a972  55                   push ebp
// 0049a973  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0049a977  56                   push esi
// 0049a978  8bf1                 mov esi, ecx
// 0049a97a  57                   push edi
// 0049a97b  8b7e04               mov edi, dword ptr [esi + 4]
// 0049a97e  85ff                 test edi, edi
// 0049a980  740c                 je 0x49a98e
// 0049a982  8b4608               mov eax, dword ptr [esi + 8]
// 0049a985  8bc8                 mov ecx, eax
// 0049a987  2bcf                 sub ecx, edi
// 0049a989  c1f902               sar ecx, 2
// 0049a98c  7504                 jne 0x49a992
// 0049a98e  33db                 xor ebx, ebx
// 0049a990  eb21                 jmp 0x49a9b3
// 0049a992  3bf8                 cmp edi, eax
// 0049a994  7606                 jbe 0x49a99c
// 0049a996  ff1544e97700         call dword ptr [0x77e944]
// 0049a99c  85ed                 test ebp, ebp
// 0049a99e  7404                 je 0x49a9a4
// 0049a9a0  3bee                 cmp ebp, esi
// 0049a9a2  7406                 je 0x49a9aa
// 0049a9a4  ff1544e97700         call dword ptr [0x77e944]
// 0049a9aa  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0049a9ae  2bdf                 sub ebx, edi
// 0049a9b0  c1fb02               sar ebx, 2
// 0049a9b3  8b542424             mov edx, dword ptr [esp + 0x24]
// 0049a9b7  8b442420             mov eax, dword ptr [esp + 0x20]
// 0049a9bb  52                   push edx
// 0049a9bc  6a01                 push 1
// 0049a9be  50                   push eax
// 0049a9bf  55                   push ebp
// 0049a9c0  8bce                 mov ecx, esi
// 0049a9c2  e8c9fdffff           call 0x49a790
// 0049a9c7  8b7e04               mov edi, dword ptr [esi + 4]
// 0049a9ca  3b7e08               cmp edi, dword ptr [esi + 8]
// 0049a9cd  7606                 jbe 0x49a9d5
// 0049a9cf  ff1544e97700         call dword ptr [0x77e944]
// 0049a9d5  897c2420             mov dword ptr [esp + 0x20], edi
// 0049a9d9  8d3c9f               lea edi, [edi + ebx*4]
// 0049a9dc  3b7e08               cmp edi, dword ptr [esi + 8]
// 0049a9df  7705                 ja 0x49a9e6
// 0049a9e1  3b7e04               cmp edi, dword ptr [esi + 4]
// 0049a9e4  7306                 jae 0x49a9ec
// 0049a9e6  ff1544e97700         call dword ptr [0x77e944]
// 0049a9ec  8b442418             mov eax, dword ptr [esp + 0x18]
// 0049a9f0  897804               mov dword ptr [eax + 4], edi
// 0049a9f3  5f                   pop edi
// 0049a9f4  8930                 mov dword ptr [eax], esi
// 0049a9f6  5e                   pop esi
// 0049a9f7  5d                   pop ebp
// 0049a9f8  5b                   pop ebx
// 0049a9f9  59                   pop ecx
// 0049a9fa  c21000               ret 0x10
// library rbxgs/tool\DragUtilities.cpp (function ?insert@?$vector@PBVPrimitive@RBX@@V?$allocator@PBVPrimitive@RBX@@@std@@@std@@QAE?AV?$_Vector_iterator@PBVPrimitive@RBX@@V?$allocator@PBVPrimitive@RBX@@@std@@@2@V32@ABQBVPrimitive@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp
