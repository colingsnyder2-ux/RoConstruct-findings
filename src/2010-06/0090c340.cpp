// from server: 100% by auto
// roc 2010-06 0090c340  unit: G3D::TextureManager::TextureArgs  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0090c340
//
// 0090c340  83ec0c               sub esp, 0xc
// 0090c343  56                   push esi
// 0090c344  8bf1                 mov esi, ecx
// 0090c346  837e1c10             cmp dword ptr [esi + 0x1c], 0x10
// 0090c34a  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0090c34d  7205                 jb 0x90c354
// 0090c34f  8b4608               mov eax, dword ptr [esi + 8]
// 0090c352  eb03                 jmp 0x90c357
// 0090c354  8d4608               lea eax, [esi + 8]
// 0090c357  51                   push ecx
// 0090c358  50                   push eax
// 0090c359  e8a2b3c4ff           call 0x557700
// 0090c35e  dd4630               fld qword ptr [esi + 0x30]
// 0090c361  8b5628               mov edx, dword ptr [esi + 0x28]
// 0090c364  d97c240e             fnstcw word ptr [esp + 0xe]
// 0090c368  8bc8                 mov ecx, eax
// 0090c36a  69d203040000         imul edx, edx, 0x403
// 0090c370  0fb744240e           movzx eax, word ptr [esp + 0xe]
// 0090c375  0d000c0000           or eax, 0xc00
// 0090c37a  89442410             mov dword ptr [esp + 0x10], eax
// 0090c37e  83c408               add esp, 8
// 0090c381  d96c2408             fldcw word ptr [esp + 8]
// 0090c385  df7c2408             fistp qword ptr [esp + 8]
// 0090c389  8b442408             mov eax, dword ptr [esp + 8]
// 0090c38d  03d0                 add edx, eax
// 0090c38f  03562c               add edx, dword ptr [esi + 0x2c]
// 0090c392  d96c2406             fldcw word ptr [esp + 6]
// 0090c396  035624               add edx, dword ptr [esi + 0x24]
// 0090c399  035620               add edx, dword ptr [esi + 0x20]
// 0090c39c  5e                   pop esi
// 0090c39d  03d1                 add edx, ecx
// 0090c39f  8bc2                 mov eax, edx
// 0090c3a1  83c40c               add esp, 0xc
// 0090c3a4  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?hashCode@TextureArgs@TextureManager@G3D@@UBEIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
