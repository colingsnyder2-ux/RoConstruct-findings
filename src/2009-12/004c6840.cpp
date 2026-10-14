// roc 2009-12 004c6840  unit: Ogre::istreamDataStream  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004c6840
//
// 004c6840  6aff                 push -1
// 004c6842  68e4299300           push 0x9329e4
// 004c6847  64a100000000         mov eax, dword ptr fs:[0]
// 004c684d  50                   push eax
// 004c684e  64892500000000       mov dword ptr fs:[0], esp
// 004c6855  51                   push ecx
// 004c6856  56                   push esi
// 004c6857  57                   push edi
// 004c6858  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004c685c  8bf1                 mov esi, ecx
// 004c685e  57                   push edi
// 004c685f  8974240c             mov dword ptr [esp + 0xc], esi
// 004c6863  e8282bf4ff           call 0x409390
// 004c6868  57                   push edi
// 004c6869  8d4e28               lea ecx, [esi + 0x28]
// 004c686c  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004c6874  c7068c559b00         mov dword ptr [esi], 0x9b558c
// 004c687a  ff15f0b69800         call dword ptr [0x98b6f0]
// 004c6880  8b442420             mov eax, dword ptr [esp + 0x20]
// 004c6884  50                   push eax
// 004c6885  8d4e44               lea ecx, [esi + 0x44]
// 004c6888  c644241801           mov byte ptr [esp + 0x18], 1
// 004c688d  ff15f0b69800         call dword ptr [0x98b6f0]
// 004c6893  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004c6897  5f                   pop edi
// 004c6898  8bc6                 mov eax, esi
// 004c689a  5e                   pop esi
// 004c689b  64890d00000000       mov dword ptr fs:[0], ecx
// 004c68a2  83c410               add esp, 0x10
// 004c68a5  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\GImage.cpp (function ??0Error@GImage@G3D@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GImage.cpp
