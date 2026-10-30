// roc 2009-12 0083fe90  unit: CXTPCustomizeSheet  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083fe90
//
// 0083fe90  56                   push esi
// 0083fe91  6a01                 push 1
// 0083fe93  8bf1                 mov esi, ecx
// 0083fe95  e84e3cfbff           call 0x7f3ae8
// 0083fe9a  33c0                 xor eax, eax
// 0083fe9c  398688000000         cmp dword ptr [esi + 0x88], eax
// 0083fea2  8bce                 mov ecx, esi
// 0083fea4  0f94c0               sete al
// 0083fea7  50                   push eax
// 0083fea8  6a65                 push 0x65
// 0083feaa  e88148fbff           call 0x7f4730
// 0083feaf  8bc8                 mov ecx, eax
// 0083feb1  e82840fbff           call 0x7f3ede
// 0083feb6  8bce                 mov ecx, esi
// 0083feb8  e8b3ffffff           call 0x83fe70
// 0083febd  8b9688000000         mov edx, dword ptr [esi + 0x88]
// 0083fec3  8b4874               mov ecx, dword ptr [eax + 0x74]
// 0083fec6  895120               mov dword ptr [ecx + 0x20], edx
// 0083fec9  5e                   pop esi
// 0083feca  c3                   ret 
// copied from an identical function in another client (function ?OnCheckFullMenus@CXTPCustomizeOptionsPage@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCustomizeOptionsPage.cpp