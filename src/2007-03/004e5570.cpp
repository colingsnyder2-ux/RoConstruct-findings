// roc 2007-03 004e5570  unit: seg_004e0000  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e5570
//
// 004e5570  51                   push ecx
// 004e5571  53                   push ebx
// 004e5572  55                   push ebp
// 004e5573  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004e5577  56                   push esi
// 004e5578  8bf1                 mov esi, ecx
// 004e557a  57                   push edi
// 004e557b  8b7e04               mov edi, dword ptr [esi + 4]
// 004e557e  85ff                 test edi, edi
// 004e5580  740c                 je 0x4e558e
// 004e5582  8b4608               mov eax, dword ptr [esi + 8]
// 004e5585  8bc8                 mov ecx, eax
// 004e5587  2bcf                 sub ecx, edi
// 004e5589  c1f902               sar ecx, 2
// 004e558c  7504                 jne 0x4e5592
// 004e558e  33db                 xor ebx, ebx
// 004e5590  eb21                 jmp 0x4e55b3
// 004e5592  3bf8                 cmp edi, eax
// 004e5594  7606                 jbe 0x4e559c
// 004e5596  ff1544e97700         call dword ptr [0x77e944]
// 004e559c  85ed                 test ebp, ebp
// 004e559e  7404                 je 0x4e55a4
// 004e55a0  3bee                 cmp ebp, esi
// 004e55a2  7406                 je 0x4e55aa
// 004e55a4  ff1544e97700         call dword ptr [0x77e944]
// 004e55aa  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 004e55ae  2bdf                 sub ebx, edi
// 004e55b0  c1fb02               sar ebx, 2
// 004e55b3  8b542424             mov edx, dword ptr [esp + 0x24]
// 004e55b7  8b442420             mov eax, dword ptr [esp + 0x20]
// 004e55bb  52                   push edx
// 004e55bc  6a01                 push 1
// 004e55be  50                   push eax
// 004e55bf  55                   push ebp
// 004e55c0  8bce                 mov ecx, esi
// 004e55c2  e809f8ffff           call 0x4e4dd0
// 004e55c7  8b7e04               mov edi, dword ptr [esi + 4]
// 004e55ca  3b7e08               cmp edi, dword ptr [esi + 8]
// 004e55cd  7606                 jbe 0x4e55d5
// 004e55cf  ff1544e97700         call dword ptr [0x77e944]
// 004e55d5  897c2420             mov dword ptr [esp + 0x20], edi
// 004e55d9  8d3c9f               lea edi, [edi + ebx*4]
// 004e55dc  3b7e08               cmp edi, dword ptr [esi + 8]
// 004e55df  7705                 ja 0x4e55e6
// 004e55e1  3b7e04               cmp edi, dword ptr [esi + 4]
// 004e55e4  7306                 jae 0x4e55ec
// 004e55e6  ff1544e97700         call dword ptr [0x77e944]
// 004e55ec  8b442418             mov eax, dword ptr [esp + 0x18]
// 004e55f0  897804               mov dword ptr [eax + 4], edi
// 004e55f3  5f                   pop edi
// 004e55f4  8930                 mov dword ptr [eax], esi
// 004e55f6  5e                   pop esi
// 004e55f7  5d                   pop ebp
// 004e55f8  5b                   pop ebx
// 004e55f9  59                   pop ecx
// 004e55fa  c21000               ret 0x10
// library rbxgs/tool\DragUtilities.cpp (function ?insert@?$vector@PBVPrimitive@RBX@@V?$allocator@PBVPrimitive@RBX@@@std@@@std@@QAE?AV?$_Vector_iterator@PBVPrimitive@RBX@@V?$allocator@PBVPrimitive@RBX@@@std@@@2@V32@ABQBVPrimitive@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp
