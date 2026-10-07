// roc 2008-06 0076e8b0  unit: CXTPImageEditorDlg::CDlgToolBar  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0076e8b0
//
// 0076e8b0  8b442408             mov eax, dword ptr [esp + 8]
// 0076e8b4  99                   cdq 
// 0076e8b5  f7795c               idiv dword ptr [ecx + 0x5c]
// 0076e8b8  56                   push esi
// 0076e8b9  8b742408             mov esi, dword ptr [esp + 8]
// 0076e8bd  8906                 mov dword ptr [esi], eax
// 0076e8bf  8b442410             mov eax, dword ptr [esp + 0x10]
// 0076e8c3  99                   cdq 
// 0076e8c4  f77960               idiv dword ptr [ecx + 0x60]
// 0076e8c7  894604               mov dword ptr [esi + 4], eax
// 0076e8ca  8bc6                 mov eax, esi
// 0076e8cc  5e                   pop esi
// 0076e8cd  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPImageEditor.cpp (function ?ClientToPicture@CXTPImageEditorPicture@@QAE?AVCPoint@@V2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPImageEditor.cpp
