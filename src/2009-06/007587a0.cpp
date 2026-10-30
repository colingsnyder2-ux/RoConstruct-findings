// roc 2009-06 007587a0  unit: CRobloxTreeCtrl  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007587a0
//
// 007587a0  53                   push ebx
// 007587a1  8b1d90ee8900         mov ebx, dword ptr [0x89ee90]
// 007587a7  56                   push esi
// 007587a8  57                   push edi
// 007587a9  8bf9                 mov edi, ecx
// 007587ab  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007587af  8b4734               mov eax, dword ptr [edi + 0x34]
// 007587b2  8b5020               mov edx, dword ptr [eax + 0x20]
// 007587b5  51                   push ecx
// 007587b6  6a07                 push 7
// 007587b8  680a110000           push 0x110a
// 007587bd  52                   push edx
// 007587be  ffd3                 call ebx
// 007587c0  8bf0                 mov esi, eax
// 007587c2  85f6                 test esi, esi
// 007587c4  7425                 je 0x7587eb
// 007587c6  6a02                 push 2
// 007587c8  56                   push esi
// 007587c9  8bcf                 mov ecx, edi
// 007587cb  e830eeffff           call 0x757600
// 007587d0  a802                 test al, 2
// 007587d2  751f                 jne 0x7587f3
// 007587d4  8b4734               mov eax, dword ptr [edi + 0x34]
// 007587d7  8b4020               mov eax, dword ptr [eax + 0x20]
// 007587da  56                   push esi
// 007587db  6a07                 push 7
// 007587dd  680a110000           push 0x110a
// 007587e2  50                   push eax
// 007587e3  ffd3                 call ebx
// 007587e5  8bf0                 mov esi, eax
// 007587e7  85f6                 test esi, esi
// 007587e9  75db                 jne 0x7587c6
// 007587eb  5f                   pop edi
// 007587ec  5e                   pop esi
// 007587ed  33c0                 xor eax, eax
// 007587ef  5b                   pop ebx
// 007587f0  c20400               ret 4
// 007587f3  5f                   pop edi
// 007587f4  8bc6                 mov eax, esi
// 007587f6  5e                   pop esi
// 007587f7  5b                   pop ebx
// 007587f8  c20400               ret 4
// copied from an identical function in another client (function ?GetPrevSelectedItem@CXTTreeBase@@UBEPAU_TREEITEM@@PAU2@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTTreeBase.cpp