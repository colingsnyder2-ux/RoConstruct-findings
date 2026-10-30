// roc 2009-12 0088f480  unit: CXTPShortcutManager  size: 262 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088f480
//
// 0088f480  6aff                 push -1
// 0088f482  6825119600           push 0x961125
// 0088f487  64a100000000         mov eax, dword ptr fs:[0]
// 0088f48d  50                   push eax
// 0088f48e  51                   push ecx
// 0088f48f  53                   push ebx
// 0088f490  55                   push ebp
// 0088f491  56                   push esi
// 0088f492  57                   push edi
// 0088f493  a10052b600           mov eax, dword ptr [0xb65200]
// 0088f498  33c4                 xor eax, esp
// 0088f49a  50                   push eax
// 0088f49b  8d442418             lea eax, [esp + 0x18]
// 0088f49f  64a300000000         mov dword ptr fs:[0], eax
// 0088f4a5  8bf9                 mov edi, ecx
// 0088f4a7  33db                 xor ebx, ebx
// 0088f4a9  895c2414             mov dword ptr [esp + 0x14], ebx
// 0088f4ad  8b742428             mov esi, dword ptr [esp + 0x28]
// 0088f4b1  8bce                 mov ecx, esi
// 0088f4b3  ff1574de9800         call dword ptr [0x98de74]
// 0088f4b9  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0088f4bd  895c2420             mov dword ptr [esp + 0x20], ebx
// 0088f4c1  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0088f4c9  395f24               cmp dword ptr [edi + 0x24], ebx
// 0088f4cc  742d                 je 0x88f4fb
// 0088f4ce  8d44242c             lea eax, [esp + 0x2c]
// 0088f4d2  55                   push ebp
// 0088f4d3  50                   push eax
// 0088f4d4  e807f5ffff           call 0x88e9e0
// 0088f4d9  83c408               add esp, 8
// 0088f4dc  50                   push eax
// 0088f4dd  8bce                 mov ecx, esi
// 0088f4df  c744242401000000     mov dword ptr [esp + 0x24], 1
// 0088f4e7  ff1538d59800         call dword ptr [0x98d538]
// 0088f4ed  8d4c242c             lea ecx, [esp + 0x2c]
// 0088f4f1  885c2420             mov byte ptr [esp + 0x20], bl
// 0088f4f5  ff15c0de9800         call dword ptr [0x98dec0]
// 0088f4fb  8bce                 mov ecx, esi
// 0088f4fd  ff15bcdd9800         call dword ptr [0x98ddbc]
// 0088f503  84c0                 test al, al
// 0088f505  742d                 je 0x88f534
// 0088f507  55                   push ebp
// 0088f508  8d4c2430             lea ecx, [esp + 0x30]
// 0088f50c  51                   push ecx
// 0088f50d  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 0088f510  e8dbfeffff           call 0x88f3f0
// 0088f515  50                   push eax
// 0088f516  8bce                 mov ecx, esi
// 0088f518  c744242402000000     mov dword ptr [esp + 0x24], 2
// 0088f520  ff1538d59800         call dword ptr [0x98d538]
// 0088f526  8d4c242c             lea ecx, [esp + 0x2c]
// 0088f52a  885c2420             mov byte ptr [esp + 0x20], bl
// 0088f52e  ff15c0de9800         call dword ptr [0x98dec0]
// 0088f534  8bce                 mov ecx, esi
// 0088f536  ff15bcdd9800         call dword ptr [0x98ddbc]
// 0088f53c  84c0                 test al, al
// 0088f53e  742e                 je 0x88f56e
// 0088f540  395f24               cmp dword ptr [edi + 0x24], ebx
// 0088f543  7529                 jne 0x88f56e
// 0088f545  8d54242c             lea edx, [esp + 0x2c]
// 0088f549  55                   push ebp
// 0088f54a  52                   push edx
// 0088f54b  e890f4ffff           call 0x88e9e0
// 0088f550  83c408               add esp, 8
// 0088f553  50                   push eax
// 0088f554  8bce                 mov ecx, esi
// 0088f556  c744242403000000     mov dword ptr [esp + 0x24], 3
// 0088f55e  ff1538d59800         call dword ptr [0x98d538]
// 0088f564  8d4c242c             lea ecx, [esp + 0x2c]
// 0088f568  ff15c0de9800         call dword ptr [0x98dec0]
// 0088f56e  8bc6                 mov eax, esi
// 0088f570  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0088f574  64890d00000000       mov dword ptr fs:[0], ecx
// 0088f57b  59                   pop ecx
// 0088f57c  5f                   pop edi
// 0088f57d  5e                   pop esi
// 0088f57e  5d                   pop ebp
// 0088f57f  5b                   pop ebx
// 0088f580  83c410               add esp, 0x10
// 0088f583  c20800               ret 8
// copied from an identical function in another client (function ?GetKeyNameTextA@CXTPShortcutManager@@UAE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@I@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPShortcutManager.cpp