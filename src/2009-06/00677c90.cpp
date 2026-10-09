// roc 2009-06 00677c90  unit: RBX::Message  size: 192 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00677c90
//
// 00677c90  56                   push esi
// 00677c91  8b742408             mov esi, dword ptr [esp + 8]
// 00677c95  8b06                 mov eax, dword ptr [esi]
// 00677c97  8b10                 mov edx, dword ptr [eax]
// 00677c99  57                   push edi
// 00677c9a  8bf9                 mov edi, ecx
// 00677c9c  8bce                 mov ecx, esi
// 00677c9e  ffd2                 call edx
// 00677ca0  84c0                 test al, al
// 00677ca2  741e                 je 0x677cc2
// 00677ca4  837e0400             cmp dword ptr [esi + 4], 0
// 00677ca8  7d43                 jge 0x677ced
// 00677caa  8b4704               mov eax, dword ptr [edi + 4]
// 00677cad  8d4c240c             lea ecx, [esp + 0xc]
// 00677cb1  51                   push ecx
// 00677cb2  8bcf                 mov ecx, edi
// 00677cb4  89742410             mov dword ptr [esp + 0x10], esi
// 00677cb8  894604               mov dword ptr [esi + 4], eax
// 00677cbb  e860ffffff           call 0x677c20
// 00677cc0  eb2b                 jmp 0x677ced
// 00677cc2  8b5604               mov edx, dword ptr [esi + 4]
// 00677cc5  85d2                 test edx, edx
// 00677cc7  7c24                 jl 0x677ced
// 00677cc9  8b07                 mov eax, dword ptr [edi]
// 00677ccb  8b4f04               mov ecx, dword ptr [edi + 4]
// 00677cce  8b4c88fc             mov ecx, dword ptr [eax + ecx*4 - 4]
// 00677cd2  890c90               mov dword ptr [eax + edx*4], ecx
// 00677cd5  895104               mov dword ptr [ecx + 4], edx
// 00677cd8  8b5704               mov edx, dword ptr [edi + 4]
// 00677cdb  6a00                 push 0
// 00677cdd  4a                   dec edx
// 00677cde  52                   push edx
// 00677cdf  8bcf                 mov ecx, edi
// 00677ce1  e8cabfe6ff           call 0x4e3cb0
// 00677ce6  c74604ffffffff       mov dword ptr [esi + 4], 0xffffffff
// 00677ced  8b06                 mov eax, dword ptr [esi]
// 00677cef  8b5004               mov edx, dword ptr [eax + 4]
// 00677cf2  8bce                 mov ecx, esi
// 00677cf4  ffd2                 call edx
// 00677cf6  84c0                 test al, al
// 00677cf8  7422                 je 0x677d1c
// 00677cfa  837e0800             cmp dword ptr [esi + 8], 0
// 00677cfe  7d4b                 jge 0x677d4b
// 00677d00  8b4710               mov eax, dword ptr [edi + 0x10]
// 00677d03  8d4f0c               lea ecx, [edi + 0xc]
// 00677d06  8d54240c             lea edx, [esp + 0xc]
// 00677d0a  52                   push edx
// 00677d0b  89742410             mov dword ptr [esp + 0x10], esi
// 00677d0f  894608               mov dword ptr [esi + 8], eax
// 00677d12  e809ffffff           call 0x677c20
// 00677d17  5f                   pop edi
// 00677d18  5e                   pop esi
// 00677d19  c20400               ret 4
// 00677d1c  53                   push ebx
// 00677d1d  8b5e08               mov ebx, dword ptr [esi + 8]
// 00677d20  85db                 test ebx, ebx
// 00677d22  7c26                 jl 0x677d4a
// 00677d24  8b470c               mov eax, dword ptr [edi + 0xc]
// 00677d27  8b5710               mov edx, dword ptr [edi + 0x10]
// 00677d2a  8b5490fc             mov edx, dword ptr [eax + edx*4 - 4]
// 00677d2e  8d4f0c               lea ecx, [edi + 0xc]
// 00677d31  891498               mov dword ptr [eax + ebx*4], edx
// 00677d34  895a08               mov dword ptr [edx + 8], ebx
// 00677d37  8b4104               mov eax, dword ptr [ecx + 4]
// 00677d3a  6a00                 push 0
// 00677d3c  48                   dec eax
// 00677d3d  50                   push eax
// 00677d3e  e86dbfe6ff           call 0x4e3cb0
// 00677d43  c74608ffffffff       mov dword ptr [esi + 8], 0xffffffff
// 00677d4a  5b                   pop ebx
// 00677d4b  5f                   pop edi
// 00677d4c  5e                   pop esi
// 00677d4d  c20400               ret 4
// library openrbx-client/App\util\IRenderable.cpp (function ?recomputeShouldRender@IRenderableBucket@RBX@@IAEXPAVIRenderable@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/IRenderable.cpp
