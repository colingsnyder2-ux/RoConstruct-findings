// roc 2009-06 0078a3e0  unit: CXTPPropertyGridItem  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0078a3e0
//
// 0078a3e0  8b8180000000         mov eax, dword ptr [ecx + 0x80]
// 0078a3e6  8b89bc000000         mov ecx, dword ptr [ecx + 0xbc]
// 0078a3ec  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0078a3ef  56                   push esi
// 0078a3f0  8b742408             mov esi, dword ptr [esp + 8]
// 0078a3f4  56                   push esi
// 0078a3f5  50                   push eax
// 0078a3f6  6898010000           push 0x198
// 0078a3fb  52                   push edx
// 0078a3fc  ff1590ee8900         call dword ptr [0x89ee90]
// 0078a402  8bc6                 mov eax, esi
// 0078a404  5e                   pop esi
// 0078a405  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?GetItemRect@CXTPPropertyGridItem@@QBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
