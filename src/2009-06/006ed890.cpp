// roc 2009-06 006ed890  unit: seg_006e0000  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ed890
//
// 006ed890  397e10               cmp dword ptr [esi + 0x10], edi
// 006ed893  7509                 jne 0x6ed89e
// 006ed895  89742404             mov dword ptr [esp + 4], esi
// 006ed899  e9424e0000           jmp 0x6f26e0
// 006ed89e  3b4604               cmp eax, dword ptr [esi + 4]
// 006ed8a1  7521                 jne 0x6ed8c4
// 006ed8a3  57                   push edi
// 006ed8a4  56                   push esi
// 006ed8a5  e846390000           call 0x6f11f0
// 006ed8aa  50                   push eax
// 006ed8ab  8b4634               mov eax, dword ptr [esi + 0x34]
// 006ed8ae  68b8dd8e00           push 0x8eddb8
// 006ed8b3  50                   push eax
// 006ed8b4  e8e7b7fdff           call 0x6c90a0
// 006ed8b9  50                   push eax
// 006ed8ba  56                   push esi
// 006ed8bb  e8303a0000           call 0x6f12f0
// 006ed8c0  83c41c               add esp, 0x1c
// 006ed8c3  c3                   ret 
// 006ed8c4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006ed8c8  50                   push eax
// 006ed8c9  51                   push ecx
// 006ed8ca  56                   push esi
// 006ed8cb  e820390000           call 0x6f11f0
// 006ed8d0  83c408               add esp, 8
// 006ed8d3  50                   push eax
// 006ed8d4  57                   push edi
// 006ed8d5  56                   push esi
// 006ed8d6  e815390000           call 0x6f11f0
// 006ed8db  8b5634               mov edx, dword ptr [esi + 0x34]
// 006ed8de  83c408               add esp, 8
// 006ed8e1  50                   push eax
// 006ed8e2  6814de8e00           push 0x8ede14
// 006ed8e7  52                   push edx
// 006ed8e8  e8b3b7fdff           call 0x6c90a0
// 006ed8ed  50                   push eax
// 006ed8ee  56                   push esi
// 006ed8ef  e8fc390000           call 0x6f12f0
// 006ed8f4  83c41c               add esp, 0x1c
// 006ed8f7  c3                   ret 
// library lua-5.1.4/lparser.c (function _check_match)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
