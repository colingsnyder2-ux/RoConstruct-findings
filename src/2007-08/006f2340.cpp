// roc 2007-08 006f2340  unit: CXTPImageEditorDlg  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f2340
//
// 006f2340  56                   push esi
// 006f2341  57                   push edi
// 006f2342  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006f2346  8bf1                 mov esi, ecx
// 006f2348  8d4674               lea eax, [esi + 0x74]
// 006f234b  50                   push eax
// 006f234c  6a67                 push 0x67
// 006f234e  57                   push edi
// 006f234f  e8c6640400           call 0x73881a
// 006f2354  81c6c8000000         add esi, 0xc8
// 006f235a  56                   push esi
// 006f235b  6a68                 push 0x68
// 006f235d  57                   push edi
// 006f235e  e8b7640400           call 0x73881a
// 006f2363  5f                   pop edi
// 006f2364  5e                   pop esi
// 006f2365  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPImageEditor.cpp (function ?DoDataExchange@CXTPImageEditorDlg@@MAEXPAVCDataExchange@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPImageEditor.cpp
