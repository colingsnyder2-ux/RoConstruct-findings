// roc 2009-06 006a22f0  unit: RBX::VPartInstance::?$SeatImpl  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006a22f0
//
// 006a22f0  56                   push esi
// 006a22f1  8bf1                 mov esi, ecx
// 006a22f3  8b4604               mov eax, dword ptr [esi + 4]
// 006a22f6  3b4608               cmp eax, dword ptr [esi + 8]
// 006a22f9  8b0e                 mov ecx, dword ptr [esi]
// 006a22fb  7d16                 jge 0x6a2313
// 006a22fd  8d0481               lea eax, [ecx + eax*4]
// 006a2300  85c0                 test eax, eax
// 006a2302  7408                 je 0x6a230c
// 006a2304  8b542408             mov edx, dword ptr [esp + 8]
// 006a2308  8b0a                 mov ecx, dword ptr [edx]
// 006a230a  8908                 mov dword ptr [eax], ecx
// 006a230c  ff4604               inc dword ptr [esi + 4]
// 006a230f  5e                   pop esi
// 006a2310  c20400               ret 4
// 006a2313  57                   push edi
// 006a2314  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006a2318  3bf9                 cmp edi, ecx
// 006a231a  721e                 jb 0x6a233a
// 006a231c  8d1481               lea edx, [ecx + eax*4]
// 006a231f  3bfa                 cmp edi, edx
// 006a2321  7317                 jae 0x6a233a
// 006a2323  8b07                 mov eax, dword ptr [edi]
// 006a2325  8d4c240c             lea ecx, [esp + 0xc]
// 006a2329  51                   push ecx
// 006a232a  8bce                 mov ecx, esi
// 006a232c  89442410             mov dword ptr [esp + 0x10], eax
// 006a2330  e8bbffffff           call 0x6a22f0
// 006a2335  5f                   pop edi
// 006a2336  5e                   pop esi
// 006a2337  c20400               ret 4
// 006a233a  6a00                 push 0
// 006a233c  40                   inc eax
// 006a233d  50                   push eax
// 006a233e  8bce                 mov ecx, esi
// 006a2340  e86bf7ffff           call 0x6a1ab0
// 006a2345  8b0f                 mov ecx, dword ptr [edi]
// 006a2347  8b5604               mov edx, dword ptr [esi + 4]
// 006a234a  8b06                 mov eax, dword ptr [esi]
// 006a234c  5f                   pop edi
// 006a234d  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 006a2351  5e                   pop esi
// 006a2352  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
