// roc 2010-06 0090e970  unit: G3D::TextureManager::TextureArgs  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0090e970
//
// 0090e970  6aff                 push -1
// 0090e972  6848819a00           push 0x9a8148
// 0090e977  64a100000000         mov eax, dword ptr fs:[0]
// 0090e97d  50                   push eax
// 0090e97e  64892500000000       mov dword ptr fs:[0], esp
// 0090e985  83ec1c               sub esp, 0x1c
// 0090e988  8b442430             mov eax, dword ptr [esp + 0x30]
// 0090e98c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0090e990  50                   push eax
// 0090e991  51                   push ecx
// 0090e992  8d542408             lea edx, [esp + 8]
// 0090e996  52                   push edx
// 0090e997  e8d404c5ff           call 0x55ee70
// 0090e99c  d9442448             fld dword ptr [esp + 0x48]
// 0090e9a0  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0090e9a4  d95c2408             fstp dword ptr [esp + 8]
// 0090e9a8  8b542440             mov edx, dword ptr [esp + 0x40]
// 0090e9ac  83c408               add esp, 8
// 0090e9af  51                   push ecx
// 0090e9b0  52                   push edx
// 0090e9b1  50                   push eax
// 0090e9b2  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0090e9ba  e811f8ffff           call 0x90e1d0
// 0090e9bf  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0090e9c3  64890d00000000       mov dword ptr fs:[0], ecx
// 0090e9ca  83c438               add esp, 0x38
// 0090e9cd  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ?arrow@Draw@G3D@@SAXABVVector3@2@0PAVRenderDevice@2@ABVColor4@2@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
