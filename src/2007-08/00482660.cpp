// from server: 100% by auto
// roc 2007-08 00482660  unit: G3D::Shader  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00482660
//
// 00482660  53                   push ebx
// 00482661  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00482665  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 00482669  55                   push ebp
// 0048266a  56                   push esi
// 0048266b  8bf1                 mov esi, ecx
// 0048266d  8b4b14               mov ecx, dword ptr [ebx + 0x14]
// 00482670  57                   push edi
// 00482671  7205                 jb 0x482678
// 00482673  8b4304               mov eax, dword ptr [ebx + 4]
// 00482676  eb03                 jmp 0x48267b
// 00482678  8d4304               lea eax, [ebx + 4]
// 0048267b  51                   push ecx
// 0048267c  50                   push eax
// 0048267d  e8be600800           call 0x508740
// 00482682  33d2                 xor edx, edx
// 00482684  8bf8                 mov edi, eax
// 00482686  f7760c               div dword ptr [esi + 0xc]
// 00482689  8b4608               mov eax, dword ptr [esi + 8]
// 0048268c  83c408               add esp, 8
// 0048268f  8b3490               mov esi, dword ptr [eax + edx*4]
// 00482692  85f6                 test esi, esi
// 00482694  7423                 je 0x4826b9
// 00482696  8b2d94e67700         mov ebp, dword ptr [0x77e694]
// 0048269c  8d642400             lea esp, [esp]
// 004826a0  393e                 cmp dword ptr [esi], edi
// 004826a2  750e                 jne 0x4826b2
// 004826a4  8d4e04               lea ecx, [esi + 4]
// 004826a7  53                   push ebx
// 004826a8  51                   push ecx
// 004826a9  ffd5                 call ebp
// 004826ab  83c408               add esp, 8
// 004826ae  84c0                 test al, al
// 004826b0  7507                 jne 0x4826b9
// 004826b2  8b7668               mov esi, dword ptr [esi + 0x68]
// 004826b5  85f6                 test esi, esi
// 004826b7  75e7                 jne 0x4826a0
// 004826b9  5f                   pop edi
// 004826ba  8d4620               lea eax, [esi + 0x20]
// 004826bd  5e                   pop esi
// 004826be  5d                   pop ebp
// 004826bf  5b                   pop ebx
// 004826c0  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ?get@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VArg@ArgList@GPUProgram@G3D@@@G3D@@QBEAAVArg@ArgList@GPUProgram@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
