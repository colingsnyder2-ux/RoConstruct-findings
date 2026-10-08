// roc 2007-03 005b8410  unit: seg_005b0000  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b8410
//
// 005b8410  51                   push ecx
// 005b8411  53                   push ebx
// 005b8412  55                   push ebp
// 005b8413  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005b8417  56                   push esi
// 005b8418  8bf1                 mov esi, ecx
// 005b841a  57                   push edi
// 005b841b  8b7e04               mov edi, dword ptr [esi + 4]
// 005b841e  85ff                 test edi, edi
// 005b8420  740c                 je 0x5b842e
// 005b8422  8b4608               mov eax, dword ptr [esi + 8]
// 005b8425  8bc8                 mov ecx, eax
// 005b8427  2bcf                 sub ecx, edi
// 005b8429  c1f902               sar ecx, 2
// 005b842c  7504                 jne 0x5b8432
// 005b842e  33db                 xor ebx, ebx
// 005b8430  eb21                 jmp 0x5b8453
// 005b8432  3bf8                 cmp edi, eax
// 005b8434  7606                 jbe 0x5b843c
// 005b8436  ff1544e97700         call dword ptr [0x77e944]
// 005b843c  85ed                 test ebp, ebp
// 005b843e  7404                 je 0x5b8444
// 005b8440  3bee                 cmp ebp, esi
// 005b8442  7406                 je 0x5b844a
// 005b8444  ff1544e97700         call dword ptr [0x77e944]
// 005b844a  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 005b844e  2bdf                 sub ebx, edi
// 005b8450  c1fb02               sar ebx, 2
// 005b8453  8b542424             mov edx, dword ptr [esp + 0x24]
// 005b8457  8b442420             mov eax, dword ptr [esp + 0x20]
// 005b845b  52                   push edx
// 005b845c  6a01                 push 1
// 005b845e  50                   push eax
// 005b845f  55                   push ebp
// 005b8460  8bce                 mov ecx, esi
// 005b8462  e859fdffff           call 0x5b81c0
// 005b8467  8b7e04               mov edi, dword ptr [esi + 4]
// 005b846a  3b7e08               cmp edi, dword ptr [esi + 8]
// 005b846d  7606                 jbe 0x5b8475
// 005b846f  ff1544e97700         call dword ptr [0x77e944]
// 005b8475  897c2420             mov dword ptr [esp + 0x20], edi
// 005b8479  8d3c9f               lea edi, [edi + ebx*4]
// 005b847c  3b7e08               cmp edi, dword ptr [esi + 8]
// 005b847f  7705                 ja 0x5b8486
// 005b8481  3b7e04               cmp edi, dword ptr [esi + 4]
// 005b8484  7306                 jae 0x5b848c
// 005b8486  ff1544e97700         call dword ptr [0x77e944]
// 005b848c  8b442418             mov eax, dword ptr [esp + 0x18]
// 005b8490  897804               mov dword ptr [eax + 4], edi
// 005b8493  5f                   pop edi
// 005b8494  8930                 mov dword ptr [eax], esi
// 005b8496  5e                   pop esi
// 005b8497  5d                   pop ebp
// 005b8498  5b                   pop ebx
// 005b8499  59                   pop ecx
// 005b849a  c21000               ret 0x10
// library rbxgs/tool\DragUtilities.cpp (function ?insert@?$vector@PBVPrimitive@RBX@@V?$allocator@PBVPrimitive@RBX@@@std@@@std@@QAE?AV?$_Vector_iterator@PBVPrimitive@RBX@@V?$allocator@PBVPrimitive@RBX@@@std@@@2@V32@ABQBVPrimitive@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp
