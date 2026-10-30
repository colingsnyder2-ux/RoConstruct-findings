// roc 2009-12 0085c3a0  unit: CXTPStatusBar  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085c3a0
//
// 0085c3a0  56                   push esi
// 0085c3a1  57                   push edi
// 0085c3a2  8bf1                 mov esi, ecx
// 0085c3a4  33ff                 xor edi, edi
// 0085c3a6  39bea0000000         cmp dword ptr [esi + 0xa0], edi
// 0085c3ac  7e25                 jle 0x85c3d3
// 0085c3ae  8bff                 mov edi, edi
// 0085c3b0  85ff                 test edi, edi
// 0085c3b2  7c46                 jl 0x85c3fa
// 0085c3b4  3bbea0000000         cmp edi, dword ptr [esi + 0xa0]
// 0085c3ba  7d3e                 jge 0x85c3fa
// 0085c3bc  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 0085c3c2  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 0085c3c5  e8127af9ff           call 0x7f3ddc
// 0085c3ca  47                   inc edi
// 0085c3cb  3bbea0000000         cmp edi, dword ptr [esi + 0xa0]
// 0085c3d1  7cdd                 jl 0x85c3b0
// 0085c3d3  6aff                 push -1
// 0085c3d5  6a00                 push 0
// 0085c3d7  8d8e98000000         lea ecx, [esi + 0x98]
// 0085c3dd  e8be8fffff           call 0x8553a0
// 0085c3e2  6a01                 push 1
// 0085c3e4  6a01                 push 1
// 0085c3e6  8bce                 mov ecx, esi
// 0085c3e8  c786bc00000000000000 mov dword ptr [esi + 0xbc], 0
// 0085c3f2  e8a9f9ffff           call 0x85bda0
// 0085c3f7  5f                   pop edi
// 0085c3f8  5e                   pop esi
// 0085c3f9  c3                   ret 
// 0085c3fa  e80d77f9ff           call 0x7f3b0c
// copied from an identical function in another client (function ?RemoveAll@CXTPStatusBar@@QAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/CommandBars/XTPStatusBar.cpp