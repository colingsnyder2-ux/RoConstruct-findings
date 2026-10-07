// roc 2007-08 00482c50  unit: G3D::Shader  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00482c50
//
// 00482c50  6aff                 push -1
// 00482c52  68c9e67300           push 0x73e6c9
// 00482c57  64a100000000         mov eax, dword ptr fs:[0]
// 00482c5d  50                   push eax
// 00482c5e  51                   push ecx
// 00482c5f  56                   push esi
// 00482c60  a188518b00           mov eax, dword ptr [0x8b5188]
// 00482c65  33c4                 xor eax, esp
// 00482c67  50                   push eax
// 00482c68  8d44240c             lea eax, [esp + 0xc]
// 00482c6c  64a300000000         mov dword ptr fs:[0], eax
// 00482c72  8bf1                 mov esi, ecx
// 00482c74  89742408             mov dword ptr [esp + 8], esi
// 00482c78  8b465c               mov eax, dword ptr [esi + 0x5c]
// 00482c7b  85c0                 test eax, eax
// 00482c7d  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00482c85  742c                 je 0x482cb3
// 00482c87  83c004               add eax, 4
// 00482c8a  50                   push eax
// 00482c8b  ff15e8d27700         call dword ptr [0x77d2e8]
// 00482c91  85c0                 test eax, eax
// 00482c93  7517                 jne 0x482cac
// 00482c95  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 00482c98  e83351fdff           call 0x457dd0
// 00482c9d  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 00482ca0  85c9                 test ecx, ecx
// 00482ca2  7408                 je 0x482cac
// 00482ca4  8b01                 mov eax, dword ptr [ecx]
// 00482ca6  8b10                 mov edx, dword ptr [eax]
// 00482ca8  6a01                 push 1
// 00482caa  ffd2                 call edx
// 00482cac  c7465c00000000       mov dword ptr [esi + 0x5c], 0
// 00482cb3  8bce                 mov ecx, esi
// 00482cb5  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00482cbd  ff15ace67700         call dword ptr [0x77e6ac]
// 00482cc3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00482cc7  64890d00000000       mov dword ptr fs:[0], ecx
// 00482cce  59                   pop ecx
// 00482ccf  5e                   pop esi
// 00482cd0  83c410               add esp, 0x10
// 00482cd3  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ??1Entry@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VArg@ArgList@GPUProgram@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
