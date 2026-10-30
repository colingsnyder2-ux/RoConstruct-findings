// roc 2010-06 008193b0  unit: CXTPPropertyGridItem  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008193b0
//
// 008193b0  8b8180000000         mov eax, dword ptr [ecx + 0x80]
// 008193b6  8b89bc000000         mov ecx, dword ptr [ecx + 0xbc]
// 008193bc  8b5120               mov edx, dword ptr [ecx + 0x20]
// 008193bf  56                   push esi
// 008193c0  8b742408             mov esi, dword ptr [esp + 8]
// 008193c4  56                   push esi
// 008193c5  50                   push eax
// 008193c6  6898010000           push 0x198
// 008193cb  52                   push edx
// 008193cc  ff1554ba9e00         call dword ptr [0x9eba54]
// 008193d2  8bc6                 mov eax, esi
// 008193d4  5e                   pop esi
// 008193d5  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?GetItemRect@CXTPPropertyGridItem@@QBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
