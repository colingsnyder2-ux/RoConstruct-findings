// roc 2009-06 00447d10  unit: CRobloxModule  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00447d10
//
// 00447d10  56                   push esi
// 00447d11  8bf1                 mov esi, ecx
// 00447d13  837e0400             cmp dword ptr [esi + 4], 0
// 00447d17  57                   push edi
// 00447d18  8d7e04               lea edi, [esi + 4]
// 00447d1b  7432                 je 0x447d4f
// 00447d1d  837e0c00             cmp dword ptr [esi + 0xc], 0
// 00447d21  740d                 je 0x447d30
// 00447d23  57                   push edi
// 00447d24  e857d2ffff           call 0x444f80
// 00447d29  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00447d30  8b4628               mov eax, dword ptr [esi + 0x28]
// 00447d33  85c0                 test eax, eax
// 00447d35  7408                 je 0x447d3f
// 00447d37  8b08                 mov ecx, dword ptr [eax]
// 00447d39  8b5108               mov edx, dword ptr [ecx + 8]
// 00447d3c  50                   push eax
// 00447d3d  ffd2                 call edx
// 00447d3f  8d4610               lea eax, [esi + 0x10]
// 00447d42  50                   push eax
// 00447d43  ff1544e38900         call dword ptr [0x89e344]
// 00447d49  c70700000000         mov dword ptr [edi], 0
// 00447d4f  f644240c01           test byte ptr [esp + 0xc], 1
// 00447d54  7409                 je 0x447d5f
// 00447d56  56                   push esi
// 00447d57  e8d60c2d00           call 0x718a32
// 00447d5c  83c404               add esp, 4
// 00447d5f  5f                   pop edi
// 00447d60  8bc6                 mov eax, esi
// 00447d62  5e                   pop esi
// 00447d63  c20400               ret 4
// copied from an identical function in another client (function ??_GRocAtlModule@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_module_term_aa49747d7f898d5b.cpp