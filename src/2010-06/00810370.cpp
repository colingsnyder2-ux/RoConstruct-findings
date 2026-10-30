// roc 2010-06 00810370  unit: CXTPStatusBar  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00810370
//
// 00810370  56                   push esi
// 00810371  57                   push edi
// 00810372  8bf1                 mov esi, ecx
// 00810374  33ff                 xor edi, edi
// 00810376  39bea0000000         cmp dword ptr [esi + 0xa0], edi
// 0081037c  7e25                 jle 0x8103a3
// 0081037e  8bff                 mov edi, edi
// 00810380  85ff                 test edi, edi
// 00810382  7c46                 jl 0x8103ca
// 00810384  3bbea0000000         cmp edi, dword ptr [esi + 0xa0]
// 0081038a  7d3e                 jge 0x8103ca
// 0081038c  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 00810392  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 00810395  e8827bf9ff           call 0x7a7f1c
// 0081039a  47                   inc edi
// 0081039b  3bbea0000000         cmp edi, dword ptr [esi + 0xa0]
// 008103a1  7cdd                 jl 0x810380
// 008103a3  6aff                 push -1
// 008103a5  6a00                 push 0
// 008103a7  8d8e98000000         lea ecx, [esi + 0x98]
// 008103ad  e84e0ffdff           call 0x7e1300
// 008103b2  6a01                 push 1
// 008103b4  6a01                 push 1
// 008103b6  8bce                 mov ecx, esi
// 008103b8  c786bc00000000000000 mov dword ptr [esi + 0xbc], 0
// 008103c2  e8a9f9ffff           call 0x80fd70
// 008103c7  5f                   pop edi
// 008103c8  5e                   pop esi
// 008103c9  c3                   ret 
// 008103ca  e87d78f9ff           call 0x7a7c4c
// copied from an identical function in another client (function ?RemoveAll@CXTPStatusBar@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/CommandBars/XTPStatusBar.cpp