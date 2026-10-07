// roc 2008-06 0047d420  unit: G3D::TextureManager::TextureArgs  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047d420
//
// 0047d420  83ec0c               sub esp, 0xc
// 0047d423  56                   push esi
// 0047d424  8bf1                 mov esi, ecx
// 0047d426  837e1c10             cmp dword ptr [esi + 0x1c], 0x10
// 0047d42a  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0047d42d  7205                 jb 0x47d434
// 0047d42f  8b4608               mov eax, dword ptr [esi + 8]
// 0047d432  eb03                 jmp 0x47d437
// 0047d434  8d4608               lea eax, [esi + 8]
// 0047d437  51                   push ecx
// 0047d438  50                   push eax
// 0047d439  e8e24e0900           call 0x512320
// 0047d43e  dd4630               fld qword ptr [esi + 0x30]
// 0047d441  8b5628               mov edx, dword ptr [esi + 0x28]
// 0047d444  d97c240e             fnstcw word ptr [esp + 0xe]
// 0047d448  8bc8                 mov ecx, eax
// 0047d44a  69d203040000         imul edx, edx, 0x403
// 0047d450  0fb744240e           movzx eax, word ptr [esp + 0xe]
// 0047d455  0d000c0000           or eax, 0xc00
// 0047d45a  89442410             mov dword ptr [esp + 0x10], eax
// 0047d45e  83c408               add esp, 8
// 0047d461  d96c2408             fldcw word ptr [esp + 8]
// 0047d465  df7c2408             fistp qword ptr [esp + 8]
// 0047d469  8b442408             mov eax, dword ptr [esp + 8]
// 0047d46d  03d0                 add edx, eax
// 0047d46f  03562c               add edx, dword ptr [esi + 0x2c]
// 0047d472  d96c2406             fldcw word ptr [esp + 6]
// 0047d476  035624               add edx, dword ptr [esi + 0x24]
// 0047d479  035620               add edx, dword ptr [esi + 0x20]
// 0047d47c  5e                   pop esi
// 0047d47d  03d1                 add edx, ecx
// 0047d47f  8bc2                 mov eax, edx
// 0047d481  83c40c               add esp, 0xc
// 0047d484  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?hashCode@TextureArgs@TextureManager@G3D@@UBEIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
