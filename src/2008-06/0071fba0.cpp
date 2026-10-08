// from server: 100% by auto
// roc 2008-06 0071fba0  unit: CXTPResourceManager  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071fba0
//
// 0071fba0  56                   push esi
// 0071fba1  8bf1                 mov esi, ecx
// 0071fba3  c60600               mov byte ptr [esi], 0
// 0071fba6  e8b5feffff           call 0x71fa60
// 0071fbab  8bc6                 mov eax, esi
// 0071fbad  5e                   pop esi
// 0071fbae  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPResourceManager.cpp (function ??0CManageState@CXTPResourceManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPResourceManager.cpp
