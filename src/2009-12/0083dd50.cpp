// roc 2009-12 0083dd50  unit: CXTPCustomizeSheet  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083dd50
//
// 0083dd50  8b89b8000000         mov ecx, dword ptr [ecx + 0xb8]
// 0083dd56  57                   push edi
// 0083dd57  8b7958               mov edi, dword ptr [ecx + 0x58]
// 0083dd5a  85ff                 test edi, edi
// 0083dd5c  742a                 je 0x83dd88
// 0083dd5e  56                   push esi
// 0083dd5f  6a00                 push 0
// 0083dd61  e83a70fdff           call 0x814da0
// 0083dd66  8bb700010000         mov esi, dword ptr [edi + 0x100]
// 0083dd6c  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0083dd72  8b01                 mov eax, dword ptr [ecx]
// 0083dd74  8b5058               mov edx, dword ptr [eax + 0x58]
// 0083dd77  57                   push edi
// 0083dd78  ffd2                 call edx
// 0083dd7a  8b06                 mov eax, dword ptr [esi]
// 0083dd7c  8b9084010000         mov edx, dword ptr [eax + 0x184]
// 0083dd82  8bce                 mov ecx, esi
// 0083dd84  5e                   pop esi
// 0083dd85  5f                   pop edi
// 0083dd86  ffe2                 jmp edx
// 0083dd88  5f                   pop edi
// 0083dd89  c3                   ret 
// copied from an identical function in another client (function ?OnCustomizeDelete@CXTPCustomizeSheet@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCustomizeSheet.cpp