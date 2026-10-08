// roc 2011-06 00879bd0  unit: CXTPPropertyGridItem  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00879bd0
//
// 00879bd0  8b8180000000         mov eax, dword ptr [ecx + 0x80]
// 00879bd6  8b89bc000000         mov ecx, dword ptr [ecx + 0xbc]
// 00879bdc  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00879bdf  56                   push esi
// 00879be0  8b742408             mov esi, dword ptr [esp + 8]
// 00879be4  56                   push esi
// 00879be5  50                   push eax
// 00879be6  6898010000           push 0x198
// 00879beb  52                   push edx
// 00879bec  ff15c019a400         call dword ptr [0xa419c0]
// 00879bf2  8bc6                 mov eax, esi
// 00879bf4  5e                   pop esi
// 00879bf5  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?GetItemRect@CXTPPropertyGridItem@@QBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
