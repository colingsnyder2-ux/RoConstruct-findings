// roc 2009-12 0044df70  unit: CRobloxModule  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0044df70
//
// 0044df70  56                   push esi
// 0044df71  8bf1                 mov esi, ecx
// 0044df73  837e0400             cmp dword ptr [esi + 4], 0
// 0044df77  57                   push edi
// 0044df78  8d7e04               lea edi, [esi + 4]
// 0044df7b  7432                 je 0x44dfaf
// 0044df7d  837e0c00             cmp dword ptr [esi + 0xc], 0
// 0044df81  740d                 je 0x44df90
// 0044df83  57                   push edi
// 0044df84  e897d2ffff           call 0x44b220
// 0044df89  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0044df90  8b4628               mov eax, dword ptr [esi + 0x28]
// 0044df93  85c0                 test eax, eax
// 0044df95  7408                 je 0x44df9f
// 0044df97  8b08                 mov ecx, dword ptr [eax]
// 0044df99  8b5108               mov edx, dword ptr [ecx + 8]
// 0044df9c  50                   push eax
// 0044df9d  ffd2                 call edx
// 0044df9f  8d4610               lea eax, [esi + 0x10]
// 0044dfa2  50                   push eax
// 0044dfa3  ff15d0b29800         call dword ptr [0x98b2d0]
// 0044dfa9  c70700000000         mov dword ptr [edi], 0
// 0044dfaf  f644240c01           test byte ptr [esp + 0xc], 1
// 0044dfb4  7409                 je 0x44dfbf
// 0044dfb6  56                   push esi
// 0044dfb7  e89e583a00           call 0x7f385a
// 0044dfbc  83c404               add esp, 4
// 0044dfbf  5f                   pop edi
// 0044dfc0  8bc6                 mov eax, esi
// 0044dfc2  5e                   pop esi
// 0044dfc3  c20400               ret 4
// copied from an identical function in another client (function ??_GRocAtlModule@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_module_term_aa49747d7f898d5b.cpp