// roc 2008-06 004859a0  unit: G3D::Shader  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004859a0
//
// 004859a0  51                   push ecx
// 004859a1  53                   push ebx
// 004859a2  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004859a6  55                   push ebp
// 004859a7  56                   push esi
// 004859a8  57                   push edi
// 004859a9  8bf1                 mov esi, ecx
// 004859ab  8b4608               mov eax, dword ptr [esi + 8]
// 004859ae  8d3c9d00000000       lea edi, [ebx*4]
// 004859b5  6a10                 push 0x10
// 004859b7  57                   push edi
// 004859b8  89442418             mov dword ptr [esp + 0x18], eax
// 004859bc  e8bf2b0800           call 0x508580
// 004859c1  57                   push edi
// 004859c2  6a00                 push 0
// 004859c4  50                   push eax
// 004859c5  894608               mov dword ptr [esi + 8], eax
// 004859c8  e863300800           call 0x508a30
// 004859cd  33ed                 xor ebp, ebp
// 004859cf  83c414               add esp, 0x14
// 004859d2  396e0c               cmp dword ptr [esi + 0xc], ebp
// 004859d5  7e2f                 jle 0x485a06
// 004859d7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004859db  8b0ca9               mov ecx, dword ptr [ecx + ebp*4]
// 004859de  85c9                 test ecx, ecx
// 004859e0  741e                 je 0x485a00
// 004859e2  8b01                 mov eax, dword ptr [ecx]
// 004859e4  33d2                 xor edx, edx
// 004859e6  f7f3                 div ebx
// 004859e8  8b4608               mov eax, dword ptr [esi + 8]
// 004859eb  8b7968               mov edi, dword ptr [ecx + 0x68]
// 004859ee  8b0490               mov eax, dword ptr [eax + edx*4]
// 004859f1  894168               mov dword ptr [ecx + 0x68], eax
// 004859f4  8b4608               mov eax, dword ptr [esi + 8]
// 004859f7  890c90               mov dword ptr [eax + edx*4], ecx
// 004859fa  8bcf                 mov ecx, edi
// 004859fc  85ff                 test edi, edi
// 004859fe  75e2                 jne 0x4859e2
// 00485a00  45                   inc ebp
// 00485a01  3b6e0c               cmp ebp, dword ptr [esi + 0xc]
// 00485a04  7cd1                 jl 0x4859d7
// 00485a06  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00485a0a  51                   push ecx
// 00485a0b  e810230800           call 0x507d20
// 00485a10  83c404               add esp, 4
// 00485a13  5f                   pop edi
// 00485a14  895e0c               mov dword ptr [esi + 0xc], ebx
// 00485a17  5e                   pop esi
// 00485a18  5d                   pop ebp
// 00485a19  5b                   pop ebx
// 00485a1a  59                   pop ecx
// 00485a1b  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ?resize@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VArg@ArgList@GPUProgram@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
