// roc 2010-06 00484660  unit: G3D::ReferenceCountedObject  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00484660
//
// 00484660  6aff                 push -1
// 00484662  68a45b9800           push 0x985ba4
// 00484667  64a100000000         mov eax, dword ptr fs:[0]
// 0048466d  50                   push eax
// 0048466e  64892500000000       mov dword ptr fs:[0], esp
// 00484675  51                   push ecx
// 00484676  56                   push esi
// 00484677  57                   push edi
// 00484678  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0048467c  8bf1                 mov esi, ecx
// 0048467e  57                   push edi
// 0048467f  8974240c             mov dword ptr [esp + 0xc], esi
// 00484683  e8984df8ff           call 0x409420
// 00484688  8d4728               lea eax, [edi + 0x28]
// 0048468b  50                   push eax
// 0048468c  8d4e28               lea ecx, [esi + 0x28]
// 0048468f  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00484697  c7063c32a100         mov dword ptr [esi], 0xa1323c
// 0048469d  ff150ca49e00         call dword ptr [0x9ea40c]
// 004846a3  83c744               add edi, 0x44
// 004846a6  57                   push edi
// 004846a7  8d4e44               lea ecx, [esi + 0x44]
// 004846aa  c644241801           mov byte ptr [esp + 0x18], 1
// 004846af  ff150ca49e00         call dword ptr [0x9ea40c]
// 004846b5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004846b9  5f                   pop edi
// 004846ba  8bc6                 mov eax, esi
// 004846bc  5e                   pop esi
// 004846bd  64890d00000000       mov dword ptr fs:[0], ecx
// 004846c4  83c410               add esp, 0x10
// 004846c7  c20400               ret 4
// library g3d-6.09-rbx2008/G3Dcpp\GImage.cpp (function ??0Error@GImage@G3D@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GImage.cpp
