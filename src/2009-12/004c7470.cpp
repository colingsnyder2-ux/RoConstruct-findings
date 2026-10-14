// roc 2009-12 004c7470  unit: G3D::ReferenceCountedObject  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004c7470
//
// 004c7470  6aff                 push -1
// 004c7472  68e4299300           push 0x9329e4
// 004c7477  64a100000000         mov eax, dword ptr fs:[0]
// 004c747d  50                   push eax
// 004c747e  64892500000000       mov dword ptr fs:[0], esp
// 004c7485  51                   push ecx
// 004c7486  56                   push esi
// 004c7487  57                   push edi
// 004c7488  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004c748c  8bf1                 mov esi, ecx
// 004c748e  57                   push edi
// 004c748f  8974240c             mov dword ptr [esp + 0xc], esi
// 004c7493  e8881ff4ff           call 0x409420
// 004c7498  8d4728               lea eax, [edi + 0x28]
// 004c749b  50                   push eax
// 004c749c  8d4e28               lea ecx, [esi + 0x28]
// 004c749f  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004c74a7  c7068c559b00         mov dword ptr [esi], 0x9b558c
// 004c74ad  ff15f0b69800         call dword ptr [0x98b6f0]
// 004c74b3  83c744               add edi, 0x44
// 004c74b6  57                   push edi
// 004c74b7  8d4e44               lea ecx, [esi + 0x44]
// 004c74ba  c644241801           mov byte ptr [esp + 0x18], 1
// 004c74bf  ff15f0b69800         call dword ptr [0x98b6f0]
// 004c74c5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004c74c9  5f                   pop edi
// 004c74ca  8bc6                 mov eax, esi
// 004c74cc  5e                   pop esi
// 004c74cd  64890d00000000       mov dword ptr fs:[0], ecx
// 004c74d4  83c410               add esp, 0x10
// 004c74d7  c20400               ret 4
// library g3d-6.09-rbx2008/G3Dcpp\GImage.cpp (function ??0Error@GImage@G3D@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GImage.cpp
