// roc 2009-12 0085b390  unit: CXTPStatusBar  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085b390
//
// 0085b390  56                   push esi
// 0085b391  8bf1                 mov esi, ecx
// 0085b393  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 0085b399  85c0                 test eax, eax
// 0085b39b  7f07                 jg 0x85b3a4
// 0085b39d  83c8ff               or eax, 0xffffffff
// 0085b3a0  5e                   pop esi
// 0085b3a1  c20400               ret 4
// 0085b3a4  33d2                 xor edx, edx
// 0085b3a6  57                   push edi
// 0085b3a7  85c0                 test eax, eax
// 0085b3a9  7e1b                 jle 0x85b3c6
// 0085b3ab  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0085b3af  90                   nop 
// 0085b3b0  52                   push edx
// 0085b3b1  8bce                 mov ecx, esi
// 0085b3b3  e848ffffff           call 0x85b300
// 0085b3b8  397820               cmp dword ptr [eax + 0x20], edi
// 0085b3bb  7411                 je 0x85b3ce
// 0085b3bd  42                   inc edx
// 0085b3be  3b96a0000000         cmp edx, dword ptr [esi + 0xa0]
// 0085b3c4  7cea                 jl 0x85b3b0
// 0085b3c6  5f                   pop edi
// 0085b3c7  83c8ff               or eax, 0xffffffff
// 0085b3ca  5e                   pop esi
// 0085b3cb  c20400               ret 4
// 0085b3ce  5f                   pop edi
// 0085b3cf  8bc2                 mov eax, edx
// 0085b3d1  5e                   pop esi
// 0085b3d2  c20400               ret 4
// copied from an identical function in another client (function ?CommandToIndex@CXTPStatusBar@@QBEHI@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/CommandBars/XTPStatusBar.cpp