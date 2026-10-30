// from server: 100% by auto
// roc 2007-03 004b55b0  unit: seg_004b0000  size: 205 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b55b0
//
// 004b55b0  81ec80000000         sub esp, 0x80
// 004b55b6  53                   push ebx
// 004b55b7  8b9c248c000000       mov ebx, dword ptr [esp + 0x8c]
// 004b55be  55                   push ebp
// 004b55bf  8bac248c000000       mov ebp, dword ptr [esp + 0x8c]
// 004b55c6  56                   push esi
// 004b55c7  57                   push edi
// 004b55c8  53                   push ebx
// 004b55c9  55                   push ebp
// 004b55ca  e8a1d7ffff           call 0x4b2d70
// 004b55cf  33c0                 xor eax, eax
// 004b55d1  b908000000           mov ecx, 8
// 004b55d6  8bf3                 mov esi, ebx
// 004b55d8  8d7c2438             lea edi, [esp + 0x38]
// 004b55dc  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004b55de  89442418             mov dword ptr [esp + 0x18], eax
// 004b55e2  8944241c             mov dword ptr [esp + 0x1c], eax
// 004b55e6  89442420             mov dword ptr [esp + 0x20], eax
// 004b55ea  89442424             mov dword ptr [esp + 0x24], eax
// 004b55ee  89442428             mov dword ptr [esp + 0x28], eax
// 004b55f2  8944242c             mov dword ptr [esp + 0x2c], eax
// 004b55f6  89442430             mov dword ptr [esp + 0x30], eax
// 004b55fa  89442434             mov dword ptr [esp + 0x34], eax
// 004b55fe  8d442418             lea eax, [esp + 0x18]
// 004b5602  50                   push eax
// 004b5603  e88893ffff           call 0x4ae990
// 004b5608  33c0                 xor eax, eax
// 004b560a  b908000000           mov ecx, 8
// 004b560f  8bf5                 mov esi, ebp
// 004b5611  8d7c245c             lea edi, [esp + 0x5c]
// 004b5615  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004b5617  8d4c241c             lea ecx, [esp + 0x1c]
// 004b561b  51                   push ecx
// 004b561c  8d542460             lea edx, [esp + 0x60]
// 004b5620  89842480000000       mov dword ptr [esp + 0x80], eax
// 004b5627  89842484000000       mov dword ptr [esp + 0x84], eax
// 004b562e  89842488000000       mov dword ptr [esp + 0x88], eax
// 004b5635  8984248c000000       mov dword ptr [esp + 0x8c], eax
// 004b563c  89842490000000       mov dword ptr [esp + 0x90], eax
// 004b5643  89842494000000       mov dword ptr [esp + 0x94], eax
// 004b564a  89842498000000       mov dword ptr [esp + 0x98], eax
// 004b5651  8984249c000000       mov dword ptr [esp + 0x9c], eax
// 004b5658  52                   push edx
// 004b5659  8bc2                 mov eax, edx
// 004b565b  50                   push eax
// 004b565c  51                   push ecx
// 004b565d  e8eea8ffff           call 0x4aff50
// 004b5662  83c41c               add esp, 0x1c
// 004b5665  8bfb                 mov edi, ebx
// 004b5667  b908000000           mov ecx, 8
// 004b566c  8d742450             lea esi, [esp + 0x50]
// 004b5670  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004b5672  5f                   pop edi
// 004b5673  5e                   pop esi
// 004b5674  5d                   pop ebp
// 004b5675  5b                   pop ebx
// 004b5676  81c480000000         add esp, 0x80
// 004b567c  c3                   ret 

// from server: 40% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreResourceGroupManager.cpp