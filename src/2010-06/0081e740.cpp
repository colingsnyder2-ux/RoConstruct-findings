// roc 2010-06 0081e740  unit: CXTPPropertyGridToolTip  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0081e740
//
// 0081e740  56                   push esi
// 0081e741  8bf1                 mov esi, ecx
// 0081e743  e8b8e1ffff           call 0x81c900
// 0081e748  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 0081e74e  6a01                 push 1
// 0081e750  6a01                 push 1
// 0081e752  50                   push eax
// 0081e753  8bce                 mov ecx, esi
// 0081e755  e836fcffff           call 0x81e390
// 0081e75a  8bb6b0000000         mov esi, dword ptr [esi + 0xb0]
// 0081e760  85f6                 test esi, esi
// 0081e762  7414                 je 0x81e778
// 0081e764  837e2000             cmp dword ptr [esi + 0x20], 0
// 0081e768  740e                 je 0x81e778
// 0081e76a  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0081e76d  6a00                 push 0
// 0081e76f  6a00                 push 0
// 0081e771  51                   push ecx
// 0081e772  ff1578ba9e00         call dword ptr [0x9eba78]
// 0081e778  5e                   pop esi
// 0081e779  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?Refresh@CXTPPropertyGridView@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
