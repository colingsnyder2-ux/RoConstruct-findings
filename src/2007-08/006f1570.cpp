// from server: 100% by auto
// roc 2007-08 006f1570  unit: CXTPImageEditorDlg::CDlgToolBar  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f1570
//
// 006f1570  8b442408             mov eax, dword ptr [esp + 8]
// 006f1574  99                   cdq 
// 006f1575  f7795c               idiv dword ptr [ecx + 0x5c]
// 006f1578  56                   push esi
// 006f1579  8b742408             mov esi, dword ptr [esp + 8]
// 006f157d  8906                 mov dword ptr [esi], eax
// 006f157f  8b442410             mov eax, dword ptr [esp + 0x10]
// 006f1583  99                   cdq 
// 006f1584  f77960               idiv dword ptr [ecx + 0x60]
// 006f1587  894604               mov dword ptr [esi + 4], eax
// 006f158a  8bc6                 mov eax, esi
// 006f158c  5e                   pop esi
// 006f158d  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\CommandBars\XTPImageEditor.cpp (function ?ClientToPicture@CXTPImageEditorPicture@@QAE?AVCPoint@@V2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPImageEditor.cpp
