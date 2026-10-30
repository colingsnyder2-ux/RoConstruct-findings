// roc 2012-06 00a6b220  unit: CXTCaptionButton  size: 354 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6b220
//
// 00a6b220  6aff                 push -1
// 00a6b222  684887ae00           push 0xae8748
// 00a6b227  64a100000000         mov eax, dword ptr fs:[0]
// 00a6b22d  50                   push eax
// 00a6b22e  83ec34               sub esp, 0x34
// 00a6b231  53                   push ebx
// 00a6b232  56                   push esi
// 00a6b233  57                   push edi
// 00a6b234  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a6b239  33c4                 xor eax, esp
// 00a6b23b  50                   push eax
// 00a6b23c  8d442444             lea eax, [esp + 0x44]
// 00a6b240  64a300000000         mov dword ptr fs:[0], eax
// 00a6b246  8bf9                 mov edi, ecx
// 00a6b248  8d4c2420             lea ecx, [esp + 0x20]
// 00a6b24c  e85fdef2ff           call 0x9990b0
// 00a6b251  0fb74c245c           movzx ecx, word ptr [esp + 0x5c]
// 00a6b256  8d442410             lea eax, [esp + 0x10]
// 00a6b25a  50                   push eax
// 00a6b25b  33db                 xor ebx, ebx
// 00a6b25d  51                   push ecx
// 00a6b25e  895c2454             mov dword ptr [esp + 0x54], ebx
// 00a6b262  895c2418             mov dword ptr [esp + 0x18], ebx
// 00a6b266  e8d5eef2ff           call 0x99a140
// 00a6b26b  83c408               add esp, 8
// 00a6b26e  3bc3                 cmp eax, ebx
// 00a6b270  7528                 jne 0xa6b29a
// 00a6b272  8d4c2420             lea ecx, [esp + 0x20]
// 00a6b276  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 00a6b27e  e8dd00f3ff           call 0x99b360
// 00a6b283  33c0                 xor eax, eax
// 00a6b285  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00a6b289  64890d00000000       mov dword ptr fs:[0], ecx
// 00a6b290  59                   pop ecx
// 00a6b291  5f                   pop edi
// 00a6b292  5e                   pop esi
// 00a6b293  5b                   pop ebx
// 00a6b294  83c440               add esp, 0x40
// 00a6b297  c21000               ret 0x10
// 00a6b29a  395c2410             cmp dword ptr [esp + 0x10], ebx
// 00a6b29e  740c                 je 0xa6b2ac
// 00a6b2a0  50                   push eax
// 00a6b2a1  8d4c2424             lea ecx, [esp + 0x24]
// 00a6b2a5  e87600f3ff           call 0x99b320
// 00a6b2aa  eb4c                 jmp 0xa6b2f8
// 00a6b2ac  be506cb400           mov esi, 0xb46c50
// 00a6b2b1  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00a6b2b5  89742418             mov dword ptr [esp + 0x18], esi
// 00a6b2b9  50                   push eax
// 00a6b2ba  8d4c241c             lea ecx, [esp + 0x1c]
// 00a6b2be  c644245001           mov byte ptr [esp + 0x50], 1
// 00a6b2c3  e81074f1ff           call 0x9826d8
// 00a6b2c8  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a6b2cc  52                   push edx
// 00a6b2cd  8d4c2460             lea ecx, [esp + 0x60]
// 00a6b2d1  e87aafcdff           call 0x746250
// 00a6b2d6  8bc8                 mov ecx, eax
// 00a6b2d8  e813bdf6ff           call 0x9d6ff0
// 00a6b2dd  50                   push eax
// 00a6b2de  8d4c2424             lea ecx, [esp + 0x24]
// 00a6b2e2  e8f9fff2ff           call 0x99b2e0
// 00a6b2e7  8d4c2418             lea ecx, [esp + 0x18]
// 00a6b2eb  885c244c             mov byte ptr [esp + 0x4c], bl
// 00a6b2ef  89742418             mov dword ptr [esp + 0x18], esi
// 00a6b2f3  e808b99aff           call 0x416c00
// 00a6b2f8  8d4c2420             lea ecx, [esp + 0x20]
// 00a6b2fc  e81fdef2ff           call 0x999120
// 00a6b301  85c0                 test eax, eax
// 00a6b303  0f8569ffffff         jne 0xa6b272
// 00a6b309  8b442460             mov eax, dword ptr [esp + 0x60]
// 00a6b30d  50                   push eax
// 00a6b30e  83ec24               sub esp, 0x24
// 00a6b311  8bcc                 mov ecx, esp
// 00a6b313  89a42488000000       mov dword ptr [esp + 0x88], esp
// 00a6b31a  e891ddf2ff           call 0x9990b0
// 00a6b31f  83ec24               sub esp, 0x24
// 00a6b322  8d54246c             lea edx, [esp + 0x6c]
// 00a6b326  8bcc                 mov ecx, esp
// 00a6b328  89642460             mov dword ptr [esp + 0x60], esp
// 00a6b32c  52                   push edx
// 00a6b32d  c684249c00000002     mov byte ptr [esp + 0x9c], 2
// 00a6b335  e886ddf2ff           call 0x9990c0
// 00a6b33a  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 00a6b341  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 00a6b348  50                   push eax
// 00a6b349  51                   push ecx
// 00a6b34a  8bcf                 mov ecx, edi
// 00a6b34c  889c24a0000000       mov byte ptr [esp + 0xa0], bl
// 00a6b353  e898fdffff           call 0xa6b0f0
// 00a6b358  8d4c2420             lea ecx, [esp + 0x20]
// 00a6b35c  8bf0                 mov esi, eax
// 00a6b35e  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 00a6b366  e8f5fff2ff           call 0x99b360
// 00a6b36b  8bc6                 mov eax, esi
// 00a6b36d  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00a6b371  64890d00000000       mov dword ptr fs:[0], ecx
// 00a6b378  59                   pop ecx
// 00a6b379  5f                   pop edi
// 00a6b37a  5e                   pop esi
// 00a6b37b  5b                   pop ebx
// 00a6b37c  83c440               add esp, 0x40
// 00a6b37f  c21000               ret 0x10
// copied from an identical function in another client (function ?SetBitmap@CXTButton@@UAEHVCSize@@IH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp