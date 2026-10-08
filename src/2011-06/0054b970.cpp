// from server: 100% by auto
// roc 2011-06 0054b970  unit: G3D::_internal::DialogTemplate  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0054b970
//
// 0054b970  53                   push ebx
// 0054b971  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0054b975  56                   push esi
// 0054b976  8bf1                 mov esi, ecx
// 0054b978  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0054b97b  8b4608               mov eax, dword ptr [esi + 8]
// 0054b97e  03cb                 add ecx, ebx
// 0054b980  3bc8                 cmp ecx, eax
// 0054b982  7e2f                 jle 0x54b9b3
// 0054b984  8d0458               lea eax, [eax + ebx*2]
// 0054b987  57                   push edi
// 0054b988  50                   push eax
// 0054b989  894608               mov dword ptr [esi + 8], eax
// 0054b98c  ff15400aa400         call dword ptr [0xa40a40]
// 0054b992  8b560c               mov edx, dword ptr [esi + 0xc]
// 0054b995  8bf8                 mov edi, eax
// 0054b997  8b4604               mov eax, dword ptr [esi + 4]
// 0054b99a  52                   push edx
// 0054b99b  50                   push eax
// 0054b99c  57                   push edi
// 0054b99d  e83afc2b00           call 0x80b5dc
// 0054b9a2  8b4e04               mov ecx, dword ptr [esi + 4]
// 0054b9a5  51                   push ecx
// 0054b9a6  ff15740aa400         call dword ptr [0xa40a74]
// 0054b9ac  83c414               add esp, 0x14
// 0054b9af  897e04               mov dword ptr [esi + 4], edi
// 0054b9b2  5f                   pop edi
// 0054b9b3  8b4604               mov eax, dword ptr [esi + 4]
// 0054b9b6  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0054b9ba  03460c               add eax, dword ptr [esi + 0xc]
// 0054b9bd  53                   push ebx
// 0054b9be  52                   push edx
// 0054b9bf  50                   push eax
// 0054b9c0  e817fc2b00           call 0x80b5dc
// 0054b9c5  015e0c               add dword ptr [esi + 0xc], ebx
// 0054b9c8  83c40c               add esp, 0xc
// 0054b9cb  5e                   pop esi
// 0054b9cc  5b                   pop ebx
// 0054b9cd  c20800               ret 8
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?AppendData@DialogTemplate@_internal@G3D@@IAEXPBXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
