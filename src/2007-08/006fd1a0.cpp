// from server: 100% by auto
// roc 2007-08 006fd1a0  unit: CXTPTabManagerItem  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fd1a0
//
// 006fd1a0  8b442404             mov eax, dword ptr [esp + 4]
// 006fd1a4  394130               cmp dword ptr [ecx + 0x30], eax
// 006fd1a7  7408                 je 0x6fd1b1
// 006fd1a9  894130               mov dword ptr [ecx + 0x30], eax
// 006fd1ac  e84fffffff           call 0x6fd100
// 006fd1b1  c20400               ret 4
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabManager.cpp (function ?SetEnabled@CXTPTabManagerItem@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabManager.cpp
