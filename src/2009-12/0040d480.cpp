// roc 2009-12 0040d480  unit: CIDEBrowserView  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0040d480
//
// 0040d480  6aff                 push -1
// 0040d482  680b799200           push 0x92790b
// 0040d487  64a100000000         mov eax, dword ptr fs:[0]
// 0040d48d  50                   push eax
// 0040d48e  64892500000000       mov dword ptr fs:[0], esp
// 0040d495  51                   push ecx
// 0040d496  56                   push esi
// 0040d497  57                   push edi
// 0040d498  8bf9                 mov edi, ecx
// 0040d49a  897c2408             mov dword ptr [esp + 8], edi
// 0040d49e  8b7704               mov esi, dword ptr [edi + 4]
// 0040d4a1  8b4708               mov eax, dword ptr [edi + 8]
// 0040d4a4  8bce                 mov ecx, esi
// 0040d4a6  8d1481               lea edx, [ecx + eax*4]
// 0040d4a9  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0040d4b1  3bf2                 cmp esi, edx
// 0040d4b3  731e                 jae 0x40d4d3
// 0040d4b5  8b06                 mov eax, dword ptr [esi]
// 0040d4b7  85c0                 test eax, eax
// 0040d4b9  7408                 je 0x40d4c3
// 0040d4bb  8b08                 mov ecx, dword ptr [eax]
// 0040d4bd  8b5108               mov edx, dword ptr [ecx + 8]
// 0040d4c0  50                   push eax
// 0040d4c1  ffd2                 call edx
// 0040d4c3  8b4708               mov eax, dword ptr [edi + 8]
// 0040d4c6  8b4f04               mov ecx, dword ptr [edi + 4]
// 0040d4c9  83c604               add esi, 4
// 0040d4cc  8d1481               lea edx, [ecx + eax*4]
// 0040d4cf  3bf2                 cmp esi, edx
// 0040d4d1  72e2                 jb 0x40d4b5
// 0040d4d3  837f0800             cmp dword ptr [edi + 8], 0
// 0040d4d7  7e0d                 jle 0x40d4e6
// 0040d4d9  8b4704               mov eax, dword ptr [edi + 4]
// 0040d4dc  50                   push eax
// 0040d4dd  ff1540b79800         call dword ptr [0x98b740]
// 0040d4e3  83c404               add esp, 4
// 0040d4e6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0040d4ea  5f                   pop edi
// 0040d4eb  5e                   pop esi
// 0040d4ec  64890d00000000       mov dword ptr fs:[0], ecx
// 0040d4f3  83c410               add esp, 0x10
// 0040d4f6  c3                   ret 
// copied from an identical function in another client (function ??1?$IConnectionPointImpl@VCBrowserViewExternal@@$1?_GUID_dd754d30_321a_45a2_a40c_75783afabfab@@3U__s_GUID@@BVCComDynamicUnkArray@ATL@@@ATL@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp