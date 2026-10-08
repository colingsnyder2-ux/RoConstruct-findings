// roc 2007-08 005de570  unit: RBX::VMotorFeature::?$FactoryProduct  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005de570
//
// 005de570  53                   push ebx
// 005de571  56                   push esi
// 005de572  8bf1                 mov esi, ecx
// 005de574  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005de577  85c9                 test ecx, ecx
// 005de579  57                   push edi
// 005de57a  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005de57e  8b5f10               mov ebx, dword ptr [edi + 0x10]
// 005de581  740c                 je 0x5de58f
// 005de583  8b4610               mov eax, dword ptr [esi + 0x10]
// 005de586  2bc1                 sub eax, ecx
// 005de588  c1f802               sar eax, 2
// 005de58b  3bd8                 cmp ebx, eax
// 005de58d  7206                 jb 0x5de595
// 005de58f  ff15d8e67700         call dword ptr [0x77e6d8]
// 005de595  8b460c               mov eax, dword ptr [esi + 0xc]
// 005de598  393c98               cmp dword ptr [eax + ebx*4], edi
// 005de59b  8d0498               lea eax, [eax + ebx*4]
// 005de59e  7414                 je 0x5de5b4
// 005de5a0  8b00                 mov eax, dword ptr [eax]
// 005de5a2  83c004               add eax, 4
// 005de5a5  3938                 cmp dword ptr [eax], edi
// 005de5a7  75f7                 jne 0x5de5a0
// 005de5a9  8b4f04               mov ecx, dword ptr [edi + 4]
// 005de5ac  5f                   pop edi
// 005de5ad  5e                   pop esi
// 005de5ae  8908                 mov dword ptr [eax], ecx
// 005de5b0  5b                   pop ebx
// 005de5b1  c20400               ret 4
// 005de5b4  8b5704               mov edx, dword ptr [edi + 4]
// 005de5b7  5f                   pop edi
// 005de5b8  5e                   pop esi
// 005de5b9  8910                 mov dword ptr [eax], edx
// 005de5bb  5b                   pop ebx
// 005de5bc  c20400               ret 4
// library openrbx-client/App\v8world\SpatialHash.cpp (function ?removeNodeFromHash@SpatialHash@RBX@@AAEXPAVSpatialNode@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/SpatialHash.cpp
