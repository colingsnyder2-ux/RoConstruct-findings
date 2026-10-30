// from server: 100% by auto
// roc 2008-06 00664870  unit: seg_00660000  size: 579 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00664870
//
// 00664870  83ec50               sub esp, 0x50
// 00664873  53                   push ebx
// 00664874  55                   push ebp
// 00664875  8b6c245c             mov ebp, dword ptr [esp + 0x5c]
// 00664879  56                   push esi
// 0066487a  8bd8                 mov ebx, eax
// 0066487c  8b03                 mov eax, dword ptr [ebx]
// 0066487e  57                   push edi
// 0066487f  50                   push eax
// 00664880  e8cbf7ffff           call 0x664050
// 00664885  8b4338               mov eax, dword ptr [ebx + 0x38]
// 00664888  8b08                 mov ecx, dword ptr [eax]
// 0066488a  33ff                 xor edi, edi
// 0066488c  83c404               add esp, 4
// 0066488f  8d51ff               lea edx, [ecx - 1]
// 00664892  8910                 mov dword ptr [eax], edx
// 00664894  3bcf                 cmp ecx, edi
// 00664896  760f                 jbe 0x6648a7
// 00664898  8b4b38               mov ecx, dword ptr [ebx + 0x38]
// 0066489b  8b5104               mov edx, dword ptr [ecx + 4]
// 0066489e  0fb602               movzx eax, byte ptr [edx]
// 006648a1  42                   inc edx
// 006648a2  895104               mov dword ptr [ecx + 4], edx
// 006648a5  eb0c                 jmp 0x6648b3
// 006648a7  8b4338               mov eax, dword ptr [ebx + 0x38]
// 006648aa  50                   push eax
// 006648ab  e880afffff           call 0x65f830
// 006648b0  83c404               add esp, 4
// 006648b3  8903                 mov dword ptr [ebx], eax
// 006648b5  83f80a               cmp eax, 0xa
// 006648b8  7405                 je 0x6648bf
// 006648ba  83f80d               cmp eax, 0xd
// 006648bd  7507                 jne 0x6648c6
// 006648bf  8bf3                 mov esi, ebx
// 006648c1  e8baf9ffff           call 0x664280
// 006648c6  8b03                 mov eax, dword ptr [ebx]
// 006648c8  8d4801               lea ecx, [eax + 1]
// 006648cb  83f95e               cmp ecx, 0x5e
// 006648ce  0f87cc000000         ja 0x6649a0
// 006648d4  0fb689544a6600       movzx ecx, byte ptr [ecx + 0x664a54]
// 006648db  ff248d444a6600       jmp dword ptr [ecx*4 + 0x664a44]
// 006648e2  be0ccb8400           mov esi, 0x84cb0c
// 006648e7  3bef                 cmp ebp, edi
// 006648e9  7505                 jne 0x6648f0
// 006648eb  bef4ca8400           mov esi, 0x84caf4
// 006648f0  8b5340               mov edx, dword ptr [ebx + 0x40]
// 006648f3  6a50                 push 0x50
// 006648f5  83c210               add edx, 0x10
// 006648f8  52                   push edx
// 006648f9  8d442418             lea eax, [esp + 0x18]
// 006648fd  50                   push eax
// 006648fe  e8dde1fbff           call 0x622ae0
// 00664903  8b4b04               mov ecx, dword ptr [ebx + 4]
// 00664906  8b4334               mov eax, dword ptr [ebx + 0x34]
// 00664909  56                   push esi
// 0066490a  51                   push ecx
// 0066490b  8d542424             lea edx, [esp + 0x24]
// 0066490f  52                   push edx
// 00664910  68104a8400           push 0x844a10
// 00664915  50                   push eax
// 00664916  e8a5e1fbff           call 0x622ac0
// 0066491b  8b0d78ca8400         mov ecx, dword ptr [0x84ca78]
// 00664921  8b5334               mov edx, dword ptr [ebx + 0x34]
// 00664924  51                   push ecx
// 00664925  50                   push eax
// 00664926  68acca8400           push 0x84caac
// 0066492b  52                   push edx
// 0066492c  e88fe1fbff           call 0x622ac0
// 00664931  8b4334               mov eax, dword ptr [ebx + 0x34]
// 00664934  6a03                 push 3
// 00664936  50                   push eax
// 00664937  e814d7fbff           call 0x622050
// 0066493c  83c438               add esp, 0x38
// 0066493f  eb85                 jmp 0x6648c6
// 00664941  8bf3                 mov esi, ebx
// 00664943  e8d8fdffff           call 0x664720
// 00664948  8b742468             mov esi, dword ptr [esp + 0x68]
// 0066494c  3bc6                 cmp eax, esi
// 0066494e  0f8572ffffff         jne 0x6648c6
// 00664954  8b0b                 mov ecx, dword ptr [ebx]
// 00664956  51                   push ecx
// 00664957  e8f4f6ffff           call 0x664050
// 0066495c  8b4338               mov eax, dword ptr [ebx + 0x38]
// 0066495f  8b08                 mov ecx, dword ptr [eax]
// 00664961  83c404               add esp, 4
// 00664964  8d51ff               lea edx, [ecx - 1]
// 00664967  8910                 mov dword ptr [eax], edx
// 00664969  3bcf                 cmp ecx, edi
// 0066496b  7675                 jbe 0x6649e2
// 0066496d  8b4b38               mov ecx, dword ptr [ebx + 0x38]
// 00664970  8b5104               mov edx, dword ptr [ecx + 4]
// 00664973  0fb602               movzx eax, byte ptr [edx]
// 00664976  42                   inc edx
// 00664977  895104               mov dword ptr [ecx + 4], edx
// 0066497a  eb72                 jmp 0x6649ee
// 0066497c  6a0a                 push 0xa
// 0066497e  e8cdf6ffff           call 0x664050
// 00664983  83c404               add esp, 4
// 00664986  8bf3                 mov esi, ebx
// 00664988  e8f3f8ffff           call 0x664280
// 0066498d  3bef                 cmp ebp, edi
// 0066498f  0f8531ffffff         jne 0x6648c6
// 00664995  8b4b3c               mov ecx, dword ptr [ebx + 0x3c]
// 00664998  897904               mov dword ptr [ecx + 4], edi
// 0066499b  e926ffffff           jmp 0x6648c6
// 006649a0  3bef                 cmp ebp, edi
// 006649a2  7409                 je 0x6649ad
// 006649a4  50                   push eax
// 006649a5  e8a6f6ffff           call 0x664050
// 006649aa  83c404               add esp, 4
// 006649ad  8b4338               mov eax, dword ptr [ebx + 0x38]
// 006649b0  8b08                 mov ecx, dword ptr [eax]
// 006649b2  8d51ff               lea edx, [ecx - 1]
// 006649b5  8910                 mov dword ptr [eax], edx
// 006649b7  3bcf                 cmp ecx, edi
// 006649b9  7614                 jbe 0x6649cf
// 006649bb  8b4b38               mov ecx, dword ptr [ebx + 0x38]
// 006649be  8b5104               mov edx, dword ptr [ecx + 4]
// 006649c1  0fb602               movzx eax, byte ptr [edx]
// 006649c4  42                   inc edx
// 006649c5  895104               mov dword ptr [ecx + 4], edx
// 006649c8  8903                 mov dword ptr [ebx], eax
// 006649ca  e9f7feffff           jmp 0x6648c6
// 006649cf  8b4338               mov eax, dword ptr [ebx + 0x38]
// 006649d2  50                   push eax
// 006649d3  e858aeffff           call 0x65f830
// 006649d8  83c404               add esp, 4
// 006649db  8903                 mov dword ptr [ebx], eax
// 006649dd  e9e4feffff           jmp 0x6648c6
// 006649e2  8b4338               mov eax, dword ptr [ebx + 0x38]
// 006649e5  50                   push eax
// 006649e6  e845aeffff           call 0x65f830
// 006649eb  83c404               add esp, 4
// 006649ee  8903                 mov dword ptr [ebx], eax
// 006649f0  3bef                 cmp ebp, edi
// 006649f2  7448                 je 0x664a3c
// 006649f4  8b4b3c               mov ecx, dword ptr [ebx + 0x3c]
// 006649f7  8b4104               mov eax, dword ptr [ecx + 4]
// 006649fa  8b09                 mov ecx, dword ptr [ecx]
// 006649fc  8d1436               lea edx, [esi + esi]
// 006649ff  2bc2                 sub eax, edx
// 00664a01  83e804               sub eax, 4
// 00664a04  8d4c3102             lea ecx, [ecx + esi + 2]
// 00664a08  8b7334               mov esi, dword ptr [ebx + 0x34]
// 00664a0b  50                   push eax
// 00664a0c  51                   push ecx
// 00664a0d  56                   push esi
// 00664a0e  e8eda8ffff           call 0x65f300
// 00664a13  8b5330               mov edx, dword ptr [ebx + 0x30]
// 00664a16  8bf8                 mov edi, eax
// 00664a18  8b4204               mov eax, dword ptr [edx + 4]
// 00664a1b  57                   push edi
// 00664a1c  50                   push eax
// 00664a1d  56                   push esi
// 00664a1e  e82da7ffff           call 0x65f150
// 00664a23  83c418               add esp, 0x18
// 00664a26  83780800             cmp dword ptr [eax + 8], 0
// 00664a2a  750d                 jne 0x664a39
// 00664a2c  c70001000000         mov dword ptr [eax], 1
// 00664a32  c7400801000000       mov dword ptr [eax + 8], 1
// 00664a39  897d00               mov dword ptr [ebp], edi
// 00664a3c  5f                   pop edi
// 00664a3d  5e                   pop esi
// 00664a3e  5d                   pop ebp
// 00664a3f  5b                   pop ebx
// 00664a40  83c450               add esp, 0x50
// 00664a43  c3                   ret 
// 00664a44  e248                 loop 0x664a8e
// 00664a46  66007c4966           add byte ptr [ecx + ecx*2 + 0x66], bh
// 00664a4b  004149               add byte ptr [ecx + 0x49], al
// 00664a4e  6600a049660000       add byte ptr [eax + 0x6649], ah
// 00664a55  0303                 add eax, dword ptr [ebx]
// 00664a57  0303                 add eax, dword ptr [ebx]
// 00664a59  0303                 add eax, dword ptr [ebx]
// 00664a5b  0303                 add eax, dword ptr [ebx]
// 00664a5d  0303                 add eax, dword ptr [ebx]
// 00664a5f  0103                 add dword ptr [ebx], eax
// 00664a61  0301                 add eax, dword ptr [ecx]
// 00664a63  0303                 add eax, dword ptr [ebx]
// 00664a65  0303                 add eax, dword ptr [ebx]
// 00664a67  0303                 add eax, dword ptr [ebx]
// 00664a69  0303                 add eax, dword ptr [ebx]
// 00664a6b  0303                 add eax, dword ptr [ebx]
// 00664a6d  0303                 add eax, dword ptr [ebx]
// 00664a6f  0303                 add eax, dword ptr [ebx]
// 00664a71  0303                 add eax, dword ptr [ebx]
// 00664a73  0303                 add eax, dword ptr [ebx]
// 00664a75  0303                 add eax, dword ptr [ebx]
// 00664a77  0303                 add eax, dword ptr [ebx]
// 00664a79  0303                 add eax, dword ptr [ebx]
// 00664a7b  0303                 add eax, dword ptr [ebx]
// 00664a7d  0303                 add eax, dword ptr [ebx]
// 00664a7f  0303                 add eax, dword ptr [ebx]
// 00664a81  0303                 add eax, dword ptr [ebx]
// 00664a83  0303                 add eax, dword ptr [ebx]
// 00664a85  0303                 add eax, dword ptr [ebx]
// 00664a87  0303                 add eax, dword ptr [ebx]
// 00664a89  0303                 add eax, dword ptr [ebx]
// 00664a8b  0303                 add eax, dword ptr [ebx]
// 00664a8d  0303                 add eax, dword ptr [ebx]
// 00664a8f  0303                 add eax, dword ptr [ebx]
// 00664a91  0303                 add eax, dword ptr [ebx]
// 00664a93  0303                 add eax, dword ptr [ebx]
// 00664a95  0303                 add eax, dword ptr [ebx]
// 00664a97  0303                 add eax, dword ptr [ebx]
// 00664a99  0303                 add eax, dword ptr [ebx]
// 00664a9b  0303                 add eax, dword ptr [ebx]
// 00664a9d  0303                 add eax, dword ptr [ebx]
// 00664a9f  0303                 add eax, dword ptr [ebx]
// 00664aa1  0303                 add eax, dword ptr [ebx]
// 00664aa3  0303                 add eax, dword ptr [ebx]
// 00664aa5  0303                 add eax, dword ptr [ebx]
// 00664aa7  0303                 add eax, dword ptr [ebx]
// 00664aa9  0303                 add eax, dword ptr [ebx]
// 00664aab  0303                 add eax, dword ptr [ebx]
// 00664aad  0303                 add eax, dword ptr [ebx]
// 00664aaf  0303                 add eax, dword ptr [ebx]
// 00664ab1  0302                 add eax, dword ptr [edx]

// from server: 24% by colin
// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4-dll-nolstr llex.c
