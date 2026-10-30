// roc 2009-12 0083c3d0  unit: CXTPAccessible  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083c3d0
//
// 0083c3d0  56                   push esi
// 0083c3d1  57                   push edi
// 0083c3d2  8bf1                 mov esi, ecx
// 0083c3d4  e877f4ffff           call 0x83b850
// 0083c3d9  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0083c3dd  57                   push edi
// 0083c3de  ff15d8b19800         call dword ptr [0x98b1d8]
// 0083c3e4  894608               mov dword ptr [esi + 8], eax
// 0083c3e7  85c0                 test eax, eax
// 0083c3e9  741b                 je 0x83c406
// 0083c3eb  57                   push edi
// 0083c3ec  8d4e04               lea ecx, [esi + 4]
// 0083c3ef  c7460c02000000       mov dword ptr [esi + 0xc], 2
// 0083c3f6  ff155cde9800         call dword ptr [0x98de5c]
// 0083c3fc  5f                   pop edi
// 0083c3fd  b801000000           mov eax, 1
// 0083c402  5e                   pop esi
// 0083c403  c20400               ret 4
// 0083c406  5f                   pop edi
// 0083c407  33c0                 xor eax, eax
// 0083c409  5e                   pop esi
// 0083c40a  c20400               ret 4
// copied from an identical function in another client (function ?LoadLibraryA@CXTPModuleHandle@@QAEHPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPSystemHelpers.cpp