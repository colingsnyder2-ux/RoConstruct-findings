// roc 2010-06 0077eb30  unit: seg_00770000  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077eb30
//
// 0077eb30  397e10               cmp dword ptr [esi + 0x10], edi
// 0077eb33  7509                 jne 0x77eb3e
// 0077eb35  89742404             mov dword ptr [esp + 4], esi
// 0077eb39  e9424e0000           jmp 0x783980
// 0077eb3e  3b4604               cmp eax, dword ptr [esi + 4]
// 0077eb41  7521                 jne 0x77eb64
// 0077eb43  57                   push edi
// 0077eb44  56                   push esi
// 0077eb45  e846390000           call 0x782490
// 0077eb4a  50                   push eax
// 0077eb4b  8b4634               mov eax, dword ptr [esi + 0x34]
// 0077eb4e  683830a500           push 0xa53038
// 0077eb53  50                   push eax
// 0077eb54  e88742fbff           call 0x732de0
// 0077eb59  50                   push eax
// 0077eb5a  56                   push esi
// 0077eb5b  e8303a0000           call 0x782590
// 0077eb60  83c41c               add esp, 0x1c
// 0077eb63  c3                   ret 
// 0077eb64  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0077eb68  50                   push eax
// 0077eb69  51                   push ecx
// 0077eb6a  56                   push esi
// 0077eb6b  e820390000           call 0x782490
// 0077eb70  83c408               add esp, 8
// 0077eb73  50                   push eax
// 0077eb74  57                   push edi
// 0077eb75  56                   push esi
// 0077eb76  e815390000           call 0x782490
// 0077eb7b  8b5634               mov edx, dword ptr [esi + 0x34]
// 0077eb7e  83c408               add esp, 8
// 0077eb81  50                   push eax
// 0077eb82  689430a500           push 0xa53094
// 0077eb87  52                   push edx
// 0077eb88  e85342fbff           call 0x732de0
// 0077eb8d  50                   push eax
// 0077eb8e  56                   push esi
// 0077eb8f  e8fc390000           call 0x782590
// 0077eb94  83c41c               add esp, 0x1c
// 0077eb97  c3                   ret 
// library lua-5.1.4/lparser.c (function _check_match)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
