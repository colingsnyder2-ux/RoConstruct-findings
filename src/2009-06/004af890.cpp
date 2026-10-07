// roc 2009-06 004af890  unit: G3D::Shader  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004af890
//
// 004af890  51                   push ecx
// 004af891  53                   push ebx
// 004af892  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004af896  55                   push ebp
// 004af897  56                   push esi
// 004af898  57                   push edi
// 004af899  8bf1                 mov esi, ecx
// 004af89b  8b4608               mov eax, dword ptr [esi + 8]
// 004af89e  8d3c9d00000000       lea edi, [ebx*4]
// 004af8a5  6a10                 push 0x10
// 004af8a7  57                   push edi
// 004af8a8  89442418             mov dword ptr [esp + 0x18], eax
// 004af8ac  e8bfb80b00           call 0x56b170
// 004af8b1  57                   push edi
// 004af8b2  6a00                 push 0
// 004af8b4  50                   push eax
// 004af8b5  894608               mov dword ptr [esi + 8], eax
// 004af8b8  e8d3c50b00           call 0x56be90
// 004af8bd  33ed                 xor ebp, ebp
// 004af8bf  83c414               add esp, 0x14
// 004af8c2  396e0c               cmp dword ptr [esi + 0xc], ebp
// 004af8c5  7e2f                 jle 0x4af8f6
// 004af8c7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004af8cb  8b0ca9               mov ecx, dword ptr [ecx + ebp*4]
// 004af8ce  85c9                 test ecx, ecx
// 004af8d0  741e                 je 0x4af8f0
// 004af8d2  8b01                 mov eax, dword ptr [ecx]
// 004af8d4  33d2                 xor edx, edx
// 004af8d6  f7f3                 div ebx
// 004af8d8  8b4608               mov eax, dword ptr [esi + 8]
// 004af8db  8b7968               mov edi, dword ptr [ecx + 0x68]
// 004af8de  8b0490               mov eax, dword ptr [eax + edx*4]
// 004af8e1  894168               mov dword ptr [ecx + 0x68], eax
// 004af8e4  8b4608               mov eax, dword ptr [esi + 8]
// 004af8e7  890c90               mov dword ptr [eax + edx*4], ecx
// 004af8ea  8bcf                 mov ecx, edi
// 004af8ec  85ff                 test edi, edi
// 004af8ee  75e2                 jne 0x4af8d2
// 004af8f0  45                   inc ebp
// 004af8f1  3b6e0c               cmp ebp, dword ptr [esi + 0xc]
// 004af8f4  7cd1                 jl 0x4af8c7
// 004af8f6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004af8fa  51                   push ecx
// 004af8fb  e890b90b00           call 0x56b290
// 004af900  83c404               add esp, 4
// 004af903  5f                   pop edi
// 004af904  895e0c               mov dword ptr [esi + 0xc], ebx
// 004af907  5e                   pop esi
// 004af908  5d                   pop ebp
// 004af909  5b                   pop ebx
// 004af90a  59                   pop ecx
// 004af90b  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ?resize@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VArg@ArgList@GPUProgram@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
