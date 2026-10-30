// roc 2009-12 0087b150  unit: CXTPControlGallery  size: 308 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087b150
//
// 0087b150  83ec10               sub esp, 0x10
// 0087b153  57                   push edi
// 0087b154  8bf9                 mov edi, ecx
// 0087b156  e885d0ffff           call 0x8781e0
// 0087b15b  85c0                 test eax, eax
// 0087b15d  750a                 jne 0x87b169
// 0087b15f  83c8ff               or eax, 0xffffffff
// 0087b162  5f                   pop edi
// 0087b163  83c410               add esp, 0x10
// 0087b166  c20800               ret 8
// 0087b169  8b542418             mov edx, dword ptr [esp + 0x18]
// 0087b16d  83faff               cmp edx, -1
// 0087b170  0f84f9000000         je 0x87b26f
// 0087b176  8bcf                 mov ecx, edi
// 0087b178  e863d0ffff           call 0x8781e0
// 0087b17d  3bd0                 cmp edx, eax
// 0087b17f  0f8dea000000         jge 0x87b26f
// 0087b185  85d2                 test edx, edx
// 0087b187  0f8cdd000000         jl 0x87b26a
// 0087b18d  3b9754020000         cmp edx, dword ptr [edi + 0x254]
// 0087b193  0f8dd1000000         jge 0x87b26a
// 0087b199  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 0087b19e  8b8f50020000         mov ecx, dword ptr [edi + 0x250]
// 0087b1a4  8d0452               lea eax, [edx + edx*2]
// 0087b1a7  8d04c1               lea eax, [ecx + eax*8]
// 0087b1aa  8b4804               mov ecx, dword ptr [eax + 4]
// 0087b1ad  53                   push ebx
// 0087b1ae  8b18                 mov ebx, dword ptr [eax]
// 0087b1b0  894c240c             mov dword ptr [esp + 0xc], ecx
// 0087b1b4  8b4808               mov ecx, dword ptr [eax + 8]
// 0087b1b7  8b400c               mov eax, dword ptr [eax + 0xc]
// 0087b1ba  55                   push ebp
// 0087b1bb  56                   push esi
// 0087b1bc  894c2418             mov dword ptr [esp + 0x18], ecx
// 0087b1c0  8944241c             mov dword ptr [esp + 0x1c], eax
// 0087b1c4  7d4c                 jge 0x87b212
// 0087b1c6  8d42ff               lea eax, [edx - 1]
// 0087b1c9  85c0                 test eax, eax
// 0087b1cb  7c33                 jl 0x87b200
// 0087b1cd  8d1440               lea edx, [eax + eax*2]
// 0087b1d0  03d2                 add edx, edx
// 0087b1d2  03d2                 add edx, edx
// 0087b1d4  03d2                 add edx, edx
// 0087b1d6  85c0                 test eax, eax
// 0087b1d8  7c33                 jl 0x87b20d
// 0087b1da  3b8754020000         cmp eax, dword ptr [edi + 0x254]
// 0087b1e0  7d2b                 jge 0x87b20d
// 0087b1e2  8b8f50020000         mov ecx, dword ptr [edi + 0x250]
// 0087b1e8  8b741110             mov esi, dword ptr [ecx + edx + 0x10]
// 0087b1ec  03ca                 add ecx, edx
// 0087b1ee  837e4800             cmp dword ptr [esi + 0x48], 0
// 0087b1f2  7504                 jne 0x87b1f8
// 0087b1f4  3919                 cmp dword ptr [ecx], ebx
// 0087b1f6  740b                 je 0x87b203
// 0087b1f8  48                   dec eax
// 0087b1f9  83ea18               sub edx, 0x18
// 0087b1fc  85c0                 test eax, eax
// 0087b1fe  7dda                 jge 0x87b1da
// 0087b200  83c8ff               or eax, 0xffffffff
// 0087b203  5e                   pop esi
// 0087b204  5d                   pop ebp
// 0087b205  5b                   pop ebx
// 0087b206  5f                   pop edi
// 0087b207  83c410               add esp, 0x10
// 0087b20a  c20800               ret 8
// 0087b20d  e8fa88f7ff           call 0x7f3b0c
// 0087b212  8bcf                 mov ecx, edi
// 0087b214  42                   inc edx
// 0087b215  e8c6cfffff           call 0x8781e0
// 0087b21a  3bd0                 cmp edx, eax
// 0087b21c  7de2                 jge 0x87b200
// 0087b21e  8d3452               lea esi, [edx + edx*2]
// 0087b221  03f6                 add esi, esi
// 0087b223  03f6                 add esi, esi
// 0087b225  03f6                 add esi, esi
// 0087b227  85f6                 test esi, esi
// 0087b229  7ce2                 jl 0x87b20d
// 0087b22b  3b9754020000         cmp edx, dword ptr [edi + 0x254]
// 0087b231  7dda                 jge 0x87b20d
// 0087b233  8b8f50020000         mov ecx, dword ptr [edi + 0x250]
// 0087b239  8b6c3110             mov ebp, dword ptr [ecx + esi + 0x10]
// 0087b23d  03ce                 add ecx, esi
// 0087b23f  837d4800             cmp dword ptr [ebp + 0x48], 0
// 0087b243  7504                 jne 0x87b249
// 0087b245  3919                 cmp dword ptr [ecx], ebx
// 0087b247  7415                 je 0x87b25e
// 0087b249  42                   inc edx
// 0087b24a  83c618               add esi, 0x18
// 0087b24d  3bd0                 cmp edx, eax
// 0087b24f  7cd6                 jl 0x87b227
// 0087b251  5e                   pop esi
// 0087b252  5d                   pop ebp
// 0087b253  5b                   pop ebx
// 0087b254  83c8ff               or eax, 0xffffffff
// 0087b257  5f                   pop edi
// 0087b258  83c410               add esp, 0x10
// 0087b25b  c20800               ret 8
// 0087b25e  5e                   pop esi
// 0087b25f  5d                   pop ebp
// 0087b260  5b                   pop ebx
// 0087b261  8bc2                 mov eax, edx
// 0087b263  5f                   pop edi
// 0087b264  83c410               add esp, 0x10
// 0087b267  c20800               ret 8
// 0087b26a  e89d88f7ff           call 0x7f3b0c
// 0087b26f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0087b273  51                   push ecx
// 0087b274  6aff                 push -1
// 0087b276  8bcf                 mov ecx, edi
// 0087b278  e853d3ffff           call 0x8785d0
// 0087b27d  5f                   pop edi
// 0087b27e  83c410               add esp, 0x10
// 0087b281  c20800               ret 8
// copied from an identical function in another client (function ?GetNextInColumn@CXTPControlGallery@@QBEJJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlGallery.cpp