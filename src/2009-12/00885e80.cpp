// roc 2009-12 00885e80  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00885e80
//
// 00885e80  56                   push esi
// 00885e81  8bf1                 mov esi, ecx
// 00885e83  e8f8d4ffff           call 0x883380
// 00885e88  c7066429a000         mov dword ptr [esi], 0xa02964
// 00885e8e  c7865804000000000000 mov dword ptr [esi + 0x458], 0
// 00885e98  c7864405000001000000 mov dword ptr [esi + 0x544], 1
// 00885ea2  8bc6                 mov eax, esi
// 00885ea4  5e                   pop esi
// 00885ea5  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ??0CXTPWhidbeyTheme@XTPPaintThemes@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp
