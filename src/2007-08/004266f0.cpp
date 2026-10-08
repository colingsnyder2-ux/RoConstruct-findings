// roc 2007-08 004266f0  unit: RBX::Reflection::Metadata::VClasses::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004266f0
//
// 004266f0  56                   push esi
// 004266f1  8bf1                 mov esi, ecx
// 004266f3  e8a8fbffff           call 0x4262a0
// 004266f8  c706e4977800         mov dword ptr [esi], 0x7897e4
// 004266fe  c74604dc977800       mov dword ptr [esi + 4], 0x7897dc
// 00426705  c74610d4977800       mov dword ptr [esi + 0x10], 0x7897d4
// 0042670c  c74614c4977800       mov dword ptr [esi + 0x14], 0x7897c4
// 00426713  c7462cb4977800       mov dword ptr [esi + 0x2c], 0x7897b4
// 0042671a  c74644a4977800       mov dword ptr [esi + 0x44], 0x7897a4
// 00426721  c7465c94977800       mov dword ptr [esi + 0x5c], 0x789794
// 00426728  c7467484977800       mov dword ptr [esi + 0x74], 0x789784
// 0042672f  c7868c00000074977800 mov dword ptr [esi + 0x8c], 0x789774
// 00426739  8bc6                 mov eax, esi
// 0042673b  5e                   pop esi
// 0042673c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
