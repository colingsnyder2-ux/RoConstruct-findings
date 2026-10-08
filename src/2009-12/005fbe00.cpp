// roc 2009-12 005fbe00  unit: G3D::TextInput::WrongSymbol  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fbe00
//
// 005fbe00  6aff                 push -1
// 005fbe02  687c3c9300           push 0x933c7c
// 005fbe07  64a100000000         mov eax, dword ptr fs:[0]
// 005fbe0d  50                   push eax
// 005fbe0e  64892500000000       mov dword ptr fs:[0], esp
// 005fbe15  51                   push ecx
// 005fbe16  56                   push esi
// 005fbe17  57                   push edi
// 005fbe18  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005fbe1c  8bf1                 mov esi, ecx
// 005fbe1e  8d4704               lea eax, [edi + 4]
// 005fbe21  50                   push eax
// 005fbe22  8d4e04               lea ecx, [esi + 4]
// 005fbe25  8974240c             mov dword ptr [esp + 0xc], esi
// 005fbe29  c706602d9c00         mov dword ptr [esi], 0x9c2d60
// 005fbe2f  ff15f0b69800         call dword ptr [0x98b6f0]
// 005fbe35  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 005fbe38  894e20               mov dword ptr [esi + 0x20], ecx
// 005fbe3b  8b5724               mov edx, dword ptr [edi + 0x24]
// 005fbe3e  83c728               add edi, 0x28
// 005fbe41  57                   push edi
// 005fbe42  8d4e28               lea ecx, [esi + 0x28]
// 005fbe45  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005fbe4d  895624               mov dword ptr [esi + 0x24], edx
// 005fbe50  ff15f0b69800         call dword ptr [0x98b6f0]
// 005fbe56  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005fbe5a  5f                   pop edi
// 005fbe5b  8bc6                 mov eax, esi
// 005fbe5d  5e                   pop esi
// 005fbe5e  64890d00000000       mov dword ptr fs:[0], ecx
// 005fbe65  83c410               add esp, 0x10
// 005fbe68  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??0TokenException@TextInput@G3D@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
