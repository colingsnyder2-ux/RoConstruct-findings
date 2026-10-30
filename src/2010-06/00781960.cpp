// from server: 100% by auto
// roc 2010-06 00781960  unit: seg_00780000  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00781960
//
// 00781960  51                   push ecx
// 00781961  8b4e04               mov ecx, dword ptr [esi + 4]
// 00781964  6a04                 push 4
// 00781966  8d442404             lea eax, [esp + 4]
// 0078196a  50                   push eax
// 0078196b  51                   push ecx
// 0078196c  e87fcaffff           call 0x77e3f0
// 00781971  83c40c               add esp, 0xc
// 00781974  85c0                 test eax, eax
// 00781976  7423                 je 0x78199b
// 00781978  8b560c               mov edx, dword ptr [esi + 0xc]
// 0078197b  8b06                 mov eax, dword ptr [esi]
// 0078197d  68c032a500           push 0xa532c0
// 00781982  52                   push edx
// 00781983  68a432a500           push 0xa532a4
// 00781988  50                   push eax
// 00781989  e85214fbff           call 0x732de0
// 0078198e  8b0e                 mov ecx, dword ptr [esi]
// 00781990  6a03                 push 3
// 00781992  51                   push ecx
// 00781993  e818e7faff           call 0x7300b0
// 00781998  83c418               add esp, 0x18
// 0078199b  8b0424               mov eax, dword ptr [esp]
// 0078199e  85c0                 test eax, eax
// 007819a0  7d27                 jge 0x7819c9
// 007819a2  8b560c               mov edx, dword ptr [esi + 0xc]
// 007819a5  8b06                 mov eax, dword ptr [esi]
// 007819a7  68d032a500           push 0xa532d0
// 007819ac  52                   push edx
// 007819ad  68a432a500           push 0xa532a4
// 007819b2  50                   push eax
// 007819b3  e82814fbff           call 0x732de0
// 007819b8  8b0e                 mov ecx, dword ptr [esi]
// 007819ba  6a03                 push 3
// 007819bc  51                   push ecx
// 007819bd  e8eee6faff           call 0x7300b0
// 007819c2  8b442418             mov eax, dword ptr [esp + 0x18]
// 007819c6  83c418               add esp, 0x18
// 007819c9  59                   pop ecx
// 007819ca  c3                   ret 
// library lua-5.1.4/lundump.c (function _LoadInt)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lundump.c
