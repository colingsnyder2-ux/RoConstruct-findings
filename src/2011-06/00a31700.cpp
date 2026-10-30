// from server: 100% by auto
// roc 2011-06 00a31700  unit: seg_00a30000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a31700
//
// 00a31700  8b0d3439cb00         mov ecx, dword ptr [0xcb3934]
// 00a31706  85c9                 test ecx, ecx
// 00a31708  7408                 je 0xa31712
// 00a3170a  8b01                 mov eax, dword ptr [ecx]
// 00a3170c  8b10                 mov edx, dword ptr [eax]
// 00a3170e  6a01                 push 1
// 00a31710  ffd2                 call edx
// 00a31712  c3                   ret 
// library xtp-15.2.1/Source\SkinFramework\XTPSkinManager.cpp (function ??1CDestructor@CXTPSkinManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/SkinFramework/XTPSkinManager.cpp
