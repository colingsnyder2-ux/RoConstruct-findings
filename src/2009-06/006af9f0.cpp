// roc 2009-06 006af9f0  unit: RBX::NormalBreakConnector  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006af9f0
//
// 006af9f0  56                   push esi
// 006af9f1  8bf1                 mov esi, ecx
// 006af9f3  8b4604               mov eax, dword ptr [esi + 4]
// 006af9f6  3b4608               cmp eax, dword ptr [esi + 8]
// 006af9f9  8b0e                 mov ecx, dword ptr [esi]
// 006af9fb  7d16                 jge 0x6afa13
// 006af9fd  8d0481               lea eax, [ecx + eax*4]
// 006afa00  85c0                 test eax, eax
// 006afa02  7408                 je 0x6afa0c
// 006afa04  8b542408             mov edx, dword ptr [esp + 8]
// 006afa08  8b0a                 mov ecx, dword ptr [edx]
// 006afa0a  8908                 mov dword ptr [eax], ecx
// 006afa0c  ff4604               inc dword ptr [esi + 4]
// 006afa0f  5e                   pop esi
// 006afa10  c20400               ret 4
// 006afa13  57                   push edi
// 006afa14  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006afa18  3bf9                 cmp edi, ecx
// 006afa1a  721e                 jb 0x6afa3a
// 006afa1c  8d1481               lea edx, [ecx + eax*4]
// 006afa1f  3bfa                 cmp edi, edx
// 006afa21  7317                 jae 0x6afa3a
// 006afa23  8b07                 mov eax, dword ptr [edi]
// 006afa25  8d4c240c             lea ecx, [esp + 0xc]
// 006afa29  51                   push ecx
// 006afa2a  8bce                 mov ecx, esi
// 006afa2c  89442410             mov dword ptr [esp + 0x10], eax
// 006afa30  e8bbffffff           call 0x6af9f0
// 006afa35  5f                   pop edi
// 006afa36  5e                   pop esi
// 006afa37  c20400               ret 4
// 006afa3a  6a00                 push 0
// 006afa3c  40                   inc eax
// 006afa3d  50                   push eax
// 006afa3e  8bce                 mov ecx, esi
// 006afa40  e8abfeffff           call 0x6af8f0
// 006afa45  8b0f                 mov ecx, dword ptr [edi]
// 006afa47  8b5604               mov edx, dword ptr [esi + 4]
// 006afa4a  8b06                 mov eax, dword ptr [esi]
// 006afa4c  5f                   pop edi
// 006afa4d  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 006afa51  5e                   pop esi
// 006afa52  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
