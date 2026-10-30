// from server: 100% by auto
// roc 2008-06 006fa260  unit: CXTPPrintingDialog  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fa260
//
// 006fa260  56                   push esi
// 006fa261  8bf1                 mov esi, ecx
// 006fa263  e818230c00           call 0x7bc580
// 006fa268  33c0                 xor eax, eax
// 006fa26a  894664               mov dword ptr [esi + 0x64], eax
// 006fa26d  894668               mov dword ptr [esi + 0x68], eax
// 006fa270  894660               mov dword ptr [esi + 0x60], eax
// 006fa273  89465c               mov dword ptr [esi + 0x5c], eax
// 006fa276  c706aca78500         mov dword ptr [esi], 0x85a7ac
// 006fa27c  8bc6                 mov eax, esi
// 006fa27e  5e                   pop esi
// 006fa27f  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ??0CXTPPropertyGridToolBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
