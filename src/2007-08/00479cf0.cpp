// roc 2007-08 00479cf0  unit: G3D::TextureManager::TextureArgs  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00479cf0
//
// 00479cf0  83ec0c               sub esp, 0xc
// 00479cf3  56                   push esi
// 00479cf4  8bf1                 mov esi, ecx
// 00479cf6  837e1c10             cmp dword ptr [esi + 0x1c], 0x10
// 00479cfa  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00479cfd  7205                 jb 0x479d04
// 00479cff  8b4608               mov eax, dword ptr [esi + 8]
// 00479d02  eb03                 jmp 0x479d07
// 00479d04  8d4608               lea eax, [esi + 8]
// 00479d07  51                   push ecx
// 00479d08  50                   push eax
// 00479d09  e832ea0800           call 0x508740
// 00479d0e  dd4630               fld qword ptr [esi + 0x30]
// 00479d11  8b5628               mov edx, dword ptr [esi + 0x28]
// 00479d14  d97c240e             fnstcw word ptr [esp + 0xe]
// 00479d18  8bc8                 mov ecx, eax
// 00479d1a  69d203040000         imul edx, edx, 0x403
// 00479d20  0fb744240e           movzx eax, word ptr [esp + 0xe]
// 00479d25  0d000c0000           or eax, 0xc00
// 00479d2a  89442410             mov dword ptr [esp + 0x10], eax
// 00479d2e  83c408               add esp, 8
// 00479d31  d96c2408             fldcw word ptr [esp + 8]
// 00479d35  df7c2408             fistp qword ptr [esp + 8]
// 00479d39  8b442408             mov eax, dword ptr [esp + 8]
// 00479d3d  03d0                 add edx, eax
// 00479d3f  03562c               add edx, dword ptr [esi + 0x2c]
// 00479d42  d96c2406             fldcw word ptr [esp + 6]
// 00479d46  035624               add edx, dword ptr [esi + 0x24]
// 00479d49  035620               add edx, dword ptr [esi + 0x20]
// 00479d4c  5e                   pop esi
// 00479d4d  03d1                 add edx, ecx
// 00479d4f  8bc2                 mov eax, edx
// 00479d51  83c40c               add esp, 0xc
// 00479d54  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?hashCode@TextureArgs@TextureManager@G3D@@UBEIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
