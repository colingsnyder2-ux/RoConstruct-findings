// roc 2009-12 0080f9d0  unit: CXTPImageManagerIcon  size: 234 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080f9d0
//
// 0080f9d0  6aff                 push -1
// 0080f9d2  68a89e9500           push 0x959ea8
// 0080f9d7  64a100000000         mov eax, dword ptr fs:[0]
// 0080f9dd  50                   push eax
// 0080f9de  83ec0c               sub esp, 0xc
// 0080f9e1  56                   push esi
// 0080f9e2  a10052b600           mov eax, dword ptr [0xb65200]
// 0080f9e7  33c4                 xor eax, esp
// 0080f9e9  50                   push eax
// 0080f9ea  8d442414             lea eax, [esp + 0x14]
// 0080f9ee  64a300000000         mov dword ptr fs:[0], eax
// 0080f9f4  8bf1                 mov esi, ecx
// 0080f9f6  c744240800000000     mov dword ptr [esp + 8], 0
// 0080f9fe  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0080fa06  c744240c18229a00     mov dword ptr [esp + 0xc], 0x9a2218
// 0080fa0e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0080fa12  8d442408             lea eax, [esp + 8]
// 0080fa16  50                   push eax
// 0080fa17  51                   push ecx
// 0080fa18  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0080fa20  e87bc0ffff           call 0x80baa0
// 0080fa25  83c408               add esp, 8
// 0080fa28  8d4c240c             lea ecx, [esp + 0xc]
// 0080fa2c  85c0                 test eax, eax
// 0080fa2e  752a                 jne 0x80fa5a
// 0080fa30  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0080fa38  c744240c18229a00     mov dword ptr [esp + 0xc], 0x9a2218
// 0080fa40  e8ebf7bfff           call 0x40f230
// 0080fa45  33c0                 xor eax, eax
// 0080fa47  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0080fa4b  64890d00000000       mov dword ptr fs:[0], ecx
// 0080fa52  59                   pop ecx
// 0080fa53  5e                   pop esi
// 0080fa54  83c418               add esp, 0x18
// 0080fa57  c21800               ret 0x18
// 0080fa5a  50                   push eax
// 0080fa5b  e8ca43feff           call 0x7f3e2a
// 0080fa60  8b542408             mov edx, dword ptr [esp + 8]
// 0080fa64  8b442438             mov eax, dword ptr [esp + 0x38]
// 0080fa68  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0080fa6c  52                   push edx
// 0080fa6d  8b542434             mov edx, dword ptr [esp + 0x34]
// 0080fa71  50                   push eax
// 0080fa72  8b442434             mov eax, dword ptr [esp + 0x34]
// 0080fa76  51                   push ecx
// 0080fa77  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0080fa7b  52                   push edx
// 0080fa7c  50                   push eax
// 0080fa7d  51                   push ecx
// 0080fa7e  8d542424             lea edx, [esp + 0x24]
// 0080fa82  52                   push edx
// 0080fa83  8bce                 mov ecx, esi
// 0080fa85  e816fcffff           call 0x80f6a0
// 0080fa8a  8d4c240c             lea ecx, [esp + 0xc]
// 0080fa8e  8bf0                 mov esi, eax
// 0080fa90  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0080fa98  c744240c18229a00     mov dword ptr [esp + 0xc], 0x9a2218
// 0080faa0  e88bf7bfff           call 0x40f230
// 0080faa5  8bc6                 mov eax, esi
// 0080faa7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0080faab  64890d00000000       mov dword ptr fs:[0], ecx
// 0080fab2  59                   pop ecx
// 0080fab3  5e                   pop esi
// 0080fab4  83c418               add esp, 0x18
// 0080fab7  c21800               ret 0x18
// copied from an identical function in another client (function ?SetIcons@CXTPImageManager@@QAEHPBDPAIHVCSize@@W4XTPImageState@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp