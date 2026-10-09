// roc 2007-03 006ff100  unit: seg_006f0000  size: 323 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006ff100
//
// 006ff100  83ec0c               sub esp, 0xc
// 006ff103  55                   push ebp
// 006ff104  56                   push esi
// 006ff105  57                   push edi
// 006ff106  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 006ff10a  894c2414             mov dword ptr [esp + 0x14], ecx
// 006ff10e  8bcf                 mov ecx, edi
// 006ff110  e871b90300           call 0x73aa86
// 006ff115  8bf0                 mov esi, eax
// 006ff117  8bcf                 mov ecx, edi
// 006ff119  8974240c             mov dword ptr [esp + 0xc], esi
// 006ff11d  e8a2ba0300           call 0x73abc4
// 006ff122  f7c600010000         test esi, 0x100
// 006ff128  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 006ff12c  89442410             mov dword ptr [esp + 0x10], eax
// 006ff130  7425                 je 0x6ff157
// 006ff132  85ed                 test ebp, ebp
// 006ff134  7510                 jne 0x6ff146
// 006ff136  680f200000           push 0x200f
// 006ff13b  6a05                 push 5
// 006ff13d  8d4c2428             lea ecx, [esp + 0x28]
// 006ff141  33c0                 xor eax, eax
// 006ff143  51                   push ecx
// 006ff144  eb30                 jmp 0x6ff176
// 006ff146  8b4504               mov eax, dword ptr [ebp + 4]
// 006ff149  680f200000           push 0x200f
// 006ff14e  6a05                 push 5
// 006ff150  8d4c2428             lea ecx, [esp + 0x28]
// 006ff154  51                   push ecx
// 006ff155  eb1f                 jmp 0x6ff176
// 006ff157  f7c600000200         test esi, 0x20000
// 006ff15d  741e                 je 0x6ff17d
// 006ff15f  85ed                 test ebp, ebp
// 006ff161  7504                 jne 0x6ff167
// 006ff163  33c0                 xor eax, eax
// 006ff165  eb03                 jmp 0x6ff16a
// 006ff167  8b4504               mov eax, dword ptr [ebp + 4]
// 006ff16a  680f200000           push 0x200f
// 006ff16f  6a02                 push 2
// 006ff171  8d542428             lea edx, [esp + 0x28]
// 006ff175  52                   push edx
// 006ff176  50                   push eax
// 006ff177  ff15ccee7700         call dword ptr [0x77eecc]
// 006ff17d  8b442410             mov eax, dword ptr [esp + 0x10]
// 006ff181  a90000c000           test eax, 0xc00000
// 006ff186  53                   push ebx
// 006ff187  8b1d38ef7700         mov ebx, dword ptr [0x77ef38]
// 006ff18d  7507                 jne 0x6ff196
// 006ff18f  f644241001           test byte ptr [esp + 0x10], 1
// 006ff194  743b                 je 0x6ff1d1
// 006ff196  f744241001030200     test dword ptr [esp + 0x10], 0x20301
// 006ff19e  750c                 jne 0x6ff1ac
// 006ff1a0  a900004000           test eax, 0x400000
// 006ff1a5  b806000000           mov eax, 6
// 006ff1aa  7405                 je 0x6ff1b1
// 006ff1ac  b80f000000           mov eax, 0xf
// 006ff1b1  50                   push eax
// 006ff1b2  ffd3                 call ebx
// 006ff1b4  50                   push eax
// 006ff1b5  50                   push eax
// 006ff1b6  8d44242c             lea eax, [esp + 0x2c]
// 006ff1ba  50                   push eax
// 006ff1bb  8bcd                 mov ecx, ebp
// 006ff1bd  e852fbf1ff           call 0x61ed14
// 006ff1c2  6aff                 push -1
// 006ff1c4  6aff                 push -1
// 006ff1c6  8d4c242c             lea ecx, [esp + 0x2c]
// 006ff1ca  51                   push ecx
// 006ff1cb  ff159ced7700         call dword ptr [0x77ed9c]
// 006ff1d1  f744241400000400     test dword ptr [esp + 0x14], 0x40000
// 006ff1d9  7444                 je 0x6ff21f
// 006ff1db  85ed                 test ebp, ebp
// 006ff1dd  8b542418             mov edx, dword ptr [esp + 0x18]
// 006ff1e1  8b4224               mov eax, dword ptr [edx + 0x24]
// 006ff1e4  8b4838               mov ecx, dword ptr [eax + 0x38]
// 006ff1e7  8bb130010000         mov esi, dword ptr [ecx + 0x130]
// 006ff1ed  7504                 jne 0x6ff1f3
// 006ff1ef  33ff                 xor edi, edi
// 006ff1f1  eb03                 jmp 0x6ff1f6
// 006ff1f3  8b7d04               mov edi, dword ptr [ebp + 4]
// 006ff1f6  6a0f                 push 0xf
// 006ff1f8  ffd3                 call ebx
// 006ff1fa  50                   push eax
// 006ff1fb  56                   push esi
// 006ff1fc  8d54242c             lea edx, [esp + 0x2c]
// 006ff200  52                   push edx
// 006ff201  57                   push edi
// 006ff202  e8e9170200           call 0x7209f0
// 006ff207  83c410               add esp, 0x10
// 006ff20a  8bc6                 mov eax, esi
// 006ff20c  f7d8                 neg eax
// 006ff20e  50                   push eax
// 006ff20f  50                   push eax
// 006ff210  8d44242c             lea eax, [esp + 0x2c]
// 006ff214  50                   push eax
// 006ff215  ff159ced7700         call dword ptr [0x77ed9c]
// 006ff21b  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 006ff21f  f744241000020000     test dword ptr [esp + 0x10], 0x200
// 006ff227  5b                   pop ebx
// 006ff228  7410                 je 0x6ff23a
// 006ff22a  57                   push edi
// 006ff22b  8d4c2424             lea ecx, [esp + 0x24]
// 006ff22f  51                   push ecx
// 006ff230  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006ff234  55                   push ebp
// 006ff235  e886e2ffff           call 0x6fd4c0
// 006ff23a  5f                   pop edi
// 006ff23b  5e                   pop esi
// 006ff23c  5d                   pop ebp
// 006ff23d  83c40c               add esp, 0xc
// 006ff240  c21800               ret 0x18
// library xtp-11.2.2-vc8/Source\SkinFramework\XTPSkinManagerSchema.cpp (function ?DrawNonClientRect@CXTPSkinManagerSchema@@QAEXPAVCDC@@VCRect@@PAVCXTPSkinObjectFrame@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/SkinFramework/XTPSkinManagerSchema.cpp
