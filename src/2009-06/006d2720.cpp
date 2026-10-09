// roc 2009-06 006d2720  unit: RBX::Block  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006d2720
//
// 006d2720  8b442404             mov eax, dword ptr [esp + 4]
// 006d2724  33d2                 xor edx, edx
// 006d2726  56                   push esi
// 006d2727  8bf1                 mov esi, ecx
// 006d2729  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006d272d  663910               cmp word ptr [eax], dx
// 006d2730  7523                 jne 0x6d2755
// 006d2732  8911                 mov dword ptr [ecx], edx
// 006d2734  66395002             cmp word ptr [eax + 2], dx
// 006d2738  0f9ec2               setle dl
// 006d273b  33c9                 xor ecx, ecx
// 006d273d  66394804             cmp word ptr [eax + 4], cx
// 006d2741  0f9ec1               setle cl
// 006d2744  8d445104             lea eax, [ecx + edx*2 + 4]
// 006d2748  8d1440               lea edx, [eax + eax*2]
// 006d274b  8b4610               mov eax, dword ptr [esi + 0x10]
// 006d274e  8d0490               lea eax, [eax + edx*4]
// 006d2751  5e                   pop esi
// 006d2752  c20800               ret 8
// 006d2755  6683780200           cmp word ptr [eax + 2], 0
// 006d275a  7526                 jne 0x6d2782
// 006d275c  c70101000000         mov dword ptr [ecx], 1
// 006d2762  663910               cmp word ptr [eax], dx
// 006d2765  0f9ec2               setle dl
// 006d2768  33c9                 xor ecx, ecx
// 006d276a  66394804             cmp word ptr [eax + 4], cx
// 006d276e  0f9ec1               setle cl
// 006d2771  8d449102             lea eax, [ecx + edx*4 + 2]
// 006d2775  8d1440               lea edx, [eax + eax*2]
// 006d2778  8b4610               mov eax, dword ptr [esi + 0x10]
// 006d277b  8d0490               lea eax, [eax + edx*4]
// 006d277e  5e                   pop esi
// 006d277f  c20800               ret 8
// 006d2782  c70102000000         mov dword ptr [ecx], 2
// 006d2788  663910               cmp word ptr [eax], dx
// 006d278b  0f9ec2               setle dl
// 006d278e  33c9                 xor ecx, ecx
// 006d2790  66394802             cmp word ptr [eax + 2], cx
// 006d2794  0f9ec1               setle cl
// 006d2797  8d0451               lea eax, [ecx + edx*2]
// 006d279a  8d1440               lea edx, [eax + eax*2]
// 006d279d  8b4610               mov eax, dword ptr [esi + 0x10]
// 006d27a0  8d44d00c             lea eax, [eax + edx*8 + 0xc]
// 006d27a4  5e                   pop esi
// 006d27a5  c20800               ret 8
// library openrbx-client/App\v8world\Block.cpp (function ?getEdgePoint@Block@RBX@@ABEPBVVector3@G3D@@ABVVector3int16@4@AAW4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Block.cpp
