// from server: 100% by auto
// roc 2010-06 0077f230  unit: seg_00770000  size: 465 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077f230
//
// 0077f230  53                   push ebx
// 0077f231  55                   push ebp
// 0077f232  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0077f236  8b5d34               mov ebx, dword ptr [ebp + 0x34]
// 0077f239  56                   push esi
// 0077f23a  57                   push edi
// 0077f23b  8b7d30               mov edi, dword ptr [ebp + 0x30]
// 0077f23e  8b37                 mov esi, dword ptr [edi]
// 0077f240  33d2                 xor edx, edx
// 0077f242  8bc5                 mov eax, ebp
// 0077f244  e8b7faffff           call 0x77ed00
// 0077f249  52                   push edx
// 0077f24a  52                   push edx
// 0077f24b  57                   push edi
// 0077f24c  e8df0a0100           call 0x78fd30
// 0077f251  8b4718               mov eax, dword ptr [edi + 0x18]
// 0077f254  8d4801               lea ecx, [eax + 1]
// 0077f257  83c40c               add esp, 0xc
// 0077f25a  81f9ffffff3f         cmp ecx, 0x3fffffff
// 0077f260  771f                 ja 0x77f281
// 0077f262  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0077f265  8d148500000000       lea edx, [eax*4]
// 0077f26c  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0077f26f  52                   push edx
// 0077f270  03c0                 add eax, eax
// 0077f272  03c0                 add eax, eax
// 0077f274  50                   push eax
// 0077f275  51                   push ecx
// 0077f276  53                   push ebx
// 0077f277  e884f7ffff           call 0x77ea00
// 0077f27c  83c410               add esp, 0x10
// 0077f27f  eb09                 jmp 0x77f28a
// 0077f281  53                   push ebx
// 0077f282  e859f7ffff           call 0x77e9e0
// 0077f287  83c404               add esp, 4
// 0077f28a  89460c               mov dword ptr [esi + 0xc], eax
// 0077f28d  8b5718               mov edx, dword ptr [edi + 0x18]
// 0077f290  89562c               mov dword ptr [esi + 0x2c], edx
// 0077f293  8b4718               mov eax, dword ptr [edi + 0x18]
// 0077f296  40                   inc eax
// 0077f297  3dffffff3f           cmp eax, 0x3fffffff
// 0077f29c  771f                 ja 0x77f2bd
// 0077f29e  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 0077f2a1  8b5630               mov edx, dword ptr [esi + 0x30]
// 0077f2a4  8b4614               mov eax, dword ptr [esi + 0x14]
// 0077f2a7  03c9                 add ecx, ecx
// 0077f2a9  03c9                 add ecx, ecx
// 0077f2ab  51                   push ecx
// 0077f2ac  03d2                 add edx, edx
// 0077f2ae  03d2                 add edx, edx
// 0077f2b0  52                   push edx
// 0077f2b1  50                   push eax
// 0077f2b2  53                   push ebx
// 0077f2b3  e848f7ffff           call 0x77ea00
// 0077f2b8  83c410               add esp, 0x10
// 0077f2bb  eb09                 jmp 0x77f2c6
// 0077f2bd  53                   push ebx
// 0077f2be  e81df7ffff           call 0x77e9e0
// 0077f2c3  83c404               add esp, 4
// 0077f2c6  894614               mov dword ptr [esi + 0x14], eax
// 0077f2c9  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 0077f2cc  894e30               mov dword ptr [esi + 0x30], ecx
// 0077f2cf  8b4728               mov eax, dword ptr [edi + 0x28]
// 0077f2d2  8d5001               lea edx, [eax + 1]
// 0077f2d5  81faffffff0f         cmp edx, 0xfffffff
// 0077f2db  771a                 ja 0x77f2f7
// 0077f2dd  8b4e08               mov ecx, dword ptr [esi + 8]
// 0077f2e0  c1e004               shl eax, 4
// 0077f2e3  50                   push eax
// 0077f2e4  8b4628               mov eax, dword ptr [esi + 0x28]
// 0077f2e7  c1e004               shl eax, 4
// 0077f2ea  50                   push eax
// 0077f2eb  51                   push ecx
// 0077f2ec  53                   push ebx
// 0077f2ed  e80ef7ffff           call 0x77ea00
// 0077f2f2  83c410               add esp, 0x10
// 0077f2f5  eb09                 jmp 0x77f300
// 0077f2f7  53                   push ebx
// 0077f2f8  e8e3f6ffff           call 0x77e9e0
// 0077f2fd  83c404               add esp, 4
// 0077f300  894608               mov dword ptr [esi + 8], eax
// 0077f303  8b5728               mov edx, dword ptr [edi + 0x28]
// 0077f306  895628               mov dword ptr [esi + 0x28], edx
// 0077f309  8b472c               mov eax, dword ptr [edi + 0x2c]
// 0077f30c  8d4801               lea ecx, [eax + 1]
// 0077f30f  81f9ffffff3f         cmp ecx, 0x3fffffff
// 0077f315  771f                 ja 0x77f336
// 0077f317  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0077f31a  8d148500000000       lea edx, [eax*4]
// 0077f321  8b4634               mov eax, dword ptr [esi + 0x34]
// 0077f324  52                   push edx
// 0077f325  03c0                 add eax, eax
// 0077f327  03c0                 add eax, eax
// 0077f329  50                   push eax
// 0077f32a  51                   push ecx
// 0077f32b  53                   push ebx
// 0077f32c  e8cff6ffff           call 0x77ea00
// 0077f331  83c410               add esp, 0x10
// 0077f334  eb09                 jmp 0x77f33f
// 0077f336  53                   push ebx
// 0077f337  e8a4f6ffff           call 0x77e9e0
// 0077f33c  83c404               add esp, 4
// 0077f33f  894610               mov dword ptr [esi + 0x10], eax
// 0077f342  8b572c               mov edx, dword ptr [edi + 0x2c]
// 0077f345  895634               mov dword ptr [esi + 0x34], edx
// 0077f348  0fbf4730             movsx eax, word ptr [edi + 0x30]
// 0077f34c  8d4801               lea ecx, [eax + 1]
// 0077f34f  81f955555515         cmp ecx, 0x15555555
// 0077f355  7722                 ja 0x77f379
// 0077f357  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0077f35a  8d1440               lea edx, [eax + eax*2]
// 0077f35d  8b4638               mov eax, dword ptr [esi + 0x38]
// 0077f360  8d0440               lea eax, [eax + eax*2]
// 0077f363  03d2                 add edx, edx
// 0077f365  03d2                 add edx, edx
// 0077f367  52                   push edx
// 0077f368  03c0                 add eax, eax
// 0077f36a  03c0                 add eax, eax
// 0077f36c  50                   push eax
// 0077f36d  51                   push ecx
// 0077f36e  53                   push ebx
// 0077f36f  e88cf6ffff           call 0x77ea00
// 0077f374  83c410               add esp, 0x10
// 0077f377  eb09                 jmp 0x77f382
// 0077f379  53                   push ebx
// 0077f37a  e861f6ffff           call 0x77e9e0
// 0077f37f  83c404               add esp, 4
// 0077f382  894618               mov dword ptr [esi + 0x18], eax
// 0077f385  0fb64648             movzx eax, byte ptr [esi + 0x48]
// 0077f389  0fbf5730             movsx edx, word ptr [edi + 0x30]
// 0077f38d  8d4801               lea ecx, [eax + 1]
// 0077f390  895638               mov dword ptr [esi + 0x38], edx
// 0077f393  81f9ffffff3f         cmp ecx, 0x3fffffff
// 0077f399  771f                 ja 0x77f3ba
// 0077f39b  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0077f39e  8d148500000000       lea edx, [eax*4]
// 0077f3a5  8b4624               mov eax, dword ptr [esi + 0x24]
// 0077f3a8  52                   push edx
// 0077f3a9  03c0                 add eax, eax
// 0077f3ab  03c0                 add eax, eax
// 0077f3ad  50                   push eax
// 0077f3ae  51                   push ecx
// 0077f3af  53                   push ebx
// 0077f3b0  e84bf6ffff           call 0x77ea00
// 0077f3b5  83c410               add esp, 0x10
// 0077f3b8  eb09                 jmp 0x77f3c3
// 0077f3ba  53                   push ebx
// 0077f3bb  e820f6ffff           call 0x77e9e0
// 0077f3c0  83c404               add esp, 4
// 0077f3c3  0fb65648             movzx edx, byte ptr [esi + 0x48]
// 0077f3c7  89461c               mov dword ptr [esi + 0x1c], eax
// 0077f3ca  895624               mov dword ptr [esi + 0x24], edx
// 0077f3cd  8b4708               mov eax, dword ptr [edi + 8]
// 0077f3d0  894530               mov dword ptr [ebp + 0x30], eax
// 0077f3d3  834308e0             add dword ptr [ebx + 8], -0x20
// 0077f3d7  8b4510               mov eax, dword ptr [ebp + 0x10]
// 0077f3da  3d1d010000           cmp eax, 0x11d
// 0077f3df  7407                 je 0x77f3e8
// 0077f3e1  3d1e010000           cmp eax, 0x11e
// 0077f3e6  7514                 jne 0x77f3fc
// 0077f3e8  8b4518               mov eax, dword ptr [ebp + 0x18]
// 0077f3eb  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0077f3ee  51                   push ecx
// 0077f3ef  83c010               add eax, 0x10
// 0077f3f2  50                   push eax
// 0077f3f3  55                   push ebp
// 0077f3f4  e8b7310000           call 0x7825b0
// 0077f3f9  83c40c               add esp, 0xc
// 0077f3fc  5f                   pop edi
// 0077f3fd  5e                   pop esi
// 0077f3fe  5d                   pop ebp
// 0077f3ff  5b                   pop ebx
// 0077f400  c3                   ret 
// library lua-5.1.4/lparser.c (function _close_func)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
