// roc 2009-12 007f6670  unit: CXTPControl  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f6670
//
// 007f6670  8b442408             mov eax, dword ptr [esp + 8]
// 007f6674  56                   push esi
// 007f6675  8b742408             mov esi, dword ptr [esp + 8]
// 007f6679  6a00                 push 0
// 007f667b  51                   push ecx
// 007f667c  50                   push eax
// 007f667d  56                   push esi
// 007f667e  e8bdf8ffff           call 0x7f5f40
// 007f6683  8bc8                 mov ecx, eax
// 007f6685  e8e6760000           call 0x7fdd70
// 007f668a  8bc6                 mov eax, esi
// 007f668c  5e                   pop esi
// 007f668d  c20800               ret 8
// copied from an identical function in another client (function ?GetSize@CXTPControl@@UAE?AVCSize@@PAVCDC@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControl.cpp