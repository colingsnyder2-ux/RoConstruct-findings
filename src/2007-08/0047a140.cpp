// roc 2007-08 0047a140  unit: G3D::TextureManager::TextureArgs  size: 230 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047a140
//
// 0047a140  6aff                 push -1
// 0047a142  68215f7400           push 0x745f21
// 0047a147  64a100000000         mov eax, dword ptr fs:[0]
// 0047a14d  50                   push eax
// 0047a14e  83ec08               sub esp, 8
// 0047a151  53                   push ebx
// 0047a152  55                   push ebp
// 0047a153  56                   push esi
// 0047a154  57                   push edi
// 0047a155  a188518b00           mov eax, dword ptr [0x8b5188]
// 0047a15a  33c4                 xor eax, esp
// 0047a15c  50                   push eax
// 0047a15d  8d44241c             lea eax, [esp + 0x1c]
// 0047a161  64a300000000         mov dword ptr fs:[0], eax
// 0047a167  8bf9                 mov edi, ecx
// 0047a169  8b4708               mov eax, dword ptr [edi + 8]
// 0047a16c  8b2f                 mov ebp, dword ptr [edi]
// 0047a16e  8d0cc500000000       lea ecx, [eax*8]
// 0047a175  2bc8                 sub ecx, eax
// 0047a177  03c9                 add ecx, ecx
// 0047a179  03c9                 add ecx, ecx
// 0047a17b  03c9                 add ecx, ecx
// 0047a17d  6a10                 push 0x10
// 0047a17f  51                   push ecx
// 0047a180  e8db5e0800           call 0x500060
// 0047a185  8b4f08               mov ecx, dword ptr [edi + 8]
// 0047a188  8b542434             mov edx, dword ptr [esp + 0x34]
// 0047a18c  83c408               add esp, 8
// 0047a18f  3bd1                 cmp edx, ecx
// 0047a191  8907                 mov dword ptr [edi], eax
// 0047a193  7d02                 jge 0x47a197
// 0047a195  8bca                 mov ecx, edx
// 0047a197  8d34cd00000000       lea esi, [ecx*8]
// 0047a19e  2bf1                 sub esi, ecx
// 0047a1a0  8d3cf0               lea edi, [eax + esi*8]
// 0047a1a3  8bf0                 mov esi, eax
// 0047a1a5  3bf7                 cmp esi, edi
// 0047a1a7  8bdd                 mov ebx, ebp
// 0047a1a9  89742414             mov dword ptr [esp + 0x14], esi
// 0047a1ad  7333                 jae 0x47a1e2
// 0047a1af  90                   nop 
// 0047a1b0  89742418             mov dword ptr [esp + 0x18], esi
// 0047a1b4  85f6                 test esi, esi
// 0047a1b6  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0047a1be  740c                 je 0x47a1cc
// 0047a1c0  53                   push ebx
// 0047a1c1  8bce                 mov ecx, esi
// 0047a1c3  e8b8feffff           call 0x47a080
// 0047a1c8  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0047a1cc  83c638               add esi, 0x38
// 0047a1cf  83c338               add ebx, 0x38
// 0047a1d2  3bf7                 cmp esi, edi
// 0047a1d4  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0047a1dc  89742414             mov dword ptr [esp + 0x14], esi
// 0047a1e0  72ce                 jb 0x47a1b0
// 0047a1e2  8d04d500000000       lea eax, [edx*8]
// 0047a1e9  2bc2                 sub eax, edx
// 0047a1eb  8d7cc500             lea edi, [ebp + eax*8]
// 0047a1ef  3bef                 cmp ebp, edi
// 0047a1f1  8bf5                 mov esi, ebp
// 0047a1f3  7312                 jae 0x47a207
// 0047a1f5  8b16                 mov edx, dword ptr [esi]
// 0047a1f7  8b4204               mov eax, dword ptr [edx + 4]
// 0047a1fa  6a00                 push 0
// 0047a1fc  8bce                 mov ecx, esi
// 0047a1fe  ffd0                 call eax
// 0047a200  83c638               add esi, 0x38
// 0047a203  3bf7                 cmp esi, edi
// 0047a205  72ee                 jb 0x47a1f5
// 0047a207  55                   push ebp
// 0047a208  e803560800           call 0x4ff810
// 0047a20d  83c404               add esp, 4
// 0047a210  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0047a214  64890d00000000       mov dword ptr fs:[0], ecx
// 0047a21b  59                   pop ecx
// 0047a21c  5f                   pop edi
// 0047a21d  5e                   pop esi
// 0047a21e  5d                   pop ebp
// 0047a21f  5b                   pop ebx
// 0047a220  83c414               add esp, 0x14
// 0047a223  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?realloc@?$Array@VTextureArgs@TextureManager@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
