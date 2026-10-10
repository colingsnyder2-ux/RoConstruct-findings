// roc 2008-06 0072a1a0  unit: CXTPRibbonTheme  size: 268 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0072a1a0
//
// 0072a1a0  53                   push ebx
// 0072a1a1  55                   push ebp
// 0072a1a2  56                   push esi
// 0072a1a3  8b742410             mov esi, dword ptr [esp + 0x10]
// 0072a1a7  8b9e00010000         mov ebx, dword ptr [esi + 0x100]
// 0072a1ad  83bbf800000003       cmp dword ptr [ebx + 0xf8], 3
// 0072a1b4  57                   push edi
// 0072a1b5  8be9                 mov ebp, ecx
// 0072a1b7  0f85d3000000         jne 0x72a290
// 0072a1bd  83be5801000000       cmp dword ptr [esi + 0x158], 0
// 0072a1c4  0f85c6000000         jne 0x72a290
// 0072a1ca  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 0072a1d0  83f809               cmp eax, 9
// 0072a1d3  7409                 je 0x72a1de
// 0072a1d5  83f80b               cmp eax, 0xb
// 0072a1d8  7404                 je 0x72a1de
// 0072a1da  33ff                 xor edi, edi
// 0072a1dc  eb05                 jmp 0x72a1e3
// 0072a1de  bf01000000           mov edi, 1
// 0072a1e3  e878dc0600           call 0x797e60
// 0072a1e8  50                   push eax
// 0072a1e9  8bce                 mov ecx, esi
// 0072a1eb  e8006af7ff           call 0x6a0bf0
// 0072a1f0  85c0                 test eax, eax
// 0072a1f2  7504                 jne 0x72a1f8
// 0072a1f4  85ff                 test edi, edi
// 0072a1f6  7458                 je 0x72a250
// 0072a1f8  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 0072a1fe  83f8ff               cmp eax, -1
// 0072a201  750f                 jne 0x72a212
// 0072a203  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 0072a209  85c9                 test ecx, ecx
// 0072a20b  7405                 je 0x72a212
// 0072a20d  e8ae15f8ff           call 0x6ab7c0
// 0072a212  85c0                 test eax, eax
// 0072a214  747a                 je 0x72a290
// 0072a216  56                   push esi
// 0072a217  8bcb                 mov ecx, ebx
// 0072a219  e87293ffff           call 0x723590
// 0072a21e  85c0                 test eax, eax
// 0072a220  747d                 je 0x72a29f
// 0072a222  8bce                 mov ecx, esi
// 0072a224  e887e5ffff           call 0x7287b0
// 0072a229  85c0                 test eax, eax
// 0072a22b  7472                 je 0x72a29f
// 0072a22d  8bcb                 mov ecx, ebx
// 0072a22f  e88cd7f8ff           call 0x6b79c0
// 0072a234  8bc8                 mov ecx, eax
// 0072a236  e8cf1d0900           call 0x7bc00a
// 0072a23b  2500000001           and eax, 0x1000000
// 0072a240  5f                   pop edi
// 0072a241  f7d8                 neg eax
// 0072a243  5e                   pop esi
// 0072a244  1bc0                 sbb eax, eax
// 0072a246  5d                   pop ebp
// 0072a247  25ffffff00           and eax, 0xffffff
// 0072a24c  5b                   pop ebx
// 0072a24d  c20400               ret 4
// 0072a250  8b06                 mov eax, dword ptr [esi]
// 0072a252  8b506c               mov edx, dword ptr [eax + 0x6c]
// 0072a255  8bce                 mov ecx, esi
// 0072a257  ffd2                 call edx
// 0072a259  85c0                 test eax, eax
// 0072a25b  7533                 jne 0x72a290
// 0072a25d  8bce                 mov ecx, esi
// 0072a25f  e81c3dd2ff           call 0x44df80
// 0072a264  85c0                 test eax, eax
// 0072a266  7428                 je 0x72a290
// 0072a268  8b06                 mov eax, dword ptr [esi]
// 0072a26a  8b5078               mov edx, dword ptr [eax + 0x78]
// 0072a26d  8bce                 mov ecx, esi
// 0072a26f  ffd2                 call edx
// 0072a271  85c0                 test eax, eax
// 0072a273  751b                 jne 0x72a290
// 0072a275  8bce                 mov ecx, esi
// 0072a277  e8440cf8ff           call 0x6aaec0
// 0072a27c  85c0                 test eax, eax
// 0072a27e  7510                 jne 0x72a290
// 0072a280  8b06                 mov eax, dword ptr [esi]
// 0072a282  8b90b4000000         mov edx, dword ptr [eax + 0xb4]
// 0072a288  8bce                 mov ecx, esi
// 0072a28a  ffd2                 call edx
// 0072a28c  85c0                 test eax, eax
// 0072a28e  7486                 je 0x72a216
// 0072a290  56                   push esi
// 0072a291  8bcd                 mov ecx, ebp
// 0072a293  e80843f8ff           call 0x6ae5a0
// 0072a298  5f                   pop edi
// 0072a299  5e                   pop esi
// 0072a29a  5d                   pop ebp
// 0072a29b  5b                   pop ebx
// 0072a29c  c20400               ret 4
// 0072a29f  8b8570060000         mov eax, dword ptr [ebp + 0x670]
// 0072a2a5  5f                   pop edi
// 0072a2a6  5e                   pop esi
// 0072a2a7  5d                   pop ebp
// 0072a2a8  5b                   pop ebx
// 0072a2a9  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonTheme.cpp (function ?GetControlTextColor@CXTPRibbonTheme@@MAEKPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonTheme.cpp
