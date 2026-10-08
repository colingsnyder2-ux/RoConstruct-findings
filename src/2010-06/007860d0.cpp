// from server: 100% by auto
// roc 2010-06 007860d0  unit: RBX::HUMAN::GettingUp  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007860d0
//
// 007860d0  56                   push esi
// 007860d1  8bf1                 mov esi, ecx
// 007860d3  8b4604               mov eax, dword ptr [esi + 4]
// 007860d6  3b4608               cmp eax, dword ptr [esi + 8]
// 007860d9  8b0e                 mov ecx, dword ptr [esi]
// 007860db  7d16                 jge 0x7860f3
// 007860dd  8d0481               lea eax, [ecx + eax*4]
// 007860e0  85c0                 test eax, eax
// 007860e2  7408                 je 0x7860ec
// 007860e4  8b542408             mov edx, dword ptr [esp + 8]
// 007860e8  8b0a                 mov ecx, dword ptr [edx]
// 007860ea  8908                 mov dword ptr [eax], ecx
// 007860ec  ff4604               inc dword ptr [esi + 4]
// 007860ef  5e                   pop esi
// 007860f0  c20400               ret 4
// 007860f3  57                   push edi
// 007860f4  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007860f8  3bf9                 cmp edi, ecx
// 007860fa  721e                 jb 0x78611a
// 007860fc  8d1481               lea edx, [ecx + eax*4]
// 007860ff  3bfa                 cmp edi, edx
// 00786101  7317                 jae 0x78611a
// 00786103  8b07                 mov eax, dword ptr [edi]
// 00786105  8d4c240c             lea ecx, [esp + 0xc]
// 00786109  51                   push ecx
// 0078610a  8bce                 mov ecx, esi
// 0078610c  89442410             mov dword ptr [esp + 0x10], eax
// 00786110  e8bbffffff           call 0x7860d0
// 00786115  5f                   pop edi
// 00786116  5e                   pop esi
// 00786117  c20400               ret 4
// 0078611a  6a00                 push 0
// 0078611c  40                   inc eax
// 0078611d  50                   push eax
// 0078611e  8bce                 mov ecx, esi
// 00786120  e8abfeffff           call 0x785fd0
// 00786125  8b0f                 mov ecx, dword ptr [edi]
// 00786127  8b5604               mov edx, dword ptr [esi + 4]
// 0078612a  8b06                 mov eax, dword ptr [esi]
// 0078612c  5f                   pop edi
// 0078612d  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 00786131  5e                   pop esi
// 00786132  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
