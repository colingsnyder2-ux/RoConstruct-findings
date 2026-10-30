// roc 2010-06 00810a80  unit: CXTPDockingPane  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00810a80
//
// 00810a80  8b81bc000000         mov eax, dword ptr [ecx + 0xbc]
// 00810a86  83f8ff               cmp eax, -1
// 00810a89  7506                 jne 0x810a91
// 00810a8b  8b81b8000000         mov eax, dword ptr [ecx + 0xb8]
// 00810a91  8b542404             mov edx, dword ptr [esp + 4]
// 00810a95  52                   push edx
// 00810a96  50                   push eax
// 00810a97  83c120               add ecx, 0x20
// 00810a9a  e8713e0500           call 0x864910
// 00810a9f  8bc8                 mov ecx, eax
// 00810aa1  e84abefdff           call 0x7ec8f0
// 00810aa6  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?GetIcon@CXTPDockingPane@@UBEPAVCXTPImageManagerIcon@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
