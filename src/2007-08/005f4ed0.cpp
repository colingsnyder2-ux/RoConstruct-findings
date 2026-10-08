// roc 2007-08 005f4ed0  unit: G3D::VColor3::V?$Value::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f4ed0
//
// 005f4ed0  56                   push esi
// 005f4ed1  8bf1                 mov esi, ecx
// 005f4ed3  c706ac057c00         mov dword ptr [esi], 0x7c05ac
// 005f4ed9  c74604a4057c00       mov dword ptr [esi + 4], 0x7c05a4
// 005f4ee0  c746109c057c00       mov dword ptr [esi + 0x10], 0x7c059c
// 005f4ee7  c746148c057c00       mov dword ptr [esi + 0x14], 0x7c058c
// 005f4eee  c7462c7c057c00       mov dword ptr [esi + 0x2c], 0x7c057c
// 005f4ef5  c746446c057c00       mov dword ptr [esi + 0x44], 0x7c056c
// 005f4efc  c7465c5c057c00       mov dword ptr [esi + 0x5c], 0x7c055c
// 005f4f03  c746744c057c00       mov dword ptr [esi + 0x74], 0x7c054c
// 005f4f0a  c7868c0000003c057c00 mov dword ptr [esi + 0x8c], 0x7c053c
// 005f4f14  e897b3f4ff           call 0x5402b0
// 005f4f19  f644240801           test byte ptr [esp + 8], 1
// 005f4f1e  740a                 je 0x5f4f2a
// 005f4f20  56                   push esi
// 005f4f21  ff15c4e67700         call dword ptr [0x77e6c4]
// 005f4f27  83c404               add esp, 4
// 005f4f2a  8bc6                 mov eax, esi
// 005f4f2c  5e                   pop esi
// 005f4f2d  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ??_G?$FactoryProduct@VCamera@RBX@@VInstance@2@$1?sCamera@2@3PBDB@RBX@@MAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
