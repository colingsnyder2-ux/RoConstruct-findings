// roc 2007-03 00697b60  unit: seg_00690000  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00697b60
//
// 00697b60  6aff                 push -1
// 00697b62  68d8527600           push 0x7652d8
// 00697b67  64a100000000         mov eax, dword ptr fs:[0]
// 00697b6d  50                   push eax
// 00697b6e  51                   push ecx
// 00697b6f  56                   push esi
// 00697b70  57                   push edi
// 00697b71  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00697b76  33c4                 xor eax, esp
// 00697b78  50                   push eax
// 00697b79  8d442410             lea eax, [esp + 0x10]
// 00697b7d  64a300000000         mov dword ptr fs:[0], eax
// 00697b83  8bf9                 mov edi, ecx
// 00697b85  897c240c             mov dword ptr [esp + 0xc], edi
// 00697b89  6a0a                 push 0xa
// 00697b8b  e810f5ffff           call 0x6970a0
// 00697b90  33f6                 xor esi, esi
// 00697b92  89742418             mov dword ptr [esp + 0x18], esi
// 00697b96  eb08                 jmp 0x697ba0
// 00697b98  8da42400000000       lea esp, [esp]
// 00697b9f  90                   nop 
// 00697ba0  0fb78e300f7d00       movzx ecx, word ptr [esi + 0x7d0f30]
// 00697ba7  8b86340f7d00         mov eax, dword ptr [esi + 0x7d0f34]
// 00697bad  50                   push eax
// 00697bae  51                   push ecx
// 00697baf  8bcf                 mov ecx, edi
// 00697bb1  e87affffff           call 0x697b30
// 00697bb6  83c608               add esi, 8
// 00697bb9  81fe60030000         cmp esi, 0x360
// 00697bbf  72df                 jb 0x697ba0
// 00697bc1  8bc7                 mov eax, edi
// 00697bc3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00697bc7  64890d00000000       mov dword ptr fs:[0], ecx
// 00697bce  59                   pop ecx
// 00697bcf  5f                   pop edi
// 00697bd0  5e                   pop esi
// 00697bd1  83c410               add esp, 0x10
// 00697bd4  c3                   ret 
// copied from an identical function in another client (function ??0CKeyNameText@CXTPShortcutManager@@QAE@XZ)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPShortcutManager.cpp