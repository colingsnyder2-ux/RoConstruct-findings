// roc 2008-06 00660f20  unit: RBX::FilterStairs  size: 465 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00660f20
//
// 00660f20  53                   push ebx
// 00660f21  55                   push ebp
// 00660f22  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00660f26  8b5d34               mov ebx, dword ptr [ebp + 0x34]
// 00660f29  56                   push esi
// 00660f2a  57                   push edi
// 00660f2b  8b7d30               mov edi, dword ptr [ebp + 0x30]
// 00660f2e  8b37                 mov esi, dword ptr [edi]
// 00660f30  33d2                 xor edx, edx
// 00660f32  8bc5                 mov eax, ebp
// 00660f34  e8b7faffff           call 0x6609f0
// 00660f39  52                   push edx
// 00660f3a  52                   push edx
// 00660f3b  57                   push edi
// 00660f3c  e8afa40000           call 0x66b3f0
// 00660f41  8b4718               mov eax, dword ptr [edi + 0x18]
// 00660f44  8d4801               lea ecx, [eax + 1]
// 00660f47  83c40c               add esp, 0xc
// 00660f4a  81f9ffffff3f         cmp ecx, 0x3fffffff
// 00660f50  771f                 ja 0x660f71
// 00660f52  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00660f55  8d148500000000       lea edx, [eax*4]
// 00660f5c  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00660f5f  52                   push edx
// 00660f60  03c0                 add eax, eax
// 00660f62  03c0                 add eax, eax
// 00660f64  50                   push eax
// 00660f65  51                   push ecx
// 00660f66  53                   push ebx
// 00660f67  e884f7ffff           call 0x6606f0
// 00660f6c  83c410               add esp, 0x10
// 00660f6f  eb09                 jmp 0x660f7a
// 00660f71  53                   push ebx
// 00660f72  e859f7ffff           call 0x6606d0
// 00660f77  83c404               add esp, 4
// 00660f7a  89460c               mov dword ptr [esi + 0xc], eax
// 00660f7d  8b5718               mov edx, dword ptr [edi + 0x18]
// 00660f80  89562c               mov dword ptr [esi + 0x2c], edx
// 00660f83  8b4718               mov eax, dword ptr [edi + 0x18]
// 00660f86  40                   inc eax
// 00660f87  3dffffff3f           cmp eax, 0x3fffffff
// 00660f8c  771f                 ja 0x660fad
// 00660f8e  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 00660f91  8b5630               mov edx, dword ptr [esi + 0x30]
// 00660f94  8b4614               mov eax, dword ptr [esi + 0x14]
// 00660f97  03c9                 add ecx, ecx
// 00660f99  03c9                 add ecx, ecx
// 00660f9b  51                   push ecx
// 00660f9c  03d2                 add edx, edx
// 00660f9e  03d2                 add edx, edx
// 00660fa0  52                   push edx
// 00660fa1  50                   push eax
// 00660fa2  53                   push ebx
// 00660fa3  e848f7ffff           call 0x6606f0
// 00660fa8  83c410               add esp, 0x10
// 00660fab  eb09                 jmp 0x660fb6
// 00660fad  53                   push ebx
// 00660fae  e81df7ffff           call 0x6606d0
// 00660fb3  83c404               add esp, 4
// 00660fb6  894614               mov dword ptr [esi + 0x14], eax
// 00660fb9  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 00660fbc  894e30               mov dword ptr [esi + 0x30], ecx
// 00660fbf  8b4728               mov eax, dword ptr [edi + 0x28]
// 00660fc2  8d5001               lea edx, [eax + 1]
// 00660fc5  81faffffff0f         cmp edx, 0xfffffff
// 00660fcb  771a                 ja 0x660fe7
// 00660fcd  8b4e08               mov ecx, dword ptr [esi + 8]
// 00660fd0  c1e004               shl eax, 4
// 00660fd3  50                   push eax
// 00660fd4  8b4628               mov eax, dword ptr [esi + 0x28]
// 00660fd7  c1e004               shl eax, 4
// 00660fda  50                   push eax
// 00660fdb  51                   push ecx
// 00660fdc  53                   push ebx
// 00660fdd  e80ef7ffff           call 0x6606f0
// 00660fe2  83c410               add esp, 0x10
// 00660fe5  eb09                 jmp 0x660ff0
// 00660fe7  53                   push ebx
// 00660fe8  e8e3f6ffff           call 0x6606d0
// 00660fed  83c404               add esp, 4
// 00660ff0  894608               mov dword ptr [esi + 8], eax
// 00660ff3  8b5728               mov edx, dword ptr [edi + 0x28]
// 00660ff6  895628               mov dword ptr [esi + 0x28], edx
// 00660ff9  8b472c               mov eax, dword ptr [edi + 0x2c]
// 00660ffc  8d4801               lea ecx, [eax + 1]
// 00660fff  81f9ffffff3f         cmp ecx, 0x3fffffff
// 00661005  771f                 ja 0x661026
// 00661007  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0066100a  8d148500000000       lea edx, [eax*4]
// 00661011  8b4634               mov eax, dword ptr [esi + 0x34]
// 00661014  52                   push edx
// 00661015  03c0                 add eax, eax
// 00661017  03c0                 add eax, eax
// 00661019  50                   push eax
// 0066101a  51                   push ecx
// 0066101b  53                   push ebx
// 0066101c  e8cff6ffff           call 0x6606f0
// 00661021  83c410               add esp, 0x10
// 00661024  eb09                 jmp 0x66102f
// 00661026  53                   push ebx
// 00661027  e8a4f6ffff           call 0x6606d0
// 0066102c  83c404               add esp, 4
// 0066102f  894610               mov dword ptr [esi + 0x10], eax
// 00661032  8b572c               mov edx, dword ptr [edi + 0x2c]
// 00661035  895634               mov dword ptr [esi + 0x34], edx
// 00661038  0fbf4730             movsx eax, word ptr [edi + 0x30]
// 0066103c  8d4801               lea ecx, [eax + 1]
// 0066103f  81f955555515         cmp ecx, 0x15555555
// 00661045  7722                 ja 0x661069
// 00661047  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0066104a  8d1440               lea edx, [eax + eax*2]
// 0066104d  8b4638               mov eax, dword ptr [esi + 0x38]
// 00661050  8d0440               lea eax, [eax + eax*2]
// 00661053  03d2                 add edx, edx
// 00661055  03d2                 add edx, edx
// 00661057  52                   push edx
// 00661058  03c0                 add eax, eax
// 0066105a  03c0                 add eax, eax
// 0066105c  50                   push eax
// 0066105d  51                   push ecx
// 0066105e  53                   push ebx
// 0066105f  e88cf6ffff           call 0x6606f0
// 00661064  83c410               add esp, 0x10
// 00661067  eb09                 jmp 0x661072
// 00661069  53                   push ebx
// 0066106a  e861f6ffff           call 0x6606d0
// 0066106f  83c404               add esp, 4
// 00661072  894618               mov dword ptr [esi + 0x18], eax
// 00661075  0fb64648             movzx eax, byte ptr [esi + 0x48]
// 00661079  0fbf5730             movsx edx, word ptr [edi + 0x30]
// 0066107d  8d4801               lea ecx, [eax + 1]
// 00661080  895638               mov dword ptr [esi + 0x38], edx
// 00661083  81f9ffffff3f         cmp ecx, 0x3fffffff
// 00661089  771f                 ja 0x6610aa
// 0066108b  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0066108e  8d148500000000       lea edx, [eax*4]
// 00661095  8b4624               mov eax, dword ptr [esi + 0x24]
// 00661098  52                   push edx
// 00661099  03c0                 add eax, eax
// 0066109b  03c0                 add eax, eax
// 0066109d  50                   push eax
// 0066109e  51                   push ecx
// 0066109f  53                   push ebx
// 006610a0  e84bf6ffff           call 0x6606f0
// 006610a5  83c410               add esp, 0x10
// 006610a8  eb09                 jmp 0x6610b3
// 006610aa  53                   push ebx
// 006610ab  e820f6ffff           call 0x6606d0
// 006610b0  83c404               add esp, 4
// 006610b3  0fb65648             movzx edx, byte ptr [esi + 0x48]
// 006610b7  89461c               mov dword ptr [esi + 0x1c], eax
// 006610ba  895624               mov dword ptr [esi + 0x24], edx
// 006610bd  8b4708               mov eax, dword ptr [edi + 8]
// 006610c0  894530               mov dword ptr [ebp + 0x30], eax
// 006610c3  834308e0             add dword ptr [ebx + 8], -0x20
// 006610c7  8b4510               mov eax, dword ptr [ebp + 0x10]
// 006610ca  3d1d010000           cmp eax, 0x11d
// 006610cf  7407                 je 0x6610d8
// 006610d1  3d1e010000           cmp eax, 0x11e
// 006610d6  7514                 jne 0x6610ec
// 006610d8  8b4518               mov eax, dword ptr [ebp + 0x18]
// 006610db  8b480c               mov ecx, dword ptr [eax + 0xc]
// 006610de  51                   push ecx
// 006610df  83c010               add eax, 0x10
// 006610e2  50                   push eax
// 006610e3  55                   push ebp
// 006610e4  e847310000           call 0x664230
// 006610e9  83c40c               add esp, 0xc
// 006610ec  5f                   pop edi
// 006610ed  5e                   pop esi
// 006610ee  5d                   pop ebp
// 006610ef  5b                   pop ebx
// 006610f0  c3                   ret 
// library lua-5.1.4/lparser.c (function _close_func)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
