// roc 2007-03 004810c0  unit: seg_00480000  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004810c0
//
// 004810c0  6aff                 push -1
// 004810c2  6869807400           push 0x748069
// 004810c7  64a100000000         mov eax, dword ptr fs:[0]
// 004810cd  50                   push eax
// 004810ce  51                   push ecx
// 004810cf  56                   push esi
// 004810d0  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004810d5  33c4                 xor eax, esp
// 004810d7  50                   push eax
// 004810d8  8d44240c             lea eax, [esp + 0xc]
// 004810dc  64a300000000         mov dword ptr fs:[0], eax
// 004810e2  8bf1                 mov esi, ecx
// 004810e4  89742408             mov dword ptr [esp + 8], esi
// 004810e8  8b465c               mov eax, dword ptr [esi + 0x5c]
// 004810eb  85c0                 test eax, eax
// 004810ed  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004810f5  742c                 je 0x481123
// 004810f7  83c004               add eax, 4
// 004810fa  50                   push eax
// 004810fb  ff15a8d27700         call dword ptr [0x77d2a8]
// 00481101  85c0                 test eax, eax
// 00481103  7517                 jne 0x48111c
// 00481105  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 00481108  e8b322feff           call 0x4633c0
// 0048110d  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 00481110  85c9                 test ecx, ecx
// 00481112  7408                 je 0x48111c
// 00481114  8b01                 mov eax, dword ptr [ecx]
// 00481116  8b10                 mov edx, dword ptr [eax]
// 00481118  6a01                 push 1
// 0048111a  ffd2                 call edx
// 0048111c  c7465c00000000       mov dword ptr [esi + 0x5c], 0
// 00481123  8bce                 mov ecx, esi
// 00481125  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0048112d  ff158ce77700         call dword ptr [0x77e78c]
// 00481133  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00481137  64890d00000000       mov dword ptr fs:[0], ecx
// 0048113e  59                   pop ecx
// 0048113f  5e                   pop esi
// 00481140  83c410               add esp, 0x10
// 00481143  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ??1Entry@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VArg@ArgList@GPUProgram@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
