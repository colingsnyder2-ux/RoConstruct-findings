// roc 2008-06 005682e0  unit: RBX::Selection  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005682e0
//
// 005682e0  53                   push ebx
// 005682e1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005682e5  8b8304010000         mov eax, dword ptr [ebx + 0x104]
// 005682eb  56                   push esi
// 005682ec  57                   push edi
// 005682ed  8bf1                 mov esi, ecx
// 005682ef  85c0                 test eax, eax
// 005682f1  7413                 je 0x568306
// 005682f3  8b8804010000         mov ecx, dword ptr [eax + 0x104]
// 005682f9  85c9                 test ecx, ecx
// 005682fb  7405                 je 0x568302
// 005682fd  e8ee22ecff           call 0x42a5f0
// 00568302  8bf8                 mov edi, eax
// 00568304  eb02                 jmp 0x568308
// 00568306  8bfb                 mov edi, ebx
// 00568308  8b4eb4               mov ecx, dword ptr [esi - 0x4c]
// 0056830b  81c6b0feffff         add esi, 0xfffffeb0
// 00568311  85c9                 test ecx, ecx
// 00568313  7407                 je 0x56831c
// 00568315  e8d622ecff           call 0x42a5f0
// 0056831a  eb02                 jmp 0x56831e
// 0056831c  8bc6                 mov eax, esi
// 0056831e  3bf8                 cmp edi, eax
// 00568320  7408                 je 0x56832a
// 00568322  53                   push ebx
// 00568323  8bce                 mov ecx, esi
// 00568325  e8e6f8ffff           call 0x567c10
// 0056832a  5f                   pop edi
// 0056832b  5e                   pop esi
// 0056832c  5b                   pop ebx
// 0056832d  c21000               ret 0x10
// library openrbx-client/App\v8datamodel\Selection.cpp (function ?onEvent@Selection@RBX@@UAEXPBVInstance@2@UAncestorChanged@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Selection.cpp
