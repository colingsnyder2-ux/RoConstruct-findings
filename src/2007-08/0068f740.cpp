// roc 2007-08 0068f740  unit: CXTPDockingPane  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068f740
//
// 0068f740  56                   push esi
// 0068f741  8b742418             mov esi, dword ptr [esp + 0x18]
// 0068f745  8d442408             lea eax, [esp + 8]
// 0068f749  50                   push eax
// 0068f74a  66c7060000           mov word ptr [esi], 0
// 0068f74f  e87c1cfeff           call 0x6713d0
// 0068f754  85c0                 test eax, eax
// 0068f756  7510                 jne 0x68f768
// 0068f758  66c7060300           mov word ptr [esi], 3
// 0068f75d  c7460825000000       mov dword ptr [esi + 8], 0x25
// 0068f764  5e                   pop esi
// 0068f765  c21400               ret 0x14
// 0068f768  b857000780           mov eax, 0x80070057
// 0068f76d  5e                   pop esi
// 0068f76e  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPane.cpp (function ?GetAccessibleRole@CXTPDockingPane@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPane.cpp
