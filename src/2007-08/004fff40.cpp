// from server: 100% by auto
// roc 2007-08 004fff40  unit: G3D::Shader  size: 197 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004fff40
//
// 004fff40  56                   push esi
// 004fff41  8bf1                 mov esi, ecx
// 004fff43  57                   push edi
// 004fff44  8bc6                 mov eax, esi
// 004fff46  b9ff030000           mov ecx, 0x3ff
// 004fff4b  33ff                 xor edi, edi
// 004fff4d  8d4900               lea ecx, [ecx]
// 004fff50  8938                 mov dword ptr [eax], edi
// 004fff52  897804               mov dword ptr [eax + 4], edi
// 004fff55  83c008               add eax, 8
// 004fff58  83e901               sub ecx, 1
// 004fff5b  79f3                 jns 0x4fff50
// 004fff5d  8d8604200000         lea eax, [esi + 0x2004]
// 004fff63  b9ff030000           mov ecx, 0x3ff
// 004fff68  8938                 mov dword ptr [eax], edi
// 004fff6a  897804               mov dword ptr [eax + 4], edi
// 004fff6d  83c008               add eax, 8
// 004fff70  83e901               sub ecx, 1
// 004fff73  79f3                 jns 0x4fff68
// 004fff75  6800007d00           push 0x7d0000
// 004fff7a  89be28280400         mov dword ptr [esi + 0x42828], edi
// 004fff80  89be2c280400         mov dword ptr [esi + 0x4282c], edi
// 004fff86  89be30280400         mov dword ptr [esi + 0x42830], edi
// 004fff8c  89be34280400         mov dword ptr [esi + 0x42834], edi
// 004fff92  c7863828040001000000 mov dword ptr [esi + 0x42838], 1
// 004fff9c  89be08280400         mov dword ptr [esi + 0x42808], edi
// 004fffa2  89be0c280400         mov dword ptr [esi + 0x4280c], edi
// 004fffa8  89be00200000         mov dword ptr [esi + 0x2000], edi
// 004fffae  89be04400000         mov dword ptr [esi + 0x4004], edi
// 004fffb4  ff15d0e67700         call dword ptr [0x77e6d0]
// 004fffba  83c404               add esp, 4
// 004fffbd  89860c280400         mov dword ptr [esi + 0x4280c], eax
// 004fffc3  33c0                 xor eax, eax
// 004fffc5  8d8e08400000         lea ecx, [esi + 0x4008]
// 004fffcb  eb03                 jmp 0x4fffd0
// 004fffcd  8d4900               lea ecx, [ecx]
// 004fffd0  8b960c280400         mov edx, dword ptr [esi + 0x4280c]
// 004fffd6  03d0                 add edx, eax
// 004fffd8  8911                 mov dword ptr [ecx], edx
// 004fffda  0580000000           add eax, 0x80
// 004fffdf  83c104               add ecx, 4
// 004fffe2  3d00007d00           cmp eax, 0x7d0000
// 004fffe7  7ce7                 jl 0x4fffd0
// 004fffe9  8d8610280400         lea eax, [esi + 0x42810]
// 004fffef  50                   push eax
// 004ffff0  c7860828040000fa0000 mov dword ptr [esi + 0x42808], 0xfa00
// 004ffffa  ff1508d37700         call dword ptr [0x77d308]
// 00500000  5f                   pop edi
// 00500001  8bc6                 mov eax, esi
// 00500003  5e                   pop esi
// 00500004  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ??0BufferPool@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
