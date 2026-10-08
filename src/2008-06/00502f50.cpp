// from server: 100% by auto
// roc 2008-06 00502f50  unit: RBX::Render::RenderScene  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00502f50
//
// 00502f50  83ec0c               sub esp, 0xc
// 00502f53  56                   push esi
// 00502f54  8bf1                 mov esi, ecx
// 00502f56  8b4604               mov eax, dword ptr [esi + 4]
// 00502f59  3b4608               cmp eax, dword ptr [esi + 8]
// 00502f5c  8b0e                 mov ecx, dword ptr [esi]
// 00502f5e  7d28                 jge 0x502f88
// 00502f60  8d0440               lea eax, [eax + eax*2]
// 00502f63  8d0481               lea eax, [ecx + eax*4]
// 00502f66  85c0                 test eax, eax
// 00502f68  7414                 je 0x502f7e
// 00502f6a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00502f6e  d901                 fld dword ptr [ecx]
// 00502f70  d918                 fstp dword ptr [eax]
// 00502f72  d94104               fld dword ptr [ecx + 4]
// 00502f75  d95804               fstp dword ptr [eax + 4]
// 00502f78  d94108               fld dword ptr [ecx + 8]
// 00502f7b  d95808               fstp dword ptr [eax + 8]
// 00502f7e  ff4604               inc dword ptr [esi + 4]
// 00502f81  5e                   pop esi
// 00502f82  83c40c               add esp, 0xc
// 00502f85  c20400               ret 4
// 00502f88  57                   push edi
// 00502f89  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00502f8d  3bf9                 cmp edi, ecx
// 00502f8f  7232                 jb 0x502fc3
// 00502f91  8d1440               lea edx, [eax + eax*2]
// 00502f94  8d0c91               lea ecx, [ecx + edx*4]
// 00502f97  3bf9                 cmp edi, ecx
// 00502f99  7328                 jae 0x502fc3
// 00502f9b  d907                 fld dword ptr [edi]
// 00502f9d  8d542408             lea edx, [esp + 8]
// 00502fa1  d95c2408             fstp dword ptr [esp + 8]
// 00502fa5  52                   push edx
// 00502fa6  d94704               fld dword ptr [edi + 4]
// 00502fa9  8bce                 mov ecx, esi
// 00502fab  d95c2410             fstp dword ptr [esp + 0x10]
// 00502faf  d94708               fld dword ptr [edi + 8]
// 00502fb2  d95c2414             fstp dword ptr [esp + 0x14]
// 00502fb6  e895ffffff           call 0x502f50
// 00502fbb  5f                   pop edi
// 00502fbc  5e                   pop esi
// 00502fbd  83c40c               add esp, 0xc
// 00502fc0  c20400               ret 4
// 00502fc3  6a00                 push 0
// 00502fc5  40                   inc eax
// 00502fc6  50                   push eax
// 00502fc7  8bce                 mov ecx, esi
// 00502fc9  e8f2f5ffff           call 0x5025c0
// 00502fce  d907                 fld dword ptr [edi]
// 00502fd0  8b4604               mov eax, dword ptr [esi + 4]
// 00502fd3  8b0e                 mov ecx, dword ptr [esi]
// 00502fd5  8d0440               lea eax, [eax + eax*2]
// 00502fd8  8d4481f4             lea eax, [ecx + eax*4 - 0xc]
// 00502fdc  d918                 fstp dword ptr [eax]
// 00502fde  d94704               fld dword ptr [edi + 4]
// 00502fe1  d95804               fstp dword ptr [eax + 4]
// 00502fe4  d94708               fld dword ptr [edi + 8]
// 00502fe7  5f                   pop edi
// 00502fe8  d95808               fstp dword ptr [eax + 8]
// 00502feb  5e                   pop esi
// 00502fec  83c40c               add esp, 0xc
// 00502fef  c20400               ret 4
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ?append@?$Array@VVector3@G3D@@@G3D@@QAEXABVVector3@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
