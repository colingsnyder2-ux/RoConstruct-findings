// roc 2007-03 004f3ab0  unit: seg_004f0000  size: 197 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f3ab0
//
// 004f3ab0  56                   push esi
// 004f3ab1  8bf1                 mov esi, ecx
// 004f3ab3  57                   push edi
// 004f3ab4  8bc6                 mov eax, esi
// 004f3ab6  b9ff030000           mov ecx, 0x3ff
// 004f3abb  33ff                 xor edi, edi
// 004f3abd  8d4900               lea ecx, [ecx]
// 004f3ac0  8938                 mov dword ptr [eax], edi
// 004f3ac2  897804               mov dword ptr [eax + 4], edi
// 004f3ac5  83c008               add eax, 8
// 004f3ac8  83e901               sub ecx, 1
// 004f3acb  79f3                 jns 0x4f3ac0
// 004f3acd  8d8604200000         lea eax, [esi + 0x2004]
// 004f3ad3  b9ff030000           mov ecx, 0x3ff
// 004f3ad8  8938                 mov dword ptr [eax], edi
// 004f3ada  897804               mov dword ptr [eax + 4], edi
// 004f3add  83c008               add eax, 8
// 004f3ae0  83e901               sub ecx, 1
// 004f3ae3  79f3                 jns 0x4f3ad8
// 004f3ae5  6800007d00           push 0x7d0000
// 004f3aea  89be28280400         mov dword ptr [esi + 0x42828], edi
// 004f3af0  89be2c280400         mov dword ptr [esi + 0x4282c], edi
// 004f3af6  89be30280400         mov dword ptr [esi + 0x42830], edi
// 004f3afc  89be34280400         mov dword ptr [esi + 0x42834], edi
// 004f3b02  c7863828040001000000 mov dword ptr [esi + 0x42838], 1
// 004f3b0c  89be08280400         mov dword ptr [esi + 0x42808], edi
// 004f3b12  89be0c280400         mov dword ptr [esi + 0x4280c], edi
// 004f3b18  89be00200000         mov dword ptr [esi + 0x2000], edi
// 004f3b1e  89be04400000         mov dword ptr [esi + 0x4004], edi
// 004f3b24  ff153ce97700         call dword ptr [0x77e93c]
// 004f3b2a  83c404               add esp, 4
// 004f3b2d  89860c280400         mov dword ptr [esi + 0x4280c], eax
// 004f3b33  33c0                 xor eax, eax
// 004f3b35  8d8e08400000         lea ecx, [esi + 0x4008]
// 004f3b3b  eb03                 jmp 0x4f3b40
// 004f3b3d  8d4900               lea ecx, [ecx]
// 004f3b40  8b960c280400         mov edx, dword ptr [esi + 0x4280c]
// 004f3b46  03d0                 add edx, eax
// 004f3b48  8911                 mov dword ptr [ecx], edx
// 004f3b4a  0580000000           add eax, 0x80
// 004f3b4f  83c104               add ecx, 4
// 004f3b52  3d00007d00           cmp eax, 0x7d0000
// 004f3b57  7ce7                 jl 0x4f3b40
// 004f3b59  8d8610280400         lea eax, [esi + 0x42810]
// 004f3b5f  50                   push eax
// 004f3b60  c7860828040000fa0000 mov dword ptr [esi + 0x42808], 0xfa00
// 004f3b6a  ff15c8d27700         call dword ptr [0x77d2c8]
// 004f3b70  5f                   pop edi
// 004f3b71  8bc6                 mov eax, esi
// 004f3b73  5e                   pop esi
// 004f3b74  c3                   ret 
// library rbxgs-g3d/G3Dcpp\System.cpp (function ??0BufferPool@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/System.cpp
