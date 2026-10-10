// from server: 100% by tester
// roc 2007-03 00502e10  unit: seg_00500000  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00502e10
//
// 00502e10  6aff                 push -1
// 00502e12  68fc7b7400           push 0x747bfc
// 00502e17  64a100000000         mov eax, dword ptr fs:[0]
// 00502e1d  50                   push eax
// 00502e1e  51                   push ecx
// 00502e1f  56                   push esi
// 00502e20  57                   push edi
// 00502e21  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00502e26  33c4                 xor eax, esp
// 00502e28  50                   push eax
// 00502e29  8d442410             lea eax, [esp + 0x10]
// 00502e2d  64a300000000         mov dword ptr fs:[0], eax
// 00502e33  8bf1                 mov esi, ecx
// 00502e35  8974240c             mov dword ptr [esp + 0xc], esi
// 00502e39  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00502e3d  8d4704               lea eax, [edi + 4]
// 00502e40  50                   push eax
// 00502e41  8d4e04               lea ecx, [esi + 4]
// 00502e44  c70600057a00         mov dword ptr [esi], 0x7a0500
// 00502e4a  ff157ce77700         call dword ptr [0x77e77c]
// 00502e50  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00502e53  894e20               mov dword ptr [esi + 0x20], ecx
// 00502e56  8b5724               mov edx, dword ptr [edi + 0x24]
// 00502e59  83c728               add edi, 0x28
// 00502e5c  57                   push edi
// 00502e5d  8d4e28               lea ecx, [esi + 0x28]
// 00502e60  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00502e68  895624               mov dword ptr [esi + 0x24], edx
// 00502e6b  ff157ce77700         call dword ptr [0x77e77c]
// 00502e71  8bc6                 mov eax, esi
// 00502e73  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00502e77  64890d00000000       mov dword ptr fs:[0], ecx
// 00502e7e  59                   pop ecx
// 00502e7f  5f                   pop edi
// 00502e80  5e                   pop esi
// 00502e81  83c410               add esp, 0x10
// 00502e84  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??0TokenException@TextInput@G3D@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
