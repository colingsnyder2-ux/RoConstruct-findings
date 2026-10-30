// from server: 100% by auto
// roc 2008-06 00707510  unit: CXTPDockingPane  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00707510
//
// 00707510  8b81bc000000         mov eax, dword ptr [ecx + 0xbc]
// 00707516  83f8ff               cmp eax, -1
// 00707519  7506                 jne 0x707521
// 0070751b  8b81b8000000         mov eax, dword ptr [ecx + 0xb8]
// 00707521  8b542404             mov edx, dword ptr [esp + 4]
// 00707525  52                   push edx
// 00707526  50                   push eax
// 00707527  83c120               add ecx, 0x20
// 0070752a  e8715f0500           call 0x75d4a0
// 0070752f  8bc8                 mov ecx, eax
// 00707531  e84adbfdff           call 0x6e5080
// 00707536  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?GetIcon@CXTPDockingPane@@UBEPAVCXTPImageManagerIcon@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
