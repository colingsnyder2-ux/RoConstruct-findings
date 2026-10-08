// roc 2009-12 004d14b0  unit: G3D::TextureManager::TextureArgs  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d14b0
//
// 004d14b0  83ec0c               sub esp, 0xc
// 004d14b3  56                   push esi
// 004d14b4  8bf1                 mov esi, ecx
// 004d14b6  837e1c10             cmp dword ptr [esi + 0x1c], 0x10
// 004d14ba  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 004d14bd  7205                 jb 0x4d14c4
// 004d14bf  8b4608               mov eax, dword ptr [esi + 8]
// 004d14c2  eb03                 jmp 0x4d14c7
// 004d14c4  8d4608               lea eax, [esi + 8]
// 004d14c7  51                   push ecx
// 004d14c8  50                   push eax
// 004d14c9  e8e2931200           call 0x5fa8b0
// 004d14ce  dd4630               fld qword ptr [esi + 0x30]
// 004d14d1  8b5628               mov edx, dword ptr [esi + 0x28]
// 004d14d4  d97c240e             fnstcw word ptr [esp + 0xe]
// 004d14d8  8bc8                 mov ecx, eax
// 004d14da  69d203040000         imul edx, edx, 0x403
// 004d14e0  0fb744240e           movzx eax, word ptr [esp + 0xe]
// 004d14e5  0d000c0000           or eax, 0xc00
// 004d14ea  89442410             mov dword ptr [esp + 0x10], eax
// 004d14ee  83c408               add esp, 8
// 004d14f1  d96c2408             fldcw word ptr [esp + 8]
// 004d14f5  df7c2408             fistp qword ptr [esp + 8]
// 004d14f9  8b442408             mov eax, dword ptr [esp + 8]
// 004d14fd  03d0                 add edx, eax
// 004d14ff  03562c               add edx, dword ptr [esi + 0x2c]
// 004d1502  d96c2406             fldcw word ptr [esp + 6]
// 004d1506  035624               add edx, dword ptr [esi + 0x24]
// 004d1509  035620               add edx, dword ptr [esi + 0x20]
// 004d150c  5e                   pop esi
// 004d150d  03d1                 add edx, ecx
// 004d150f  8bc2                 mov eax, edx
// 004d1511  83c40c               add esp, 0xc
// 004d1514  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?hashCode@TextureArgs@TextureManager@G3D@@UBEIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
