// from server: 100% by auto
// roc 2011-06 00962600  unit: VThreadLogManager::?$thread_specific_ptr::delete_data  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00962600
//
// 00962600  8b0db0f8d100         mov ecx, dword ptr [0xd1f8b0]
// 00962606  85c9                 test ecx, ecx
// 00962608  7408                 je 0x962612
// 0096260a  8b01                 mov eax, dword ptr [ecx]
// 0096260c  8b10                 mov edx, dword ptr [eax]
// 0096260e  6a01                 push 1
// 00962610  ffd2                 call edx
// 00962612  c3                   ret 
// library xtp-15.2.1/Source\SkinFramework\XTPSkinManager.cpp (function ??1CDestructor@CXTPSkinManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/SkinFramework/XTPSkinManager.cpp
