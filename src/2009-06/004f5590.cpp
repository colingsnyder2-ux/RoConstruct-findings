// roc 2009-06 004f5590  unit: RBX::Network::ClientReplicator  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004f5590
//
// 004f5590  53                   push ebx
// 004f5591  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004f5595  8b4304               mov eax, dword ptr [ebx + 4]
// 004f5598  55                   push ebp
// 004f5599  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 004f559d  56                   push esi
// 004f559e  57                   push edi
// 004f559f  8d78ff               lea edi, [eax - 1]
// 004f55a2  99                   cdq 
// 004f55a3  2bc2                 sub eax, edx
// 004f55a5  d1f8                 sar eax, 1
// 004f55a7  8b4c8308             mov ecx, dword ptr [ebx + eax*4 + 8]
// 004f55ab  33f6                 xor esi, esi
// 004f55ad  3be9                 cmp ebp, ecx
// 004f55af  7421                 je 0x4f55d2
// 004f55b1  7305                 jae 0x4f55b8
// 004f55b3  8d78ff               lea edi, [eax - 1]
// 004f55b6  eb03                 jmp 0x4f55bb
// 004f55b8  8d7001               lea esi, [eax + 1]
// 004f55bb  8bc7                 mov eax, edi
// 004f55bd  2bc6                 sub eax, esi
// 004f55bf  99                   cdq 
// 004f55c0  2bc2                 sub eax, edx
// 004f55c2  d1f8                 sar eax, 1
// 004f55c4  03c6                 add eax, esi
// 004f55c6  3bf7                 cmp esi, edi
// 004f55c8  7f17                 jg 0x4f55e1
// 004f55ca  8b4c8308             mov ecx, dword ptr [ebx + eax*4 + 8]
// 004f55ce  3be9                 cmp ebp, ecx
// 004f55d0  75df                 jne 0x4f55b1
// 004f55d2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004f55d6  5f                   pop edi
// 004f55d7  5e                   pop esi
// 004f55d8  5d                   pop ebp
// 004f55d9  8901                 mov dword ptr [ecx], eax
// 004f55db  b001                 mov al, 1
// 004f55dd  5b                   pop ebx
// 004f55de  c20c00               ret 0xc
// 004f55e1  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004f55e5  5f                   pop edi
// 004f55e6  8932                 mov dword ptr [edx], esi
// 004f55e8  5e                   pop esi
// 004f55e9  5d                   pop ebp
// 004f55ea  32c0                 xor al, al
// 004f55ec  5b                   pop ebx
// 004f55ed  c20c00               ret 0xc
// library rbx2016-raknet/DS_Table.cpp (function ?GetIndexOf@?$BPlusTree@IPAURow@Table@DataStructures@@$0BA@@DataStructures@@IBE_NIPAU?$Page@IPAURow@Table@DataStructures@@$0BA@@2@PAH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet DS_Table.cpp
