// roc 2010-06 00523450  unit: RBX::MeshGen  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00523450
//
// 00523450  8b442408             mov eax, dword ptr [esp + 8]
// 00523454  53                   push ebx
// 00523455  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00523459  56                   push esi
// 0052345a  57                   push edi
// 0052345b  8b7804               mov edi, dword ptr [eax + 4]
// 0052345e  8b00                 mov eax, dword ptr [eax]
// 00523460  50                   push eax
// 00523461  57                   push edi
// 00523462  6a04                 push 4
// 00523464  53                   push ebx
// 00523465  8bf1                 mov esi, ecx
// 00523467  e8042af7ff           call 0x495e70
// 0052346c  8bce                 mov ecx, esi
// 0052346e  e8bd10f7ff           call 0x494530
// 00523473  57                   push edi
// 00523474  53                   push ebx
// 00523475  8bce                 mov ecx, esi
// 00523477  e804f0f6ff           call 0x492480
// 0052347c  5f                   pop edi
// 0052347d  5e                   pop esi
// 0052347e  5b                   pop ebx
// 0052347f  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??$sendIndices@H@RenderDevice@G3D@@QAEXW4Primitive@01@ABV?$Array@H@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
