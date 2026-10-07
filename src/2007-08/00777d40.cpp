// roc 2007-08 00777d40  unit: seg_00770000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00777d40
//
// 00777d40  8b0d94be8b00         mov ecx, dword ptr [0x8bbe94]
// 00777d46  85c9                 test ecx, ecx
// 00777d48  7408                 je 0x777d52
// 00777d4a  8b01                 mov eax, dword ptr [ecx]
// 00777d4c  8b10                 mov edx, dword ptr [eax]
// 00777d4e  6a01                 push 1
// 00777d50  ffd2                 call edx
// 00777d52  c3                   ret 
// library xtp-11.2.2-vc8/Source\SkinFramework\XTPSkinManager.cpp (function ??1CDestructor@CXTPSkinManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/SkinFramework/XTPSkinManager.cpp
