// roc 2007-03 005f5380  unit: seg_005f0000  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005f5380
//
// 005f5380  8b442404             mov eax, dword ptr [esp + 4]
// 005f5384  33d2                 xor edx, edx
// 005f5386  663910               cmp word ptr [eax], dx
// 005f5389  56                   push esi
// 005f538a  8bf1                 mov esi, ecx
// 005f538c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005f5390  7523                 jne 0x5f53b5
// 005f5392  8911                 mov dword ptr [ecx], edx
// 005f5394  66395002             cmp word ptr [eax + 2], dx
// 005f5398  0f9ec2               setle dl
// 005f539b  33c9                 xor ecx, ecx
// 005f539d  66394804             cmp word ptr [eax + 4], cx
// 005f53a1  0f9ec1               setle cl
// 005f53a4  8d445104             lea eax, [ecx + edx*2 + 4]
// 005f53a8  8d1440               lea edx, [eax + eax*2]
// 005f53ab  8b4610               mov eax, dword ptr [esi + 0x10]
// 005f53ae  8d0490               lea eax, [eax + edx*4]
// 005f53b1  5e                   pop esi
// 005f53b2  c20800               ret 8
// 005f53b5  6683780200           cmp word ptr [eax + 2], 0
// 005f53ba  7526                 jne 0x5f53e2
// 005f53bc  c70101000000         mov dword ptr [ecx], 1
// 005f53c2  663910               cmp word ptr [eax], dx
// 005f53c5  0f9ec2               setle dl
// 005f53c8  33c9                 xor ecx, ecx
// 005f53ca  66394804             cmp word ptr [eax + 4], cx
// 005f53ce  0f9ec1               setle cl
// 005f53d1  8d449102             lea eax, [ecx + edx*4 + 2]
// 005f53d5  8d1440               lea edx, [eax + eax*2]
// 005f53d8  8b4610               mov eax, dword ptr [esi + 0x10]
// 005f53db  8d0490               lea eax, [eax + edx*4]
// 005f53de  5e                   pop esi
// 005f53df  c20800               ret 8
// 005f53e2  c70102000000         mov dword ptr [ecx], 2
// 005f53e8  663910               cmp word ptr [eax], dx
// 005f53eb  0f9ec2               setle dl
// 005f53ee  33c9                 xor ecx, ecx
// 005f53f0  66394802             cmp word ptr [eax + 2], cx
// 005f53f4  0f9ec1               setle cl
// 005f53f7  8d0451               lea eax, [ecx + edx*2]
// 005f53fa  8d1440               lea edx, [eax + eax*2]
// 005f53fd  8b4610               mov eax, dword ptr [esi + 0x10]
// 005f5400  8d44d00c             lea eax, [eax + edx*8 + 0xc]
// 005f5404  5e                   pop esi
// 005f5405  c20800               ret 8
// library openrbx-client/App\v8world\Block.cpp (function ?getEdgePoint@Block@RBX@@ABEPBVVector3@G3D@@ABVVector3int16@4@AAW4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Block.cpp
