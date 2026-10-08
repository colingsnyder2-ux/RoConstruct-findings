// roc 2009-12 005fe750  unit: G3D::Sphere  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fe750
//
// 005fe750  56                   push esi
// 005fe751  8bf1                 mov esi, ecx
// 005fe753  8b560c               mov edx, dword ptr [esi + 0xc]
// 005fe756  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005fe75a  8b4608               mov eax, dword ptr [esi + 8]
// 005fe75d  03d1                 add edx, ecx
// 005fe75f  3bd0                 cmp edx, eax
// 005fe761  7e2f                 jle 0x5fe792
// 005fe763  8d0448               lea eax, [eax + ecx*2]
// 005fe766  57                   push edi
// 005fe767  50                   push eax
// 005fe768  894608               mov dword ptr [esi + 8], eax
// 005fe76b  ff1578b79800         call dword ptr [0x98b778]
// 005fe771  8b4e04               mov ecx, dword ptr [esi + 4]
// 005fe774  8bf8                 mov edi, eax
// 005fe776  8b460c               mov eax, dword ptr [esi + 0xc]
// 005fe779  50                   push eax
// 005fe77a  51                   push ecx
// 005fe77b  57                   push edi
// 005fe77c  e865651f00           call 0x7f4ce6
// 005fe781  8b5604               mov edx, dword ptr [esi + 4]
// 005fe784  52                   push edx
// 005fe785  ff1540b79800         call dword ptr [0x98b740]
// 005fe78b  83c414               add esp, 0x14
// 005fe78e  897e04               mov dword ptr [esi + 4], edi
// 005fe791  5f                   pop edi
// 005fe792  5e                   pop esi
// 005fe793  c20400               ret 4
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?EnsureSpace@DialogTemplate@_internal@G3D@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
