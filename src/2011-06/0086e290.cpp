// roc 2011-06 0086e290  unit: CXTPDockingPane  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086e290
//
// 0086e290  8b81bc000000         mov eax, dword ptr [ecx + 0xbc]
// 0086e296  83f8ff               cmp eax, -1
// 0086e299  7506                 jne 0x86e2a1
// 0086e29b  8b81b8000000         mov eax, dword ptr [ecx + 0xb8]
// 0086e2a1  8b542404             mov edx, dword ptr [esp + 4]
// 0086e2a5  52                   push edx
// 0086e2a6  50                   push eax
// 0086e2a7  83c120               add ecx, 0x20
// 0086e2aa  e8b13a0500           call 0x8c1d60
// 0086e2af  8bc8                 mov ecx, eax
// 0086e2b1  e85afefdff           call 0x84e110
// 0086e2b6  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?GetIcon@CXTPDockingPane@@UBEPAVCXTPImageManagerIcon@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
