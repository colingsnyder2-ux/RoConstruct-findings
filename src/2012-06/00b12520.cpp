// from server: 100% by auto
// roc 2012-06 00b12520  unit: seg_00b10000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00b12520
//
// 00b12520  8b0d58a2e100         mov ecx, dword ptr [0xe1a258]
// 00b12526  85c9                 test ecx, ecx
// 00b12528  7408                 je 0xb12532
// 00b1252a  8b01                 mov eax, dword ptr [ecx]
// 00b1252c  8b10                 mov edx, dword ptr [eax]
// 00b1252e  6a01                 push 1
// 00b12530  ffd2                 call edx
// 00b12532  c3                   ret 
// library xtp-15.2.1/Source\SkinFramework\XTPSkinManager.cpp (function ??1CDestructor@CXTPSkinManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/SkinFramework/XTPSkinManager.cpp
