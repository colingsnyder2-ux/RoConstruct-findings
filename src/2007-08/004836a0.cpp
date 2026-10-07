// roc 2007-08 004836a0  unit: G3D::Shader  size: 251 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004836a0
//
// 004836a0  6aff                 push -1
// 004836a2  68bc607400           push 0x7460bc
// 004836a7  64a100000000         mov eax, dword ptr fs:[0]
// 004836ad  50                   push eax
// 004836ae  51                   push ecx
// 004836af  56                   push esi
// 004836b0  57                   push edi
// 004836b1  a188518b00           mov eax, dword ptr [0x8b5188]
// 004836b6  33c4                 xor eax, esp
// 004836b8  50                   push eax
// 004836b9  8d442410             lea eax, [esp + 0x10]
// 004836bd  64a300000000         mov dword ptr fs:[0], eax
// 004836c3  8bf9                 mov edi, ecx
// 004836c5  897c240c             mov dword ptr [esp + 0xc], edi
// 004836c9  8d7704               lea esi, [edi + 4]
// 004836cc  8bce                 mov ecx, esi
// 004836ce  c744241801000000     mov dword ptr [esp + 0x18], 1
// 004836d6  ff15a4e67700         call dword ptr [0x77e6a4]
// 004836dc  d9ee                 fldz 
// 004836de  d95628               fst dword ptr [esi + 0x28]
// 004836e1  c7465c00000000       mov dword ptr [esi + 0x5c], 0
// 004836e8  d95624               fst dword ptr [esi + 0x24]
// 004836eb  d95620               fst dword ptr [esi + 0x20]
// 004836ee  d9561c               fst dword ptr [esi + 0x1c]
// 004836f1  d95638               fst dword ptr [esi + 0x38]
// 004836f4  d95634               fst dword ptr [esi + 0x34]
// 004836f7  d95630               fst dword ptr [esi + 0x30]
// 004836fa  d9562c               fst dword ptr [esi + 0x2c]
// 004836fd  d95648               fst dword ptr [esi + 0x48]
// 00483700  d95644               fst dword ptr [esi + 0x44]
// 00483703  d95640               fst dword ptr [esi + 0x40]
// 00483706  d9563c               fst dword ptr [esi + 0x3c]
// 00483709  d95658               fst dword ptr [esi + 0x58]
// 0048370c  d95654               fst dword ptr [esi + 0x54]
// 0048370f  d95650               fst dword ptr [esi + 0x50]
// 00483712  d95e4c               fstp dword ptr [esi + 0x4c]
// 00483715  8d442420             lea eax, [esp + 0x20]
// 00483719  50                   push eax
// 0048371a  8bce                 mov ecx, esi
// 0048371c  c644241c02           mov byte ptr [esp + 0x1c], 2
// 00483721  ff1590e67700         call dword ptr [0x77e690]
// 00483727  8d4c243c             lea ecx, [esp + 0x3c]
// 0048372b  51                   push ecx
// 0048372c  8d4f20               lea ecx, [edi + 0x20]
// 0048372f  e8fcf0ffff           call 0x482830
// 00483734  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 0048373b  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 00483742  8d4c2420             lea ecx, [esp + 0x20]
// 00483746  8917                 mov dword ptr [edi], edx
// 00483748  894768               mov dword ptr [edi + 0x68], eax
// 0048374b  c644241800           mov byte ptr [esp + 0x18], 0
// 00483750  ff15ace67700         call dword ptr [0x77e6ac]
// 00483756  8b74247c             mov esi, dword ptr [esp + 0x7c]
// 0048375a  85f6                 test esi, esi
// 0048375c  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00483764  741f                 je 0x483785
// 00483766  8d4e04               lea ecx, [esi + 4]
// 00483769  51                   push ecx
// 0048376a  ff15e8d27700         call dword ptr [0x77d2e8]
// 00483770  85c0                 test eax, eax
// 00483772  7511                 jne 0x483785
// 00483774  8bce                 mov ecx, esi
// 00483776  e85546fdff           call 0x457dd0
// 0048377b  8b16                 mov edx, dword ptr [esi]
// 0048377d  8b02                 mov eax, dword ptr [edx]
// 0048377f  6a01                 push 1
// 00483781  8bce                 mov ecx, esi
// 00483783  ffd0                 call eax
// 00483785  8bc7                 mov eax, edi
// 00483787  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0048378b  64890d00000000       mov dword ptr fs:[0], ecx
// 00483792  59                   pop ecx
// 00483793  5f                   pop edi
// 00483794  5e                   pop esi
// 00483795  83c410               add esp, 0x10
// 00483798  c26c00               ret 0x6c
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ??0Node@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VArg@ArgList@GPUProgram@G3D@@@G3D@@QAE@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VArg@ArgList@GPUProgram@2@IPAV012@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
