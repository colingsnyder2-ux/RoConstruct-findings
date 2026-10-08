// from server: 100% by auto
// roc 2008-06 00711bf0  unit: CXTPPropertyGridItem  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00711bf0
//
// 00711bf0  8b8180000000         mov eax, dword ptr [ecx + 0x80]
// 00711bf6  8b89bc000000         mov ecx, dword ptr [ecx + 0xbc]
// 00711bfc  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00711bff  56                   push esi
// 00711c00  8b742408             mov esi, dword ptr [esp + 8]
// 00711c04  56                   push esi
// 00711c05  50                   push eax
// 00711c06  6898010000           push 0x198
// 00711c0b  52                   push edx
// 00711c0c  ff15142e8000         call dword ptr [0x802e14]
// 00711c12  8bc6                 mov eax, esi
// 00711c14  5e                   pop esi
// 00711c15  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?GetItemRect@CXTPPropertyGridItem@@QBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
