// from server: 100% by auto
// roc 2012-06 00938ba0  unit: seg_00930000  size: 465 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00938ba0
//
// 00938ba0  53                   push ebx
// 00938ba1  55                   push ebp
// 00938ba2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00938ba6  8b5d34               mov ebx, dword ptr [ebp + 0x34]
// 00938ba9  56                   push esi
// 00938baa  57                   push edi
// 00938bab  8b7d30               mov edi, dword ptr [ebp + 0x30]
// 00938bae  8b37                 mov esi, dword ptr [edi]
// 00938bb0  33d2                 xor edx, edx
// 00938bb2  8bc5                 mov eax, ebp
// 00938bb4  e897faffff           call 0x938650
// 00938bb9  52                   push edx
// 00938bba  52                   push edx
// 00938bbb  57                   push edi
// 00938bbc  e85fed0200           call 0x967920
// 00938bc1  8b4718               mov eax, dword ptr [edi + 0x18]
// 00938bc4  8d4801               lea ecx, [eax + 1]
// 00938bc7  83c40c               add esp, 0xc
// 00938bca  81f9ffffff3f         cmp ecx, 0x3fffffff
// 00938bd0  771f                 ja 0x938bf1
// 00938bd2  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00938bd5  8d148500000000       lea edx, [eax*4]
// 00938bdc  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00938bdf  52                   push edx
// 00938be0  03c0                 add eax, eax
// 00938be2  03c0                 add eax, eax
// 00938be4  50                   push eax
// 00938be5  51                   push ecx
// 00938be6  53                   push ebx
// 00938be7  e874e3ffff           call 0x936f60
// 00938bec  83c410               add esp, 0x10
// 00938bef  eb09                 jmp 0x938bfa
// 00938bf1  53                   push ebx
// 00938bf2  e849e3ffff           call 0x936f40
// 00938bf7  83c404               add esp, 4
// 00938bfa  89460c               mov dword ptr [esi + 0xc], eax
// 00938bfd  8b5718               mov edx, dword ptr [edi + 0x18]
// 00938c00  89562c               mov dword ptr [esi + 0x2c], edx
// 00938c03  8b4718               mov eax, dword ptr [edi + 0x18]
// 00938c06  40                   inc eax
// 00938c07  3dffffff3f           cmp eax, 0x3fffffff
// 00938c0c  771f                 ja 0x938c2d
// 00938c0e  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 00938c11  8b5630               mov edx, dword ptr [esi + 0x30]
// 00938c14  8b4614               mov eax, dword ptr [esi + 0x14]
// 00938c17  03c9                 add ecx, ecx
// 00938c19  03c9                 add ecx, ecx
// 00938c1b  51                   push ecx
// 00938c1c  03d2                 add edx, edx
// 00938c1e  03d2                 add edx, edx
// 00938c20  52                   push edx
// 00938c21  50                   push eax
// 00938c22  53                   push ebx
// 00938c23  e838e3ffff           call 0x936f60
// 00938c28  83c410               add esp, 0x10
// 00938c2b  eb09                 jmp 0x938c36
// 00938c2d  53                   push ebx
// 00938c2e  e80de3ffff           call 0x936f40
// 00938c33  83c404               add esp, 4
// 00938c36  894614               mov dword ptr [esi + 0x14], eax
// 00938c39  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 00938c3c  894e30               mov dword ptr [esi + 0x30], ecx
// 00938c3f  8b4728               mov eax, dword ptr [edi + 0x28]
// 00938c42  8d5001               lea edx, [eax + 1]
// 00938c45  81faffffff0f         cmp edx, 0xfffffff
// 00938c4b  771a                 ja 0x938c67
// 00938c4d  8b4e08               mov ecx, dword ptr [esi + 8]
// 00938c50  c1e004               shl eax, 4
// 00938c53  50                   push eax
// 00938c54  8b4628               mov eax, dword ptr [esi + 0x28]
// 00938c57  c1e004               shl eax, 4
// 00938c5a  50                   push eax
// 00938c5b  51                   push ecx
// 00938c5c  53                   push ebx
// 00938c5d  e8fee2ffff           call 0x936f60
// 00938c62  83c410               add esp, 0x10
// 00938c65  eb09                 jmp 0x938c70
// 00938c67  53                   push ebx
// 00938c68  e8d3e2ffff           call 0x936f40
// 00938c6d  83c404               add esp, 4
// 00938c70  894608               mov dword ptr [esi + 8], eax
// 00938c73  8b5728               mov edx, dword ptr [edi + 0x28]
// 00938c76  895628               mov dword ptr [esi + 0x28], edx
// 00938c79  8b472c               mov eax, dword ptr [edi + 0x2c]
// 00938c7c  8d4801               lea ecx, [eax + 1]
// 00938c7f  81f9ffffff3f         cmp ecx, 0x3fffffff
// 00938c85  771f                 ja 0x938ca6
// 00938c87  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00938c8a  8d148500000000       lea edx, [eax*4]
// 00938c91  8b4634               mov eax, dword ptr [esi + 0x34]
// 00938c94  52                   push edx
// 00938c95  03c0                 add eax, eax
// 00938c97  03c0                 add eax, eax
// 00938c99  50                   push eax
// 00938c9a  51                   push ecx
// 00938c9b  53                   push ebx
// 00938c9c  e8bfe2ffff           call 0x936f60
// 00938ca1  83c410               add esp, 0x10
// 00938ca4  eb09                 jmp 0x938caf
// 00938ca6  53                   push ebx
// 00938ca7  e894e2ffff           call 0x936f40
// 00938cac  83c404               add esp, 4
// 00938caf  894610               mov dword ptr [esi + 0x10], eax
// 00938cb2  8b572c               mov edx, dword ptr [edi + 0x2c]
// 00938cb5  895634               mov dword ptr [esi + 0x34], edx
// 00938cb8  0fbf4730             movsx eax, word ptr [edi + 0x30]
// 00938cbc  8d4801               lea ecx, [eax + 1]
// 00938cbf  81f955555515         cmp ecx, 0x15555555
// 00938cc5  7722                 ja 0x938ce9
// 00938cc7  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00938cca  8d1440               lea edx, [eax + eax*2]
// 00938ccd  8b4638               mov eax, dword ptr [esi + 0x38]
// 00938cd0  8d0440               lea eax, [eax + eax*2]
// 00938cd3  03d2                 add edx, edx
// 00938cd5  03d2                 add edx, edx
// 00938cd7  52                   push edx
// 00938cd8  03c0                 add eax, eax
// 00938cda  03c0                 add eax, eax
// 00938cdc  50                   push eax
// 00938cdd  51                   push ecx
// 00938cde  53                   push ebx
// 00938cdf  e87ce2ffff           call 0x936f60
// 00938ce4  83c410               add esp, 0x10
// 00938ce7  eb09                 jmp 0x938cf2
// 00938ce9  53                   push ebx
// 00938cea  e851e2ffff           call 0x936f40
// 00938cef  83c404               add esp, 4
// 00938cf2  894618               mov dword ptr [esi + 0x18], eax
// 00938cf5  0fb64648             movzx eax, byte ptr [esi + 0x48]
// 00938cf9  0fbf5730             movsx edx, word ptr [edi + 0x30]
// 00938cfd  8d4801               lea ecx, [eax + 1]
// 00938d00  895638               mov dword ptr [esi + 0x38], edx
// 00938d03  81f9ffffff3f         cmp ecx, 0x3fffffff
// 00938d09  771f                 ja 0x938d2a
// 00938d0b  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00938d0e  8d148500000000       lea edx, [eax*4]
// 00938d15  8b4624               mov eax, dword ptr [esi + 0x24]
// 00938d18  52                   push edx
// 00938d19  03c0                 add eax, eax
// 00938d1b  03c0                 add eax, eax
// 00938d1d  50                   push eax
// 00938d1e  51                   push ecx
// 00938d1f  53                   push ebx
// 00938d20  e83be2ffff           call 0x936f60
// 00938d25  83c410               add esp, 0x10
// 00938d28  eb09                 jmp 0x938d33
// 00938d2a  53                   push ebx
// 00938d2b  e810e2ffff           call 0x936f40
// 00938d30  83c404               add esp, 4
// 00938d33  0fb65648             movzx edx, byte ptr [esi + 0x48]
// 00938d37  89461c               mov dword ptr [esi + 0x1c], eax
// 00938d3a  895624               mov dword ptr [esi + 0x24], edx
// 00938d3d  8b4708               mov eax, dword ptr [edi + 8]
// 00938d40  894530               mov dword ptr [ebp + 0x30], eax
// 00938d43  834308e0             add dword ptr [ebx + 8], -0x20
// 00938d47  8b4510               mov eax, dword ptr [ebp + 0x10]
// 00938d4a  3d1d010000           cmp eax, 0x11d
// 00938d4f  7407                 je 0x938d58
// 00938d51  3d1e010000           cmp eax, 0x11e
// 00938d56  7514                 jne 0x938d6c
// 00938d58  8b4518               mov eax, dword ptr [ebp + 0x18]
// 00938d5b  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00938d5e  51                   push ecx
// 00938d5f  83c010               add eax, 0x10
// 00938d62  50                   push eax
// 00938d63  55                   push ebp
// 00938d64  e8c7e4ffff           call 0x937230
// 00938d69  83c40c               add esp, 0xc
// 00938d6c  5f                   pop edi
// 00938d6d  5e                   pop esi
// 00938d6e  5d                   pop ebp
// 00938d6f  5b                   pop ebx
// 00938d70  c3                   ret 
// library lua-5.1.4/lparser.c (function _close_func)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
