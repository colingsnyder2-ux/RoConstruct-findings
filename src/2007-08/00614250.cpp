// from server: 100% by auto
// roc 2007-08 00614250  unit: seg_00610000  size: 467 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00614250
//
// 00614250  53                   push ebx
// 00614251  55                   push ebp
// 00614252  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00614256  8b5d34               mov ebx, dword ptr [ebp + 0x34]
// 00614259  56                   push esi
// 0061425a  57                   push edi
// 0061425b  8b7d30               mov edi, dword ptr [ebp + 0x30]
// 0061425e  8b37                 mov esi, dword ptr [edi]
// 00614260  33d2                 xor edx, edx
// 00614262  8bc5                 mov eax, ebp
// 00614264  e897faffff           call 0x613d00
// 00614269  52                   push edx
// 0061426a  52                   push edx
// 0061426b  57                   push edi
// 0061426c  e8df4c0100           call 0x628f50
// 00614271  8b4718               mov eax, dword ptr [edi + 0x18]
// 00614274  8d4801               lea ecx, [eax + 1]
// 00614277  83c40c               add esp, 0xc
// 0061427a  81f9ffffff3f         cmp ecx, 0x3fffffff
// 00614280  771f                 ja 0x6142a1
// 00614282  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00614285  8d148500000000       lea edx, [eax*4]
// 0061428c  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0061428f  52                   push edx
// 00614290  03c0                 add eax, eax
// 00614292  03c0                 add eax, eax
// 00614294  50                   push eax
// 00614295  51                   push ecx
// 00614296  53                   push ebx
// 00614297  e854f7ffff           call 0x6139f0
// 0061429c  83c410               add esp, 0x10
// 0061429f  eb09                 jmp 0x6142aa
// 006142a1  53                   push ebx
// 006142a2  e829f7ffff           call 0x6139d0
// 006142a7  83c404               add esp, 4
// 006142aa  89460c               mov dword ptr [esi + 0xc], eax
// 006142ad  8b5718               mov edx, dword ptr [edi + 0x18]
// 006142b0  89562c               mov dword ptr [esi + 0x2c], edx
// 006142b3  8b4718               mov eax, dword ptr [edi + 0x18]
// 006142b6  83c001               add eax, 1
// 006142b9  3dffffff3f           cmp eax, 0x3fffffff
// 006142be  771f                 ja 0x6142df
// 006142c0  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 006142c3  8b5630               mov edx, dword ptr [esi + 0x30]
// 006142c6  8b4614               mov eax, dword ptr [esi + 0x14]
// 006142c9  03c9                 add ecx, ecx
// 006142cb  03c9                 add ecx, ecx
// 006142cd  51                   push ecx
// 006142ce  03d2                 add edx, edx
// 006142d0  03d2                 add edx, edx
// 006142d2  52                   push edx
// 006142d3  50                   push eax
// 006142d4  53                   push ebx
// 006142d5  e816f7ffff           call 0x6139f0
// 006142da  83c410               add esp, 0x10
// 006142dd  eb09                 jmp 0x6142e8
// 006142df  53                   push ebx
// 006142e0  e8ebf6ffff           call 0x6139d0
// 006142e5  83c404               add esp, 4
// 006142e8  894614               mov dword ptr [esi + 0x14], eax
// 006142eb  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 006142ee  894e30               mov dword ptr [esi + 0x30], ecx
// 006142f1  8b4728               mov eax, dword ptr [edi + 0x28]
// 006142f4  8d5001               lea edx, [eax + 1]
// 006142f7  81faffffff0f         cmp edx, 0xfffffff
// 006142fd  771a                 ja 0x614319
// 006142ff  8b4e08               mov ecx, dword ptr [esi + 8]
// 00614302  c1e004               shl eax, 4
// 00614305  50                   push eax
// 00614306  8b4628               mov eax, dword ptr [esi + 0x28]
// 00614309  c1e004               shl eax, 4
// 0061430c  50                   push eax
// 0061430d  51                   push ecx
// 0061430e  53                   push ebx
// 0061430f  e8dcf6ffff           call 0x6139f0
// 00614314  83c410               add esp, 0x10
// 00614317  eb09                 jmp 0x614322
// 00614319  53                   push ebx
// 0061431a  e8b1f6ffff           call 0x6139d0
// 0061431f  83c404               add esp, 4
// 00614322  894608               mov dword ptr [esi + 8], eax
// 00614325  8b5728               mov edx, dword ptr [edi + 0x28]
// 00614328  895628               mov dword ptr [esi + 0x28], edx
// 0061432b  8b472c               mov eax, dword ptr [edi + 0x2c]
// 0061432e  8d4801               lea ecx, [eax + 1]
// 00614331  81f9ffffff3f         cmp ecx, 0x3fffffff
// 00614337  771f                 ja 0x614358
// 00614339  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0061433c  8d148500000000       lea edx, [eax*4]
// 00614343  8b4634               mov eax, dword ptr [esi + 0x34]
// 00614346  52                   push edx
// 00614347  03c0                 add eax, eax
// 00614349  03c0                 add eax, eax
// 0061434b  50                   push eax
// 0061434c  51                   push ecx
// 0061434d  53                   push ebx
// 0061434e  e89df6ffff           call 0x6139f0
// 00614353  83c410               add esp, 0x10
// 00614356  eb09                 jmp 0x614361
// 00614358  53                   push ebx
// 00614359  e872f6ffff           call 0x6139d0
// 0061435e  83c404               add esp, 4
// 00614361  894610               mov dword ptr [esi + 0x10], eax
// 00614364  8b572c               mov edx, dword ptr [edi + 0x2c]
// 00614367  895634               mov dword ptr [esi + 0x34], edx
// 0061436a  0fbf4730             movsx eax, word ptr [edi + 0x30]
// 0061436e  8d4801               lea ecx, [eax + 1]
// 00614371  81f955555515         cmp ecx, 0x15555555
// 00614377  7722                 ja 0x61439b
// 00614379  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0061437c  8d1440               lea edx, [eax + eax*2]
// 0061437f  8b4638               mov eax, dword ptr [esi + 0x38]
// 00614382  8d0440               lea eax, [eax + eax*2]
// 00614385  03d2                 add edx, edx
// 00614387  03d2                 add edx, edx
// 00614389  52                   push edx
// 0061438a  03c0                 add eax, eax
// 0061438c  03c0                 add eax, eax
// 0061438e  50                   push eax
// 0061438f  51                   push ecx
// 00614390  53                   push ebx
// 00614391  e85af6ffff           call 0x6139f0
// 00614396  83c410               add esp, 0x10
// 00614399  eb09                 jmp 0x6143a4
// 0061439b  53                   push ebx
// 0061439c  e82ff6ffff           call 0x6139d0
// 006143a1  83c404               add esp, 4
// 006143a4  894618               mov dword ptr [esi + 0x18], eax
// 006143a7  0fb64648             movzx eax, byte ptr [esi + 0x48]
// 006143ab  0fbf5730             movsx edx, word ptr [edi + 0x30]
// 006143af  8d4801               lea ecx, [eax + 1]
// 006143b2  81f9ffffff3f         cmp ecx, 0x3fffffff
// 006143b8  895638               mov dword ptr [esi + 0x38], edx
// 006143bb  771f                 ja 0x6143dc
// 006143bd  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 006143c0  8d148500000000       lea edx, [eax*4]
// 006143c7  8b4624               mov eax, dword ptr [esi + 0x24]
// 006143ca  52                   push edx
// 006143cb  03c0                 add eax, eax
// 006143cd  03c0                 add eax, eax
// 006143cf  50                   push eax
// 006143d0  51                   push ecx
// 006143d1  53                   push ebx
// 006143d2  e819f6ffff           call 0x6139f0
// 006143d7  83c410               add esp, 0x10
// 006143da  eb09                 jmp 0x6143e5
// 006143dc  53                   push ebx
// 006143dd  e8eef5ffff           call 0x6139d0
// 006143e2  83c404               add esp, 4
// 006143e5  0fb65648             movzx edx, byte ptr [esi + 0x48]
// 006143e9  89461c               mov dword ptr [esi + 0x1c], eax
// 006143ec  895624               mov dword ptr [esi + 0x24], edx
// 006143ef  8b4708               mov eax, dword ptr [edi + 8]
// 006143f2  894530               mov dword ptr [ebp + 0x30], eax
// 006143f5  834308e0             add dword ptr [ebx + 8], -0x20
// 006143f9  8b4510               mov eax, dword ptr [ebp + 0x10]
// 006143fc  3d1d010000           cmp eax, 0x11d
// 00614401  7407                 je 0x61440a
// 00614403  3d1e010000           cmp eax, 0x11e
// 00614408  7514                 jne 0x61441e
// 0061440a  8b4518               mov eax, dword ptr [ebp + 0x18]
// 0061440d  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00614410  51                   push ecx
// 00614411  83c010               add eax, 0x10
// 00614414  50                   push eax
// 00614415  55                   push ebp
// 00614416  e8c5310000           call 0x6175e0
// 0061441b  83c40c               add esp, 0xc
// 0061441e  5f                   pop edi
// 0061441f  5e                   pop esi
// 00614420  5d                   pop ebp
// 00614421  5b                   pop ebx
// 00614422  c3                   ret 
// library lua-5.1.4/lparser.c (function _close_func)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
