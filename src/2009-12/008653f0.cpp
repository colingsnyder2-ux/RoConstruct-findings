// roc 2009-12 008653f0  unit: CXTPPropertyGridItem  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008653f0
//
// 008653f0  8b8180000000         mov eax, dword ptr [ecx + 0x80]
// 008653f6  8b89bc000000         mov ecx, dword ptr [ecx + 0xbc]
// 008653fc  8b5120               mov edx, dword ptr [ecx + 0x20]
// 008653ff  56                   push esi
// 00865400  8b742408             mov esi, dword ptr [esp + 8]
// 00865404  56                   push esi
// 00865405  50                   push eax
// 00865406  6898010000           push 0x198
// 0086540b  52                   push edx
// 0086540c  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00865412  8bc6                 mov eax, esi
// 00865414  5e                   pop esi
// 00865415  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?GetItemRect@CXTPPropertyGridItem@@QBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
