// roc 2008-06 0079ebd0  unit: CXTPDialogBar  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079ebd0
//
// 0079ebd0  56                   push esi
// 0079ebd1  8bf1                 mov esi, ecx
// 0079ebd3  e8686afaff           call 0x745640
// 0079ebd8  c7068cdb8600         mov dword ptr [esi], 0x86db8c
// 0079ebde  c746202cdb8600       mov dword ptr [esi + 0x20], 0x86db2c
// 0079ebe5  c786d40000001a000000 mov dword ptr [esi + 0xd4], 0x1a
// 0079ebef  8bc6                 mov eax, esi
// 0079ebf1  5e                   pop esi
// 0079ebf2  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ??0CControlButtonHide@CXTPDialogBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
