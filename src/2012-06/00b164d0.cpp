// roc 2012-06 00b164d0  unit: seg_00b10000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00b164d0
//
// 00b164d0  8b0db0e1e200         mov ecx, dword ptr [0xe2e1b0]
// 00b164d6  85c9                 test ecx, ecx
// 00b164d8  7408                 je 0xb164e2
// 00b164da  8b01                 mov eax, dword ptr [ecx]
// 00b164dc  8b10                 mov edx, dword ptr [eax]
// 00b164de  6a01                 push 1
// 00b164e0  ffd2                 call edx
// 00b164e2  c3                   ret 
// library xtp-15.2.1/Source\SkinFramework\XTPSkinManager.cpp (function ??1CDestructor@CXTPSkinManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/SkinFramework/XTPSkinManager.cpp
