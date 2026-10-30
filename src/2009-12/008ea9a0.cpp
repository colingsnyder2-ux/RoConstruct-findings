// roc 2009-12 008ea9a0  unit: PAVCXTPRibbonTabContextHeader::?$CArray  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ea9a0
//
// 008ea9a0  55                   push ebp
// 008ea9a1  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 008ea9a5  57                   push edi
// 008ea9a6  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008ea9aa  85ff                 test edi, edi
// 008ea9ac  7409                 je 0x8ea9b7
// 008ea9ae  85ed                 test ebp, ebp
// 008ea9b0  7505                 jne 0x8ea9b7
// 008ea9b2  e85591f0ff           call 0x7f3b0c
// 008ea9b7  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008ea9bb  8b4818               mov ecx, dword ptr [eax + 0x18]
// 008ea9be  f7d1                 not ecx
// 008ea9c0  53                   push ebx
// 008ea9c1  56                   push esi
// 008ea9c2  f6c101               test cl, 1
// 008ea9c5  7439                 je 0x8eaa00
// 008ea9c7  85ff                 test edi, edi
// 008ea9c9  762e                 jbe 0x8ea9f9
// 008ea9cb  eb03                 jmp 0x8ea9d0
// 008ea9cd  8d4900               lea ecx, [ecx]
// 008ea9d0  8bdf                 mov ebx, edi
// 008ea9d2  81ffffffff1f         cmp edi, 0x1fffffff
// 008ea9d8  7205                 jb 0x8ea9df
// 008ea9da  bbffffff1f           mov ebx, 0x1fffffff
// 008ea9df  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008ea9e3  8d349d00000000       lea esi, [ebx*4]
// 008ea9ea  56                   push esi
// 008ea9eb  55                   push ebp
// 008ea9ec  e8eb99f0ff           call 0x7f43dc
// 008ea9f1  2bfb                 sub edi, ebx
// 008ea9f3  03ee                 add ebp, esi
// 008ea9f5  85ff                 test edi, edi
// 008ea9f7  77d7                 ja 0x8ea9d0
// 008ea9f9  5e                   pop esi
// 008ea9fa  5b                   pop ebx
// 008ea9fb  5f                   pop edi
// 008ea9fc  5d                   pop ebp
// 008ea9fd  c20c00               ret 0xc
// 008eaa00  85ff                 test edi, edi
// 008eaa02  76f5                 jbe 0x8ea9f9
// 008eaa04  8bdf                 mov ebx, edi
// 008eaa06  81ffffffff1f         cmp edi, 0x1fffffff
// 008eaa0c  7205                 jb 0x8eaa13
// 008eaa0e  bbffffff1f           mov ebx, 0x1fffffff
// 008eaa13  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008eaa17  8d349d00000000       lea esi, [ebx*4]
// 008eaa1e  56                   push esi
// 008eaa1f  55                   push ebp
// 008eaa20  e8b199f0ff           call 0x7f43d6
// 008eaa25  3bc6                 cmp eax, esi
// 008eaa27  750f                 jne 0x8eaa38
// 008eaa29  2bfb                 sub edi, ebx
// 008eaa2b  03ee                 add ebp, esi
// 008eaa2d  85ff                 test edi, edi
// 008eaa2f  77d3                 ja 0x8eaa04
// 008eaa31  5e                   pop esi
// 008eaa32  5b                   pop ebx
// 008eaa33  5f                   pop edi
// 008eaa34  5d                   pop ebp
// 008eaa35  c20c00               ret 0xc
// 008eaa38  6a00                 push 0
// 008eaa3a  6a03                 push 3
// 008eaa3c  e88f99f0ff           call 0x7f43d0
// copied from an identical function in another client (function ??$SerializeElements@I@@YGXAAVCArchive@@PAIH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPResourceManager.cpp