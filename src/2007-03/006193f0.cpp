// roc 2007-03 006193f0  unit: seg_00610000  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006193f0
//
// 006193f0  83ec08               sub esp, 8
// 006193f3  8b442414             mov eax, dword ptr [esp + 0x14]
// 006193f7  53                   push ebx
// 006193f8  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 006193fc  56                   push esi
// 006193fd  8b742414             mov esi, dword ptr [esp + 0x14]
// 00619401  57                   push edi
// 00619402  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00619406  8bcf                 mov ecx, edi
// 00619408  2bce                 sub ecx, esi
// 0061940a  51                   push ecx
// 0061940b  8d4c2410             lea ecx, [esp + 0x10]
// 0061940f  89442410             mov dword ptr [esp + 0x10], eax
// 00619413  895c2414             mov dword ptr [esp + 0x14], ebx
// 00619417  e8f4fde4ff           call 0x469210
// 0061941c  3bf7                 cmp esi, edi
// 0061941e  8bc6                 mov eax, esi
// 00619420  7410                 je 0x619432
// 00619422  2bde                 sub ebx, esi
// 00619424  8a10                 mov dl, byte ptr [eax]
// 00619426  3a1403               cmp dl, byte ptr [ebx + eax]
// 00619429  7507                 jne 0x619432
// 0061942b  83c001               add eax, 1
// 0061942e  3bc7                 cmp eax, edi
// 00619430  75f2                 jne 0x619424
// 00619432  33c9                 xor ecx, ecx
// 00619434  3bc7                 cmp eax, edi
// 00619436  5f                   pop edi
// 00619437  0f94c1               sete cl
// 0061943a  5e                   pop esi
// 0061943b  8ac1                 mov al, cl
// 0061943d  5b                   pop ebx
// 0061943e  83c408               add esp, 8
// 00619441  c3                   ret 
// library rbxgs-net/Player.cpp (function ??$_Equal@PADV?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@YA_NPAD0V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@0@Urandom_access_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
