// roc 2010-06 00711fa0  unit: RBX::BallBallContact  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00711fa0
//
// 00711fa0  56                   push esi
// 00711fa1  8bf1                 mov esi, ecx
// 00711fa3  8b4604               mov eax, dword ptr [esi + 4]
// 00711fa6  3b4608               cmp eax, dword ptr [esi + 8]
// 00711fa9  8b0e                 mov ecx, dword ptr [esi]
// 00711fab  7d16                 jge 0x711fc3
// 00711fad  8d0481               lea eax, [ecx + eax*4]
// 00711fb0  85c0                 test eax, eax
// 00711fb2  7408                 je 0x711fbc
// 00711fb4  8b542408             mov edx, dword ptr [esp + 8]
// 00711fb8  8b0a                 mov ecx, dword ptr [edx]
// 00711fba  8908                 mov dword ptr [eax], ecx
// 00711fbc  ff4604               inc dword ptr [esi + 4]
// 00711fbf  5e                   pop esi
// 00711fc0  c20400               ret 4
// 00711fc3  57                   push edi
// 00711fc4  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00711fc8  3bf9                 cmp edi, ecx
// 00711fca  721e                 jb 0x711fea
// 00711fcc  8d1481               lea edx, [ecx + eax*4]
// 00711fcf  3bfa                 cmp edi, edx
// 00711fd1  7317                 jae 0x711fea
// 00711fd3  8b07                 mov eax, dword ptr [edi]
// 00711fd5  8d4c240c             lea ecx, [esp + 0xc]
// 00711fd9  51                   push ecx
// 00711fda  8bce                 mov ecx, esi
// 00711fdc  89442410             mov dword ptr [esp + 0x10], eax
// 00711fe0  e8bbffffff           call 0x711fa0
// 00711fe5  5f                   pop edi
// 00711fe6  5e                   pop esi
// 00711fe7  c20400               ret 4
// 00711fea  6a00                 push 0
// 00711fec  40                   inc eax
// 00711fed  50                   push eax
// 00711fee  8bce                 mov ecx, esi
// 00711ff0  e8bbfbffff           call 0x711bb0
// 00711ff5  8b0f                 mov ecx, dword ptr [edi]
// 00711ff7  8b5604               mov edx, dword ptr [esi + 4]
// 00711ffa  8b06                 mov eax, dword ptr [esi]
// 00711ffc  5f                   pop edi
// 00711ffd  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 00712001  5e                   pop esi
// 00712002  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
