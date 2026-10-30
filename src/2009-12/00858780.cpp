// roc 2009-12 00858780  unit: CXTPTabClientWnd  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00858780
//
// 00858780  56                   push esi
// 00858781  8bf1                 mov esi, ecx
// 00858783  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 0085878a  7438                 je 0x8587c4
// 0085878c  57                   push edi
// 0085878d  33ff                 xor edi, edi
// 0085878f  e8bcdeffff           call 0x856650
// 00858794  85c0                 test eax, eax
// 00858796  7e2b                 jle 0x8587c3
// 00858798  53                   push ebx
// 00858799  83cbff               or ebx, 0xffffffff
// 0085879c  55                   push ebp
// 0085879d  0beb                 or ebp, ebx
// 0085879f  90                   nop 
// 008587a0  8b4620               mov eax, dword ptr [esi + 0x20]
// 008587a3  55                   push ebp
// 008587a4  53                   push ebx
// 008587a5  50                   push eax
// 008587a6  57                   push edi
// 008587a7  8bce                 mov ecx, esi
// 008587a9  e892edffff           call 0x857540
// 008587ae  8bc8                 mov ecx, eax
// 008587b0  e88b720700           call 0x8cfa40
// 008587b5  8bce                 mov ecx, esi
// 008587b7  47                   inc edi
// 008587b8  e893deffff           call 0x856650
// 008587bd  3bf8                 cmp edi, eax
// 008587bf  7cdf                 jl 0x8587a0
// 008587c1  5d                   pop ebp
// 008587c2  5b                   pop ebx
// 008587c3  5f                   pop edi
// 008587c4  5e                   pop esi
// 008587c5  c3                   ret 
// copied from an identical function in another client (function ?OnMouseLeave@CXTPTabClientWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPTabClientWnd.cpp