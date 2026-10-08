// roc 2007-03 0046f4f0  unit: seg_00460000  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0046f4f0
//
// 0046f4f0  6aff                 push -1
// 0046f4f2  6869807400           push 0x748069
// 0046f4f7  64a100000000         mov eax, dword ptr fs:[0]
// 0046f4fd  50                   push eax
// 0046f4fe  51                   push ecx
// 0046f4ff  56                   push esi
// 0046f500  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 0046f505  33c4                 xor eax, esp
// 0046f507  50                   push eax
// 0046f508  8d44240c             lea eax, [esp + 0xc]
// 0046f50c  64a300000000         mov dword ptr fs:[0], eax
// 0046f512  8bf1                 mov esi, ecx
// 0046f514  89742408             mov dword ptr [esp + 8], esi
// 0046f518  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0046f51c  50                   push eax
// 0046f51d  ff157ce77700         call dword ptr [0x77e77c]
// 0046f523  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0046f527  51                   push ecx
// 0046f528  8d4e1c               lea ecx, [esi + 0x1c]
// 0046f52b  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0046f533  ff157ce77700         call dword ptr [0x77e77c]
// 0046f539  8bc6                 mov eax, esi
// 0046f53b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0046f53f  64890d00000000       mov dword ptr fs:[0], ecx
// 0046f546  59                   pop ecx
// 0046f547  5e                   pop esi
// 0046f548  83c410               add esp, 0x10
// 0046f54b  c20800               ret 8
// library g3d-6.09/G3Dcpp\GImage.cpp (function ??0Error@GImage@G3D@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
