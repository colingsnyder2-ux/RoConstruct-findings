// roc 2007-08 00489340  unit: P8CRenderSettings::?$GetSetImpl  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00489340
//
// 00489340  83ec08               sub esp, 8
// 00489343  8b442414             mov eax, dword ptr [esp + 0x14]
// 00489347  53                   push ebx
// 00489348  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0048934c  56                   push esi
// 0048934d  8b742414             mov esi, dword ptr [esp + 0x14]
// 00489351  57                   push edi
// 00489352  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00489356  8bcf                 mov ecx, edi
// 00489358  2bce                 sub ecx, esi
// 0048935a  51                   push ecx
// 0048935b  8d4c2410             lea ecx, [esp + 0x10]
// 0048935f  89442410             mov dword ptr [esp + 0x10], eax
// 00489363  895c2414             mov dword ptr [esp + 0x14], ebx
// 00489367  e81401feff           call 0x469480
// 0048936c  3bf7                 cmp esi, edi
// 0048936e  8bc6                 mov eax, esi
// 00489370  7410                 je 0x489382
// 00489372  2bde                 sub ebx, esi
// 00489374  8a10                 mov dl, byte ptr [eax]
// 00489376  3a1403               cmp dl, byte ptr [ebx + eax]
// 00489379  7507                 jne 0x489382
// 0048937b  83c001               add eax, 1
// 0048937e  3bc7                 cmp eax, edi
// 00489380  75f2                 jne 0x489374
// 00489382  33c9                 xor ecx, ecx
// 00489384  3bc7                 cmp eax, edi
// 00489386  5f                   pop edi
// 00489387  0f94c1               sete cl
// 0048938a  5e                   pop esi
// 0048938b  8ac1                 mov al, cl
// 0048938d  5b                   pop ebx
// 0048938e  83c408               add esp, 8
// 00489391  c3                   ret 
// library rbxgs-net/Player.cpp (function ??$_Equal@PADV?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@YA_NPAD0V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@0@Urandom_access_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
