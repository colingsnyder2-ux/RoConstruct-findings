// roc 2007-08 00573b70  unit: RBX::VPartInstance::?$FactoryProduct  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00573b70
//
// 00573b70  53                   push ebx
// 00573b71  56                   push esi
// 00573b72  57                   push edi
// 00573b73  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00573b77  8bd9                 mov ebx, ecx
// 00573b79  33f6                 xor esi, esi
// 00573b7b  eb03                 jmp 0x573b80
// 00573b7d  8d4900               lea ecx, [ecx]
// 00573b80  56                   push esi
// 00573b81  8bcb                 mov ecx, ebx
// 00573b83  e828310400           call 0x5b6cb0
// 00573b88  8bc8                 mov ecx, eax
// 00573b8a  e891550400           call 0x5b9120
// 00573b8f  8904b7               mov dword ptr [edi + esi*4], eax
// 00573b92  83c601               add esi, 1
// 00573b95  83fe06               cmp esi, 6
// 00573b98  7ce6                 jl 0x573b80
// 00573b9a  8bc7                 mov eax, edi
// 00573b9c  5f                   pop edi
// 00573b9d  5e                   pop esi
// 00573b9e  5b                   pop ebx
// 00573b9f  c20400               ret 4
// library openrbx-client/App\v8datamodel\PartInstance.cpp (function ?surf6@Surfaces@RBX@@QBE?AV?$Vector6@W4SurfaceType@RBX@@@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PartInstance.cpp
