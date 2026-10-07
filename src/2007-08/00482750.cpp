// roc 2007-08 00482750  unit: G3D::Shader  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00482750
//
// 00482750  51                   push ecx
// 00482751  53                   push ebx
// 00482752  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00482756  55                   push ebp
// 00482757  56                   push esi
// 00482758  57                   push edi
// 00482759  8bf1                 mov esi, ecx
// 0048275b  8b4608               mov eax, dword ptr [esi + 8]
// 0048275e  8d3c9d00000000       lea edi, [ebx*4]
// 00482765  6a10                 push 0x10
// 00482767  57                   push edi
// 00482768  89442418             mov dword ptr [esp + 0x18], eax
// 0048276c  e8efd80700           call 0x500060
// 00482771  57                   push edi
// 00482772  6a00                 push 0
// 00482774  50                   push eax
// 00482775  894608               mov dword ptr [esi + 8], eax
// 00482778  e803de0700           call 0x500580
// 0048277d  33ed                 xor ebp, ebp
// 0048277f  83c414               add esp, 0x14
// 00482782  396e0c               cmp dword ptr [esi + 0xc], ebp
// 00482785  7e31                 jle 0x4827b8
// 00482787  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0048278b  8b0ca9               mov ecx, dword ptr [ecx + ebp*4]
// 0048278e  85c9                 test ecx, ecx
// 00482790  741e                 je 0x4827b0
// 00482792  8b01                 mov eax, dword ptr [ecx]
// 00482794  33d2                 xor edx, edx
// 00482796  f7f3                 div ebx
// 00482798  8b4608               mov eax, dword ptr [esi + 8]
// 0048279b  8b7968               mov edi, dword ptr [ecx + 0x68]
// 0048279e  85ff                 test edi, edi
// 004827a0  8b0490               mov eax, dword ptr [eax + edx*4]
// 004827a3  894168               mov dword ptr [ecx + 0x68], eax
// 004827a6  8b4608               mov eax, dword ptr [esi + 8]
// 004827a9  890c90               mov dword ptr [eax + edx*4], ecx
// 004827ac  8bcf                 mov ecx, edi
// 004827ae  75e2                 jne 0x482792
// 004827b0  83c501               add ebp, 1
// 004827b3  3b6e0c               cmp ebp, dword ptr [esi + 0xc]
// 004827b6  7ccf                 jl 0x482787
// 004827b8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004827bc  51                   push ecx
// 004827bd  e84ed00700           call 0x4ff810
// 004827c2  83c404               add esp, 4
// 004827c5  5f                   pop edi
// 004827c6  895e0c               mov dword ptr [esi + 0xc], ebx
// 004827c9  5e                   pop esi
// 004827ca  5d                   pop ebp
// 004827cb  5b                   pop ebx
// 004827cc  59                   pop ecx
// 004827cd  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ?resize@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VArg@ArgList@GPUProgram@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
