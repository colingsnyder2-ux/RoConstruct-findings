// roc 2009-06 004a48f0  unit: G3D::TextureManager::TextureArgs  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a48f0
//
// 004a48f0  83ec0c               sub esp, 0xc
// 004a48f3  56                   push esi
// 004a48f4  8bf1                 mov esi, ecx
// 004a48f6  837e1c10             cmp dword ptr [esi + 0x1c], 0x10
// 004a48fa  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 004a48fd  7205                 jb 0x4a4904
// 004a48ff  8b4608               mov eax, dword ptr [esi + 8]
// 004a4902  eb03                 jmp 0x4a4907
// 004a4904  8d4608               lea eax, [esi + 8]
// 004a4907  51                   push ecx
// 004a4908  50                   push eax
// 004a4909  e8125a0d00           call 0x57a320
// 004a490e  dd4630               fld qword ptr [esi + 0x30]
// 004a4911  8b5628               mov edx, dword ptr [esi + 0x28]
// 004a4914  d97c240e             fnstcw word ptr [esp + 0xe]
// 004a4918  8bc8                 mov ecx, eax
// 004a491a  69d203040000         imul edx, edx, 0x403
// 004a4920  0fb744240e           movzx eax, word ptr [esp + 0xe]
// 004a4925  0d000c0000           or eax, 0xc00
// 004a492a  89442410             mov dword ptr [esp + 0x10], eax
// 004a492e  83c408               add esp, 8
// 004a4931  d96c2408             fldcw word ptr [esp + 8]
// 004a4935  df7c2408             fistp qword ptr [esp + 8]
// 004a4939  8b442408             mov eax, dword ptr [esp + 8]
// 004a493d  03d0                 add edx, eax
// 004a493f  03562c               add edx, dword ptr [esi + 0x2c]
// 004a4942  d96c2406             fldcw word ptr [esp + 6]
// 004a4946  035624               add edx, dword ptr [esi + 0x24]
// 004a4949  035620               add edx, dword ptr [esi + 0x20]
// 004a494c  5e                   pop esi
// 004a494d  03d1                 add edx, ecx
// 004a494f  8bc2                 mov eax, edx
// 004a4951  83c40c               add esp, 0xc
// 004a4954  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?hashCode@TextureArgs@TextureManager@G3D@@UBEIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
