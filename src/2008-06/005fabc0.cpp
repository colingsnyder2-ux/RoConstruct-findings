// roc 2008-06 005fabc0  unit: UString_sink::?$stream_buffer  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fabc0
//
// 005fabc0  56                   push esi
// 005fabc1  8bf1                 mov esi, ecx
// 005fabc3  8b4604               mov eax, dword ptr [esi + 4]
// 005fabc6  3b4608               cmp eax, dword ptr [esi + 8]
// 005fabc9  8b0e                 mov ecx, dword ptr [esi]
// 005fabcb  7d16                 jge 0x5fabe3
// 005fabcd  8d0481               lea eax, [ecx + eax*4]
// 005fabd0  85c0                 test eax, eax
// 005fabd2  7408                 je 0x5fabdc
// 005fabd4  8b542408             mov edx, dword ptr [esp + 8]
// 005fabd8  8b0a                 mov ecx, dword ptr [edx]
// 005fabda  8908                 mov dword ptr [eax], ecx
// 005fabdc  ff4604               inc dword ptr [esi + 4]
// 005fabdf  5e                   pop esi
// 005fabe0  c20400               ret 4
// 005fabe3  57                   push edi
// 005fabe4  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005fabe8  3bf9                 cmp edi, ecx
// 005fabea  721e                 jb 0x5fac0a
// 005fabec  8d1481               lea edx, [ecx + eax*4]
// 005fabef  3bfa                 cmp edi, edx
// 005fabf1  7317                 jae 0x5fac0a
// 005fabf3  8b07                 mov eax, dword ptr [edi]
// 005fabf5  8d4c240c             lea ecx, [esp + 0xc]
// 005fabf9  51                   push ecx
// 005fabfa  8bce                 mov ecx, esi
// 005fabfc  89442410             mov dword ptr [esp + 0x10], eax
// 005fac00  e8bbffffff           call 0x5fabc0
// 005fac05  5f                   pop edi
// 005fac06  5e                   pop esi
// 005fac07  c20400               ret 4
// 005fac0a  6a00                 push 0
// 005fac0c  40                   inc eax
// 005fac0d  50                   push eax
// 005fac0e  8bce                 mov ecx, esi
// 005fac10  e85bfbffff           call 0x5fa770
// 005fac15  8b0f                 mov ecx, dword ptr [edi]
// 005fac17  8b5604               mov edx, dword ptr [esi + 4]
// 005fac1a  8b06                 mov eax, dword ptr [esi]
// 005fac1c  5f                   pop edi
// 005fac1d  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 005fac21  5e                   pop esi
// 005fac22  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
