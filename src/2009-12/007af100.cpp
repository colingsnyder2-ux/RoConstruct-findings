// roc 2009-12 007af100  unit: RBX::Block  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007af100
//
// 007af100  8b442404             mov eax, dword ptr [esp + 4]
// 007af104  33d2                 xor edx, edx
// 007af106  56                   push esi
// 007af107  8bf1                 mov esi, ecx
// 007af109  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007af10d  663910               cmp word ptr [eax], dx
// 007af110  7523                 jne 0x7af135
// 007af112  8911                 mov dword ptr [ecx], edx
// 007af114  66395002             cmp word ptr [eax + 2], dx
// 007af118  0f9ec2               setle dl
// 007af11b  33c9                 xor ecx, ecx
// 007af11d  66394804             cmp word ptr [eax + 4], cx
// 007af121  0f9ec1               setle cl
// 007af124  8d445104             lea eax, [ecx + edx*2 + 4]
// 007af128  8d1440               lea edx, [eax + eax*2]
// 007af12b  8b4610               mov eax, dword ptr [esi + 0x10]
// 007af12e  8d0490               lea eax, [eax + edx*4]
// 007af131  5e                   pop esi
// 007af132  c20800               ret 8
// 007af135  6683780200           cmp word ptr [eax + 2], 0
// 007af13a  7526                 jne 0x7af162
// 007af13c  c70101000000         mov dword ptr [ecx], 1
// 007af142  663910               cmp word ptr [eax], dx
// 007af145  0f9ec2               setle dl
// 007af148  33c9                 xor ecx, ecx
// 007af14a  66394804             cmp word ptr [eax + 4], cx
// 007af14e  0f9ec1               setle cl
// 007af151  8d449102             lea eax, [ecx + edx*4 + 2]
// 007af155  8d1440               lea edx, [eax + eax*2]
// 007af158  8b4610               mov eax, dword ptr [esi + 0x10]
// 007af15b  8d0490               lea eax, [eax + edx*4]
// 007af15e  5e                   pop esi
// 007af15f  c20800               ret 8
// 007af162  c70102000000         mov dword ptr [ecx], 2
// 007af168  663910               cmp word ptr [eax], dx
// 007af16b  0f9ec2               setle dl
// 007af16e  33c9                 xor ecx, ecx
// 007af170  66394802             cmp word ptr [eax + 2], cx
// 007af174  0f9ec1               setle cl
// 007af177  8d0451               lea eax, [ecx + edx*2]
// 007af17a  8d1440               lea edx, [eax + eax*2]
// 007af17d  8b4610               mov eax, dword ptr [esi + 0x10]
// 007af180  8d44d00c             lea eax, [eax + edx*8 + 0xc]
// 007af184  5e                   pop esi
// 007af185  c20800               ret 8
// library openrbx-client/App\v8world\Block.cpp (function ?getEdgePoint@Block@RBX@@ABEPBVVector3@G3D@@ABVVector3int16@4@AAW4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Block.cpp
