// from server: 100% by auto
// roc 2011-06 007db690  unit: seg_007d0000  size: 465 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007db690
//
// 007db690  53                   push ebx
// 007db691  55                   push ebp
// 007db692  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 007db696  8b5d34               mov ebx, dword ptr [ebp + 0x34]
// 007db699  56                   push esi
// 007db69a  57                   push edi
// 007db69b  8b7d30               mov edi, dword ptr [ebp + 0x30]
// 007db69e  8b37                 mov esi, dword ptr [edi]
// 007db6a0  33d2                 xor edx, edx
// 007db6a2  8bc5                 mov eax, ebp
// 007db6a4  e897faffff           call 0x7db140
// 007db6a9  52                   push edx
// 007db6aa  52                   push edx
// 007db6ab  57                   push edi
// 007db6ac  e8cf720100           call 0x7f2980
// 007db6b1  8b4718               mov eax, dword ptr [edi + 0x18]
// 007db6b4  8d4801               lea ecx, [eax + 1]
// 007db6b7  83c40c               add esp, 0xc
// 007db6ba  81f9ffffff3f         cmp ecx, 0x3fffffff
// 007db6c0  771f                 ja 0x7db6e1
// 007db6c2  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 007db6c5  8d148500000000       lea edx, [eax*4]
// 007db6cc  8b462c               mov eax, dword ptr [esi + 0x2c]
// 007db6cf  52                   push edx
// 007db6d0  03c0                 add eax, eax
// 007db6d2  03c0                 add eax, eax
// 007db6d4  50                   push eax
// 007db6d5  51                   push ecx
// 007db6d6  53                   push ebx
// 007db6d7  e864f7ffff           call 0x7dae40
// 007db6dc  83c410               add esp, 0x10
// 007db6df  eb09                 jmp 0x7db6ea
// 007db6e1  53                   push ebx
// 007db6e2  e839f7ffff           call 0x7dae20
// 007db6e7  83c404               add esp, 4
// 007db6ea  89460c               mov dword ptr [esi + 0xc], eax
// 007db6ed  8b5718               mov edx, dword ptr [edi + 0x18]
// 007db6f0  89562c               mov dword ptr [esi + 0x2c], edx
// 007db6f3  8b4718               mov eax, dword ptr [edi + 0x18]
// 007db6f6  40                   inc eax
// 007db6f7  3dffffff3f           cmp eax, 0x3fffffff
// 007db6fc  771f                 ja 0x7db71d
// 007db6fe  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 007db701  8b5630               mov edx, dword ptr [esi + 0x30]
// 007db704  8b4614               mov eax, dword ptr [esi + 0x14]
// 007db707  03c9                 add ecx, ecx
// 007db709  03c9                 add ecx, ecx
// 007db70b  51                   push ecx
// 007db70c  03d2                 add edx, edx
// 007db70e  03d2                 add edx, edx
// 007db710  52                   push edx
// 007db711  50                   push eax
// 007db712  53                   push ebx
// 007db713  e828f7ffff           call 0x7dae40
// 007db718  83c410               add esp, 0x10
// 007db71b  eb09                 jmp 0x7db726
// 007db71d  53                   push ebx
// 007db71e  e8fdf6ffff           call 0x7dae20
// 007db723  83c404               add esp, 4
// 007db726  894614               mov dword ptr [esi + 0x14], eax
// 007db729  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 007db72c  894e30               mov dword ptr [esi + 0x30], ecx
// 007db72f  8b4728               mov eax, dword ptr [edi + 0x28]
// 007db732  8d5001               lea edx, [eax + 1]
// 007db735  81faffffff0f         cmp edx, 0xfffffff
// 007db73b  771a                 ja 0x7db757
// 007db73d  8b4e08               mov ecx, dword ptr [esi + 8]
// 007db740  c1e004               shl eax, 4
// 007db743  50                   push eax
// 007db744  8b4628               mov eax, dword ptr [esi + 0x28]
// 007db747  c1e004               shl eax, 4
// 007db74a  50                   push eax
// 007db74b  51                   push ecx
// 007db74c  53                   push ebx
// 007db74d  e8eef6ffff           call 0x7dae40
// 007db752  83c410               add esp, 0x10
// 007db755  eb09                 jmp 0x7db760
// 007db757  53                   push ebx
// 007db758  e8c3f6ffff           call 0x7dae20
// 007db75d  83c404               add esp, 4
// 007db760  894608               mov dword ptr [esi + 8], eax
// 007db763  8b5728               mov edx, dword ptr [edi + 0x28]
// 007db766  895628               mov dword ptr [esi + 0x28], edx
// 007db769  8b472c               mov eax, dword ptr [edi + 0x2c]
// 007db76c  8d4801               lea ecx, [eax + 1]
// 007db76f  81f9ffffff3f         cmp ecx, 0x3fffffff
// 007db775  771f                 ja 0x7db796
// 007db777  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 007db77a  8d148500000000       lea edx, [eax*4]
// 007db781  8b4634               mov eax, dword ptr [esi + 0x34]
// 007db784  52                   push edx
// 007db785  03c0                 add eax, eax
// 007db787  03c0                 add eax, eax
// 007db789  50                   push eax
// 007db78a  51                   push ecx
// 007db78b  53                   push ebx
// 007db78c  e8aff6ffff           call 0x7dae40
// 007db791  83c410               add esp, 0x10
// 007db794  eb09                 jmp 0x7db79f
// 007db796  53                   push ebx
// 007db797  e884f6ffff           call 0x7dae20
// 007db79c  83c404               add esp, 4
// 007db79f  894610               mov dword ptr [esi + 0x10], eax
// 007db7a2  8b572c               mov edx, dword ptr [edi + 0x2c]
// 007db7a5  895634               mov dword ptr [esi + 0x34], edx
// 007db7a8  0fbf4730             movsx eax, word ptr [edi + 0x30]
// 007db7ac  8d4801               lea ecx, [eax + 1]
// 007db7af  81f955555515         cmp ecx, 0x15555555
// 007db7b5  7722                 ja 0x7db7d9
// 007db7b7  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 007db7ba  8d1440               lea edx, [eax + eax*2]
// 007db7bd  8b4638               mov eax, dword ptr [esi + 0x38]
// 007db7c0  8d0440               lea eax, [eax + eax*2]
// 007db7c3  03d2                 add edx, edx
// 007db7c5  03d2                 add edx, edx
// 007db7c7  52                   push edx
// 007db7c8  03c0                 add eax, eax
// 007db7ca  03c0                 add eax, eax
// 007db7cc  50                   push eax
// 007db7cd  51                   push ecx
// 007db7ce  53                   push ebx
// 007db7cf  e86cf6ffff           call 0x7dae40
// 007db7d4  83c410               add esp, 0x10
// 007db7d7  eb09                 jmp 0x7db7e2
// 007db7d9  53                   push ebx
// 007db7da  e841f6ffff           call 0x7dae20
// 007db7df  83c404               add esp, 4
// 007db7e2  894618               mov dword ptr [esi + 0x18], eax
// 007db7e5  0fb64648             movzx eax, byte ptr [esi + 0x48]
// 007db7e9  0fbf5730             movsx edx, word ptr [edi + 0x30]
// 007db7ed  8d4801               lea ecx, [eax + 1]
// 007db7f0  895638               mov dword ptr [esi + 0x38], edx
// 007db7f3  81f9ffffff3f         cmp ecx, 0x3fffffff
// 007db7f9  771f                 ja 0x7db81a
// 007db7fb  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 007db7fe  8d148500000000       lea edx, [eax*4]
// 007db805  8b4624               mov eax, dword ptr [esi + 0x24]
// 007db808  52                   push edx
// 007db809  03c0                 add eax, eax
// 007db80b  03c0                 add eax, eax
// 007db80d  50                   push eax
// 007db80e  51                   push ecx
// 007db80f  53                   push ebx
// 007db810  e82bf6ffff           call 0x7dae40
// 007db815  83c410               add esp, 0x10
// 007db818  eb09                 jmp 0x7db823
// 007db81a  53                   push ebx
// 007db81b  e800f6ffff           call 0x7dae20
// 007db820  83c404               add esp, 4
// 007db823  0fb65648             movzx edx, byte ptr [esi + 0x48]
// 007db827  89461c               mov dword ptr [esi + 0x1c], eax
// 007db82a  895624               mov dword ptr [esi + 0x24], edx
// 007db82d  8b4708               mov eax, dword ptr [edi + 8]
// 007db830  894530               mov dword ptr [ebp + 0x30], eax
// 007db833  834308e0             add dword ptr [ebx + 8], -0x20
// 007db837  8b4510               mov eax, dword ptr [ebp + 0x10]
// 007db83a  3d1d010000           cmp eax, 0x11d
// 007db83f  7407                 je 0x7db848
// 007db841  3d1e010000           cmp eax, 0x11e
// 007db846  7514                 jne 0x7db85c
// 007db848  8b4518               mov eax, dword ptr [ebp + 0x18]
// 007db84b  8b480c               mov ecx, dword ptr [eax + 0xc]
// 007db84e  51                   push ecx
// 007db84f  83c010               add eax, 0x10
// 007db852  50                   push eax
// 007db853  55                   push ebp
// 007db854  e837320000           call 0x7dea90
// 007db859  83c40c               add esp, 0xc
// 007db85c  5f                   pop edi
// 007db85d  5e                   pop esi
// 007db85e  5d                   pop ebp
// 007db85f  5b                   pop ebx
// 007db860  c3                   ret 
// library lua-5.1.4/lparser.c (function _close_func)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
