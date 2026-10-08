// from server: 100% by auto
// roc 2012-06 009e15d0  unit: CXTPTabClientWnd  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e15d0
//
// 009e15d0  56                   push esi
// 009e15d1  8bf1                 mov esi, ecx
// 009e15d3  e8de830b00           call 0xa999b6
// 009e15d8  33c0                 xor eax, eax
// 009e15da  894664               mov dword ptr [esi + 0x64], eax
// 009e15dd  894668               mov dword ptr [esi + 0x68], eax
// 009e15e0  894660               mov dword ptr [esi + 0x60], eax
// 009e15e3  89465c               mov dword ptr [esi + 0x5c], eax
// 009e15e6  c706fc6dc100         mov dword ptr [esi], 0xc16dfc
// 009e15ec  8bc6                 mov eax, esi
// 009e15ee  5e                   pop esi
// 009e15ef  c3                   ret 
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGrid.cpp (function ??0CXTPPropertyGridToolBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGrid.cpp
