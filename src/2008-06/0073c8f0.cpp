// from server: 100% by auto
// roc 2008-06 0073c8f0  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0073c8f0
//
// 0073c8f0  56                   push esi
// 0073c8f1  8bf1                 mov esi, ecx
// 0073c8f3  e8f8d4ffff           call 0x739df0
// 0073c8f8  c7063c328600         mov dword ptr [esi], 0x86323c
// 0073c8fe  c7865804000000000000 mov dword ptr [esi + 0x458], 0
// 0073c908  c7864405000001000000 mov dword ptr [esi + 0x544], 1
// 0073c912  8bc6                 mov eax, esi
// 0073c914  5e                   pop esi
// 0073c915  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ??0CXTPWhidbeyTheme@XTPPaintThemes@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp
