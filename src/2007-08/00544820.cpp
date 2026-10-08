// roc 2007-08 00544820  unit: RBX::VDebugSettings::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00544820
//
// 00544820  56                   push esi
// 00544821  8bf1                 mov esi, ecx
// 00544823  c706ac687a00         mov dword ptr [esi], 0x7a68ac
// 00544829  c74604a4687a00       mov dword ptr [esi + 4], 0x7a68a4
// 00544830  c746109c687a00       mov dword ptr [esi + 0x10], 0x7a689c
// 00544837  c746148c687a00       mov dword ptr [esi + 0x14], 0x7a688c
// 0054483e  c7462c7c687a00       mov dword ptr [esi + 0x2c], 0x7a687c
// 00544845  c746446c687a00       mov dword ptr [esi + 0x44], 0x7a686c
// 0054484c  c7465c5c687a00       mov dword ptr [esi + 0x5c], 0x7a685c
// 00544853  c746744c687a00       mov dword ptr [esi + 0x74], 0x7a684c
// 0054485a  c7868c0000003c687a00 mov dword ptr [esi + 0x8c], 0x7a683c
// 00544864  e847baffff           call 0x5402b0
// 00544869  f644240801           test byte ptr [esp + 8], 1
// 0054486e  740a                 je 0x54487a
// 00544870  56                   push esi
// 00544871  ff15c4e67700         call dword ptr [0x77e6c4]
// 00544877  83c404               add esp, 4
// 0054487a  8bc6                 mov eax, esi
// 0054487c  5e                   pop esi
// 0054487d  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ??_G?$FactoryProduct@VCamera@RBX@@VInstance@2@$1?sCamera@2@3PBDB@RBX@@MAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
