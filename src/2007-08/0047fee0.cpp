// from server: 100% by tester
// roc 2007-03 0047e2c0  unit: seg_00470000  size: 177 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047e2c0
//
// 0047e2c0  6aff                 push -1
// 0047e2c2  689b7e7400           push 0x747e9b
// 0047e2c7  64a100000000         mov eax, dword ptr fs:[0]
// 0047e2cd  50                   push eax
// 0047e2ce  51                   push ecx
// 0047e2cf  53                   push ebx
// 0047e2d0  55                   push ebp
// 0047e2d1  56                   push esi
// 0047e2d2  57                   push edi
// 0047e2d3  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 0047e2d8  33c4                 xor eax, esp
// 0047e2da  50                   push eax
// 0047e2db  8d442418             lea eax, [esp + 0x18]
// 0047e2df  64a300000000         mov dword ptr fs:[0], eax
// 0047e2e5  8bf1                 mov esi, ecx
// 0047e2e7  89742414             mov dword ptr [esp + 0x14], esi
// 0047e2eb  33ed                 xor ebp, ebp
// 0047e2ed  896e08               mov dword ptr [esi + 8], ebp
// 0047e2f0  896e0c               mov dword ptr [esi + 0xc], ebp
// 0047e2f3  896e04               mov dword ptr [esi + 4], ebp
// 0047e2f6  8b442428             mov eax, dword ptr [esp + 0x28]
// 0047e2fa  6800807900           push 0x798000
// 0047e2ff  896c2424             mov dword ptr [esp + 0x24], ebp
// 0047e303  894610               mov dword ptr [esi + 0x10], eax
// 0047e306  ff1548d27700         call dword ptr [0x77d248]
// 0047e30c  8bf8                 mov edi, eax
// 0047e30e  3bfd                 cmp edi, ebp
// 0047e310  7447                 je 0x47e359
// 0047e312  68ec7f7900           push 0x797fec
// 0047e317  57                   push edi
// 0047e318  ff1544d27700         call dword ptr [0x77d244]
// 0047e31e  8bd8                 mov ebx, eax
// 0047e320  3bdd                 cmp ebx, ebp
// 0047e322  742e                 je 0x47e352
// 0047e324  55                   push ebp
// 0047e325  56                   push esi
// 0047e326  68c07a7900           push 0x797ac0
// 0047e32b  6800080000           push 0x800
// 0047e330  55                   push ebp
// 0047e331  ff1588d27700         call dword ptr [0x77d288]
// 0047e337  50                   push eax
// 0047e338  ffd3                 call ebx
// 0047e33a  85c0                 test eax, eax
// 0047e33c  7514                 jne 0x47e352
// 0047e33e  8b06                 mov eax, dword ptr [esi]
// 0047e340  8b08                 mov ecx, dword ptr [eax]
// 0047e342  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0047e345  6a01                 push 1
// 0047e347  56                   push esi
// 0047e348  6800e14700           push 0x47e100
// 0047e34d  6a04                 push 4
// 0047e34f  50                   push eax
// 0047e350  ffd2                 call edx
// 0047e352  57                   push edi
// 0047e353  ff159cd27700         call dword ptr [0x77d29c]
// 0047e359  8bc6                 mov eax, esi
// 0047e35b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0047e35f  64890d00000000       mov dword ptr fs:[0], ecx
// 0047e366  59                   pop ecx
// 0047e367  5f                   pop edi
// 0047e368  5e                   pop esi
// 0047e369  5d                   pop ebp
// 0047e36a  5b                   pop ebx
// 0047e36b  83c410               add esp, 0x10
// 0047e36e  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ??0_DirectInput@_internal@G3D@@QAE@PAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
