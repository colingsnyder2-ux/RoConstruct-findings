// roc 2011-06 008fde00  unit: CXTPRibbonControlTab  size: 263 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008fde00
//
// 008fde00  83ec18               sub esp, 0x18
// 008fde03  56                   push esi
// 008fde04  57                   push edi
// 008fde05  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 008fde09  8bf1                 mov esi, ecx
// 008fde0b  85ff                 test edi, edi
// 008fde0d  750d                 jne 0x8fde1c
// 008fde0f  5f                   pop edi
// 008fde10  b857000780           mov eax, 0x80070057
// 008fde15  5e                   pop esi
// 008fde16  83c418               add esp, 0x18
// 008fde19  c20c00               ret 0xc
// 008fde1c  33c0                 xor eax, eax
// 008fde1e  668907               mov word ptr [edi], ax
// 008fde21  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 008fde27  85c0                 test eax, eax
// 008fde29  7406                 je 0x8fde31
// 008fde2b  83782000             cmp dword ptr [eax + 0x20], 0
// 008fde2f  750d                 jne 0x8fde3e
// 008fde31  5f                   pop edi
// 008fde32  b801000000           mov eax, 1
// 008fde37  5e                   pop esi
// 008fde38  83c418               add esp, 0x18
// 008fde3b  c20c00               ret 0xc
// 008fde3e  53                   push ebx
// 008fde3f  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 008fde43  55                   push ebp
// 008fde44  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 008fde48  50                   push eax
// 008fde49  8d4c241c             lea ecx, [esp + 0x1c]
// 008fde4d  e8deeef5ff           call 0x85cd30
// 008fde52  55                   push ebp
// 008fde53  53                   push ebx
// 008fde54  50                   push eax
// 008fde55  ff15101ca400         call dword ptr [0xa41c10]
// 008fde5b  85c0                 test eax, eax
// 008fde5d  746d                 je 0x8fdecc
// 008fde5f  b903000000           mov ecx, 3
// 008fde64  66890f               mov word ptr [edi], cx
// 008fde67  c7470800000000       mov dword ptr [edi + 8], 0
// 008fde6e  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 008fde74  8d542410             lea edx, [esp + 0x10]
// 008fde78  895c2410             mov dword ptr [esp + 0x10], ebx
// 008fde7c  896c2414             mov dword ptr [esp + 0x14], ebp
// 008fde80  8b4820               mov ecx, dword ptr [eax + 0x20]
// 008fde83  52                   push edx
// 008fde84  51                   push ecx
// 008fde85  ff15f419a400         call dword ptr [0xa419f4]
// 008fde8b  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 008fde91  8b96a0000000         mov edx, dword ptr [esi + 0xa0]
// 008fde97  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 008fde9d  89542418             mov dword ptr [esp + 0x18], edx
// 008fdea1  8b96ac000000         mov edx, dword ptr [esi + 0xac]
// 008fdea7  8944241c             mov dword ptr [esp + 0x1c], eax
// 008fdeab  8b442414             mov eax, dword ptr [esp + 0x14]
// 008fdeaf  894c2420             mov dword ptr [esp + 0x20], ecx
// 008fdeb3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008fdeb7  50                   push eax
// 008fdeb8  89542428             mov dword ptr [esp + 0x28], edx
// 008fdebc  51                   push ecx
// 008fdebd  8d542420             lea edx, [esp + 0x20]
// 008fdec1  52                   push edx
// 008fdec2  ff15101ca400         call dword ptr [0xa41c10]
// 008fdec8  85c0                 test eax, eax
// 008fdeca  750f                 jne 0x8fdedb
// 008fdecc  5d                   pop ebp
// 008fdecd  5b                   pop ebx
// 008fdece  5f                   pop edi
// 008fdecf  b801000000           mov eax, 1
// 008fded4  5e                   pop esi
// 008fded5  83c418               add esp, 0x18
// 008fded8  c20c00               ret 0xc
// 008fdedb  8b442414             mov eax, dword ptr [esp + 0x14]
// 008fdedf  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008fdee3  50                   push eax
// 008fdee4  51                   push ecx
// 008fdee5  8d8e64010000         lea ecx, [esi + 0x164]
// 008fdeeb  e87068fdff           call 0x8d4760
// 008fdef0  85c0                 test eax, eax
// 008fdef2  7407                 je 0x8fdefb
// 008fdef4  8b502c               mov edx, dword ptr [eax + 0x2c]
// 008fdef7  42                   inc edx
// 008fdef8  895708               mov dword ptr [edi + 8], edx
// 008fdefb  5d                   pop ebp
// 008fdefc  5b                   pop ebx
// 008fdefd  5f                   pop edi
// 008fdefe  33c0                 xor eax, eax
// 008fdf00  5e                   pop esi
// 008fdf01  83c418               add esp, 0x18
// 008fdf04  c20c00               ret 0xc
// library xtp-11.2.2/Source\Ribbon\XTPRibbonControlTab.cpp (function ?AccessibleHitTest@CXTPRibbonControlTab@@MAEJJJPAUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonControlTab.cpp
