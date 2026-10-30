// roc 2007-03 00679030  unit: seg_00670000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00679030
//
// 00679030  8b81bc000000         mov eax, dword ptr [ecx + 0xbc]
// 00679036  83f8ff               cmp eax, -1
// 00679039  7506                 jne 0x679041
// 0067903b  8b81b8000000         mov eax, dword ptr [ecx + 0xb8]
// 00679041  8b542404             mov edx, dword ptr [esp + 4]
// 00679045  52                   push edx
// 00679046  50                   push eax
// 00679047  83c120               add ecx, 0x20
// 0067904a  e8d1040500           call 0x6c9520
// 0067904f  8bc8                 mov ecx, eax
// 00679051  e81a11feff           call 0x65a170
// 00679056  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?GetIcon@CXTPDockingPane@@UBEPAVCXTPImageManagerIcon@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
