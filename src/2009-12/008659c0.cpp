// roc 2009-12 008659c0  unit: CPropertyGridItemBrickColor  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008659c0
//
// 008659c0  6aff                 push -1
// 008659c2  6898039600           push 0x960398
// 008659c7  64a100000000         mov eax, dword ptr fs:[0]
// 008659cd  50                   push eax
// 008659ce  83ec10               sub esp, 0x10
// 008659d1  56                   push esi
// 008659d2  a10052b600           mov eax, dword ptr [0xb65200]
// 008659d7  33c4                 xor eax, esp
// 008659d9  50                   push eax
// 008659da  8d442418             lea eax, [esp + 0x18]
// 008659de  64a300000000         mov dword ptr fs:[0], eax
// 008659e4  8bf1                 mov esi, ecx
// 008659e6  8b46fc               mov eax, dword ptr [esi - 4]
// 008659e9  50                   push eax
// 008659ea  8d4c240c             lea ecx, [esp + 0xc]
// 008659ee  e83de1f8ff           call 0x7f3b30
// 008659f3  8b442428             mov eax, dword ptr [esp + 0x28]
// 008659f7  50                   push eax
// 008659f8  c70000000000         mov dword ptr [eax], 0
// 008659fe  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 00865a04  6800179f00           push 0x9f1700
// 00865a09  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00865a11  e84e120c00           call 0x926c64
// 00865a16  8bf0                 mov esi, eax
// 00865a18  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00865a1c  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00865a24  85c0                 test eax, eax
// 00865a26  7407                 je 0x865a2f
// 00865a28  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00865a2c  894804               mov dword ptr [eax + 4], ecx
// 00865a2f  837c241400           cmp dword ptr [esp + 0x14], 0
// 00865a34  740c                 je 0x865a42
// 00865a36  8b542410             mov edx, dword ptr [esp + 0x10]
// 00865a3a  52                   push edx
// 00865a3b  6a00                 push 0
// 00865a3d  e8e2e0f8ff           call 0x7f3b24
// 00865a42  8bc6                 mov eax, esi
// 00865a44  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00865a48  64890d00000000       mov dword ptr fs:[0], ecx
// 00865a4f  59                   pop ecx
// 00865a50  5e                   pop esi
// 00865a51  83c41c               add esp, 0x1c
// 00865a54  c20400               ret 4
// copied from an identical function in another client (function ?GetAccessibleParent@CXTPPropertyGridItem@@MAEJPAPAUIDispatch@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItem.cpp