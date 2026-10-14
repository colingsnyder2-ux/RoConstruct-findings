// roc 2009-06 0049abe0  unit: G3D::ReferenceCountedObject  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049abe0
//
// 0049abe0  6aff                 push -1
// 0049abe2  68946b8500           push 0x856b94
// 0049abe7  64a100000000         mov eax, dword ptr fs:[0]
// 0049abed  50                   push eax
// 0049abee  64892500000000       mov dword ptr fs:[0], esp
// 0049abf5  51                   push ecx
// 0049abf6  56                   push esi
// 0049abf7  57                   push edi
// 0049abf8  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0049abfc  8bf1                 mov esi, ecx
// 0049abfe  57                   push edi
// 0049abff  8974240c             mov dword ptr [esp + 0xc], esi
// 0049ac03  e878e8f6ff           call 0x409480
// 0049ac08  8d4728               lea eax, [edi + 0x28]
// 0049ac0b  50                   push eax
// 0049ac0c  8d4e28               lea ecx, [esi + 0x28]
// 0049ac0f  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0049ac17  c70694fc8b00         mov dword ptr [esi], 0x8bfc94
// 0049ac1d  ff15b8e48900         call dword ptr [0x89e4b8]
// 0049ac23  83c744               add edi, 0x44
// 0049ac26  57                   push edi
// 0049ac27  8d4e44               lea ecx, [esi + 0x44]
// 0049ac2a  c644241801           mov byte ptr [esp + 0x18], 1
// 0049ac2f  ff15b8e48900         call dword ptr [0x89e4b8]
// 0049ac35  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0049ac39  5f                   pop edi
// 0049ac3a  8bc6                 mov eax, esi
// 0049ac3c  5e                   pop esi
// 0049ac3d  64890d00000000       mov dword ptr fs:[0], ecx
// 0049ac44  83c410               add esp, 0x10
// 0049ac47  c20400               ret 4
// library g3d-6.09-rbx2008/G3Dcpp\GImage.cpp (function ??0Error@GImage@G3D@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GImage.cpp
