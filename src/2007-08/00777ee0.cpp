// roc 2007-08 00777ee0  unit: seg_00770000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00777ee0
//
// 00777ee0  8b0d44cf8b00         mov ecx, dword ptr [0x8bcf44]
// 00777ee6  85c9                 test ecx, ecx
// 00777ee8  7408                 je 0x777ef2
// 00777eea  8b01                 mov eax, dword ptr [ecx]
// 00777eec  8b10                 mov edx, dword ptr [eax]
// 00777eee  6a01                 push 1
// 00777ef0  ffd2                 call edx
// 00777ef2  c3                   ret 
// library xtp-11.2.2-vc8/Source\SkinFramework\XTPSkinManager.cpp (function ??1CDestructor@CXTPSkinManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/SkinFramework/XTPSkinManager.cpp
