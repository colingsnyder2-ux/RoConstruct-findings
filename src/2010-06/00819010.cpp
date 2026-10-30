// roc 2010-06 00819010  unit: CXTPPropertyGridItem  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00819010
//
// 00819010  56                   push esi
// 00819011  8bf1                 mov esi, ecx
// 00819013  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 00819019  85c0                 test eax, eax
// 0081901b  742d                 je 0x81904a
// 0081901d  83be9400000000       cmp dword ptr [esi + 0x94], 0
// 00819024  7424                 je 0x81904a
// 00819026  8b8e80000000         mov ecx, dword ptr [esi + 0x80]
// 0081902c  8b5020               mov edx, dword ptr [eax + 0x20]
// 0081902f  6a00                 push 0
// 00819031  51                   push ecx
// 00819032  6886010000           push 0x186
// 00819037  52                   push edx
// 00819038  ff1554ba9e00         call dword ptr [0x9eba54]
// 0081903e  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 00819044  5e                   pop esi
// 00819045  e946420000           jmp 0x81d290
// 0081904a  5e                   pop esi
// 0081904b  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?Select@CXTPPropertyGridItem@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
