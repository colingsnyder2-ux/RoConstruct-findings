// roc 2007-03 00481b10  unit: seg_00480000  size: 251 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00481b10
//
// 00481b10  6aff                 push -1
// 00481b12  68cc817400           push 0x7481cc
// 00481b17  64a100000000         mov eax, dword ptr fs:[0]
// 00481b1d  50                   push eax
// 00481b1e  51                   push ecx
// 00481b1f  56                   push esi
// 00481b20  57                   push edi
// 00481b21  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00481b26  33c4                 xor eax, esp
// 00481b28  50                   push eax
// 00481b29  8d442410             lea eax, [esp + 0x10]
// 00481b2d  64a300000000         mov dword ptr fs:[0], eax
// 00481b33  8bf9                 mov edi, ecx
// 00481b35  897c240c             mov dword ptr [esp + 0xc], edi
// 00481b39  8d7704               lea esi, [edi + 4]
// 00481b3c  8bce                 mov ecx, esi
// 00481b3e  c744241801000000     mov dword ptr [esp + 0x18], 1
// 00481b46  ff1584e77700         call dword ptr [0x77e784]
// 00481b4c  d9ee                 fldz 
// 00481b4e  d95628               fst dword ptr [esi + 0x28]
// 00481b51  c7465c00000000       mov dword ptr [esi + 0x5c], 0
// 00481b58  d95624               fst dword ptr [esi + 0x24]
// 00481b5b  d95620               fst dword ptr [esi + 0x20]
// 00481b5e  d9561c               fst dword ptr [esi + 0x1c]
// 00481b61  d95638               fst dword ptr [esi + 0x38]
// 00481b64  d95634               fst dword ptr [esi + 0x34]
// 00481b67  d95630               fst dword ptr [esi + 0x30]
// 00481b6a  d9562c               fst dword ptr [esi + 0x2c]
// 00481b6d  d95648               fst dword ptr [esi + 0x48]
// 00481b70  d95644               fst dword ptr [esi + 0x44]
// 00481b73  d95640               fst dword ptr [esi + 0x40]
// 00481b76  d9563c               fst dword ptr [esi + 0x3c]
// 00481b79  d95658               fst dword ptr [esi + 0x58]
// 00481b7c  d95654               fst dword ptr [esi + 0x54]
// 00481b7f  d95650               fst dword ptr [esi + 0x50]
// 00481b82  d95e4c               fstp dword ptr [esi + 0x4c]
// 00481b85  8d442420             lea eax, [esp + 0x20]
// 00481b89  50                   push eax
// 00481b8a  8bce                 mov ecx, esi
// 00481b8c  c644241c02           mov byte ptr [esp + 0x1c], 2
// 00481b91  ff154ce77700         call dword ptr [0x77e74c]
// 00481b97  8d4c243c             lea ecx, [esp + 0x3c]
// 00481b9b  51                   push ecx
// 00481b9c  8d4f20               lea ecx, [edi + 0x20]
// 00481b9f  e83cf1ffff           call 0x480ce0
// 00481ba4  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 00481bab  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 00481bb2  8d4c2420             lea ecx, [esp + 0x20]
// 00481bb6  8917                 mov dword ptr [edi], edx
// 00481bb8  894768               mov dword ptr [edi + 0x68], eax
// 00481bbb  c644241800           mov byte ptr [esp + 0x18], 0
// 00481bc0  ff158ce77700         call dword ptr [0x77e78c]
// 00481bc6  8b74247c             mov esi, dword ptr [esp + 0x7c]
// 00481bca  85f6                 test esi, esi
// 00481bcc  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00481bd4  741f                 je 0x481bf5
// 00481bd6  8d4e04               lea ecx, [esi + 4]
// 00481bd9  51                   push ecx
// 00481bda  ff15a8d27700         call dword ptr [0x77d2a8]
// 00481be0  85c0                 test eax, eax
// 00481be2  7511                 jne 0x481bf5
// 00481be4  8bce                 mov ecx, esi
// 00481be6  e8d517feff           call 0x4633c0
// 00481beb  8b16                 mov edx, dword ptr [esi]
// 00481bed  8b02                 mov eax, dword ptr [edx]
// 00481bef  6a01                 push 1
// 00481bf1  8bce                 mov ecx, esi
// 00481bf3  ffd0                 call eax
// 00481bf5  8bc7                 mov eax, edi
// 00481bf7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00481bfb  64890d00000000       mov dword ptr fs:[0], ecx
// 00481c02  59                   pop ecx
// 00481c03  5f                   pop edi
// 00481c04  5e                   pop esi
// 00481c05  83c410               add esp, 0x10
// 00481c08  c26c00               ret 0x6c
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ??0Node@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VArg@ArgList@GPUProgram@G3D@@@G3D@@QAE@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VArg@ArgList@GPUProgram@2@IPAV012@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
