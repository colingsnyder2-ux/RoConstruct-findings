// roc 2009-12 00808520  unit: CXTPCommandBar  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00808520
//
// 00808520  56                   push esi
// 00808521  8bf1                 mov esi, ecx
// 00808523  e868fbffff           call 0x808090
// 00808528  85c0                 test eax, eax
// 0080852a  7458                 je 0x808584
// 0080852c  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0080852f  8d442408             lea eax, [esp + 8]
// 00808533  50                   push eax
// 00808534  51                   push ecx
// 00808535  ff1534cc9800         call dword ptr [0x98cc34]
// 0080853b  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0080853f  8b442408             mov eax, dword ptr [esp + 8]
// 00808543  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00808549  52                   push edx
// 0080854a  50                   push eax
// 0080854b  e8d0d00300           call 0x845620
// 00808550  85c0                 test eax, eax
// 00808552  7427                 je 0x80857b
// 00808554  83b88400000000       cmp dword ptr [eax + 0x84], 0
// 0080855b  7f1e                 jg 0x80857b
// 0080855d  8b80fc000000         mov eax, dword ptr [eax + 0xfc]
// 00808563  83f802               cmp eax, 2
// 00808566  740a                 je 0x808572
// 00808568  83f803               cmp eax, 3
// 0080856b  7405                 je 0x808572
// 0080856d  83f804               cmp eax, 4
// 00808570  7509                 jne 0x80857b
// 00808572  b805000000           mov eax, 5
// 00808577  5e                   pop esi
// 00808578  c20800               ret 8
// 0080857b  b801000000           mov eax, 1
// 00808580  5e                   pop esi
// 00808581  c20800               ret 8
// 00808584  8bce                 mov ecx, esi
// 00808586  e8a5b8feff           call 0x7f3e30
// 0080858b  5e                   pop esi
// 0080858c  c20800               ret 8
// copied from an identical function in another client (function ?OnNcHitTest@CXTPCommandBar@@QAEJVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp