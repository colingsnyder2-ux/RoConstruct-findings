// from server: 100% by auto
// roc 2011-06 00877280  unit: CXTPPropertyGridView  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00877280
//
// 00877280  56                   push esi
// 00877281  8bf1                 mov esi, ecx
// 00877283  8b4620               mov eax, dword ptr [esi + 0x20]
// 00877286  85c0                 test eax, eax
// 00877288  741a                 je 0x8772a4
// 0087728a  6a00                 push 0
// 0087728c  6a00                 push 0
// 0087728e  6888010000           push 0x188
// 00877293  50                   push eax
// 00877294  ff15c019a400         call dword ptr [0xa419c0]
// 0087729a  50                   push eax
// 0087729b  8bce                 mov ecx, esi
// 0087729d  e89efcffff           call 0x876f40
// 008772a2  5e                   pop esi
// 008772a3  c3                   ret 
// 008772a4  33c0                 xor eax, eax
// 008772a6  5e                   pop esi
// 008772a7  c3                   ret 
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?GetSelectedItem@CXTPPropertyGridView@@AAEPAVCXTPPropertyGridItem@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridView.cpp
