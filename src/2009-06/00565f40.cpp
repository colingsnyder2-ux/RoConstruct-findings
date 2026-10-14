// roc 2009-06 00565f40  unit: RBX::RbxG3D::RenderScene  size: 261 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00565f40
//
// 00565f40  8b442404             mov eax, dword ptr [esp + 4]
// 00565f44  53                   push ebx
// 00565f45  55                   push ebp
// 00565f46  56                   push esi
// 00565f47  8bf1                 mov esi, ecx
// 00565f49  8b6e04               mov ebp, dword ptr [esi + 4]
// 00565f4c  894604               mov dword ptr [esi + 4], eax
// 00565f4f  f605b81ca40001       test byte ptr [0xa41cb8], 1
// 00565f56  57                   push edi
// 00565f57  7514                 jne 0x565f6d
// 00565f59  830db81ca40001       or dword ptr [0xa41cb8], 1
// 00565f60  bb0a000000           mov ebx, 0xa
// 00565f65  891db41ca400         mov dword ptr [0xa41cb4], ebx
// 00565f6b  eb06                 jmp 0x565f73
// 00565f6d  8b1db41ca400         mov ebx, dword ptr [0xa41cb4]
// 00565f73  8b7e04               mov edi, dword ptr [esi + 4]
// 00565f76  8b4e08               mov ecx, dword ptr [esi + 8]
// 00565f79  3bf9                 cmp edi, ecx
// 00565f7b  7e6c                 jle 0x565fe9
// 00565f7d  85c9                 test ecx, ecx
// 00565f7f  7509                 jne 0x565f8a
// 00565f81  894608               mov dword ptr [esi + 8], eax
// 00565f84  55                   push ebp
// 00565f85  e983000000           jmp 0x56600d
// 00565f8a  3bfb                 cmp edi, ebx
// 00565f8c  7d06                 jge 0x565f94
// 00565f8e  895e08               mov dword ptr [esi + 8], ebx
// 00565f91  55                   push ebp
// 00565f92  eb79                 jmp 0x56600d
// 00565f94  d90548e88b00         fld dword ptr [0x8be848]
// 00565f9a  8bc1                 mov eax, ecx
// 00565f9c  8d0440               lea eax, [eax + eax*2]
// 00565f9f  03c0                 add eax, eax
// 00565fa1  03c0                 add eax, eax
// 00565fa3  3d801a0600           cmp eax, 0x61a80
// 00565fa8  760a                 jbe 0x565fb4
// 00565faa  ddd8                 fstp st(0)
// 00565fac  d905a0ef8b00         fld dword ptr [0x8befa0]
// 00565fb2  eb0f                 jmp 0x565fc3
// 00565fb4  3d00fa0000           cmp eax, 0xfa00
// 00565fb9  7608                 jbe 0x565fc3
// 00565fbb  ddd8                 fstp st(0)
// 00565fbd  d90544d08b00         fld dword ptr [0x8bd044]
// 00565fc3  8bd9                 mov ebx, ecx
// 00565fc5  895c2418             mov dword ptr [esp + 0x18], ebx
// 00565fc9  da4c2418             fimul dword ptr [esp + 0x18]
// 00565fcd  e8ee3e1b00           call 0x719ec0
// 00565fd2  2bc3                 sub eax, ebx
// 00565fd4  03c7                 add eax, edi
// 00565fd6  894608               mov dword ptr [esi + 8], eax
// 00565fd9  8b0db41ca400         mov ecx, dword ptr [0xa41cb4]
// 00565fdf  3bc1                 cmp eax, ecx
// 00565fe1  7d03                 jge 0x565fe6
// 00565fe3  894e08               mov dword ptr [esi + 8], ecx
// 00565fe6  55                   push ebp
// 00565fe7  eb24                 jmp 0x56600d
// 00565fe9  b856555555           mov eax, 0x55555556
// 00565fee  f7e9                 imul ecx
// 00565ff0  8bc2                 mov eax, edx
// 00565ff2  c1e81f               shr eax, 0x1f
// 00565ff5  03c2                 add eax, edx
// 00565ff7  3bf8                 cmp edi, eax
// 00565ff9  7f19                 jg 0x566014
// 00565ffb  807c241800           cmp byte ptr [esp + 0x18], 0
// 00566000  7412                 je 0x566014
// 00566002  3bfb                 cmp edi, ebx
// 00566004  7e0e                 jle 0x566014
// 00566006  3bfd                 cmp edi, ebp
// 00566008  7c02                 jl 0x56600c
// 0056600a  8bfd                 mov edi, ebp
// 0056600c  57                   push edi
// 0056600d  8bce                 mov ecx, esi
// 0056600f  e8dcf8ffff           call 0x5658f0
// 00566014  3b6e04               cmp ebp, dword ptr [esi + 4]
// 00566017  8bd5                 mov edx, ebp
// 00566019  7d23                 jge 0x56603e
// 0056601b  d9ee                 fldz 
// 0056601d  8d4c6d00             lea ecx, [ebp + ebp*2]
// 00566021  03c9                 add ecx, ecx
// 00566023  03c9                 add ecx, ecx
// 00566025  8b06                 mov eax, dword ptr [esi]
// 00566027  03c1                 add eax, ecx
// 00566029  7408                 je 0x566033
// 0056602b  d910                 fst dword ptr [eax]
// 0056602d  d95004               fst dword ptr [eax + 4]
// 00566030  d95008               fst dword ptr [eax + 8]
// 00566033  42                   inc edx
// 00566034  83c10c               add ecx, 0xc
// 00566037  3b5604               cmp edx, dword ptr [esi + 4]
// 0056603a  7ce9                 jl 0x566025
// 0056603c  ddd8                 fstp st(0)
// 0056603e  5f                   pop edi
// 0056603f  5e                   pop esi
// 00566040  5d                   pop ebp
// 00566041  5b                   pop ebx
// 00566042  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\CollisionDetection.cpp (function ?resize@?$Array@VVector3@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/CollisionDetection.cpp
