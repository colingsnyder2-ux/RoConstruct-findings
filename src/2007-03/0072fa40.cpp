// roc 2007-03 0072fa40  unit: seg_00720000  size: 230 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0072fa40
//
// 0072fa40  6aff                 push -1
// 0072fa42  68f1f37400           push 0x74f3f1
// 0072fa47  64a100000000         mov eax, dword ptr fs:[0]
// 0072fa4d  50                   push eax
// 0072fa4e  83ec08               sub esp, 8
// 0072fa51  53                   push ebx
// 0072fa52  55                   push ebp
// 0072fa53  56                   push esi
// 0072fa54  57                   push edi
// 0072fa55  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 0072fa5a  33c4                 xor eax, esp
// 0072fa5c  50                   push eax
// 0072fa5d  8d44241c             lea eax, [esp + 0x1c]
// 0072fa61  64a300000000         mov dword ptr fs:[0], eax
// 0072fa67  8bf9                 mov edi, ecx
// 0072fa69  8b4708               mov eax, dword ptr [edi + 8]
// 0072fa6c  8b2f                 mov ebp, dword ptr [edi]
// 0072fa6e  8d0cc500000000       lea ecx, [eax*8]
// 0072fa75  2bc8                 sub ecx, eax
// 0072fa77  03c9                 add ecx, ecx
// 0072fa79  03c9                 add ecx, ecx
// 0072fa7b  03c9                 add ecx, ecx
// 0072fa7d  6a10                 push 0x10
// 0072fa7f  51                   push ecx
// 0072fa80  e84b41dcff           call 0x4f3bd0
// 0072fa85  8b4f08               mov ecx, dword ptr [edi + 8]
// 0072fa88  8b542434             mov edx, dword ptr [esp + 0x34]
// 0072fa8c  83c408               add esp, 8
// 0072fa8f  3bd1                 cmp edx, ecx
// 0072fa91  8907                 mov dword ptr [edi], eax
// 0072fa93  7d02                 jge 0x72fa97
// 0072fa95  8bca                 mov ecx, edx
// 0072fa97  8d34cd00000000       lea esi, [ecx*8]
// 0072fa9e  2bf1                 sub esi, ecx
// 0072faa0  8d3cf0               lea edi, [eax + esi*8]
// 0072faa3  8bf0                 mov esi, eax
// 0072faa5  3bf7                 cmp esi, edi
// 0072faa7  8bdd                 mov ebx, ebp
// 0072faa9  89742414             mov dword ptr [esp + 0x14], esi
// 0072faad  7333                 jae 0x72fae2
// 0072faaf  90                   nop 
// 0072fab0  89742418             mov dword ptr [esp + 0x18], esi
// 0072fab4  85f6                 test esi, esi
// 0072fab6  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0072fabe  740c                 je 0x72facc
// 0072fac0  53                   push ebx
// 0072fac1  8bce                 mov ecx, esi
// 0072fac3  e8b8feffff           call 0x72f980
// 0072fac8  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0072facc  83c638               add esi, 0x38
// 0072facf  83c338               add ebx, 0x38
// 0072fad2  3bf7                 cmp esi, edi
// 0072fad4  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0072fadc  89742414             mov dword ptr [esp + 0x14], esi
// 0072fae0  72ce                 jb 0x72fab0
// 0072fae2  8d04d500000000       lea eax, [edx*8]
// 0072fae9  2bc2                 sub eax, edx
// 0072faeb  8d7cc500             lea edi, [ebp + eax*8]
// 0072faef  3bef                 cmp ebp, edi
// 0072faf1  8bf5                 mov esi, ebp
// 0072faf3  7312                 jae 0x72fb07
// 0072faf5  8b16                 mov edx, dword ptr [esi]
// 0072faf7  8b4204               mov eax, dword ptr [edx + 4]
// 0072fafa  6a00                 push 0
// 0072fafc  8bce                 mov ecx, esi
// 0072fafe  ffd0                 call eax
// 0072fb00  83c638               add esi, 0x38
// 0072fb03  3bf7                 cmp esi, edi
// 0072fb05  72ee                 jb 0x72faf5
// 0072fb07  55                   push ebp
// 0072fb08  e87338dcff           call 0x4f3380
// 0072fb0d  83c404               add esp, 4
// 0072fb10  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0072fb14  64890d00000000       mov dword ptr fs:[0], ecx
// 0072fb1b  59                   pop ecx
// 0072fb1c  5f                   pop edi
// 0072fb1d  5e                   pop esi
// 0072fb1e  5d                   pop ebp
// 0072fb1f  5b                   pop ebx
// 0072fb20  83c414               add esp, 0x14
// 0072fb23  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?realloc@?$Array@VTextureArgs@TextureManager@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
