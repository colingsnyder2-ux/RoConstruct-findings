// roc 2012-06 00a6f4a0  unit: CXTPRibbonGroupControlPopup  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6f4a0
//
// 00a6f4a0  8b442404             mov eax, dword ptr [esp + 4]
// 00a6f4a4  57                   push edi
// 00a6f4a5  8bf9                 mov edi, ecx
// 00a6f4a7  85c0                 test eax, eax
// 00a6f4a9  7c3f                 jl 0xa6f4ea
// 00a6f4ab  3b474c               cmp eax, dword ptr [edi + 0x4c]
// 00a6f4ae  7d3a                 jge 0xa6f4ea
// 00a6f4b0  3b474c               cmp eax, dword ptr [edi + 0x4c]
// 00a6f4b3  8d4f44               lea ecx, [edi + 0x44]
// 00a6f4b6  7d36                 jge 0xa6f4ee
// 00a6f4b8  8b5104               mov edx, dword ptr [ecx + 4]
// 00a6f4bb  56                   push esi
// 00a6f4bc  8b3482               mov esi, dword ptr [edx + eax*4]
// 00a6f4bf  6a01                 push 1
// 00a6f4c1  50                   push eax
// 00a6f4c2  c7865801000000000000 mov dword ptr [esi + 0x158], 0
// 00a6f4cc  e89f3cf2ff           call 0x993170
// 00a6f4d1  8b475c               mov eax, dword ptr [edi + 0x5c]
// 00a6f4d4  8b88fc000000         mov ecx, dword ptr [eax + 0xfc]
// 00a6f4da  8b11                 mov edx, dword ptr [ecx]
// 00a6f4dc  8b4258               mov eax, dword ptr [edx + 0x58]
// 00a6f4df  56                   push esi
// 00a6f4e0  ffd0                 call eax
// 00a6f4e2  8bce                 mov ecx, esi
// 00a6f4e4  e8a131f1ff           call 0x98268a
// 00a6f4e9  5e                   pop esi
// 00a6f4ea  5f                   pop edi
// 00a6f4eb  c20400               ret 4
// 00a6f4ee  e8cd2ef1ff           call 0x9823c0
// copied from an identical function in another client (function ?RemoveAt@CXTPRibbonGroup@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonGroup.cpp