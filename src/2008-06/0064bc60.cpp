// roc 2008-06 0064bc60  unit: RBX::SleepStage  size: 282 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064bc60
//
// 0064bc60  83ec0c               sub esp, 0xc
// 0064bc63  53                   push ebx
// 0064bc64  8bd9                 mov ebx, ecx
// 0064bc66  8b83d0010000         mov eax, dword ptr [ebx + 0x1d0]
// 0064bc6c  8b00                 mov eax, dword ptr [eax]
// 0064bc6e  55                   push ebp
// 0064bc6f  56                   push esi
// 0064bc70  8bb3b8010000         mov esi, dword ptr [ebx + 0x1b8]
// 0064bc76  8be8                 mov ebp, eax
// 0064bc78  57                   push edi
// 0064bc79  89742414             mov dword ptr [esp + 0x14], esi
// 0064bc7d  896c2418             mov dword ptr [esp + 0x18], ebp
// 0064bc81  8bbbd0010000         mov edi, dword ptr [ebx + 0x1d0]
// 0064bc87  8b83b8010000         mov eax, dword ptr [ebx + 0x1b8]
// 0064bc8d  85f6                 test esi, esi
// 0064bc8f  7404                 je 0x64bc95
// 0064bc91  3bf0                 cmp esi, eax
// 0064bc93  7406                 je 0x64bc9b
// 0064bc95  ff1590288000         call dword ptr [0x802890]
// 0064bc9b  3bef                 cmp ebp, edi
// 0064bc9d  0f84b4000000         je 0x64bd57
// 0064bca3  85f6                 test esi, esi
// 0064bca5  0f85a5000000         jne 0x64bd50
// 0064bcab  ff1590288000         call dword ptr [0x802890]
// 0064bcb1  3b6e18               cmp ebp, dword ptr [esi + 0x18]
// 0064bcb4  7506                 jne 0x64bcbc
// 0064bcb6  ff1590288000         call dword ptr [0x802890]
// 0064bcbc  80bbd800000000       cmp byte ptr [ebx + 0xd8], 0
// 0064bcc3  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0064bcc6  8b700c               mov esi, dword ptr [eax + 0xc]
// 0064bcc9  89442410             mov dword ptr [esp + 0x10], eax
// 0064bccd  8b4010               mov eax, dword ptr [eax + 0x10]
// 0064bcd0  7418                 je 0x64bcea
// 0064bcd2  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 0064bcd8  80793000             cmp byte ptr [ecx + 0x30], 0
// 0064bcdc  740c                 je 0x64bcea
// 0064bcde  8b90a0000000         mov edx, dword ptr [eax + 0xa0]
// 0064bce4  807a3000             cmp byte ptr [edx + 0x30], 0
// 0064bce8  7550                 jne 0x64bd3a
// 0064bcea  8bc8                 mov ecx, eax
// 0064bcec  e86fb8f9ff           call 0x5e7560
// 0064bcf1  8bce                 mov ecx, esi
// 0064bcf3  8bf8                 mov edi, eax
// 0064bcf5  e866b8f9ff           call 0x5e7560
// 0064bcfa  8b4018               mov eax, dword ptr [eax + 0x18]
// 0064bcfd  85c0                 test eax, eax
// 0064bcff  7411                 je 0x64bd12
// 0064bd01  8b00                 mov eax, dword ptr [eax]
// 0064bd03  83f803               cmp eax, 3
// 0064bd06  7432                 je 0x64bd3a
// 0064bd08  83f801               cmp eax, 1
// 0064bd0b  742d                 je 0x64bd3a
// 0064bd0d  83f802               cmp eax, 2
// 0064bd10  7428                 je 0x64bd3a
// 0064bd12  8b4718               mov eax, dword ptr [edi + 0x18]
// 0064bd15  85c0                 test eax, eax
// 0064bd17  7411                 je 0x64bd2a
// 0064bd19  8b00                 mov eax, dword ptr [eax]
// 0064bd1b  83f803               cmp eax, 3
// 0064bd1e  741a                 je 0x64bd3a
// 0064bd20  83f801               cmp eax, 1
// 0064bd23  7415                 je 0x64bd3a
// 0064bd25  83f802               cmp eax, 2
// 0064bd28  7410                 je 0x64bd3a
// 0064bd2a  8d442410             lea eax, [esp + 0x10]
// 0064bd2e  50                   push eax
// 0064bd2f  8d8bb8000000         lea ecx, [ebx + 0xb8]
// 0064bd35  e86656ddff           call 0x4213a0
// 0064bd3a  8d4c2414             lea ecx, [esp + 0x14]
// 0064bd3e  e8fdd5f9ff           call 0x5e9340
// 0064bd43  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0064bd47  8b742414             mov esi, dword ptr [esp + 0x14]
// 0064bd4b  e931ffffff           jmp 0x64bc81
// 0064bd50  8b36                 mov esi, dword ptr [esi]
// 0064bd52  e95affffff           jmp 0x64bcb1
// 0064bd57  6a02                 push 2
// 0064bd59  8db3b8000000         lea esi, [ebx + 0xb8]
// 0064bd5f  56                   push esi
// 0064bd60  8bcb                 mov ecx, ebx
// 0064bd62  e889faffff           call 0x64b7f0
// 0064bd67  6a00                 push 0
// 0064bd69  6a00                 push 0
// 0064bd6b  8bce                 mov ecx, esi
// 0064bd6d  e86eb0f9ff           call 0x5e6de0
// 0064bd72  5f                   pop edi
// 0064bd73  5e                   pop esi
// 0064bd74  5d                   pop ebp
// 0064bd75  5b                   pop ebx
// 0064bd76  83c40c               add esp, 0xc
// 0064bd79  c3                   ret 
// library rbxgs/roc_unit_55a8d705f4093d42.cpp (function ?stepJoints@SleepStage@RBX@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_55a8d705f4093d42.cpp
