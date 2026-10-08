// from server: 100% by auto
// roc 2007-08 004f4920  unit: boost::bad_lexical_cast  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f4920
//
// 004f4920  83ec0c               sub esp, 0xc
// 004f4923  56                   push esi
// 004f4924  8bf1                 mov esi, ecx
// 004f4926  8b4604               mov eax, dword ptr [esi + 4]
// 004f4929  3b4608               cmp eax, dword ptr [esi + 8]
// 004f492c  8b0e                 mov ecx, dword ptr [esi]
// 004f492e  7d29                 jge 0x4f4959
// 004f4930  8d0440               lea eax, [eax + eax*2]
// 004f4933  8d0481               lea eax, [ecx + eax*4]
// 004f4936  85c0                 test eax, eax
// 004f4938  7414                 je 0x4f494e
// 004f493a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004f493e  d901                 fld dword ptr [ecx]
// 004f4940  d918                 fstp dword ptr [eax]
// 004f4942  d94104               fld dword ptr [ecx + 4]
// 004f4945  d95804               fstp dword ptr [eax + 4]
// 004f4948  d94108               fld dword ptr [ecx + 8]
// 004f494b  d95808               fstp dword ptr [eax + 8]
// 004f494e  83460401             add dword ptr [esi + 4], 1
// 004f4952  5e                   pop esi
// 004f4953  83c40c               add esp, 0xc
// 004f4956  c20400               ret 4
// 004f4959  57                   push edi
// 004f495a  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004f495e  3bf9                 cmp edi, ecx
// 004f4960  7232                 jb 0x4f4994
// 004f4962  8d1440               lea edx, [eax + eax*2]
// 004f4965  8d0c91               lea ecx, [ecx + edx*4]
// 004f4968  3bf9                 cmp edi, ecx
// 004f496a  7328                 jae 0x4f4994
// 004f496c  d907                 fld dword ptr [edi]
// 004f496e  8d542408             lea edx, [esp + 8]
// 004f4972  d95c2408             fstp dword ptr [esp + 8]
// 004f4976  52                   push edx
// 004f4977  d94704               fld dword ptr [edi + 4]
// 004f497a  8bce                 mov ecx, esi
// 004f497c  d95c2410             fstp dword ptr [esp + 0x10]
// 004f4980  d94708               fld dword ptr [edi + 8]
// 004f4983  d95c2414             fstp dword ptr [esp + 0x14]
// 004f4987  e894ffffff           call 0x4f4920
// 004f498c  5f                   pop edi
// 004f498d  5e                   pop esi
// 004f498e  83c40c               add esp, 0xc
// 004f4991  c20400               ret 4
// 004f4994  6a00                 push 0
// 004f4996  83c001               add eax, 1
// 004f4999  50                   push eax
// 004f499a  8bce                 mov ecx, esi
// 004f499c  e84ff7ffff           call 0x4f40f0
// 004f49a1  d907                 fld dword ptr [edi]
// 004f49a3  8b4604               mov eax, dword ptr [esi + 4]
// 004f49a6  8b0e                 mov ecx, dword ptr [esi]
// 004f49a8  8d0440               lea eax, [eax + eax*2]
// 004f49ab  8d4481f4             lea eax, [ecx + eax*4 - 0xc]
// 004f49af  d918                 fstp dword ptr [eax]
// 004f49b1  d94704               fld dword ptr [edi + 4]
// 004f49b4  d95804               fstp dword ptr [eax + 4]
// 004f49b7  d94708               fld dword ptr [edi + 8]
// 004f49ba  5f                   pop edi
// 004f49bb  d95808               fstp dword ptr [eax + 8]
// 004f49be  5e                   pop esi
// 004f49bf  83c40c               add esp, 0xc
// 004f49c2  c20400               ret 4
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ?append@?$Array@VVector3@G3D@@@G3D@@QAEXABVVector3@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
