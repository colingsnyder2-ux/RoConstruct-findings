// roc 2011-06 00a35790  unit: seg_00a30000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35790
//
// 00a35790  8b0dc4dfcb00         mov ecx, dword ptr [0xcbdfc4]
// 00a35796  85c9                 test ecx, ecx
// 00a35798  7408                 je 0xa357a2
// 00a3579a  8b01                 mov eax, dword ptr [ecx]
// 00a3579c  8b10                 mov edx, dword ptr [eax]
// 00a3579e  6a01                 push 1
// 00a357a0  ffd2                 call edx
// 00a357a2  c3                   ret 
// library xtp-15.2.1/Source\SkinFramework\XTPSkinManager.cpp (function ??1CDestructor@CXTPSkinManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/SkinFramework/XTPSkinManager.cpp
