// roc 2007-03 004493b0  unit: seg_00440000  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004493b0
//
// 004493b0  56                   push esi
// 004493b1  8bf1                 mov esi, ecx
// 004493b3  837e0400             cmp dword ptr [esi + 4], 0
// 004493b7  57                   push edi
// 004493b8  8d7e04               lea edi, [esi + 4]
// 004493bb  7432                 je 0x4493ef
// 004493bd  837e0c00             cmp dword ptr [esi + 0xc], 0
// 004493c1  740d                 je 0x4493d0
// 004493c3  57                   push edi
// 004493c4  e877e8ffff           call 0x447c40
// 004493c9  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 004493d0  8b4628               mov eax, dword ptr [esi + 0x28]
// 004493d3  85c0                 test eax, eax
// 004493d5  7408                 je 0x4493df
// 004493d7  8b08                 mov ecx, dword ptr [eax]
// 004493d9  8b5108               mov edx, dword ptr [ecx + 8]
// 004493dc  50                   push eax
// 004493dd  ffd2                 call edx
// 004493df  8d4610               lea eax, [esi + 0x10]
// 004493e2  50                   push eax
// 004493e3  ff15c4d27700         call dword ptr [0x77d2c4]
// 004493e9  c70700000000         mov dword ptr [edi], 0
// 004493ef  f644240c01           test byte ptr [esp + 0xc], 1
// 004493f4  7409                 je 0x4493ff
// 004493f6  56                   push esi
// 004493f7  e8f44c1d00           call 0x61e0f0
// 004493fc  83c404               add esp, 4
// 004493ff  5f                   pop edi
// 00449400  8bc6                 mov eax, esi
// 00449402  5e                   pop esi
// 00449403  c20400               ret 4
// copied from an identical function in another client (function ??_GRocAtlModule@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_module_term_aa49747d7f898d5b.cpp