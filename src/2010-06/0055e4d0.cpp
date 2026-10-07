// roc 2010-06 0055e4d0  unit: G3D::TextInput::WrongSymbol  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055e4d0
//
// 0055e4d0  6aff                 push -1
// 0055e4d2  6884179900           push 0x991784
// 0055e4d7  64a100000000         mov eax, dword ptr fs:[0]
// 0055e4dd  50                   push eax
// 0055e4de  64892500000000       mov dword ptr fs:[0], esp
// 0055e4e5  51                   push ecx
// 0055e4e6  56                   push esi
// 0055e4e7  57                   push edi
// 0055e4e8  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0055e4ec  8bf1                 mov esi, ecx
// 0055e4ee  57                   push edi
// 0055e4ef  8974240c             mov dword ptr [esp + 0xc], esi
// 0055e4f3  e8d8f6ffff           call 0x55dbd0
// 0055e4f8  8d4744               lea eax, [edi + 0x44]
// 0055e4fb  50                   push eax
// 0055e4fc  8d4e44               lea ecx, [esi + 0x44]
// 0055e4ff  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0055e507  c706400ba200         mov dword ptr [esi], 0xa20b40
// 0055e50d  ff150ca49e00         call dword ptr [0x9ea40c]
// 0055e513  83c760               add edi, 0x60
// 0055e516  57                   push edi
// 0055e517  8d4e60               lea ecx, [esi + 0x60]
// 0055e51a  c644241801           mov byte ptr [esp + 0x18], 1
// 0055e51f  ff150ca49e00         call dword ptr [0x9ea40c]
// 0055e525  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0055e529  5f                   pop edi
// 0055e52a  8bc6                 mov eax, esi
// 0055e52c  5e                   pop esi
// 0055e52d  64890d00000000       mov dword ptr fs:[0], ecx
// 0055e534  83c410               add esp, 0x10
// 0055e537  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??0WrongString@TextInput@G3D@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
