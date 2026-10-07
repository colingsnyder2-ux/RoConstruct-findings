// roc 2012-06 00a67120  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a67120
//
// 00a67120  8b1504a4e500         mov edx, dword ptr [0xe5a404]
// 00a67126  56                   push esi
// 00a67127  33c0                 xor eax, eax
// 00a67129  57                   push edi
// 00a6712a  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00a6712e  85d2                 test edx, edx
// 00a67130  7e18                 jle 0xa6714a
// 00a67132  8b3500a4e500         mov esi, dword ptr [0xe5a400]
// 00a67138  85c0                 test eax, eax
// 00a6713a  7c3c                 jl 0xa67178
// 00a6713c  3bc2                 cmp eax, edx
// 00a6713e  7d38                 jge 0xa67178
// 00a67140  3b3c86               cmp edi, dword ptr [esi + eax*4]
// 00a67143  7429                 je 0xa6716e
// 00a67145  40                   inc eax
// 00a67146  3bc2                 cmp eax, edx
// 00a67148  7cee                 jl 0xa67138
// 00a6714a  33c0                 xor eax, eax
// 00a6714c  f681a400000002       test byte ptr [ecx + 0xa4], 2
// 00a67153  742b                 je 0xa67180
// 00a67155  3bb8087ae000         cmp edi, dword ptr [eax + 0xe07a08]
// 00a6715b  7411                 je 0xa6716e
// 00a6715d  83c008               add eax, 8
// 00a67160  3d40010000           cmp eax, 0x140
// 00a67165  72ee                 jb 0xa67155
// 00a67167  5f                   pop edi
// 00a67168  33c0                 xor eax, eax
// 00a6716a  5e                   pop esi
// 00a6716b  c20400               ret 4
// 00a6716e  5f                   pop edi
// 00a6716f  b801000000           mov eax, 1
// 00a67174  5e                   pop esi
// 00a67175  c20400               ret 4
// 00a67178  e843b2f1ff           call 0x9823c0
// 00a6717d  8d4900               lea ecx, [ecx]
// 00a67180  3bb88879e000         cmp edi, dword ptr [eax + 0xe07988]
// 00a67186  74e6                 je 0xa6716e
// 00a67188  83c008               add eax, 8
// 00a6718b  3d80000000           cmp eax, 0x80
// 00a67190  72ee                 jb 0xa67180
// 00a67192  5f                   pop edi
// 00a67193  33c0                 xor eax, eax
// 00a67195  5e                   pop esi
// 00a67196  c20400               ret 4
// library xtp-13.2.1/Source\Controls\XTColorSelectorCtrl.cpp (function ?LookUpColor@CXTColorSelectorCtrl@@IAEHK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/Controls/XTColorSelectorCtrl.cpp
