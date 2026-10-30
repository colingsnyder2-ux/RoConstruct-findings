// roc 2010-06 007e7870  unit: CRobloxTreeCtrl  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e7870
//
// 007e7870  8b442404             mov eax, dword ptr [esp + 4]
// 007e7874  53                   push ebx
// 007e7875  56                   push esi
// 007e7876  8bf1                 mov esi, ecx
// 007e7878  8b5e04               mov ebx, dword ptr [esi + 4]
// 007e787b  894604               mov dword ptr [esi + 4], eax
// 007e787e  85c0                 test eax, eax
// 007e7880  754e                 jne 0x7e78d0
// 007e7882  8b4634               mov eax, dword ptr [esi + 0x34]
// 007e7885  8b4020               mov eax, dword ptr [eax + 0x20]
// 007e7888  57                   push edi
// 007e7889  6a00                 push 0
// 007e788b  6a09                 push 9
// 007e788d  680a110000           push 0x110a
// 007e7892  50                   push eax
// 007e7893  ff1554ba9e00         call dword ptr [0x9eba54]
// 007e7899  8bf8                 mov edi, eax
// 007e789b  85ff                 test edi, edi
// 007e789d  7411                 je 0x7e78b0
// 007e789f  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007e78a2  6a02                 push 2
// 007e78a4  57                   push edi
// 007e78a5  e898571900           call 0x97d042
// 007e78aa  a802                 test al, 2
// 007e78ac  7502                 jne 0x7e78b0
// 007e78ae  33ff                 xor edi, edi
// 007e78b0  8b16                 mov edx, dword ptr [esi]
// 007e78b2  8b4250               mov eax, dword ptr [edx + 0x50]
// 007e78b5  57                   push edi
// 007e78b6  6a00                 push 0
// 007e78b8  8bce                 mov ecx, esi
// 007e78ba  ffd0                 call eax
// 007e78bc  85ff                 test edi, edi
// 007e78be  7408                 je 0x7e78c8
// 007e78c0  57                   push edi
// 007e78c1  8bce                 mov ecx, esi
// 007e78c3  e8c8edffff           call 0x7e6690
// 007e78c8  5f                   pop edi
// 007e78c9  5e                   pop esi
// 007e78ca  8bc3                 mov eax, ebx
// 007e78cc  5b                   pop ebx
// 007e78cd  c20400               ret 4
// 007e78d0  5e                   pop esi
// 007e78d1  8bc3                 mov eax, ebx
// 007e78d3  5b                   pop ebx
// 007e78d4  c20400               ret 4
// copied from an identical function in another client (function ?EnableMultiSelect@CXTTreeBase@@UAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp