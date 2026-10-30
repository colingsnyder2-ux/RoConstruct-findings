// roc 2009-12 008336b0  unit: CRobloxTreeCtrl  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008336b0
//
// 008336b0  8b442404             mov eax, dword ptr [esp + 4]
// 008336b4  53                   push ebx
// 008336b5  56                   push esi
// 008336b6  8bf1                 mov esi, ecx
// 008336b8  8b5e04               mov ebx, dword ptr [esi + 4]
// 008336bb  894604               mov dword ptr [esi + 4], eax
// 008336be  85c0                 test eax, eax
// 008336c0  754e                 jne 0x833710
// 008336c2  8b4634               mov eax, dword ptr [esi + 0x34]
// 008336c5  8b4020               mov eax, dword ptr [eax + 0x20]
// 008336c8  57                   push edi
// 008336c9  6a00                 push 0
// 008336cb  6a09                 push 9
// 008336cd  680a110000           push 0x110a
// 008336d2  50                   push eax
// 008336d3  ff15c4cb9800         call dword ptr [0x98cbc4]
// 008336d9  8bf8                 mov edi, eax
// 008336db  85ff                 test edi, edi
// 008336dd  7411                 je 0x8336f0
// 008336df  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 008336e2  6a02                 push 2
// 008336e4  57                   push edi
// 008336e5  e81c300f00           call 0x926706
// 008336ea  a802                 test al, 2
// 008336ec  7502                 jne 0x8336f0
// 008336ee  33ff                 xor edi, edi
// 008336f0  8b16                 mov edx, dword ptr [esi]
// 008336f2  8b4250               mov eax, dword ptr [edx + 0x50]
// 008336f5  57                   push edi
// 008336f6  6a00                 push 0
// 008336f8  8bce                 mov ecx, esi
// 008336fa  ffd0                 call eax
// 008336fc  85ff                 test edi, edi
// 008336fe  7408                 je 0x833708
// 00833700  57                   push edi
// 00833701  8bce                 mov ecx, esi
// 00833703  e8c8edffff           call 0x8324d0
// 00833708  5f                   pop edi
// 00833709  5e                   pop esi
// 0083370a  8bc3                 mov eax, ebx
// 0083370c  5b                   pop ebx
// 0083370d  c20400               ret 4
// 00833710  5e                   pop esi
// 00833711  8bc3                 mov eax, ebx
// 00833713  5b                   pop ebx
// 00833714  c20400               ret 4
// copied from an identical function in another client (function ?EnableMultiSelect@CXTTreeBase@@UAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp