// from server: 100% by auto
// roc 2010-06 00498800  unit: G3D::Shader  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00498800
//
// 00498800  51                   push ecx
// 00498801  53                   push ebx
// 00498802  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00498806  55                   push ebp
// 00498807  56                   push esi
// 00498808  57                   push edi
// 00498809  8bf1                 mov esi, ecx
// 0049880b  8b4608               mov eax, dword ptr [esi + 8]
// 0049880e  8d3c9d00000000       lea edi, [ebx*4]
// 00498815  6a10                 push 0x10
// 00498817  57                   push edi
// 00498818  89442418             mov dword ptr [esp + 0x18], eax
// 0049881c  e87f500b00           call 0x54d8a0
// 00498821  57                   push edi
// 00498822  6a00                 push 0
// 00498824  50                   push eax
// 00498825  894608               mov dword ptr [esi + 8], eax
// 00498828  e8735d0b00           call 0x54e5a0
// 0049882d  33ed                 xor ebp, ebp
// 0049882f  83c414               add esp, 0x14
// 00498832  396e0c               cmp dword ptr [esi + 0xc], ebp
// 00498835  7e2f                 jle 0x498866
// 00498837  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0049883b  8b0ca9               mov ecx, dword ptr [ecx + ebp*4]
// 0049883e  85c9                 test ecx, ecx
// 00498840  741e                 je 0x498860
// 00498842  8b01                 mov eax, dword ptr [ecx]
// 00498844  33d2                 xor edx, edx
// 00498846  f7f3                 div ebx
// 00498848  8b4608               mov eax, dword ptr [esi + 8]
// 0049884b  8b7968               mov edi, dword ptr [ecx + 0x68]
// 0049884e  8b0490               mov eax, dword ptr [eax + edx*4]
// 00498851  894168               mov dword ptr [ecx + 0x68], eax
// 00498854  8b4608               mov eax, dword ptr [esi + 8]
// 00498857  890c90               mov dword ptr [eax + edx*4], ecx
// 0049885a  8bcf                 mov ecx, edi
// 0049885c  85ff                 test edi, edi
// 0049885e  75e2                 jne 0x498842
// 00498860  45                   inc ebp
// 00498861  3b6e0c               cmp ebp, dword ptr [esi + 0xc]
// 00498864  7cd1                 jl 0x498837
// 00498866  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0049886a  51                   push ecx
// 0049886b  e850510b00           call 0x54d9c0
// 00498870  83c404               add esp, 4
// 00498873  5f                   pop edi
// 00498874  895e0c               mov dword ptr [esi + 0xc], ebx
// 00498877  5e                   pop esi
// 00498878  5d                   pop ebp
// 00498879  5b                   pop ebx
// 0049887a  59                   pop ecx
// 0049887b  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ?resize@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VArg@ArgList@GPUProgram@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
