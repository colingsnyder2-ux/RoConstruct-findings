// roc 2007-08 0060c550  unit: RBX::Block  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060c550
//
// 0060c550  8b442404             mov eax, dword ptr [esp + 4]
// 0060c554  33d2                 xor edx, edx
// 0060c556  663910               cmp word ptr [eax], dx
// 0060c559  56                   push esi
// 0060c55a  8bf1                 mov esi, ecx
// 0060c55c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0060c560  7523                 jne 0x60c585
// 0060c562  8911                 mov dword ptr [ecx], edx
// 0060c564  66395002             cmp word ptr [eax + 2], dx
// 0060c568  0f9ec2               setle dl
// 0060c56b  33c9                 xor ecx, ecx
// 0060c56d  66394804             cmp word ptr [eax + 4], cx
// 0060c571  0f9ec1               setle cl
// 0060c574  8d445104             lea eax, [ecx + edx*2 + 4]
// 0060c578  8d1440               lea edx, [eax + eax*2]
// 0060c57b  8b4610               mov eax, dword ptr [esi + 0x10]
// 0060c57e  8d0490               lea eax, [eax + edx*4]
// 0060c581  5e                   pop esi
// 0060c582  c20800               ret 8
// 0060c585  6683780200           cmp word ptr [eax + 2], 0
// 0060c58a  7526                 jne 0x60c5b2
// 0060c58c  c70101000000         mov dword ptr [ecx], 1
// 0060c592  663910               cmp word ptr [eax], dx
// 0060c595  0f9ec2               setle dl
// 0060c598  33c9                 xor ecx, ecx
// 0060c59a  66394804             cmp word ptr [eax + 4], cx
// 0060c59e  0f9ec1               setle cl
// 0060c5a1  8d449102             lea eax, [ecx + edx*4 + 2]
// 0060c5a5  8d1440               lea edx, [eax + eax*2]
// 0060c5a8  8b4610               mov eax, dword ptr [esi + 0x10]
// 0060c5ab  8d0490               lea eax, [eax + edx*4]
// 0060c5ae  5e                   pop esi
// 0060c5af  c20800               ret 8
// 0060c5b2  c70102000000         mov dword ptr [ecx], 2
// 0060c5b8  663910               cmp word ptr [eax], dx
// 0060c5bb  0f9ec2               setle dl
// 0060c5be  33c9                 xor ecx, ecx
// 0060c5c0  66394802             cmp word ptr [eax + 2], cx
// 0060c5c4  0f9ec1               setle cl
// 0060c5c7  8d0451               lea eax, [ecx + edx*2]
// 0060c5ca  8d1440               lea edx, [eax + eax*2]
// 0060c5cd  8b4610               mov eax, dword ptr [esi + 0x10]
// 0060c5d0  8d44d00c             lea eax, [eax + edx*8 + 0xc]
// 0060c5d4  5e                   pop esi
// 0060c5d5  c20800               ret 8
// library openrbx-client/App\v8world\Block.cpp (function ?getEdgePoint@Block@RBX@@ABEPBVVector3@G3D@@ABVVector3int16@4@AAW4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Block.cpp
