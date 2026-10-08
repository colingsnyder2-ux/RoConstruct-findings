// roc 2007-03 0052dad0  unit: seg_00520000  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0052dad0
//
// 0052dad0  6aff                 push -1
// 0052dad2  6846127500           push 0x751246
// 0052dad7  64a100000000         mov eax, dword ptr fs:[0]
// 0052dadd  50                   push eax
// 0052dade  64892500000000       mov dword ptr fs:[0], esp
// 0052dae5  83ec08               sub esp, 8
// 0052dae8  56                   push esi
// 0052dae9  57                   push edi
// 0052daea  6824b18b00           push 0x8bb124
// 0052daef  6860d65200           push 0x52d660
// 0052daf4  e8578d1f00           call 0x726850
// 0052daf9  83c408               add esp, 8
// 0052dafc  e8fffaffff           call 0x52d600
// 0052db01  8bf0                 mov esi, eax
// 0052db03  8bce                 mov ecx, esi
// 0052db05  89742408             mov dword ptr [esp + 8], esi
// 0052db09  e8728f1f00           call 0x726a80
// 0052db0e  b801000000           mov eax, 1
// 0052db13  8844240c             mov byte ptr [esp + 0xc], al
// 0052db17  840558b18b00         test byte ptr [0x8bb158], al
// 0052db1d  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0052db25  751e                 jne 0x52db45
// 0052db27  090558b18b00         or dword ptr [0x8bb158], eax
// 0052db2d  6a00                 push 0
// 0052db2f  68ac497800           push 0x7849ac
// 0052db34  88442420             mov byte ptr [esp + 0x20], al
// 0052db38  e8a3fdffff           call 0x52d8e0
// 0052db3d  83c408               add esp, 8
// 0052db40  a354b18b00           mov dword ptr [0x8bb154], eax
// 0052db45  8b3d54b18b00         mov edi, dword ptr [0x8bb154]
// 0052db4b  8bce                 mov ecx, esi
// 0052db4d  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0052db55  e8468f1f00           call 0x726aa0
// 0052db5a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0052db5e  8bc7                 mov eax, edi
// 0052db60  5f                   pop edi
// 0052db61  5e                   pop esi
// 0052db62  64890d00000000       mov dword ptr fs:[0], ecx
// 0052db69  83c414               add esp, 0x14
// 0052db6c  c3                   ret 
// library rbxgs/util\Name.cpp (function ?getNullName@Name@RBX@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
