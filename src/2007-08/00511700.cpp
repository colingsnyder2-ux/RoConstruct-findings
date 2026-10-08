// from server: 100% by auto
// roc 2007-08 00511700  unit: G3D::Sphere  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00511700
//
// 00511700  56                   push esi
// 00511701  8bf1                 mov esi, ecx
// 00511703  8b560c               mov edx, dword ptr [esi + 0xc]
// 00511706  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0051170a  8b4608               mov eax, dword ptr [esi + 8]
// 0051170d  03d1                 add edx, ecx
// 0051170f  3bd0                 cmp edx, eax
// 00511711  7e2f                 jle 0x511742
// 00511713  8d0448               lea eax, [eax + ecx*2]
// 00511716  57                   push edi
// 00511717  50                   push eax
// 00511718  894608               mov dword ptr [esi + 8], eax
// 0051171b  ff15d0e67700         call dword ptr [0x77e6d0]
// 00511721  8b4e04               mov ecx, dword ptr [esi + 4]
// 00511724  8bf8                 mov edi, eax
// 00511726  8b460c               mov eax, dword ptr [esi + 0xc]
// 00511729  50                   push eax
// 0051172a  51                   push ecx
// 0051172b  57                   push edi
// 0051172c  e81bf61100           call 0x630d4c
// 00511731  8b5604               mov edx, dword ptr [esi + 4]
// 00511734  52                   push edx
// 00511735  ff15c4e67700         call dword ptr [0x77e6c4]
// 0051173b  83c414               add esp, 0x14
// 0051173e  897e04               mov dword ptr [esi + 4], edi
// 00511741  5f                   pop edi
// 00511742  5e                   pop esi
// 00511743  c20400               ret 4
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?EnsureSpace@DialogTemplate@_internal@G3D@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
