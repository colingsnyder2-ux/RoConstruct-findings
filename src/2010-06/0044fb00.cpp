// roc 2010-06 0044fb00  unit: CRobloxModule  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0044fb00
//
// 0044fb00  56                   push esi
// 0044fb01  8bf1                 mov esi, ecx
// 0044fb03  837e0400             cmp dword ptr [esi + 4], 0
// 0044fb07  57                   push edi
// 0044fb08  8d7e04               lea edi, [esi + 4]
// 0044fb0b  7432                 je 0x44fb3f
// 0044fb0d  837e0c00             cmp dword ptr [esi + 0xc], 0
// 0044fb11  740d                 je 0x44fb20
// 0044fb13  57                   push edi
// 0044fb14  e8a7d6ffff           call 0x44d1c0
// 0044fb19  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0044fb20  8b4628               mov eax, dword ptr [esi + 0x28]
// 0044fb23  85c0                 test eax, eax
// 0044fb25  7408                 je 0x44fb2f
// 0044fb27  8b08                 mov ecx, dword ptr [eax]
// 0044fb29  8b5108               mov edx, dword ptr [ecx + 8]
// 0044fb2c  50                   push eax
// 0044fb2d  ffd2                 call edx
// 0044fb2f  8d4610               lea eax, [esi + 0x10]
// 0044fb32  50                   push eax
// 0044fb33  ff15bca39e00         call dword ptr [0x9ea3bc]
// 0044fb39  c70700000000         mov dword ptr [edi], 0
// 0044fb3f  f644240c01           test byte ptr [esp + 0xc], 1
// 0044fb44  7409                 je 0x44fb4f
// 0044fb46  56                   push esi
// 0044fb47  e84e7e3500           call 0x7a799a
// 0044fb4c  83c404               add esp, 4
// 0044fb4f  5f                   pop edi
// 0044fb50  8bc6                 mov eax, esi
// 0044fb52  5e                   pop esi
// 0044fb53  c20400               ret 4
// copied from an identical function in another client (function ??_GRocAtlModule@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_module_term_aa49747d7f898d5b.cpp