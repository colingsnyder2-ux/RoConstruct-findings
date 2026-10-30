// roc 2007-08 00552980  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00552980
//
// 00552980  55                   push ebp
// 00552981  8bec                 mov ebp, esp
// 00552983  6aff                 push -1
// 00552985  68402c7500           push 0x752c40
// 0055298a  64a100000000         mov eax, dword ptr fs:[0]
// 00552990  50                   push eax
// 00552991  64892500000000       mov dword ptr fs:[0], esp
// 00552998  83ec38               sub esp, 0x38
// 0055299b  53                   push ebx
// 0055299c  8b5d08               mov ebx, dword ptr [ebp + 8]
// 0055299f  56                   push esi
// 005529a0  8bf1                 mov esi, ecx
// 005529a2  f6465001             test byte ptr [esi + 0x50], 1
// 005529a6  57                   push edi
// 005529a7  8965f0               mov dword ptr [ebp - 0x10], esp
// 005529aa  7510                 jne 0x5529bc
// 005529ac  8d4508               lea eax, [ebp + 8]
// 005529af  50                   push eax
// 005529b0  895d08               mov dword ptr [ebp + 8], ebx
// 005529b3  e8e8f0ffff           call 0x551aa0
// 005529b8  834e5001             or dword ptr [esi + 0x50], 1
// 005529bc  f6465002             test byte ptr [esi + 0x50], 2
// 005529c0  7416                 je 0x5529d8
// 005529c2  83c8ff               or eax, 0xffffffff
// 005529c5  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005529c8  64890d00000000       mov dword ptr fs:[0], ecx
// 005529cf  5f                   pop edi
// 005529d0  5e                   pop esi
// 005529d1  5b                   pop ebx
// 005529d2  8be5                 mov esp, ebp
// 005529d4  5d                   pop ebp
// 005529d5  c20c00               ret 0xc
// 005529d8  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 005529db  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005529de  57                   push edi
// 005529df  51                   push ecx
// 005529e0  33c0                 xor eax, eax
// 005529e2  53                   push ebx
// 005529e3  8bce                 mov ecx, esi
// 005529e5  8945fc               mov dword ptr [ebp - 4], eax
// 005529e8  894508               mov dword ptr [ebp + 8], eax
// 005529eb  e8c0d2ffff           call 0x54fcb0
// 005529f0  83f8ff               cmp eax, -1
// 005529f3  7436                 je 0x552a2b
// 005529f5  3bc7                 cmp eax, edi
// 005529f7  894508               mov dword ptr [ebp + 8], eax
// 005529fa  7d41                 jge 0x552a3d
// 005529fc  8b550c               mov edx, dword ptr [ebp + 0xc]
// 005529ff  2bf8                 sub edi, eax
// 00552a01  57                   push edi
// 00552a02  03c2                 add eax, edx
// 00552a04  50                   push eax
// 00552a05  53                   push ebx
// 00552a06  8bce                 mov ecx, esi
// 00552a08  e8a3d2ffff           call 0x54fcb0
// 00552a0d  83f8ff               cmp eax, -1
// 00552a10  7419                 je 0x552a2b
// 00552a12  014508               add dword ptr [ebp + 8], eax
// 00552a15  8b4508               mov eax, dword ptr [ebp + 8]
// 00552a18  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00552a1b  64890d00000000       mov dword ptr fs:[0], ecx
// 00552a22  5f                   pop edi
// 00552a23  5e                   pop esi
// 00552a24  5b                   pop ebx
// 00552a25  8be5                 mov esp, ebp
// 00552a27  5d                   pop ebp
// 00552a28  c20c00               ret 0xc
// 00552a2b  8d450c               lea eax, [ebp + 0xc]
// 00552a2e  50                   push eax
// 00552a2f  8bce                 mov ecx, esi
// 00552a31  895d0c               mov dword ptr [ebp + 0xc], ebx
// 00552a34  e887fbffff           call 0x5525c0
// 00552a39  834e5002             or dword ptr [esi + 0x50], 2
// 00552a3d  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00552a40  8b4508               mov eax, dword ptr [ebp + 8]
// 00552a43  5f                   pop edi
// 00552a44  5e                   pop esi
// 00552a45  64890d00000000       mov dword ptr fs:[0], ecx
// 00552a4c  5b                   pop ebx
// 00552a4d  8be5                 mov esp, ebp
// 00552a4f  5d                   pop ebp
// 00552a50  c20c00               ret 0xc
// 00552a53  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 00552a56  51                   push ecx
// 00552a57  8d4dbc               lea ecx, [ebp - 0x44]
// 00552a5a  e8c1b6ffff           call 0x54e120
// 00552a5f  6814a48500           push 0x85a414
// 00552a64  8d55bc               lea edx, [ebp - 0x44]
// 00552a67  52                   push edx
// 00552a68  e831e10d00           call 0x630b9e
// copied from an identical function in another client (function ??$read@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@QAEHAAV?$linked_streambuf@DU?$char_traits@D@std@@@detail@12@PADH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp