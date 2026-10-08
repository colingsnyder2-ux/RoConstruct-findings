// roc 2009-12 004877a0  unit: Ogre::GfxClustererPart  size: 442 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004877a0
//
// 004877a0  51                   push ecx
// 004877a1  56                   push esi
// 004877a2  8bf1                 mov esi, ecx
// 004877a4  8b560c               mov edx, dword ptr [esi + 0xc]
// 004877a7  57                   push edi
// 004877a8  85d2                 test edx, edx
// 004877aa  7504                 jne 0x4877b0
// 004877ac  33c9                 xor ecx, ecx
// 004877ae  eb0a                 jmp 0x4877ba
// 004877b0  8b4614               mov eax, dword ptr [esi + 0x14]
// 004877b3  2bc2                 sub eax, edx
// 004877b5  c1f802               sar eax, 2
// 004877b8  8bc8                 mov ecx, eax
// 004877ba  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004877be  85ff                 test edi, edi
// 004877c0  0f848e010000         je 0x487954
// 004877c6  53                   push ebx
// 004877c7  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 004877ca  8bc3                 mov eax, ebx
// 004877cc  2bc2                 sub eax, edx
// 004877ce  c1f802               sar eax, 2
// 004877d1  baffffff3f           mov edx, 0x3fffffff
// 004877d6  2bd0                 sub edx, eax
// 004877d8  3bd7                 cmp edx, edi
// 004877da  7305                 jae 0x4877e1
// 004877dc  e87fa9fbff           call 0x442160
// 004877e1  8d1438               lea edx, [eax + edi]
// 004877e4  55                   push ebp
// 004877e5  3bca                 cmp ecx, edx
// 004877e7  0f83b5000000         jae 0x4878a2
// 004877ed  8bc1                 mov eax, ecx
// 004877ef  d1e8                 shr eax, 1
// 004877f1  bbffffff3f           mov ebx, 0x3fffffff
// 004877f6  2bd8                 sub ebx, eax
// 004877f8  3bd9                 cmp ebx, ecx
// 004877fa  730e                 jae 0x48780a
// 004877fc  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00487804  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00487808  eb06                 jmp 0x487810
// 0048780a  03c8                 add ecx, eax
// 0048780c  894c2410             mov dword ptr [esp + 0x10], ecx
// 00487810  3bca                 cmp ecx, edx
// 00487812  7306                 jae 0x48781a
// 00487814  89542410             mov dword ptr [esp + 0x10], edx
// 00487818  8bca                 mov ecx, edx
// 0048781a  6a00                 push 0
// 0048781c  51                   push ecx
// 0048781d  e81e91faff           call 0x430940
// 00487822  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00487826  2b5e0c               sub ebx, dword ptr [esi + 0xc]
// 00487829  83c408               add esp, 8
// 0048782c  8be8                 mov ebp, eax
// 0048782e  8b442424             mov eax, dword ptr [esp + 0x24]
// 00487832  50                   push eax
// 00487833  c1fb02               sar ebx, 2
// 00487836  57                   push edi
// 00487837  8d4c9d00             lea ecx, [ebp + ebx*4]
// 0048783b  51                   push ecx
// 0048783c  8bce                 mov ecx, esi
// 0048783e  e8adfcffff           call 0x4874f0
// 00487843  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00487847  8b460c               mov eax, dword ptr [esi + 0xc]
// 0048784a  55                   push ebp
// 0048784b  52                   push edx
// 0048784c  50                   push eax
// 0048784d  8bce                 mov ecx, esi
// 0048784f  e87c750200           call 0x4aedd0
// 00487854  8b5610               mov edx, dword ptr [esi + 0x10]
// 00487857  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0048785b  03df                 add ebx, edi
// 0048785d  8d4c9d00             lea ecx, [ebp + ebx*4]
// 00487861  51                   push ecx
// 00487862  52                   push edx
// 00487863  50                   push eax
// 00487864  8bce                 mov ecx, esi
// 00487866  e865750200           call 0x4aedd0
// 0048786b  8b460c               mov eax, dword ptr [esi + 0xc]
// 0048786e  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00487871  2bc8                 sub ecx, eax
// 00487873  c1f902               sar ecx, 2
// 00487876  03f9                 add edi, ecx
// 00487878  85c0                 test eax, eax
// 0048787a  7409                 je 0x487885
// 0048787c  50                   push eax
// 0048787d  e8d8bf3600           call 0x7f385a
// 00487882  83c404               add esp, 4
// 00487885  8b542410             mov edx, dword ptr [esp + 0x10]
// 00487889  8d4cbd00             lea ecx, [ebp + edi*4]
// 0048788d  8d449500             lea eax, [ebp + edx*4]
// 00487891  896e0c               mov dword ptr [esi + 0xc], ebp
// 00487894  5d                   pop ebp
// 00487895  5b                   pop ebx
// 00487896  5f                   pop edi
// 00487897  894614               mov dword ptr [esi + 0x14], eax
// 0048789a  894e10               mov dword ptr [esi + 0x10], ecx
// 0048789d  5e                   pop esi
// 0048789e  59                   pop ecx
// 0048789f  c21000               ret 0x10
// 004878a2  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004878a6  8bd3                 mov edx, ebx
// 004878a8  2bd0                 sub edx, eax
// 004878aa  c1fa02               sar edx, 2
// 004878ad  8d2cbd00000000       lea ebp, [edi*4]
// 004878b4  3bd7                 cmp edx, edi
// 004878b6  735a                 jae 0x487912
// 004878b8  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004878bc  f30f1001             movss xmm0, dword ptr [ecx]
// 004878c0  8d1428               lea edx, [eax + ebp]
// 004878c3  52                   push edx
// 004878c4  53                   push ebx
// 004878c5  50                   push eax
// 004878c6  8bce                 mov ecx, esi
// 004878c8  f30f11442430         movss dword ptr [esp + 0x30], xmm0
// 004878ce  e8fd740200           call 0x4aedd0
// 004878d3  8b4610               mov eax, dword ptr [esi + 0x10]
// 004878d6  8bd0                 mov edx, eax
// 004878d8  2b54241c             sub edx, dword ptr [esp + 0x1c]
// 004878dc  8d4c2424             lea ecx, [esp + 0x24]
// 004878e0  51                   push ecx
// 004878e1  c1fa02               sar edx, 2
// 004878e4  2bfa                 sub edi, edx
// 004878e6  57                   push edi
// 004878e7  50                   push eax
// 004878e8  8bce                 mov ecx, esi
// 004878ea  e801fcffff           call 0x4874f0
// 004878ef  016e10               add dword ptr [esi + 0x10], ebp
// 004878f2  8b7610               mov esi, dword ptr [esi + 0x10]
// 004878f5  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004878f9  8d442424             lea eax, [esp + 0x24]
// 004878fd  50                   push eax
// 004878fe  2bf5                 sub esi, ebp
// 00487900  56                   push esi
// 00487901  51                   push ecx
// 00487902  e809e6ffff           call 0x485f10
// 00487907  83c40c               add esp, 0xc
// 0048790a  5d                   pop ebp
// 0048790b  5b                   pop ebx
// 0048790c  5f                   pop edi
// 0048790d  5e                   pop esi
// 0048790e  59                   pop ecx
// 0048790f  c21000               ret 0x10
// 00487912  8b542424             mov edx, dword ptr [esp + 0x24]
// 00487916  f30f1002             movss xmm0, dword ptr [edx]
// 0048791a  53                   push ebx
// 0048791b  8bfb                 mov edi, ebx
// 0048791d  53                   push ebx
// 0048791e  2bfd                 sub edi, ebp
// 00487920  57                   push edi
// 00487921  8bce                 mov ecx, esi
// 00487923  f30f11442430         movss dword ptr [esp + 0x30], xmm0
// 00487929  e8a2740200           call 0x4aedd0
// 0048792e  53                   push ebx
// 0048792f  894610               mov dword ptr [esi + 0x10], eax
// 00487932  8b442420             mov eax, dword ptr [esp + 0x20]
// 00487936  57                   push edi
// 00487937  50                   push eax
// 00487938  e833b41d00           call 0x662d70
// 0048793d  8b442428             mov eax, dword ptr [esp + 0x28]
// 00487941  8d4c2430             lea ecx, [esp + 0x30]
// 00487945  51                   push ecx
// 00487946  03e8                 add ebp, eax
// 00487948  55                   push ebp
// 00487949  50                   push eax
// 0048794a  e8c1e5ffff           call 0x485f10
// 0048794f  83c418               add esp, 0x18
// 00487952  5d                   pop ebp
// 00487953  5b                   pop ebx
// 00487954  5f                   pop edi
// 00487955  5e                   pop esi
// 00487956  59                   pop ecx
// 00487957  c21000               ret 0x10
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?_Insert_n@?$vector@MV?$allocator@M@std@@@std@@IAEXV?$_Vector_const_iterator@MV?$allocator@M@std@@@2@IABM@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
