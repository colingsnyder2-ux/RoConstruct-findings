// roc 2009-12 0083dd10  unit: CXTPCustomizeSheet  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083dd10
//
// 0083dd10  8b81b8000000         mov eax, dword ptr [ecx + 0xb8]
// 0083dd16  56                   push esi
// 0083dd17  8b7058               mov esi, dword ptr [eax + 0x58]
// 0083dd1a  85f6                 test esi, esi
// 0083dd1c  7426                 je 0x83dd44
// 0083dd1e  8b16                 mov edx, dword ptr [esi]
// 0083dd20  8b5264               mov edx, dword ptr [edx + 0x64]
// 0083dd23  33c0                 xor eax, eax
// 0083dd25  398698000000         cmp dword ptr [esi + 0x98], eax
// 0083dd2b  8bce                 mov ecx, esi
// 0083dd2d  0f94c0               sete al
// 0083dd30  50                   push eax
// 0083dd31  ffd2                 call edx
// 0083dd33  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0083dd39  8b01                 mov eax, dword ptr [ecx]
// 0083dd3b  8b9084010000         mov edx, dword ptr [eax + 0x184]
// 0083dd41  5e                   pop esi
// 0083dd42  ffe2                 jmp edx
// 0083dd44  5e                   pop esi
// 0083dd45  c3                   ret 
// copied from an identical function in another client (function ?OnCustomizeBeginGroup@CXTPCustomizeSheet@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCustomizeSheet.cpp