// from server: 100% by auto
// roc 2009-06 006cece0  unit: RBX::Clump  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006cece0
//
// 006cece0  56                   push esi
// 006cece1  8bf1                 mov esi, ecx
// 006cece3  8b4604               mov eax, dword ptr [esi + 4]
// 006cece6  3b4608               cmp eax, dword ptr [esi + 8]
// 006cece9  8b0e                 mov ecx, dword ptr [esi]
// 006ceceb  7d16                 jge 0x6ced03
// 006ceced  8d0481               lea eax, [ecx + eax*4]
// 006cecf0  85c0                 test eax, eax
// 006cecf2  7408                 je 0x6cecfc
// 006cecf4  8b542408             mov edx, dword ptr [esp + 8]
// 006cecf8  8b0a                 mov ecx, dword ptr [edx]
// 006cecfa  8908                 mov dword ptr [eax], ecx
// 006cecfc  ff4604               inc dword ptr [esi + 4]
// 006cecff  5e                   pop esi
// 006ced00  c20400               ret 4
// 006ced03  57                   push edi
// 006ced04  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006ced08  3bf9                 cmp edi, ecx
// 006ced0a  721e                 jb 0x6ced2a
// 006ced0c  8d1481               lea edx, [ecx + eax*4]
// 006ced0f  3bfa                 cmp edi, edx
// 006ced11  7317                 jae 0x6ced2a
// 006ced13  8b07                 mov eax, dword ptr [edi]
// 006ced15  8d4c240c             lea ecx, [esp + 0xc]
// 006ced19  51                   push ecx
// 006ced1a  8bce                 mov ecx, esi
// 006ced1c  89442410             mov dword ptr [esp + 0x10], eax
// 006ced20  e8bbffffff           call 0x6cece0
// 006ced25  5f                   pop edi
// 006ced26  5e                   pop esi
// 006ced27  c20400               ret 4
// 006ced2a  6a00                 push 0
// 006ced2c  40                   inc eax
// 006ced2d  50                   push eax
// 006ced2e  8bce                 mov ecx, esi
// 006ced30  e83b72faff           call 0x675f70
// 006ced35  8b0f                 mov ecx, dword ptr [edi]
// 006ced37  8b5604               mov edx, dword ptr [esi + 4]
// 006ced3a  8b06                 mov eax, dword ptr [esi]
// 006ced3c  5f                   pop edi
// 006ced3d  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 006ced41  5e                   pop esi
// 006ced42  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
