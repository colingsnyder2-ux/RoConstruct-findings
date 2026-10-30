// from server: 100% by auto
// roc 2012-06 009ef800  unit: CXTPPropertyGridView  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ef800
//
// 009ef800  56                   push esi
// 009ef801  8bf1                 mov esi, ecx
// 009ef803  8b4620               mov eax, dword ptr [esi + 0x20]
// 009ef806  85c0                 test eax, eax
// 009ef808  741a                 je 0x9ef824
// 009ef80a  6a00                 push 0
// 009ef80c  6a00                 push 0
// 009ef80e  6888010000           push 0x188
// 009ef813  50                   push eax
// 009ef814  ff15043cb200         call dword ptr [0xb23c04]
// 009ef81a  50                   push eax
// 009ef81b  8bce                 mov ecx, esi
// 009ef81d  e89efcffff           call 0x9ef4c0
// 009ef822  5e                   pop esi
// 009ef823  c3                   ret 
// 009ef824  33c0                 xor eax, eax
// 009ef826  5e                   pop esi
// 009ef827  c3                   ret 
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?GetSelectedItem@CXTPPropertyGridView@@AAEPAVCXTPPropertyGridItem@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridView.cpp
