// roc 2007-08 0047d540  unit: G3D::Win32Window  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047d540
//
// 0047d540  56                   push esi
// 0047d541  8bf1                 mov esi, ecx
// 0047d543  8b4604               mov eax, dword ptr [esi + 4]
// 0047d546  3b4608               cmp eax, dword ptr [esi + 8]
// 0047d549  8b0e                 mov ecx, dword ptr [esi]
// 0047d54b  7d17                 jge 0x47d564
// 0047d54d  8d0481               lea eax, [ecx + eax*4]
// 0047d550  85c0                 test eax, eax
// 0047d552  7408                 je 0x47d55c
// 0047d554  8b542408             mov edx, dword ptr [esp + 8]
// 0047d558  8b0a                 mov ecx, dword ptr [edx]
// 0047d55a  8908                 mov dword ptr [eax], ecx
// 0047d55c  83460401             add dword ptr [esi + 4], 1
// 0047d560  5e                   pop esi
// 0047d561  c20400               ret 4
// 0047d564  57                   push edi
// 0047d565  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0047d569  3bf9                 cmp edi, ecx
// 0047d56b  721e                 jb 0x47d58b
// 0047d56d  8d1481               lea edx, [ecx + eax*4]
// 0047d570  3bfa                 cmp edi, edx
// 0047d572  7317                 jae 0x47d58b
// 0047d574  8b07                 mov eax, dword ptr [edi]
// 0047d576  8d4c240c             lea ecx, [esp + 0xc]
// 0047d57a  51                   push ecx
// 0047d57b  8bce                 mov ecx, esi
// 0047d57d  89442410             mov dword ptr [esp + 0x10], eax
// 0047d581  e8baffffff           call 0x47d540
// 0047d586  5f                   pop edi
// 0047d587  5e                   pop esi
// 0047d588  c20400               ret 4
// 0047d58b  6a00                 push 0
// 0047d58d  83c001               add eax, 1
// 0047d590  50                   push eax
// 0047d591  8bce                 mov ecx, esi
// 0047d593  e828faffff           call 0x47cfc0
// 0047d598  8b0f                 mov ecx, dword ptr [edi]
// 0047d59a  8b5604               mov edx, dword ptr [esi + 4]
// 0047d59d  8b06                 mov eax, dword ptr [esi]
// 0047d59f  5f                   pop edi
// 0047d5a0  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 0047d5a4  5e                   pop esi
// 0047d5a5  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
