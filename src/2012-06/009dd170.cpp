// roc 2012-06 009dd170  unit: CXTPTabClientWnd::CNavigateButtonActiveFiles  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009dd170
//
// 009dd170  56                   push esi
// 009dd171  8bf1                 mov esi, ecx
// 009dd173  e8d8f30600           call 0xa4c550
// 009dd178  dd05e007b500         fld qword ptr [0xb507e0]
// 009dd17e  dd9e98000000         fstp qword ptr [esi + 0x98]
// 009dd184  c7064463c100         mov dword ptr [esi], 0xc16344
// 009dd18a  c7869000000000000000 mov dword ptr [esi + 0x90], 0
// 009dd194  8bc6                 mov eax, esi
// 009dd196  5e                   pop esi
// 009dd197  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ??0CWorkspace@CXTPTabClientWnd@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
