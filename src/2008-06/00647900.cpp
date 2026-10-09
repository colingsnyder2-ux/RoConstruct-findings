// roc 2008-06 00647900  unit: RBX::Block  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00647900
//
// 00647900  8b442404             mov eax, dword ptr [esp + 4]
// 00647904  33d2                 xor edx, edx
// 00647906  56                   push esi
// 00647907  8bf1                 mov esi, ecx
// 00647909  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0064790d  663910               cmp word ptr [eax], dx
// 00647910  7523                 jne 0x647935
// 00647912  8911                 mov dword ptr [ecx], edx
// 00647914  66395002             cmp word ptr [eax + 2], dx
// 00647918  0f9ec2               setle dl
// 0064791b  33c9                 xor ecx, ecx
// 0064791d  66394804             cmp word ptr [eax + 4], cx
// 00647921  0f9ec1               setle cl
// 00647924  8d445104             lea eax, [ecx + edx*2 + 4]
// 00647928  8d1440               lea edx, [eax + eax*2]
// 0064792b  8b4610               mov eax, dword ptr [esi + 0x10]
// 0064792e  8d0490               lea eax, [eax + edx*4]
// 00647931  5e                   pop esi
// 00647932  c20800               ret 8
// 00647935  6683780200           cmp word ptr [eax + 2], 0
// 0064793a  7526                 jne 0x647962
// 0064793c  c70101000000         mov dword ptr [ecx], 1
// 00647942  663910               cmp word ptr [eax], dx
// 00647945  0f9ec2               setle dl
// 00647948  33c9                 xor ecx, ecx
// 0064794a  66394804             cmp word ptr [eax + 4], cx
// 0064794e  0f9ec1               setle cl
// 00647951  8d449102             lea eax, [ecx + edx*4 + 2]
// 00647955  8d1440               lea edx, [eax + eax*2]
// 00647958  8b4610               mov eax, dword ptr [esi + 0x10]
// 0064795b  8d0490               lea eax, [eax + edx*4]
// 0064795e  5e                   pop esi
// 0064795f  c20800               ret 8
// 00647962  c70102000000         mov dword ptr [ecx], 2
// 00647968  663910               cmp word ptr [eax], dx
// 0064796b  0f9ec2               setle dl
// 0064796e  33c9                 xor ecx, ecx
// 00647970  66394802             cmp word ptr [eax + 2], cx
// 00647974  0f9ec1               setle cl
// 00647977  8d0451               lea eax, [ecx + edx*2]
// 0064797a  8d1440               lea edx, [eax + eax*2]
// 0064797d  8b4610               mov eax, dword ptr [esi + 0x10]
// 00647980  8d44d00c             lea eax, [eax + edx*8 + 0xc]
// 00647984  5e                   pop esi
// 00647985  c20800               ret 8
// library openrbx-client/App\v8world\Block.cpp (function ?getEdgePoint@Block@RBX@@ABEPBVVector3@G3D@@ABVVector3int16@4@AAW4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Block.cpp
