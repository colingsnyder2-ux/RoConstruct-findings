// from server: 100% by auto
// roc 2008-06 004858b0  unit: G3D::Shader  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004858b0
//
// 004858b0  53                   push ebx
// 004858b1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 004858b5  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 004858b9  55                   push ebp
// 004858ba  56                   push esi
// 004858bb  8bf1                 mov esi, ecx
// 004858bd  8b4b14               mov ecx, dword ptr [ebx + 0x14]
// 004858c0  57                   push edi
// 004858c1  7205                 jb 0x4858c8
// 004858c3  8b4304               mov eax, dword ptr [ebx + 4]
// 004858c6  eb03                 jmp 0x4858cb
// 004858c8  8d4304               lea eax, [ebx + 4]
// 004858cb  51                   push ecx
// 004858cc  50                   push eax
// 004858cd  e84eca0800           call 0x512320
// 004858d2  33d2                 xor edx, edx
// 004858d4  8bf8                 mov edi, eax
// 004858d6  f7760c               div dword ptr [esi + 0xc]
// 004858d9  8b4608               mov eax, dword ptr [esi + 8]
// 004858dc  83c408               add esp, 8
// 004858df  8b3490               mov esi, dword ptr [eax + edx*4]
// 004858e2  85f6                 test esi, esi
// 004858e4  7423                 je 0x485909
// 004858e6  8b2d44248000         mov ebp, dword ptr [0x802444]
// 004858ec  8d642400             lea esp, [esp]
// 004858f0  393e                 cmp dword ptr [esi], edi
// 004858f2  750e                 jne 0x485902
// 004858f4  8d4e04               lea ecx, [esi + 4]
// 004858f7  53                   push ebx
// 004858f8  51                   push ecx
// 004858f9  ffd5                 call ebp
// 004858fb  83c408               add esp, 8
// 004858fe  84c0                 test al, al
// 00485900  7507                 jne 0x485909
// 00485902  8b7668               mov esi, dword ptr [esi + 0x68]
// 00485905  85f6                 test esi, esi
// 00485907  75e7                 jne 0x4858f0
// 00485909  5f                   pop edi
// 0048590a  8d4620               lea eax, [esi + 0x20]
// 0048590d  5e                   pop esi
// 0048590e  5d                   pop ebp
// 0048590f  5b                   pop ebx
// 00485910  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ?get@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VArg@ArgList@GPUProgram@G3D@@@G3D@@QBEAAVArg@ArgList@GPUProgram@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
