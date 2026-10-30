// roc 2009-12 0085cab0  unit: CXTPDockingPane  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085cab0
//
// 0085cab0  8b81bc000000         mov eax, dword ptr [ecx + 0xbc]
// 0085cab6  83f8ff               cmp eax, -1
// 0085cab9  7506                 jne 0x85cac1
// 0085cabb  8b81b8000000         mov eax, dword ptr [ecx + 0xb8]
// 0085cac1  8b542404             mov edx, dword ptr [esp + 4]
// 0085cac5  52                   push edx
// 0085cac6  50                   push eax
// 0085cac7  83c120               add ecx, 0x20
// 0085caca  e8713d0500           call 0x8b0840
// 0085cacf  8bc8                 mov ecx, eax
// 0085cad1  e8fabbfdff           call 0x8386d0
// 0085cad6  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?GetIcon@CXTPDockingPane@@UBEPAVCXTPImageManagerIcon@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
