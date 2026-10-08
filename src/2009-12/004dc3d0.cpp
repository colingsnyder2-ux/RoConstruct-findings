// roc 2009-12 004dc3d0  unit: G3D::Shader  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004dc3d0
//
// 004dc3d0  51                   push ecx
// 004dc3d1  53                   push ebx
// 004dc3d2  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004dc3d6  55                   push ebp
// 004dc3d7  56                   push esi
// 004dc3d8  57                   push edi
// 004dc3d9  8bf1                 mov esi, ecx
// 004dc3db  8b4608               mov eax, dword ptr [esi + 8]
// 004dc3de  8d3c9d00000000       lea edi, [ebx*4]
// 004dc3e5  6a10                 push 0x10
// 004dc3e7  57                   push edi
// 004dc3e8  89442418             mov dword ptr [esp + 0x18], eax
// 004dc3ec  e8cfde1000           call 0x5ea2c0
// 004dc3f1  57                   push edi
// 004dc3f2  6a00                 push 0
// 004dc3f4  50                   push eax
// 004dc3f5  894608               mov dword ptr [esi + 8], eax
// 004dc3f8  e8c3eb1000           call 0x5eafc0
// 004dc3fd  33ed                 xor ebp, ebp
// 004dc3ff  83c414               add esp, 0x14
// 004dc402  396e0c               cmp dword ptr [esi + 0xc], ebp
// 004dc405  7e2f                 jle 0x4dc436
// 004dc407  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004dc40b  8b0ca9               mov ecx, dword ptr [ecx + ebp*4]
// 004dc40e  85c9                 test ecx, ecx
// 004dc410  741e                 je 0x4dc430
// 004dc412  8b01                 mov eax, dword ptr [ecx]
// 004dc414  33d2                 xor edx, edx
// 004dc416  f7f3                 div ebx
// 004dc418  8b4608               mov eax, dword ptr [esi + 8]
// 004dc41b  8b7968               mov edi, dword ptr [ecx + 0x68]
// 004dc41e  8b0490               mov eax, dword ptr [eax + edx*4]
// 004dc421  894168               mov dword ptr [ecx + 0x68], eax
// 004dc424  8b4608               mov eax, dword ptr [esi + 8]
// 004dc427  890c90               mov dword ptr [eax + edx*4], ecx
// 004dc42a  8bcf                 mov ecx, edi
// 004dc42c  85ff                 test edi, edi
// 004dc42e  75e2                 jne 0x4dc412
// 004dc430  45                   inc ebp
// 004dc431  3b6e0c               cmp ebp, dword ptr [esi + 0xc]
// 004dc434  7cd1                 jl 0x4dc407
// 004dc436  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004dc43a  51                   push ecx
// 004dc43b  e8a0df1000           call 0x5ea3e0
// 004dc440  83c404               add esp, 4
// 004dc443  5f                   pop edi
// 004dc444  895e0c               mov dword ptr [esi + 0xc], ebx
// 004dc447  5e                   pop esi
// 004dc448  5d                   pop ebp
// 004dc449  5b                   pop ebx
// 004dc44a  59                   pop ecx
// 004dc44b  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ?resize@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VArg@ArgList@GPUProgram@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
