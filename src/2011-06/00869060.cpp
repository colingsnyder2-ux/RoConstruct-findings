// from server: 100% by auto
// roc 2011-06 00869060  unit: CXTPTabClientWnd  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00869060
//
// 00869060  56                   push esi
// 00869061  8bf1                 mov esi, ecx
// 00869063  e8a0391600           call 0x9cca08
// 00869068  33c0                 xor eax, eax
// 0086906a  894664               mov dword ptr [esi + 0x64], eax
// 0086906d  894668               mov dword ptr [esi + 0x68], eax
// 00869070  894660               mov dword ptr [esi + 0x60], eax
// 00869073  89465c               mov dword ptr [esi + 0x5c], eax
// 00869076  c7060cb7ac00         mov dword ptr [esi], 0xacb70c
// 0086907c  8bc6                 mov eax, esi
// 0086907e  5e                   pop esi
// 0086907f  c3                   ret 
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGrid.cpp (function ??0CXTPPropertyGridToolBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGrid.cpp
