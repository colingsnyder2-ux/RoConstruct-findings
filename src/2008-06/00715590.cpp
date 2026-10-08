// from server: 100% by auto
// roc 2008-06 00715590  unit: CXTPPropertyGridView  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00715590
//
// 00715590  56                   push esi
// 00715591  8bf1                 mov esi, ecx
// 00715593  8b4620               mov eax, dword ptr [esi + 0x20]
// 00715596  85c0                 test eax, eax
// 00715598  741a                 je 0x7155b4
// 0071559a  6a00                 push 0
// 0071559c  6a00                 push 0
// 0071559e  6888010000           push 0x188
// 007155a3  50                   push eax
// 007155a4  ff15142e8000         call dword ptr [0x802e14]
// 007155aa  50                   push eax
// 007155ab  8bce                 mov ecx, esi
// 007155ad  e89efcffff           call 0x715250
// 007155b2  5e                   pop esi
// 007155b3  c3                   ret 
// 007155b4  33c0                 xor eax, eax
// 007155b6  5e                   pop esi
// 007155b7  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?GetSelectedItem@CXTPPropertyGridView@@AAEPAVCXTPPropertyGridItem@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
