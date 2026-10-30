// roc 2012-06 009f2140  unit: CXTPPropertyGridItem  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f2140
//
// 009f2140  8b8180000000         mov eax, dword ptr [ecx + 0x80]
// 009f2146  8b89bc000000         mov ecx, dword ptr [ecx + 0xbc]
// 009f214c  8b5120               mov edx, dword ptr [ecx + 0x20]
// 009f214f  56                   push esi
// 009f2150  8b742408             mov esi, dword ptr [esp + 8]
// 009f2154  56                   push esi
// 009f2155  50                   push eax
// 009f2156  6898010000           push 0x198
// 009f215b  52                   push edx
// 009f215c  ff15043cb200         call dword ptr [0xb23c04]
// 009f2162  8bc6                 mov eax, esi
// 009f2164  5e                   pop esi
// 009f2165  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?GetItemRect@CXTPPropertyGridItem@@QBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
