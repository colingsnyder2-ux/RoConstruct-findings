// roc 2007-08 00426620  unit: CSelectionTreeCtrl  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00426620
//
// 00426620  56                   push esi
// 00426621  8bf1                 mov esi, ecx
// 00426623  e878fbffff           call 0x4261a0
// 00426628  c70674967800         mov dword ptr [esi], 0x789674
// 0042662e  c746046c967800       mov dword ptr [esi + 4], 0x78966c
// 00426635  c7461064967800       mov dword ptr [esi + 0x10], 0x789664
// 0042663c  c7461454967800       mov dword ptr [esi + 0x14], 0x789654
// 00426643  c7462c44967800       mov dword ptr [esi + 0x2c], 0x789644
// 0042664a  c7464434967800       mov dword ptr [esi + 0x44], 0x789634
// 00426651  c7465c24967800       mov dword ptr [esi + 0x5c], 0x789624
// 00426658  c7467414967800       mov dword ptr [esi + 0x74], 0x789614
// 0042665f  c7868c00000004967800 mov dword ptr [esi + 0x8c], 0x789604
// 00426669  8bc6                 mov eax, esi
// 0042666b  5e                   pop esi
// 0042666c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
