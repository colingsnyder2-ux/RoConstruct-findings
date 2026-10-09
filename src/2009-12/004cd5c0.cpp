// roc 2009-12 004cd5c0  unit: G3D::VARArea  size: 575 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cd5c0
//
// 004cd5c0  6aff                 push -1
// 004cd5c2  6858cf9300           push 0x93cf58
// 004cd5c7  64a100000000         mov eax, dword ptr fs:[0]
// 004cd5cd  50                   push eax
// 004cd5ce  64892500000000       mov dword ptr fs:[0], esp
// 004cd5d5  83ec74               sub esp, 0x74
// 004cd5d8  53                   push ebx
// 004cd5d9  56                   push esi
// 004cd5da  57                   push edi
// 004cd5db  8bf1                 mov esi, ecx
// 004cd5dd  8d86d8070000         lea eax, [esi + 0x7d8]
// 004cd5e3  50                   push eax
// 004cd5e4  8d4c2414             lea ecx, [esp + 0x14]
// 004cd5e8  c784248c00000000000000 mov dword ptr [esp + 0x8c], 0
// 004cd5f3  e808631200           call 0x5f3900
// 004cd5f8  0f57c0               xorps xmm0, xmm0
// 004cd5fb  bb01000000           mov ebx, 1
// 004cd600  841d2cccb700         test byte ptr [0xb7cc2c], bl
// 004cd606  751e                 jne 0x4cd626
// 004cd608  091d2cccb700         or dword ptr [0xb7cc2c], ebx
// 004cd60e  f30f110520ccb700     movss dword ptr [0xb7cc20], xmm0
// 004cd616  f30f110524ccb700     movss dword ptr [0xb7cc24], xmm0
// 004cd61e  f30f110528ccb700     movss dword ptr [0xb7cc28], xmm0
// 004cd626  f30f100520ccb700     movss xmm0, dword ptr [0xb7cc20]
// 004cd62e  f30f11442434         movss dword ptr [esp + 0x34], xmm0
// 004cd634  f30f100524ccb700     movss xmm0, dword ptr [0xb7cc24]
// 004cd63c  51                   push ecx
// 004cd63d  f30f1144243c         movss dword ptr [esp + 0x3c], xmm0
// 004cd643  f30f100528ccb700     movss xmm0, dword ptr [0xb7cc28]
// 004cd64b  8bcc                 mov ecx, esp
// 004cd64d  f30f11442440         movss dword ptr [esp + 0x40], xmm0
// 004cd653  c70100000000         mov dword ptr [ecx], 0
// 004cd659  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 004cd660  89642410             mov dword ptr [esp + 0x10], esp
// 004cd664  50                   push eax
// 004cd665  e806e5f7ff           call 0x44bb70
// 004cd66a  8bbc2494000000       mov edi, dword ptr [esp + 0x94]
// 004cd671  57                   push edi
// 004cd672  8bce                 mov ecx, esi
// 004cd674  e897faffff           call 0x4cd110
// 004cd679  f30f10442410         movss xmm0, dword ptr [esp + 0x10]
// 004cd67f  f30f11442440         movss dword ptr [esp + 0x40], xmm0
// 004cd685  f30f10442414         movss xmm0, dword ptr [esp + 0x14]
// 004cd68b  f30f11442444         movss dword ptr [esp + 0x44], xmm0
// 004cd691  f30f10442418         movss xmm0, dword ptr [esp + 0x18]
// 004cd697  f30f11442448         movss dword ptr [esp + 0x48], xmm0
// 004cd69d  f30f10442434         movss xmm0, dword ptr [esp + 0x34]
// 004cd6a3  f30f1144244c         movss dword ptr [esp + 0x4c], xmm0
// 004cd6a9  f30f1044241c         movss xmm0, dword ptr [esp + 0x1c]
// 004cd6af  f30f11442450         movss dword ptr [esp + 0x50], xmm0
// 004cd6b5  f30f10442420         movss xmm0, dword ptr [esp + 0x20]
// 004cd6bb  f30f11442454         movss dword ptr [esp + 0x54], xmm0
// 004cd6c1  f30f10442424         movss xmm0, dword ptr [esp + 0x24]
// 004cd6c7  f30f11442458         movss dword ptr [esp + 0x58], xmm0
// 004cd6cd  f30f10442438         movss xmm0, dword ptr [esp + 0x38]
// 004cd6d3  f30f1144245c         movss dword ptr [esp + 0x5c], xmm0
// 004cd6d9  f30f10442428         movss xmm0, dword ptr [esp + 0x28]
// 004cd6df  f30f11442460         movss dword ptr [esp + 0x60], xmm0
// 004cd6e5  f30f1044242c         movss xmm0, dword ptr [esp + 0x2c]
// 004cd6eb  f30f11442464         movss dword ptr [esp + 0x64], xmm0
// 004cd6f1  f30f10442430         movss xmm0, dword ptr [esp + 0x30]
// 004cd6f7  f30f11442468         movss dword ptr [esp + 0x68], xmm0
// 004cd6fd  f30f1044243c         movss xmm0, dword ptr [esp + 0x3c]
// 004cd703  f30f1144246c         movss dword ptr [esp + 0x6c], xmm0
// 004cd709  0f57c0               xorps xmm0, xmm0
// 004cd70c  8d4c2440             lea ecx, [esp + 0x40]
// 004cd710  51                   push ecx
// 004cd711  f30f11442474         movss dword ptr [esp + 0x74], xmm0
// 004cd717  f30f11442478         movss dword ptr [esp + 0x78], xmm0
// 004cd71d  f30f1144247c         movss dword ptr [esp + 0x7c], xmm0
// 004cd723  f30f100518ea9a00     movss xmm0, dword ptr [0x9aea18]
// 004cd72b  57                   push edi
// 004cd72c  8bce                 mov ecx, esi
// 004cd72e  f30f11842484000000   movss dword ptr [esp + 0x84], xmm0
// 004cd737  e864f8ffff           call 0x4ccfa0
// 004cd73c  015e78               add dword ptr [esi + 0x78], ebx
// 004cd73f  015e70               add dword ptr [esi + 0x70], ebx
// 004cd742  81c7c0840000         add edi, 0x84c0
// 004cd748  57                   push edi
// 004cd749  ff1514d9b700         call dword ptr [0xb7d914]
// 004cd74f  8b35f8ba9800         mov esi, dword ptr [0x98baf8]
// 004cd755  6812850000           push 0x8512
// 004cd75a  6800250000           push 0x2500
// 004cd75f  6800200000           push 0x2000
// 004cd764  ffd6                 call esi
// 004cd766  6812850000           push 0x8512
// 004cd76b  6800250000           push 0x2500
// 004cd770  6801200000           push 0x2001
// 004cd775  ffd6                 call esi
// 004cd777  6812850000           push 0x8512
// 004cd77c  6800250000           push 0x2500
// 004cd781  6802200000           push 0x2002
// 004cd786  ffd6                 call esi
// 004cd788  8b35d0bb9800         mov esi, dword ptr [0x98bbd0]
// 004cd78e  68600c0000           push 0xc60
// 004cd793  ffd6                 call esi
// 004cd795  68610c0000           push 0xc61
// 004cd79a  ffd6                 call esi
// 004cd79c  68620c0000           push 0xc62
// 004cd7a1  ffd6                 call esi
// 004cd7a3  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 004cd7aa  c7842488000000ffffffff mov dword ptr [esp + 0x88], 0xffffffff
// 004cd7b5  85c0                 test eax, eax
// 004cd7b7  742c                 je 0x4cd7e5
// 004cd7b9  83c004               add eax, 4
// 004cd7bc  50                   push eax
// 004cd7bd  ff1508b29800         call dword ptr [0x98b208]
// 004cd7c3  85c0                 test eax, eax
// 004cd7c5  751e                 jne 0x4cd7e5
// 004cd7c7  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 004cd7ce  e84dd8f7ff           call 0x44b020
// 004cd7d3  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 004cd7da  85c9                 test ecx, ecx
// 004cd7dc  7407                 je 0x4cd7e5
// 004cd7de  8b11                 mov edx, dword ptr [ecx]
// 004cd7e0  8b02                 mov eax, dword ptr [edx]
// 004cd7e2  53                   push ebx
// 004cd7e3  ffd0                 call eax
// 004cd7e5  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 004cd7ec  5f                   pop edi
// 004cd7ed  5e                   pop esi
// 004cd7ee  64890d00000000       mov dword ptr fs:[0], ecx
// 004cd7f5  5b                   pop ebx
// 004cd7f6  81c480000000         add esp, 0x80
// 004cd7fc  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?configureReflectionMap@RenderDevice@G3D@@QAEXIV?$ReferenceCountedPointer@VTexture@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
