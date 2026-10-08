// roc 2007-03 0072f5f0  unit: seg_00720000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0072f5f0
//
// 0072f5f0  83ec0c               sub esp, 0xc
// 0072f5f3  56                   push esi
// 0072f5f4  8bf1                 mov esi, ecx
// 0072f5f6  837e1c10             cmp dword ptr [esi + 0x1c], 0x10
// 0072f5fa  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0072f5fd  7205                 jb 0x72f604
// 0072f5ff  8b4608               mov eax, dword ptr [esi + 8]
// 0072f602  eb03                 jmp 0x72f607
// 0072f604  8d4608               lea eax, [esi + 8]
// 0072f607  51                   push ecx
// 0072f608  50                   push eax
// 0072f609  e8b2e4dcff           call 0x4fdac0
// 0072f60e  dd4630               fld qword ptr [esi + 0x30]
// 0072f611  8b5628               mov edx, dword ptr [esi + 0x28]
// 0072f614  d97c240e             fnstcw word ptr [esp + 0xe]
// 0072f618  8bc8                 mov ecx, eax
// 0072f61a  69d203040000         imul edx, edx, 0x403
// 0072f620  0fb744240e           movzx eax, word ptr [esp + 0xe]
// 0072f625  0d000c0000           or eax, 0xc00
// 0072f62a  89442410             mov dword ptr [esp + 0x10], eax
// 0072f62e  83c408               add esp, 8
// 0072f631  d96c2408             fldcw word ptr [esp + 8]
// 0072f635  df7c2408             fistp qword ptr [esp + 8]
// 0072f639  8b442408             mov eax, dword ptr [esp + 8]
// 0072f63d  03d0                 add edx, eax
// 0072f63f  03562c               add edx, dword ptr [esi + 0x2c]
// 0072f642  d96c2406             fldcw word ptr [esp + 6]
// 0072f646  035624               add edx, dword ptr [esi + 0x24]
// 0072f649  035620               add edx, dword ptr [esi + 0x20]
// 0072f64c  5e                   pop esi
// 0072f64d  03d1                 add edx, ecx
// 0072f64f  8bc2                 mov eax, edx
// 0072f651  83c40c               add esp, 0xc
// 0072f654  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\TextureManager.cpp (function ?hashCode@TextureArgs@TextureManager@G3D@@UBEIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/TextureManager.cpp
