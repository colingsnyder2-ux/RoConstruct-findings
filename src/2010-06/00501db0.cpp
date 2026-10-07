// roc 2010-06 00501db0  unit: RBX::Network::ClientReplicator  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00501db0
//
// 00501db0  53                   push ebx
// 00501db1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00501db5  8b4304               mov eax, dword ptr [ebx + 4]
// 00501db8  55                   push ebp
// 00501db9  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00501dbd  56                   push esi
// 00501dbe  57                   push edi
// 00501dbf  8d78ff               lea edi, [eax - 1]
// 00501dc2  99                   cdq 
// 00501dc3  2bc2                 sub eax, edx
// 00501dc5  d1f8                 sar eax, 1
// 00501dc7  8b4c8308             mov ecx, dword ptr [ebx + eax*4 + 8]
// 00501dcb  33f6                 xor esi, esi
// 00501dcd  3be9                 cmp ebp, ecx
// 00501dcf  7421                 je 0x501df2
// 00501dd1  7305                 jae 0x501dd8
// 00501dd3  8d78ff               lea edi, [eax - 1]
// 00501dd6  eb03                 jmp 0x501ddb
// 00501dd8  8d7001               lea esi, [eax + 1]
// 00501ddb  8bc7                 mov eax, edi
// 00501ddd  2bc6                 sub eax, esi
// 00501ddf  99                   cdq 
// 00501de0  2bc2                 sub eax, edx
// 00501de2  d1f8                 sar eax, 1
// 00501de4  03c6                 add eax, esi
// 00501de6  3bf7                 cmp esi, edi
// 00501de8  7f17                 jg 0x501e01
// 00501dea  8b4c8308             mov ecx, dword ptr [ebx + eax*4 + 8]
// 00501dee  3be9                 cmp ebp, ecx
// 00501df0  75df                 jne 0x501dd1
// 00501df2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00501df6  5f                   pop edi
// 00501df7  5e                   pop esi
// 00501df8  5d                   pop ebp
// 00501df9  8901                 mov dword ptr [ecx], eax
// 00501dfb  b001                 mov al, 1
// 00501dfd  5b                   pop ebx
// 00501dfe  c20c00               ret 0xc
// 00501e01  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00501e05  5f                   pop edi
// 00501e06  8932                 mov dword ptr [edx], esi
// 00501e08  5e                   pop esi
// 00501e09  5d                   pop ebp
// 00501e0a  32c0                 xor al, al
// 00501e0c  5b                   pop ebx
// 00501e0d  c20c00               ret 0xc
// library rbx2016-raknet/DS_Table.cpp (function ?GetIndexOf@?$BPlusTree@IPAURow@Table@DataStructures@@$0BA@@DataStructures@@IBE_NIPAU?$Page@IPAURow@Table@DataStructures@@$0BA@@2@PAH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet DS_Table.cpp
