// roc 2012-06 009c14b0  unit: CRobloxTreeCtrl  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c14b0
//
// 009c14b0  53                   push ebx
// 009c14b1  8b1d043cb200         mov ebx, dword ptr [0xb23c04]
// 009c14b7  56                   push esi
// 009c14b8  57                   push edi
// 009c14b9  8bf9                 mov edi, ecx
// 009c14bb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009c14bf  8b4734               mov eax, dword ptr [edi + 0x34]
// 009c14c2  8b5020               mov edx, dword ptr [eax + 0x20]
// 009c14c5  51                   push ecx
// 009c14c6  6a07                 push 7
// 009c14c8  680a110000           push 0x110a
// 009c14cd  52                   push edx
// 009c14ce  ffd3                 call ebx
// 009c14d0  8bf0                 mov esi, eax
// 009c14d2  85f6                 test esi, esi
// 009c14d4  7425                 je 0x9c14fb
// 009c14d6  6a02                 push 2
// 009c14d8  56                   push esi
// 009c14d9  8bcf                 mov ecx, edi
// 009c14db  e830eeffff           call 0x9c0310
// 009c14e0  a802                 test al, 2
// 009c14e2  751f                 jne 0x9c1503
// 009c14e4  8b4734               mov eax, dword ptr [edi + 0x34]
// 009c14e7  8b4020               mov eax, dword ptr [eax + 0x20]
// 009c14ea  56                   push esi
// 009c14eb  6a07                 push 7
// 009c14ed  680a110000           push 0x110a
// 009c14f2  50                   push eax
// 009c14f3  ffd3                 call ebx
// 009c14f5  8bf0                 mov esi, eax
// 009c14f7  85f6                 test esi, esi
// 009c14f9  75db                 jne 0x9c14d6
// 009c14fb  5f                   pop edi
// 009c14fc  5e                   pop esi
// 009c14fd  33c0                 xor eax, eax
// 009c14ff  5b                   pop ebx
// 009c1500  c20400               ret 4
// 009c1503  5f                   pop edi
// 009c1504  8bc6                 mov eax, esi
// 009c1506  5e                   pop esi
// 009c1507  5b                   pop ebx
// 009c1508  c20400               ret 4
// copied from an identical function in another client (function ?GetPrevSelectedItem@CXTTreeBase@@UBEPAU_TREEITEM@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp