// from server: 100% by auto
// roc 2010-06 00485630  unit: G3D::Texture  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00485630
//
// 00485630  56                   push esi
// 00485631  8bf1                 mov esi, ecx
// 00485633  8b4604               mov eax, dword ptr [esi + 4]
// 00485636  3b4608               cmp eax, dword ptr [esi + 8]
// 00485639  8b0e                 mov ecx, dword ptr [esi]
// 0048563b  7d16                 jge 0x485653
// 0048563d  8d0481               lea eax, [ecx + eax*4]
// 00485640  85c0                 test eax, eax
// 00485642  7408                 je 0x48564c
// 00485644  8b542408             mov edx, dword ptr [esp + 8]
// 00485648  8b0a                 mov ecx, dword ptr [edx]
// 0048564a  8908                 mov dword ptr [eax], ecx
// 0048564c  ff4604               inc dword ptr [esi + 4]
// 0048564f  5e                   pop esi
// 00485650  c20400               ret 4
// 00485653  57                   push edi
// 00485654  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00485658  3bf9                 cmp edi, ecx
// 0048565a  721e                 jb 0x48567a
// 0048565c  8d1481               lea edx, [ecx + eax*4]
// 0048565f  3bfa                 cmp edi, edx
// 00485661  7317                 jae 0x48567a
// 00485663  8b07                 mov eax, dword ptr [edi]
// 00485665  8d4c240c             lea ecx, [esp + 0xc]
// 00485669  51                   push ecx
// 0048566a  8bce                 mov ecx, esi
// 0048566c  89442410             mov dword ptr [esp + 0x10], eax
// 00485670  e8bbffffff           call 0x485630
// 00485675  5f                   pop edi
// 00485676  5e                   pop esi
// 00485677  c20400               ret 4
// 0048567a  6a00                 push 0
// 0048567c  40                   inc eax
// 0048567d  50                   push eax
// 0048567e  8bce                 mov ecx, esi
// 00485680  e8ebf7ffff           call 0x484e70
// 00485685  8b0f                 mov ecx, dword ptr [edi]
// 00485687  8b5604               mov edx, dword ptr [esi + 4]
// 0048568a  8b06                 mov eax, dword ptr [esi]
// 0048568c  5f                   pop edi
// 0048568d  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 00485691  5e                   pop esi
// 00485692  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
