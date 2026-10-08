// from server: 100% by auto
// roc 2012-06 00a16290  unit: PAVCXTPHookManagerHookAble::?$CArray  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a16290
//
// 00a16290  56                   push esi
// 00a16291  6a0a                 push 0xa
// 00a16293  8bf1                 mov esi, ecx
// 00a16295  e8e6fdffff           call 0xa16080
// 00a1629a  8bc6                 mov eax, esi
// 00a1629c  5e                   pop esi
// 00a1629d  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPHookManager.cpp (function ??0CXTPHookManager@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPHookManager.cpp
