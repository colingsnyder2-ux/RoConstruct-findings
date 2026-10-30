// roc 2009-12 00800860  unit: CXTPPaintManager  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00800860
//
// 00800860  8b442408             mov eax, dword ptr [esp + 8]
// 00800864  83ec10               sub esp, 0x10
// 00800867  56                   push esi
// 00800868  8bf1                 mov esi, ecx
// 0080086a  50                   push eax
// 0080086b  8d4c2408             lea ecx, [esp + 8]
// 0080086f  e85caa0400           call 0x84b2d0
// 00800874  6a0f                 push 0xf
// 00800876  8bce                 mov ecx, esi
// 00800878  8bd0                 mov edx, eax
// 0080087a  e8c1cdffff           call 0x7fd640
// 0080087f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00800883  50                   push eax
// 00800884  52                   push edx
// 00800885  e8743dffff           call 0x7f45fe
// 0080088a  5e                   pop esi
// 0080088b  83c410               add esp, 0x10
// 0080088e  c20800               ret 8
// copied from an identical function in another client (function ?FillDockBar@CXTPPaintManager@@UAEXPAVCDC@@PAVCXTPDockBar@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPPaintManager.cpp