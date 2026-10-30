// roc 2009-06 00781a60  unit: CXTPDockingPane  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00781a60
//
// 00781a60  8b81bc000000         mov eax, dword ptr [ecx + 0xbc]
// 00781a66  83f8ff               cmp eax, -1
// 00781a69  7506                 jne 0x781a71
// 00781a6b  8b81b8000000         mov eax, dword ptr [ecx + 0xb8]
// 00781a71  8b542404             mov edx, dword ptr [esp + 4]
// 00781a75  52                   push edx
// 00781a76  50                   push eax
// 00781a77  83c120               add ecx, 0x20
// 00781a7a  e881420500           call 0x7d5d00
// 00781a7f  8bc8                 mov ecx, eax
// 00781a81  e8dabefdff           call 0x75d960
// 00781a86  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?GetIcon@CXTPDockingPane@@UBEPAVCXTPImageManagerIcon@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
