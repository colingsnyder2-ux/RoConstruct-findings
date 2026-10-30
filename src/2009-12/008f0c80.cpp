// roc 2009-12 008f0c80  unit: CXTPRibbonControlTab  size: 317 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f0c80
//
// 008f0c80  51                   push ecx
// 008f0c81  56                   push esi
// 008f0c82  8bf1                 mov esi, ecx
// 008f0c84  8b06                 mov eax, dword ptr [esi]
// 008f0c86  8b5074               mov edx, dword ptr [eax + 0x74]
// 008f0c89  ffd2                 call edx
// 008f0c8b  85c0                 test eax, eax
// 008f0c8d  7505                 jne 0x8f0c94
// 008f0c8f  5e                   pop esi
// 008f0c90  59                   pop ecx
// 008f0c91  c20800               ret 8
// 008f0c94  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 008f0c9a  53                   push ebx
// 008f0c9b  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 008f0c9f  8d442408             lea eax, [esp + 8]
// 008f0ca3  50                   push eax
// 008f0ca4  51                   push ecx
// 008f0ca5  895c2410             mov dword ptr [esp + 0x10], ebx
// 008f0ca9  e8b2b4f5ff           call 0x84c160
// 008f0cae  8b442410             mov eax, dword ptr [esp + 0x10]
// 008f0cb2  83c408               add esp, 8
// 008f0cb5  83f826               cmp eax, 0x26
// 008f0cb8  740f                 je 0x8f0cc9
// 008f0cba  83f828               cmp eax, 0x28
// 008f0cbd  740a                 je 0x8f0cc9
// 008f0cbf  83f825               cmp eax, 0x25
// 008f0cc2  7405                 je 0x8f0cc9
// 008f0cc4  83f827               cmp eax, 0x27
// 008f0cc7  750f                 jne 0x8f0cd8
// 008f0cc9  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 008f0ccf  e8fc44f1ff           call 0x8051d0
// 008f0cd4  8b442408             mov eax, dword ptr [esp + 8]
// 008f0cd8  57                   push edi
// 008f0cd9  83f825               cmp eax, 0x25
// 008f0cdc  753f                 jne 0x8f0d1d
// 008f0cde  8dbe84010000         lea edi, [esi + 0x184]
// 008f0ce4  6aff                 push -1
// 008f0ce6  8bcf                 mov ecx, edi
// 008f0ce8  e833d6fdff           call 0x8ce320
// 008f0ced  50                   push eax
// 008f0cee  8bcf                 mov ecx, edi
// 008f0cf0  e88beafdff           call 0x8cf780
// 008f0cf5  85c0                 test eax, eax
// 008f0cf7  7420                 je 0x8f0d19
// 008f0cf9  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 008f0cff  85c0                 test eax, eax
// 008f0d01  7403                 je 0x8f0d06
// 008f0d03  8b4020               mov eax, dword ptr [eax + 0x20]
// 008f0d06  8b17                 mov edx, dword ptr [edi]
// 008f0d08  53                   push ebx
// 008f0d09  50                   push eax
// 008f0d0a  8b4254               mov eax, dword ptr [edx + 0x54]
// 008f0d0d  8bcf                 mov ecx, edi
// 008f0d0f  ffd0                 call eax
// 008f0d11  85c0                 test eax, eax
// 008f0d13  0f858f000000         jne 0x8f0da8
// 008f0d19  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008f0d1d  83f827               cmp eax, 0x27
// 008f0d20  753b                 jne 0x8f0d5d
// 008f0d22  8dbe84010000         lea edi, [esi + 0x184]
// 008f0d28  6a01                 push 1
// 008f0d2a  8bcf                 mov ecx, edi
// 008f0d2c  e8efd5fdff           call 0x8ce320
// 008f0d31  50                   push eax
// 008f0d32  8bcf                 mov ecx, edi
// 008f0d34  e847eafdff           call 0x8cf780
// 008f0d39  85c0                 test eax, eax
// 008f0d3b  741c                 je 0x8f0d59
// 008f0d3d  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 008f0d43  85c0                 test eax, eax
// 008f0d45  7403                 je 0x8f0d4a
// 008f0d47  8b4020               mov eax, dword ptr [eax + 0x20]
// 008f0d4a  8b17                 mov edx, dword ptr [edi]
// 008f0d4c  53                   push ebx
// 008f0d4d  50                   push eax
// 008f0d4e  8b4254               mov eax, dword ptr [edx + 0x54]
// 008f0d51  8bcf                 mov ecx, edi
// 008f0d53  ffd0                 call eax
// 008f0d55  85c0                 test eax, eax
// 008f0d57  754f                 jne 0x8f0da8
// 008f0d59  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008f0d5d  83f826               cmp eax, 0x26
// 008f0d60  750e                 jne 0x8f0d70
// 008f0d62  6a03                 push 3
// 008f0d64  6a01                 push 1
// 008f0d66  6a00                 push 0
// 008f0d68  6a01                 push 1
// 008f0d6a  6a01                 push 1
// 008f0d6c  6aff                 push -1
// 008f0d6e  eb16                 jmp 0x8f0d86
// 008f0d70  83f828               cmp eax, 0x28
// 008f0d73  753f                 jne 0x8f0db4
// 008f0d75  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 008f0d7b  6a02                 push 2
// 008f0d7d  6a01                 push 1
// 008f0d7f  6a00                 push 0
// 008f0d81  6a01                 push 1
// 008f0d83  6a01                 push 1
// 008f0d85  50                   push eax
// 008f0d86  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 008f0d8c  8b39                 mov edi, dword ptr [ecx]
// 008f0d8e  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 008f0d94  e83747f5ff           call 0x8454d0
// 008f0d99  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 008f0d9f  8b9750010000         mov edx, dword ptr [edi + 0x150]
// 008f0da5  50                   push eax
// 008f0da6  ffd2                 call edx
// 008f0da8  5f                   pop edi
// 008f0da9  5b                   pop ebx
// 008f0daa  b801000000           mov eax, 1
// 008f0daf  5e                   pop esi
// 008f0db0  59                   pop ecx
// 008f0db1  c20800               ret 8
// 008f0db4  5f                   pop edi
// 008f0db5  5b                   pop ebx
// 008f0db6  33c0                 xor eax, eax
// 008f0db8  5e                   pop esi
// 008f0db9  59                   pop ecx
// 008f0dba  c20800               ret 8
// copied from an identical function in another client (function ?OnHookKeyDown@CXTPRibbonControlTab@@MAEHIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonControlTab.cpp