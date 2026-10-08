// from server: 100% by auto
// roc 2008-06 00508460  unit: G3D::Shader  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00508460
//
// 00508460  56                   push esi
// 00508461  8bf1                 mov esi, ecx
// 00508463  57                   push edi
// 00508464  8bc6                 mov eax, esi
// 00508466  b9ff030000           mov ecx, 0x3ff
// 0050846b  33ff                 xor edi, edi
// 0050846d  8d4900               lea ecx, [ecx]
// 00508470  8938                 mov dword ptr [eax], edi
// 00508472  897804               mov dword ptr [eax + 4], edi
// 00508475  83c008               add eax, 8
// 00508478  83e901               sub ecx, 1
// 0050847b  79f3                 jns 0x508470
// 0050847d  8d8604200000         lea eax, [esi + 0x2004]
// 00508483  b9ff030000           mov ecx, 0x3ff
// 00508488  8938                 mov dword ptr [eax], edi
// 0050848a  897804               mov dword ptr [eax + 4], edi
// 0050848d  83c008               add eax, 8
// 00508490  83e901               sub ecx, 1
// 00508493  79f3                 jns 0x508488
// 00508495  6800007d00           push 0x7d0000
// 0050849a  89be28280400         mov dword ptr [esi + 0x42828], edi
// 005084a0  89be2c280400         mov dword ptr [esi + 0x4282c], edi
// 005084a6  89be30280400         mov dword ptr [esi + 0x42830], edi
// 005084ac  89be34280400         mov dword ptr [esi + 0x42834], edi
// 005084b2  c7863828040001000000 mov dword ptr [esi + 0x42838], 1
// 005084bc  89be08280400         mov dword ptr [esi + 0x42808], edi
// 005084c2  89be0c280400         mov dword ptr [esi + 0x4280c], edi
// 005084c8  89be00200000         mov dword ptr [esi + 0x2000], edi
// 005084ce  89be04400000         mov dword ptr [esi + 0x4004], edi
// 005084d4  ff15b0288000         call dword ptr [0x8028b0]
// 005084da  83c404               add esp, 4
// 005084dd  89860c280400         mov dword ptr [esi + 0x4280c], eax
// 005084e3  33c0                 xor eax, eax
// 005084e5  8d8e08400000         lea ecx, [esi + 0x4008]
// 005084eb  eb03                 jmp 0x5084f0
// 005084ed  8d4900               lea ecx, [ecx]
// 005084f0  8b960c280400         mov edx, dword ptr [esi + 0x4280c]
// 005084f6  03d0                 add edx, eax
// 005084f8  8911                 mov dword ptr [ecx], edx
// 005084fa  83e880               sub eax, -0x80
// 005084fd  83c104               add ecx, 4
// 00508500  3d00007d00           cmp eax, 0x7d0000
// 00508505  7ce9                 jl 0x5084f0
// 00508507  8d8610280400         lea eax, [esi + 0x42810]
// 0050850d  50                   push eax
// 0050850e  c7860828040000fa0000 mov dword ptr [esi + 0x42808], 0xfa00
// 00508518  ff15e0228000         call dword ptr [0x8022e0]
// 0050851e  5f                   pop edi
// 0050851f  8bc6                 mov eax, esi
// 00508521  5e                   pop esi
// 00508522  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ??0BufferPool@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
