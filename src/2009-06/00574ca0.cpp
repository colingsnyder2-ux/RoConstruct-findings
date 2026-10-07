// roc 2009-06 00574ca0  unit: G3D::BinaryInput  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00574ca0
//
// 00574ca0  56                   push esi
// 00574ca1  8bf1                 mov esi, ecx
// 00574ca3  8b4644               mov eax, dword ptr [esi + 0x44]
// 00574ca6  57                   push edi
// 00574ca7  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00574cab  8d0c38               lea ecx, [eax + edi]
// 00574cae  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 00574cb1  7e0e                 jle 0x574cc1
// 00574cb3  8b5634               mov edx, dword ptr [esi + 0x34]
// 00574cb6  57                   push edi
// 00574cb7  03d0                 add edx, eax
// 00574cb9  52                   push edx
// 00574cba  8bce                 mov ecx, esi
// 00574cbc  e88ffaffff           call 0x574750
// 00574cc1  8b4640               mov eax, dword ptr [esi + 0x40]
// 00574cc4  034644               add eax, dword ptr [esi + 0x44]
// 00574cc7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00574ccb  57                   push edi
// 00574ccc  50                   push eax
// 00574ccd  51                   push ecx
// 00574cce  e8e3511a00           call 0x719eb6
// 00574cd3  017e44               add dword ptr [esi + 0x44], edi
// 00574cd6  83c40c               add esp, 0xc
// 00574cd9  5f                   pop edi
// 00574cda  5e                   pop esi
// 00574cdb  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?readBytes@BinaryInput@G3D@@QAEXHPAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
