// roc 2012-06 009e3fc0  unit: CXTPDockingPane  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e3fc0
//
// 009e3fc0  8b81bc000000         mov eax, dword ptr [ecx + 0xbc]
// 009e3fc6  83f8ff               cmp eax, -1
// 009e3fc9  7506                 jne 0x9e3fd1
// 009e3fcb  8b81b8000000         mov eax, dword ptr [ecx + 0xb8]
// 009e3fd1  8b542404             mov edx, dword ptr [esp + 4]
// 009e3fd5  52                   push edx
// 009e3fd6  50                   push eax
// 009e3fd7  83c120               add ecx, 0x20
// 009e3fda  e891610500           call 0xa3a170
// 009e3fdf  8bc8                 mov ecx, eax
// 009e3fe1  e8da25feff           call 0x9c65c0
// 009e3fe6  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?GetIcon@CXTPDockingPane@@UBEPAVCXTPImageManagerIcon@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
