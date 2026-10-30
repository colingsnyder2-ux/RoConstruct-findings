// roc 2011-06 008490c0  unit: CRobloxTreeCtrl  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008490c0
//
// 008490c0  8b442404             mov eax, dword ptr [esp + 4]
// 008490c4  53                   push ebx
// 008490c5  56                   push esi
// 008490c6  8bf1                 mov esi, ecx
// 008490c8  8b5e04               mov ebx, dword ptr [esi + 4]
// 008490cb  894604               mov dword ptr [esi + 4], eax
// 008490ce  85c0                 test eax, eax
// 008490d0  754e                 jne 0x849120
// 008490d2  8b4634               mov eax, dword ptr [esi + 0x34]
// 008490d5  8b4020               mov eax, dword ptr [eax + 0x20]
// 008490d8  57                   push edi
// 008490d9  6a00                 push 0
// 008490db  6a09                 push 9
// 008490dd  680a110000           push 0x110a
// 008490e2  50                   push eax
// 008490e3  ff15c019a400         call dword ptr [0xa419c0]
// 008490e9  8bf8                 mov edi, eax
// 008490eb  85ff                 test edi, edi
// 008490ed  7411                 je 0x849100
// 008490ef  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 008490f2  6a02                 push 2
// 008490f4  57                   push edi
// 008490f5  e85e371800           call 0x9cc858
// 008490fa  a802                 test al, 2
// 008490fc  7502                 jne 0x849100
// 008490fe  33ff                 xor edi, edi
// 00849100  8b16                 mov edx, dword ptr [esi]
// 00849102  8b4250               mov eax, dword ptr [edx + 0x50]
// 00849105  57                   push edi
// 00849106  6a00                 push 0
// 00849108  8bce                 mov ecx, esi
// 0084910a  ffd0                 call eax
// 0084910c  85ff                 test edi, edi
// 0084910e  7408                 je 0x849118
// 00849110  57                   push edi
// 00849111  8bce                 mov ecx, esi
// 00849113  e8c8edffff           call 0x847ee0
// 00849118  5f                   pop edi
// 00849119  5e                   pop esi
// 0084911a  8bc3                 mov eax, ebx
// 0084911c  5b                   pop ebx
// 0084911d  c20400               ret 4
// 00849120  5e                   pop esi
// 00849121  8bc3                 mov eax, ebx
// 00849123  5b                   pop ebx
// 00849124  c20400               ret 4
// copied from an identical function in another client (function ?EnableMultiSelect@CXTTreeBase@@UAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp