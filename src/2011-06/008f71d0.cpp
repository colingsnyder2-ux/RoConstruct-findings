// roc 2011-06 008f71d0  unit: CXTPRibbonGroupControlPopup  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f71d0
//
// 008f71d0  55                   push ebp
// 008f71d1  56                   push esi
// 008f71d2  8be9                 mov ebp, ecx
// 008f71d4  8b754c               mov esi, dword ptr [ebp + 0x4c]
// 008f71d7  83ee01               sub esi, 1
// 008f71da  7847                 js 0x8f7223
// 008f71dc  53                   push ebx
// 008f71dd  8d5d44               lea ebx, [ebp + 0x44]
// 008f71e0  57                   push edi
// 008f71e1  85f6                 test esi, esi
// 008f71e3  7c41                 jl 0x8f7226
// 008f71e5  3b7308               cmp esi, dword ptr [ebx + 8]
// 008f71e8  7d3c                 jge 0x8f7226
// 008f71ea  8b4304               mov eax, dword ptr [ebx + 4]
// 008f71ed  8b3cb0               mov edi, dword ptr [eax + esi*4]
// 008f71f0  6a01                 push 1
// 008f71f2  56                   push esi
// 008f71f3  8bcb                 mov ecx, ebx
// 008f71f5  c7875801000000000000 mov dword ptr [edi + 0x158], 0
// 008f71ff  e87c30f3ff           call 0x82a280
// 008f7204  8b4d58               mov ecx, dword ptr [ebp + 0x58]
// 008f7207  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 008f720d  8b11                 mov edx, dword ptr [ecx]
// 008f720f  8b4258               mov eax, dword ptr [edx + 0x58]
// 008f7212  57                   push edi
// 008f7213  ffd0                 call eax
// 008f7215  8bcf                 mov ecx, edi
// 008f7217  e8be33f1ff           call 0x80a5da
// 008f721c  83ee01               sub esi, 1
// 008f721f  79c0                 jns 0x8f71e1
// 008f7221  5f                   pop edi
// 008f7222  5b                   pop ebx
// 008f7223  5e                   pop esi
// 008f7224  5d                   pop ebp
// 008f7225  c3                   ret 
// 008f7226  e8df30f1ff           call 0x80a30a
// copied from an identical function in another client (function ?RemoveAll@CXTPRibbonGroup@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonGroup.cpp