// roc 2008-06 00474370  unit: G3D::Texture  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00474370
//
// 00474370  56                   push esi
// 00474371  8bf1                 mov esi, ecx
// 00474373  8b4604               mov eax, dword ptr [esi + 4]
// 00474376  3b4608               cmp eax, dword ptr [esi + 8]
// 00474379  8b0e                 mov ecx, dword ptr [esi]
// 0047437b  7d16                 jge 0x474393
// 0047437d  8d0481               lea eax, [ecx + eax*4]
// 00474380  85c0                 test eax, eax
// 00474382  7408                 je 0x47438c
// 00474384  8b542408             mov edx, dword ptr [esp + 8]
// 00474388  8b0a                 mov ecx, dword ptr [edx]
// 0047438a  8908                 mov dword ptr [eax], ecx
// 0047438c  ff4604               inc dword ptr [esi + 4]
// 0047438f  5e                   pop esi
// 00474390  c20400               ret 4
// 00474393  57                   push edi
// 00474394  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00474398  3bf9                 cmp edi, ecx
// 0047439a  721e                 jb 0x4743ba
// 0047439c  8d1481               lea edx, [ecx + eax*4]
// 0047439f  3bfa                 cmp edi, edx
// 004743a1  7317                 jae 0x4743ba
// 004743a3  8b07                 mov eax, dword ptr [edi]
// 004743a5  8d4c240c             lea ecx, [esp + 0xc]
// 004743a9  51                   push ecx
// 004743aa  8bce                 mov ecx, esi
// 004743ac  89442410             mov dword ptr [esp + 0x10], eax
// 004743b0  e8bbffffff           call 0x474370
// 004743b5  5f                   pop edi
// 004743b6  5e                   pop esi
// 004743b7  c20400               ret 4
// 004743ba  6a00                 push 0
// 004743bc  40                   inc eax
// 004743bd  50                   push eax
// 004743be  8bce                 mov ecx, esi
// 004743c0  e80bf9ffff           call 0x473cd0
// 004743c5  8b0f                 mov ecx, dword ptr [edi]
// 004743c7  8b5604               mov edx, dword ptr [esi + 4]
// 004743ca  8b06                 mov eax, dword ptr [esi]
// 004743cc  5f                   pop edi
// 004743cd  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 004743d1  5e                   pop esi
// 004743d2  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
