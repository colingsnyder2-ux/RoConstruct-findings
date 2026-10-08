// from server: 100% by auto
// roc 2008-06 007fadf0  unit: seg_007f0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fadf0
//
// 007fadf0  8b0df4dc9600         mov ecx, dword ptr [0x96dcf4]
// 007fadf6  85c9                 test ecx, ecx
// 007fadf8  7408                 je 0x7fae02
// 007fadfa  8b01                 mov eax, dword ptr [ecx]
// 007fadfc  8b10                 mov edx, dword ptr [eax]
// 007fadfe  6a01                 push 1
// 007fae00  ffd2                 call edx
// 007fae02  c3                   ret 
// library xtp-11.2.2/Source\SkinFramework\XTPSkinManager.cpp (function ??1CDestructor@CXTPSkinManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/SkinFramework/XTPSkinManager.cpp
