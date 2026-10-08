// from server: 100% by auto
// roc 2010-06 0055dbd0  unit: G3D::TextInput::WrongSymbol  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055dbd0
//
// 0055dbd0  6aff                 push -1
// 0055dbd2  68bc5f9800           push 0x985fbc
// 0055dbd7  64a100000000         mov eax, dword ptr fs:[0]
// 0055dbdd  50                   push eax
// 0055dbde  64892500000000       mov dword ptr fs:[0], esp
// 0055dbe5  51                   push ecx
// 0055dbe6  56                   push esi
// 0055dbe7  57                   push edi
// 0055dbe8  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0055dbec  8bf1                 mov esi, ecx
// 0055dbee  8d4704               lea eax, [edi + 4]
// 0055dbf1  50                   push eax
// 0055dbf2  8d4e04               lea ecx, [esi + 4]
// 0055dbf5  8974240c             mov dword ptr [esp + 0xc], esi
// 0055dbf9  c706880aa200         mov dword ptr [esi], 0xa20a88
// 0055dbff  ff150ca49e00         call dword ptr [0x9ea40c]
// 0055dc05  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0055dc08  894e20               mov dword ptr [esi + 0x20], ecx
// 0055dc0b  8b5724               mov edx, dword ptr [edi + 0x24]
// 0055dc0e  83c728               add edi, 0x28
// 0055dc11  57                   push edi
// 0055dc12  8d4e28               lea ecx, [esi + 0x28]
// 0055dc15  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0055dc1d  895624               mov dword ptr [esi + 0x24], edx
// 0055dc20  ff150ca49e00         call dword ptr [0x9ea40c]
// 0055dc26  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0055dc2a  5f                   pop edi
// 0055dc2b  8bc6                 mov eax, esi
// 0055dc2d  5e                   pop esi
// 0055dc2e  64890d00000000       mov dword ptr fs:[0], ecx
// 0055dc35  83c410               add esp, 0x10
// 0055dc38  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??0TokenException@TextInput@G3D@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
