// roc 2011-06 0054b730  unit: std::D::DU?$char_traits::V?$basic_string::?$Table  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0054b730
//
// 0054b730  56                   push esi
// 0054b731  8bf1                 mov esi, ecx
// 0054b733  8b560c               mov edx, dword ptr [esi + 0xc]
// 0054b736  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0054b73a  8b4608               mov eax, dword ptr [esi + 8]
// 0054b73d  03d1                 add edx, ecx
// 0054b73f  3bd0                 cmp edx, eax
// 0054b741  7e2f                 jle 0x54b772
// 0054b743  8d0448               lea eax, [eax + ecx*2]
// 0054b746  57                   push edi
// 0054b747  50                   push eax
// 0054b748  894608               mov dword ptr [esi + 8], eax
// 0054b74b  ff15400aa400         call dword ptr [0xa40a40]
// 0054b751  8b4e04               mov ecx, dword ptr [esi + 4]
// 0054b754  8bf8                 mov edi, eax
// 0054b756  8b460c               mov eax, dword ptr [esi + 0xc]
// 0054b759  50                   push eax
// 0054b75a  51                   push ecx
// 0054b75b  57                   push edi
// 0054b75c  e87bfe2b00           call 0x80b5dc
// 0054b761  8b5604               mov edx, dword ptr [esi + 4]
// 0054b764  52                   push edx
// 0054b765  ff15740aa400         call dword ptr [0xa40a74]
// 0054b76b  83c414               add esp, 0x14
// 0054b76e  897e04               mov dword ptr [esi + 4], edi
// 0054b771  5f                   pop edi
// 0054b772  5e                   pop esi
// 0054b773  c20400               ret 4
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?EnsureSpace@DialogTemplate@_internal@G3D@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
