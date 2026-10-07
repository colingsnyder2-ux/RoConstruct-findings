// roc 2008-06 00519210  unit: G3D::_internal::DialogTemplate  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00519210
//
// 00519210  53                   push ebx
// 00519211  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00519215  56                   push esi
// 00519216  8bf1                 mov esi, ecx
// 00519218  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0051921b  8b4608               mov eax, dword ptr [esi + 8]
// 0051921e  03cb                 add ecx, ebx
// 00519220  3bc8                 cmp ecx, eax
// 00519222  7e2f                 jle 0x519253
// 00519224  8d0458               lea eax, [eax + ebx*2]
// 00519227  57                   push edi
// 00519228  50                   push eax
// 00519229  894608               mov dword ptr [esi + 8], eax
// 0051922c  ff15b0288000         call dword ptr [0x8028b0]
// 00519232  8b560c               mov edx, dword ptr [esi + 0xc]
// 00519235  8bf8                 mov edi, eax
// 00519237  8b4604               mov eax, dword ptr [esi + 4]
// 0051923a  52                   push edx
// 0051923b  50                   push eax
// 0051923c  57                   push edi
// 0051923d  e89e851800           call 0x6a17e0
// 00519242  8b4e04               mov ecx, dword ptr [esi + 4]
// 00519245  51                   push ecx
// 00519246  ff15c0288000         call dword ptr [0x8028c0]
// 0051924c  83c414               add esp, 0x14
// 0051924f  897e04               mov dword ptr [esi + 4], edi
// 00519252  5f                   pop edi
// 00519253  8b4604               mov eax, dword ptr [esi + 4]
// 00519256  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0051925a  03460c               add eax, dword ptr [esi + 0xc]
// 0051925d  53                   push ebx
// 0051925e  52                   push edx
// 0051925f  50                   push eax
// 00519260  e87b851800           call 0x6a17e0
// 00519265  015e0c               add dword ptr [esi + 0xc], ebx
// 00519268  83c40c               add esp, 0xc
// 0051926b  5e                   pop esi
// 0051926c  5b                   pop ebx
// 0051926d  c20800               ret 8
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?AppendData@DialogTemplate@_internal@G3D@@IAEXPBXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
