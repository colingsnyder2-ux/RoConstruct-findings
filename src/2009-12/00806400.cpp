// roc 2009-12 00806400  unit: CXTPCommandBar  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00806400
//
// 00806400  56                   push esi
// 00806401  8bf1                 mov esi, ecx
// 00806403  83bee000000000       cmp dword ptr [esi + 0xe0], 0
// 0080640a  7410                 je 0x80641c
// 0080640c  8b06                 mov eax, dword ptr [esi]
// 0080640e  8b9048010000         mov edx, dword ptr [eax + 0x148]
// 00806414  6a00                 push 0
// 00806416  6a01                 push 1
// 00806418  6a00                 push 0
// 0080641a  ffd2                 call edx
// 0080641c  8d4654               lea eax, [esi + 0x54]
// 0080641f  50                   push eax
// 00806420  e8bba40600           call 0x8708e0
// 00806425  8bc8                 mov ecx, eax
// 00806427  e8e4a80600           call 0x870d10
// 0080642c  68b0647f00           push 0x7f64b0
// 00806431  b9d0bab900           mov ecx, 0xb9bad0
// 00806436  e801001200           call 0x92643c
// 0080643b  85c0                 test eax, eax
// 0080643d  7505                 jne 0x806444
// 0080643f  e8c8d6feff           call 0x7f3b0c
// 00806444  397020               cmp dword ptr [eax + 0x20], esi
// 00806447  7507                 jne 0x806450
// 00806449  c7402000000000       mov dword ptr [eax + 0x20], 0
// 00806450  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00806456  85c9                 test ecx, ecx
// 00806458  7405                 je 0x80645f
// 0080645a  e881ee0300           call 0x8452e0
// 0080645f  8b06                 mov eax, dword ptr [esi]
// 00806461  8b5068               mov edx, dword ptr [eax + 0x68]
// 00806464  8bce                 mov ecx, esi
// 00806466  5e                   pop esi
// 00806467  ffe2                 jmp edx
// copied from an identical function in another client (function ?OnRemoved@CXTPCommandBar@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp