// roc 2011-06 00864b60  unit: CXTPTabClientWnd::CNavigateButtonActiveFiles  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00864b60
//
// 00864b60  56                   push esi
// 00864b61  8bf1                 mov esi, ecx
// 00864b63  e898f60600           call 0x8d4200
// 00864b68  dd059864a600         fld qword ptr [0xa66498]
// 00864b6e  dd9e98000000         fstp qword ptr [esi + 0x98]
// 00864b74  c70654acac00         mov dword ptr [esi], 0xacac54
// 00864b7a  c7869000000000000000 mov dword ptr [esi + 0x90], 0
// 00864b84  8bc6                 mov eax, esi
// 00864b86  5e                   pop esi
// 00864b87  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ??0CWorkspace@CXTPTabClientWnd@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
