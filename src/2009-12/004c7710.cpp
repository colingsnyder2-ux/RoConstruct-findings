// roc 2009-12 004c7710  unit: G3D::ReferenceCountedObject  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004c7710
//
// 004c7710  56                   push esi
// 004c7711  57                   push edi
// 004c7712  8bf1                 mov esi, ecx
// 004c7714  8b4608               mov eax, dword ptr [esi + 8]
// 004c7717  8b3e                 mov edi, dword ptr [esi]
// 004c7719  6a10                 push 0x10
// 004c771b  50                   push eax
// 004c771c  e89f2b1200           call 0x5ea2c0
// 004c7721  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004c7725  8906                 mov dword ptr [esi], eax
// 004c7727  8b7608               mov esi, dword ptr [esi + 8]
// 004c772a  83c408               add esp, 8
// 004c772d  3bce                 cmp ecx, esi
// 004c772f  7d02                 jge 0x4c7733
// 004c7731  8bf1                 mov esi, ecx
// 004c7733  03f0                 add esi, eax
// 004c7735  8bcf                 mov ecx, edi
// 004c7737  3bc6                 cmp eax, esi
// 004c7739  7313                 jae 0x4c774e
// 004c773b  eb03                 jmp 0x4c7740
// 004c773d  8d4900               lea ecx, [ecx]
// 004c7740  85c0                 test eax, eax
// 004c7742  7404                 je 0x4c7748
// 004c7744  8a11                 mov dl, byte ptr [ecx]
// 004c7746  8810                 mov byte ptr [eax], dl
// 004c7748  40                   inc eax
// 004c7749  41                   inc ecx
// 004c774a  3bc6                 cmp eax, esi
// 004c774c  72f2                 jb 0x4c7740
// 004c774e  57                   push edi
// 004c774f  e88c2c1200           call 0x5ea3e0
// 004c7754  83c404               add esp, 4
// 004c7757  5f                   pop edi
// 004c7758  5e                   pop esi
// 004c7759  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?realloc@?$Array@_N@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
