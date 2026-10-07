// roc 2008-06 00486850  unit: G3D::Shader  size: 247 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00486850
//
// 00486850  6aff                 push -1
// 00486852  68cc567c00           push 0x7c56cc
// 00486857  64a100000000         mov eax, dword ptr fs:[0]
// 0048685d  50                   push eax
// 0048685e  64892500000000       mov dword ptr fs:[0], esp
// 00486865  51                   push ecx
// 00486866  56                   push esi
// 00486867  57                   push edi
// 00486868  8bf9                 mov edi, ecx
// 0048686a  897c2408             mov dword ptr [esp + 8], edi
// 0048686e  8d7704               lea esi, [edi + 4]
// 00486871  8bce                 mov ecx, esi
// 00486873  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0048687b  ff1560248000         call dword ptr [0x802460]
// 00486881  d9ee                 fldz 
// 00486883  d95628               fst dword ptr [esi + 0x28]
// 00486886  c7465c00000000       mov dword ptr [esi + 0x5c], 0
// 0048688d  d95624               fst dword ptr [esi + 0x24]
// 00486890  d95620               fst dword ptr [esi + 0x20]
// 00486893  d9561c               fst dword ptr [esi + 0x1c]
// 00486896  d95638               fst dword ptr [esi + 0x38]
// 00486899  d95634               fst dword ptr [esi + 0x34]
// 0048689c  d95630               fst dword ptr [esi + 0x30]
// 0048689f  d9562c               fst dword ptr [esi + 0x2c]
// 004868a2  d95648               fst dword ptr [esi + 0x48]
// 004868a5  d95644               fst dword ptr [esi + 0x44]
// 004868a8  d95640               fst dword ptr [esi + 0x40]
// 004868ab  d9563c               fst dword ptr [esi + 0x3c]
// 004868ae  d95658               fst dword ptr [esi + 0x58]
// 004868b1  d95654               fst dword ptr [esi + 0x54]
// 004868b4  d95650               fst dword ptr [esi + 0x50]
// 004868b7  d95e4c               fstp dword ptr [esi + 0x4c]
// 004868ba  8d44241c             lea eax, [esp + 0x1c]
// 004868be  50                   push eax
// 004868bf  8bce                 mov ecx, esi
// 004868c1  c644241802           mov byte ptr [esp + 0x18], 2
// 004868c6  ff150c248000         call dword ptr [0x80240c]
// 004868cc  8d4c2438             lea ecx, [esp + 0x38]
// 004868d0  51                   push ecx
// 004868d1  8d4f20               lea ecx, [edi + 0x20]
// 004868d4  e8a7f1ffff           call 0x485a80
// 004868d9  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 004868e0  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 004868e7  8d4c241c             lea ecx, [esp + 0x1c]
// 004868eb  8917                 mov dword ptr [edi], edx
// 004868ed  894768               mov dword ptr [edi + 0x68], eax
// 004868f0  c644241400           mov byte ptr [esp + 0x14], 0
// 004868f5  ff1568248000         call dword ptr [0x802468]
// 004868fb  8b442478             mov eax, dword ptr [esp + 0x78]
// 004868ff  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00486907  85c0                 test eax, eax
// 00486909  7427                 je 0x486932
// 0048690b  83c004               add eax, 4
// 0048690e  50                   push eax
// 0048690f  ff15ac218000         call dword ptr [0x8021ac]
// 00486915  85c0                 test eax, eax
// 00486917  7519                 jne 0x486932
// 00486919  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 0048691d  e86e44fdff           call 0x45ad90
// 00486922  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 00486926  85c9                 test ecx, ecx
// 00486928  7408                 je 0x486932
// 0048692a  8b11                 mov edx, dword ptr [ecx]
// 0048692c  8b02                 mov eax, dword ptr [edx]
// 0048692e  6a01                 push 1
// 00486930  ffd0                 call eax
// 00486932  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00486936  8bc7                 mov eax, edi
// 00486938  5f                   pop edi
// 00486939  5e                   pop esi
// 0048693a  64890d00000000       mov dword ptr fs:[0], ecx
// 00486941  83c410               add esp, 0x10
// 00486944  c26c00               ret 0x6c
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ??0Node@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VArg@ArgList@GPUProgram@G3D@@@G3D@@QAE@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VArg@ArgList@GPUProgram@2@IPAV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
