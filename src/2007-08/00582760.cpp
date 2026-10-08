// roc 2007-08 00582760  unit: RBX::VAccoutrement::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00582760
//
// 00582760  56                   push esi
// 00582761  8bf1                 mov esi, ecx
// 00582763  c706ccc07a00         mov dword ptr [esi], 0x7ac0cc
// 00582769  c74604c4c07a00       mov dword ptr [esi + 4], 0x7ac0c4
// 00582770  c74610bcc07a00       mov dword ptr [esi + 0x10], 0x7ac0bc
// 00582777  c74614acc07a00       mov dword ptr [esi + 0x14], 0x7ac0ac
// 0058277e  c7462c9cc07a00       mov dword ptr [esi + 0x2c], 0x7ac09c
// 00582785  c746448cc07a00       mov dword ptr [esi + 0x44], 0x7ac08c
// 0058278c  c7465c7cc07a00       mov dword ptr [esi + 0x5c], 0x7ac07c
// 00582793  c746746cc07a00       mov dword ptr [esi + 0x74], 0x7ac06c
// 0058279a  c7868c0000005cc07a00 mov dword ptr [esi + 0x8c], 0x7ac05c
// 005827a4  e807dbfbff           call 0x5402b0
// 005827a9  f644240801           test byte ptr [esp + 8], 1
// 005827ae  740a                 je 0x5827ba
// 005827b0  56                   push esi
// 005827b1  ff15c4e67700         call dword ptr [0x77e6c4]
// 005827b7  83c404               add esp, 4
// 005827ba  8bc6                 mov eax, esi
// 005827bc  5e                   pop esi
// 005827bd  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ??_G?$FactoryProduct@VCamera@RBX@@VInstance@2@$1?sCamera@2@3PBDB@RBX@@MAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
