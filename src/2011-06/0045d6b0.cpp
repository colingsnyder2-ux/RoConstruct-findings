// roc 2011-06 0045d6b0  unit: CRobloxModule  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0045d6b0
//
// 0045d6b0  56                   push esi
// 0045d6b1  8bf1                 mov esi, ecx
// 0045d6b3  837e0400             cmp dword ptr [esi + 4], 0
// 0045d6b7  57                   push edi
// 0045d6b8  8d7e04               lea edi, [esi + 4]
// 0045d6bb  7432                 je 0x45d6ef
// 0045d6bd  837e0c00             cmp dword ptr [esi + 0xc], 0
// 0045d6c1  740d                 je 0x45d6d0
// 0045d6c3  57                   push edi
// 0045d6c4  e857b4ffff           call 0x458b20
// 0045d6c9  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0045d6d0  8b4628               mov eax, dword ptr [esi + 0x28]
// 0045d6d3  85c0                 test eax, eax
// 0045d6d5  7408                 je 0x45d6df
// 0045d6d7  8b08                 mov ecx, dword ptr [eax]
// 0045d6d9  8b5108               mov edx, dword ptr [ecx + 8]
// 0045d6dc  50                   push eax
// 0045d6dd  ffd2                 call edx
// 0045d6df  8d4610               lea eax, [esi + 0x10]
// 0045d6e2  50                   push eax
// 0045d6e3  ff159c03a400         call dword ptr [0xa4039c]
// 0045d6e9  c70700000000         mov dword ptr [edi], 0
// 0045d6ef  f644240c01           test byte ptr [esp + 0xc], 1
// 0045d6f4  7409                 je 0x45d6ff
// 0045d6f6  56                   push esi
// 0045d6f7  e85cc93a00           call 0x80a058
// 0045d6fc  83c404               add esp, 4
// 0045d6ff  5f                   pop edi
// 0045d700  8bc6                 mov eax, esi
// 0045d702  5e                   pop esi
// 0045d703  c20400               ret 4
// copied from an identical function in another client (function ??_GRocAtlModule@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_module_term_aa49747d7f898d5b.cpp