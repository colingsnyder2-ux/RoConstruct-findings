// roc 2008-06 004cf280  unit: RBX::Network::PhysicsSender  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cf280
//
// 004cf280  53                   push ebx
// 004cf281  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004cf285  8b4304               mov eax, dword ptr [ebx + 4]
// 004cf288  55                   push ebp
// 004cf289  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 004cf28d  56                   push esi
// 004cf28e  57                   push edi
// 004cf28f  8d78ff               lea edi, [eax - 1]
// 004cf292  99                   cdq 
// 004cf293  2bc2                 sub eax, edx
// 004cf295  d1f8                 sar eax, 1
// 004cf297  8b4c8308             mov ecx, dword ptr [ebx + eax*4 + 8]
// 004cf29b  33f6                 xor esi, esi
// 004cf29d  3be9                 cmp ebp, ecx
// 004cf29f  7421                 je 0x4cf2c2
// 004cf2a1  7305                 jae 0x4cf2a8
// 004cf2a3  8d78ff               lea edi, [eax - 1]
// 004cf2a6  eb03                 jmp 0x4cf2ab
// 004cf2a8  8d7001               lea esi, [eax + 1]
// 004cf2ab  8bc7                 mov eax, edi
// 004cf2ad  2bc6                 sub eax, esi
// 004cf2af  99                   cdq 
// 004cf2b0  2bc2                 sub eax, edx
// 004cf2b2  d1f8                 sar eax, 1
// 004cf2b4  03c6                 add eax, esi
// 004cf2b6  3bf7                 cmp esi, edi
// 004cf2b8  7f17                 jg 0x4cf2d1
// 004cf2ba  8b4c8308             mov ecx, dword ptr [ebx + eax*4 + 8]
// 004cf2be  3be9                 cmp ebp, ecx
// 004cf2c0  75df                 jne 0x4cf2a1
// 004cf2c2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004cf2c6  5f                   pop edi
// 004cf2c7  5e                   pop esi
// 004cf2c8  5d                   pop ebp
// 004cf2c9  8901                 mov dword ptr [ecx], eax
// 004cf2cb  b001                 mov al, 1
// 004cf2cd  5b                   pop ebx
// 004cf2ce  c20c00               ret 0xc
// 004cf2d1  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004cf2d5  5f                   pop edi
// 004cf2d6  8932                 mov dword ptr [edx], esi
// 004cf2d8  5e                   pop esi
// 004cf2d9  5d                   pop ebp
// 004cf2da  32c0                 xor al, al
// 004cf2dc  5b                   pop ebx
// 004cf2dd  c20c00               ret 0xc
// library rbx2016-raknet/DS_Table.cpp (function ?GetIndexOf@?$BPlusTree@IPAURow@Table@DataStructures@@$0BA@@DataStructures@@IBE_NIPAU?$Page@IPAURow@Table@DataStructures@@$0BA@@2@PAH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet DS_Table.cpp
