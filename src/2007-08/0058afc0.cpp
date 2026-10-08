// roc 2007-08 0058afc0  unit: RBX::VSoundChannel::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058afc0
//
// 0058afc0  56                   push esi
// 0058afc1  8bf1                 mov esi, ecx
// 0058afc3  c70674e97a00         mov dword ptr [esi], 0x7ae974
// 0058afc9  c746046ce97a00       mov dword ptr [esi + 4], 0x7ae96c
// 0058afd0  c7461064e97a00       mov dword ptr [esi + 0x10], 0x7ae964
// 0058afd7  c7461454e97a00       mov dword ptr [esi + 0x14], 0x7ae954
// 0058afde  c7462c44e97a00       mov dword ptr [esi + 0x2c], 0x7ae944
// 0058afe5  c7464434e97a00       mov dword ptr [esi + 0x44], 0x7ae934
// 0058afec  c7465c24e97a00       mov dword ptr [esi + 0x5c], 0x7ae924
// 0058aff3  c7467414e97a00       mov dword ptr [esi + 0x74], 0x7ae914
// 0058affa  c7868c00000004e97a00 mov dword ptr [esi + 0x8c], 0x7ae904
// 0058b004  e8a752fbff           call 0x5402b0
// 0058b009  f644240801           test byte ptr [esp + 8], 1
// 0058b00e  740a                 je 0x58b01a
// 0058b010  56                   push esi
// 0058b011  ff15c4e67700         call dword ptr [0x77e6c4]
// 0058b017  83c404               add esp, 4
// 0058b01a  8bc6                 mov eax, esi
// 0058b01c  5e                   pop esi
// 0058b01d  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ??_G?$FactoryProduct@VCamera@RBX@@VInstance@2@$1?sCamera@2@3PBDB@RBX@@MAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
