// from server: 100% by auto
// roc 2011-06 0081f680  unit: CXTPCommandBar  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0081f680
//
// 0081f680  8b4178               mov eax, dword ptr [ecx + 0x78]
// 0081f683  83f801               cmp eax, 1
// 0081f686  7503                 jne 0x81f68b
// 0081f688  c20400               ret 4
// 0081f68b  83f802               cmp eax, 2
// 0081f68e  7510                 jne 0x81f6a0
// 0081f690  8b442404             mov eax, dword ptr [esp + 4]
// 0081f694  50                   push eax
// 0081f695  e836e50300           call 0x85dbd0
// 0081f69a  83c404               add esp, 4
// 0081f69d  c20400               ret 4
// 0081f6a0  33c0                 xor eax, eax
// 0081f6a2  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ?IsDrawReverted@CXTPImageManager@@QBEHPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp
