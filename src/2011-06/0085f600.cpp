// from server: 100% by auto
// roc 2011-06 0085f600  unit: CXTPPropExchange  size: 208 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085f600
//
// 0085f600  0fb7442404           movzx eax, word ptr [esp + 4]
// 0085f605  83c0fe               add eax, -2
// 0085f608  83f863               cmp eax, 0x63
// 0085f60b  773e                 ja 0x85f64b
// 0085f60d  0fb6806cf68500       movzx eax, byte ptr [eax + 0x85f66c]
// 0085f614  ff248550f68500       jmp dword ptr [eax*4 + 0x85f650]
// 0085f61b  b804000000           mov eax, 4
// 0085f620  c20400               ret 4
// 0085f623  b801000000           mov eax, 1
// 0085f628  c20400               ret 4
// 0085f62b  b802000000           mov eax, 2
// 0085f630  c20400               ret 4
// 0085f633  b808000000           mov eax, 8
// 0085f638  c20400               ret 4
// 0085f63b  b810000000           mov eax, 0x10
// 0085f640  c20400               ret 4
// 0085f643  b80c000000           mov eax, 0xc
// 0085f648  c20400               ret 4
// 0085f64b  33c0                 xor eax, eax
// 0085f64d  c20400               ret 4
// 0085f650  2bf6                 sub esi, esi
// 0085f652  8500                 test dword ptr [eax], eax
// 0085f654  1bf6                 sbb esi, esi
// 0085f656  8500                 test dword ptr [eax], eax
// 0085f658  33f6                 xor esi, esi
// 0085f65a  8500                 test dword ptr [eax], eax
// 0085f65c  43                   inc ebx
// 0085f65d  f685003bf68500       test byte ptr [ebp - 0x7a09c500], 0
// 0085f664  23f6                 and esi, esi
// 0085f666  8500                 test dword ptr [eax], eax
// 0085f668  4b                   dec ebx
// 0085f669  f6850000010102       test byte ptr [ebp + 0x1010000], 2
// 0085f670  0203                 add al, byte ptr [ebx]
// 0085f672  0106                 add dword ptr [esi], eax
// 0085f674  06                   push es
// 0085f675  010406               add dword ptr [esi + eax], eax
// 0085f678  06                   push es
// 0085f679  06                   push es
// 0085f67a  06                   push es
// 0085f67b  0506060606           add eax, 0x6060606
// 0085f680  06                   push es
// 0085f681  06                   push es
// 0085f682  06                   push es
// 0085f683  06                   push es
// 0085f684  06                   push es
// 0085f685  06                   push es
// 0085f686  06                   push es
// 0085f687  06                   push es
// 0085f688  06                   push es
// 0085f689  06                   push es
// 0085f68a  06                   push es
// 0085f68b  06                   push es
// 0085f68c  06                   push es
// 0085f68d  06                   push es
// 0085f68e  06                   push es
// 0085f68f  06                   push es
// 0085f690  06                   push es
// 0085f691  06                   push es
// 0085f692  06                   push es
// 0085f693  06                   push es
// 0085f694  06                   push es
// 0085f695  06                   push es
// 0085f696  06                   push es
// 0085f697  06                   push es
// 0085f698  06                   push es
// 0085f699  06                   push es
// 0085f69a  06                   push es
// 0085f69b  06                   push es
// 0085f69c  06                   push es
// 0085f69d  06                   push es
// 0085f69e  06                   push es
// 0085f69f  06                   push es
// 0085f6a0  06                   push es
// 0085f6a1  06                   push es
// 0085f6a2  06                   push es
// 0085f6a3  06                   push es
// 0085f6a4  06                   push es
// 0085f6a5  06                   push es
// 0085f6a6  06                   push es
// 0085f6a7  06                   push es
// 0085f6a8  06                   push es
// 0085f6a9  06                   push es
// 0085f6aa  06                   push es
// 0085f6ab  06                   push es
// 0085f6ac  06                   push es
// 0085f6ad  06                   push es
// 0085f6ae  06                   push es
// 0085f6af  06                   push es
// 0085f6b0  06                   push es
// 0085f6b1  06                   push es
// 0085f6b2  06                   push es
// 0085f6b3  06                   push es
// 0085f6b4  06                   push es
// 0085f6b5  06                   push es
// 0085f6b6  06                   push es
// 0085f6b7  06                   push es
// 0085f6b8  06                   push es
// 0085f6b9  06                   push es
// 0085f6ba  06                   push es
// 0085f6bb  06                   push es
// 0085f6bc  06                   push es
// 0085f6bd  06                   push es
// 0085f6be  06                   push es
// 0085f6bf  06                   push es
// 0085f6c0  06                   push es
// 0085f6c1  06                   push es
// 0085f6c2  06                   push es
// 0085f6c3  06                   push es
// 0085f6c4  06                   push es
// 0085f6c5  06                   push es
// 0085f6c6  06                   push es
// 0085f6c7  06                   push es
// 0085f6c8  06                   push es
// 0085f6c9  06                   push es
// 0085f6ca  06                   push es
// 0085f6cb  06                   push es
// 0085f6cc  06                   push es
// 0085f6cd  06                   push es
// 0085f6ce  0402                 add al, 2
// library xtp-15.2.1/Source\Common\XTPPropExchange.cpp (function ?GetSizeOfVarType@CXTPPropExchange@@IAEKG@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPPropExchange.cpp
