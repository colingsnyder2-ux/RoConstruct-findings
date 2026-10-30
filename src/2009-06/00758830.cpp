// roc 2009-06 00758830  unit: CRobloxTreeCtrl  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00758830
//
// 00758830  8b442404             mov eax, dword ptr [esp + 4]
// 00758834  53                   push ebx
// 00758835  56                   push esi
// 00758836  8bf1                 mov esi, ecx
// 00758838  8b5e04               mov ebx, dword ptr [esi + 4]
// 0075883b  894604               mov dword ptr [esi + 4], eax
// 0075883e  85c0                 test eax, eax
// 00758840  754e                 jne 0x758890
// 00758842  8b4634               mov eax, dword ptr [esi + 0x34]
// 00758845  8b4020               mov eax, dword ptr [eax + 0x20]
// 00758848  57                   push edi
// 00758849  6a00                 push 0
// 0075884b  6a09                 push 9
// 0075884d  680a110000           push 0x110a
// 00758852  50                   push eax
// 00758853  ff1590ee8900         call dword ptr [0x89ee90]
// 00758859  8bf8                 mov edi, eax
// 0075885b  85ff                 test edi, edi
// 0075885d  7411                 je 0x758870
// 0075885f  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00758862  6a02                 push 2
// 00758864  57                   push edi
// 00758865  e830390f00           call 0x84c19a
// 0075886a  a802                 test al, 2
// 0075886c  7502                 jne 0x758870
// 0075886e  33ff                 xor edi, edi
// 00758870  8b16                 mov edx, dword ptr [esi]
// 00758872  8b4250               mov eax, dword ptr [edx + 0x50]
// 00758875  57                   push edi
// 00758876  6a00                 push 0
// 00758878  8bce                 mov ecx, esi
// 0075887a  ffd0                 call eax
// 0075887c  85ff                 test edi, edi
// 0075887e  7408                 je 0x758888
// 00758880  57                   push edi
// 00758881  8bce                 mov ecx, esi
// 00758883  e8c8edffff           call 0x757650
// 00758888  5f                   pop edi
// 00758889  5e                   pop esi
// 0075888a  8bc3                 mov eax, ebx
// 0075888c  5b                   pop ebx
// 0075888d  c20400               ret 4
// 00758890  5e                   pop esi
// 00758891  8bc3                 mov eax, ebx
// 00758893  5b                   pop ebx
// 00758894  c20400               ret 4
// copied from an identical function in another client (function ?EnableMultiSelect@CXTTreeBase@@UAEHH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTTreeBase.cpp