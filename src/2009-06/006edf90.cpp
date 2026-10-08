// from server: 100% by auto
// roc 2009-06 006edf90  unit: seg_006e0000  size: 465 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006edf90
//
// 006edf90  53                   push ebx
// 006edf91  55                   push ebp
// 006edf92  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 006edf96  8b5d34               mov ebx, dword ptr [ebp + 0x34]
// 006edf99  56                   push esi
// 006edf9a  57                   push edi
// 006edf9b  8b7d30               mov edi, dword ptr [ebp + 0x30]
// 006edf9e  8b37                 mov esi, dword ptr [edi]
// 006edfa0  33d2                 xor edx, edx
// 006edfa2  8bc5                 mov eax, ebp
// 006edfa4  e8b7faffff           call 0x6eda60
// 006edfa9  52                   push edx
// 006edfaa  52                   push edx
// 006edfab  57                   push edi
// 006edfac  e8efc30000           call 0x6fa3a0
// 006edfb1  8b4718               mov eax, dword ptr [edi + 0x18]
// 006edfb4  8d4801               lea ecx, [eax + 1]
// 006edfb7  83c40c               add esp, 0xc
// 006edfba  81f9ffffff3f         cmp ecx, 0x3fffffff
// 006edfc0  771f                 ja 0x6edfe1
// 006edfc2  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006edfc5  8d148500000000       lea edx, [eax*4]
// 006edfcc  8b462c               mov eax, dword ptr [esi + 0x2c]
// 006edfcf  52                   push edx
// 006edfd0  03c0                 add eax, eax
// 006edfd2  03c0                 add eax, eax
// 006edfd4  50                   push eax
// 006edfd5  51                   push ecx
// 006edfd6  53                   push ebx
// 006edfd7  e884f7ffff           call 0x6ed760
// 006edfdc  83c410               add esp, 0x10
// 006edfdf  eb09                 jmp 0x6edfea
// 006edfe1  53                   push ebx
// 006edfe2  e859f7ffff           call 0x6ed740
// 006edfe7  83c404               add esp, 4
// 006edfea  89460c               mov dword ptr [esi + 0xc], eax
// 006edfed  8b5718               mov edx, dword ptr [edi + 0x18]
// 006edff0  89562c               mov dword ptr [esi + 0x2c], edx
// 006edff3  8b4718               mov eax, dword ptr [edi + 0x18]
// 006edff6  40                   inc eax
// 006edff7  3dffffff3f           cmp eax, 0x3fffffff
// 006edffc  771f                 ja 0x6ee01d
// 006edffe  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 006ee001  8b5630               mov edx, dword ptr [esi + 0x30]
// 006ee004  8b4614               mov eax, dword ptr [esi + 0x14]
// 006ee007  03c9                 add ecx, ecx
// 006ee009  03c9                 add ecx, ecx
// 006ee00b  51                   push ecx
// 006ee00c  03d2                 add edx, edx
// 006ee00e  03d2                 add edx, edx
// 006ee010  52                   push edx
// 006ee011  50                   push eax
// 006ee012  53                   push ebx
// 006ee013  e848f7ffff           call 0x6ed760
// 006ee018  83c410               add esp, 0x10
// 006ee01b  eb09                 jmp 0x6ee026
// 006ee01d  53                   push ebx
// 006ee01e  e81df7ffff           call 0x6ed740
// 006ee023  83c404               add esp, 4
// 006ee026  894614               mov dword ptr [esi + 0x14], eax
// 006ee029  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 006ee02c  894e30               mov dword ptr [esi + 0x30], ecx
// 006ee02f  8b4728               mov eax, dword ptr [edi + 0x28]
// 006ee032  8d5001               lea edx, [eax + 1]
// 006ee035  81faffffff0f         cmp edx, 0xfffffff
// 006ee03b  771a                 ja 0x6ee057
// 006ee03d  8b4e08               mov ecx, dword ptr [esi + 8]
// 006ee040  c1e004               shl eax, 4
// 006ee043  50                   push eax
// 006ee044  8b4628               mov eax, dword ptr [esi + 0x28]
// 006ee047  c1e004               shl eax, 4
// 006ee04a  50                   push eax
// 006ee04b  51                   push ecx
// 006ee04c  53                   push ebx
// 006ee04d  e80ef7ffff           call 0x6ed760
// 006ee052  83c410               add esp, 0x10
// 006ee055  eb09                 jmp 0x6ee060
// 006ee057  53                   push ebx
// 006ee058  e8e3f6ffff           call 0x6ed740
// 006ee05d  83c404               add esp, 4
// 006ee060  894608               mov dword ptr [esi + 8], eax
// 006ee063  8b5728               mov edx, dword ptr [edi + 0x28]
// 006ee066  895628               mov dword ptr [esi + 0x28], edx
// 006ee069  8b472c               mov eax, dword ptr [edi + 0x2c]
// 006ee06c  8d4801               lea ecx, [eax + 1]
// 006ee06f  81f9ffffff3f         cmp ecx, 0x3fffffff
// 006ee075  771f                 ja 0x6ee096
// 006ee077  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 006ee07a  8d148500000000       lea edx, [eax*4]
// 006ee081  8b4634               mov eax, dword ptr [esi + 0x34]
// 006ee084  52                   push edx
// 006ee085  03c0                 add eax, eax
// 006ee087  03c0                 add eax, eax
// 006ee089  50                   push eax
// 006ee08a  51                   push ecx
// 006ee08b  53                   push ebx
// 006ee08c  e8cff6ffff           call 0x6ed760
// 006ee091  83c410               add esp, 0x10
// 006ee094  eb09                 jmp 0x6ee09f
// 006ee096  53                   push ebx
// 006ee097  e8a4f6ffff           call 0x6ed740
// 006ee09c  83c404               add esp, 4
// 006ee09f  894610               mov dword ptr [esi + 0x10], eax
// 006ee0a2  8b572c               mov edx, dword ptr [edi + 0x2c]
// 006ee0a5  895634               mov dword ptr [esi + 0x34], edx
// 006ee0a8  0fbf4730             movsx eax, word ptr [edi + 0x30]
// 006ee0ac  8d4801               lea ecx, [eax + 1]
// 006ee0af  81f955555515         cmp ecx, 0x15555555
// 006ee0b5  7722                 ja 0x6ee0d9
// 006ee0b7  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 006ee0ba  8d1440               lea edx, [eax + eax*2]
// 006ee0bd  8b4638               mov eax, dword ptr [esi + 0x38]
// 006ee0c0  8d0440               lea eax, [eax + eax*2]
// 006ee0c3  03d2                 add edx, edx
// 006ee0c5  03d2                 add edx, edx
// 006ee0c7  52                   push edx
// 006ee0c8  03c0                 add eax, eax
// 006ee0ca  03c0                 add eax, eax
// 006ee0cc  50                   push eax
// 006ee0cd  51                   push ecx
// 006ee0ce  53                   push ebx
// 006ee0cf  e88cf6ffff           call 0x6ed760
// 006ee0d4  83c410               add esp, 0x10
// 006ee0d7  eb09                 jmp 0x6ee0e2
// 006ee0d9  53                   push ebx
// 006ee0da  e861f6ffff           call 0x6ed740
// 006ee0df  83c404               add esp, 4
// 006ee0e2  894618               mov dword ptr [esi + 0x18], eax
// 006ee0e5  0fb64648             movzx eax, byte ptr [esi + 0x48]
// 006ee0e9  0fbf5730             movsx edx, word ptr [edi + 0x30]
// 006ee0ed  8d4801               lea ecx, [eax + 1]
// 006ee0f0  895638               mov dword ptr [esi + 0x38], edx
// 006ee0f3  81f9ffffff3f         cmp ecx, 0x3fffffff
// 006ee0f9  771f                 ja 0x6ee11a
// 006ee0fb  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 006ee0fe  8d148500000000       lea edx, [eax*4]
// 006ee105  8b4624               mov eax, dword ptr [esi + 0x24]
// 006ee108  52                   push edx
// 006ee109  03c0                 add eax, eax
// 006ee10b  03c0                 add eax, eax
// 006ee10d  50                   push eax
// 006ee10e  51                   push ecx
// 006ee10f  53                   push ebx
// 006ee110  e84bf6ffff           call 0x6ed760
// 006ee115  83c410               add esp, 0x10
// 006ee118  eb09                 jmp 0x6ee123
// 006ee11a  53                   push ebx
// 006ee11b  e820f6ffff           call 0x6ed740
// 006ee120  83c404               add esp, 4
// 006ee123  0fb65648             movzx edx, byte ptr [esi + 0x48]
// 006ee127  89461c               mov dword ptr [esi + 0x1c], eax
// 006ee12a  895624               mov dword ptr [esi + 0x24], edx
// 006ee12d  8b4708               mov eax, dword ptr [edi + 8]
// 006ee130  894530               mov dword ptr [ebp + 0x30], eax
// 006ee133  834308e0             add dword ptr [ebx + 8], -0x20
// 006ee137  8b4510               mov eax, dword ptr [ebp + 0x10]
// 006ee13a  3d1d010000           cmp eax, 0x11d
// 006ee13f  7407                 je 0x6ee148
// 006ee141  3d1e010000           cmp eax, 0x11e
// 006ee146  7514                 jne 0x6ee15c
// 006ee148  8b4518               mov eax, dword ptr [ebp + 0x18]
// 006ee14b  8b480c               mov ecx, dword ptr [eax + 0xc]
// 006ee14e  51                   push ecx
// 006ee14f  83c010               add eax, 0x10
// 006ee152  50                   push eax
// 006ee153  55                   push ebp
// 006ee154  e8b7310000           call 0x6f1310
// 006ee159  83c40c               add esp, 0xc
// 006ee15c  5f                   pop edi
// 006ee15d  5e                   pop esi
// 006ee15e  5d                   pop ebp
// 006ee15f  5b                   pop ebx
// 006ee160  c3                   ret 
// library lua-5.1.4/lparser.c (function _close_func)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
