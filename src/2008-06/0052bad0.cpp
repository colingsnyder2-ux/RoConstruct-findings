// roc 2008-06 0052bad0  unit: seg_00520000  size: 458 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052bad0
//
// 0052bad0  51                   push ecx
// 0052bad1  53                   push ebx
// 0052bad2  57                   push edi
// 0052bad3  8bbe80010000         mov edi, dword ptr [esi + 0x180]
// 0052bad9  56                   push esi
// 0052bada  e831fdffff           call 0x52b810
// 0052badf  83c404               add esp, 4
// 0052bae2  8bde                 mov ebx, esi
// 0052bae4  e857ffffff           call 0x52ba40
// 0052bae9  33db                 xor ebx, ebx
// 0052baeb  8bd6                 mov edx, esi
// 0052baed  895f0c               mov dword ptr [edi + 0xc], ebx
// 0052baf0  e89bfcffff           call 0x52b790
// 0052baf5  884710               mov byte ptr [edi + 0x10], al
// 0052baf8  895f14               mov dword ptr [edi + 0x14], ebx
// 0052bafb  895f18               mov dword ptr [edi + 0x18], ebx
// 0052bafe  8a464a               mov al, byte ptr [esi + 0x4a]
// 0052bb01  3ac3                 cmp al, bl
// 0052bb03  7405                 je 0x52bb0a
// 0052bb05  385e40               cmp byte ptr [esi + 0x40], bl
// 0052bb08  7509                 jne 0x52bb13
// 0052bb0a  885e58               mov byte ptr [esi + 0x58], bl
// 0052bb0d  885e59               mov byte ptr [esi + 0x59], bl
// 0052bb10  885e5a               mov byte ptr [esi + 0x5a], bl
// 0052bb13  3ac3                 cmp al, bl
// 0052bb15  745e                 je 0x52bb75
// 0052bb17  385e41               cmp byte ptr [esi + 0x41], bl
// 0052bb1a  7413                 je 0x52bb2f
// 0052bb1c  8b06                 mov eax, dword ptr [esi]
// 0052bb1e  c740142f000000       mov dword ptr [eax + 0x14], 0x2f
// 0052bb25  8b0e                 mov ecx, dword ptr [esi]
// 0052bb27  8b11                 mov edx, dword ptr [ecx]
// 0052bb29  56                   push esi
// 0052bb2a  ffd2                 call edx
// 0052bb2c  83c404               add esp, 4
// 0052bb2f  837e6403             cmp dword ptr [esi + 0x64], 3
// 0052bb33  7455                 je 0x52bb8a
// 0052bb35  885e59               mov byte ptr [esi + 0x59], bl
// 0052bb38  885e5a               mov byte ptr [esi + 0x5a], bl
// 0052bb3b  895e74               mov dword ptr [esi + 0x74], ebx
// 0052bb3e  c6465801             mov byte ptr [esi + 0x58], 1
// 0052bb42  385e58               cmp byte ptr [esi + 0x58], bl
// 0052bb45  7412                 je 0x52bb59
// 0052bb47  56                   push esi
// 0052bb48  e823b30000           call 0x536e70
// 0052bb4d  8b86a8010000         mov eax, dword ptr [esi + 0x1a8]
// 0052bb53  83c404               add esp, 4
// 0052bb56  894714               mov dword ptr [edi + 0x14], eax
// 0052bb59  385e5a               cmp byte ptr [esi + 0x5a], bl
// 0052bb5c  7505                 jne 0x52bb63
// 0052bb5e  385e59               cmp byte ptr [esi + 0x59], bl
// 0052bb61  7412                 je 0x52bb75
// 0052bb63  56                   push esi
// 0052bb64  e8a7a60000           call 0x536210
// 0052bb69  8b8ea8010000         mov ecx, dword ptr [esi + 0x1a8]
// 0052bb6f  83c404               add esp, 4
// 0052bb72  894f18               mov dword ptr [edi + 0x18], ecx
// 0052bb75  385e41               cmp byte ptr [esi + 0x41], bl
// 0052bb78  7542                 jne 0x52bbbc
// 0052bb7a  56                   push esi
// 0052bb7b  385f10               cmp byte ptr [edi + 0x10], bl
// 0052bb7e  7420                 je 0x52bba0
// 0052bb80  e82b940000           call 0x534fb0
// 0052bb85  83c404               add esp, 4
// 0052bb88  eb24                 jmp 0x52bbae
// 0052bb8a  395e74               cmp dword ptr [esi + 0x74], ebx
// 0052bb8d  7406                 je 0x52bb95
// 0052bb8f  c6465901             mov byte ptr [esi + 0x59], 1
// 0052bb93  ebad                 jmp 0x52bb42
// 0052bb95  385e50               cmp byte ptr [esi + 0x50], bl
// 0052bb98  74a4                 je 0x52bb3e
// 0052bb9a  c6465a01             mov byte ptr [esi + 0x5a], 1
// 0052bb9e  eba2                 jmp 0x52bb42
// 0052bba0  e81b8d0000           call 0x5348c0
// 0052bba5  56                   push esi
// 0052bba6  e8c5860000           call 0x534270
// 0052bbab  83c408               add esp, 8
// 0052bbae  0fb6565a             movzx edx, byte ptr [esi + 0x5a]
// 0052bbb2  52                   push edx
// 0052bbb3  56                   push esi
// 0052bbb4  e867810000           call 0x533d20
// 0052bbb9  83c408               add esp, 8
// 0052bbbc  56                   push esi
// 0052bbbd  e81e7e0000           call 0x5339e0
// 0052bbc2  83c404               add esp, 4
// 0052bbc5  56                   push esi
// 0052bbc6  389ec9000000         cmp byte ptr [esi + 0xc9], bl
// 0052bbcc  7411                 je 0x52bbdf
// 0052bbce  8b06                 mov eax, dword ptr [esi]
// 0052bbd0  c7401401000000       mov dword ptr [eax + 0x14], 1
// 0052bbd7  8b0e                 mov ecx, dword ptr [esi]
// 0052bbd9  8b11                 mov edx, dword ptr [ecx]
// 0052bbdb  ffd2                 call edx
// 0052bbdd  eb14                 jmp 0x52bbf3
// 0052bbdf  389ec8000000         cmp byte ptr [esi + 0xc8], bl
// 0052bbe5  7407                 je 0x52bbee
// 0052bbe7  e8647a0000           call 0x533650
// 0052bbec  eb05                 jmp 0x52bbf3
// 0052bbee  e8ed6d0000           call 0x5329e0
// 0052bbf3  8b8690010000         mov eax, dword ptr [esi + 0x190]
// 0052bbf9  83c404               add esp, 4
// 0052bbfc  385810               cmp byte ptr [eax + 0x10], bl
// 0052bbff  7509                 jne 0x52bc0a
// 0052bc01  885c2408             mov byte ptr [esp + 8], bl
// 0052bc05  385e40               cmp byte ptr [esi + 0x40], bl
// 0052bc08  7405                 je 0x52bc0f
// 0052bc0a  c644240801           mov byte ptr [esp + 8], 1
// 0052bc0f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0052bc13  51                   push ecx
// 0052bc14  56                   push esi
// 0052bc15  e8c6610000           call 0x531de0
// 0052bc1a  83c408               add esp, 8
// 0052bc1d  385e41               cmp byte ptr [esi + 0x41], bl
// 0052bc20  750a                 jne 0x52bc2c
// 0052bc22  53                   push ebx
// 0052bc23  56                   push esi
// 0052bc24  e897520000           call 0x530ec0
// 0052bc29  83c408               add esp, 8
// 0052bc2c  8b5604               mov edx, dword ptr [esi + 4]
// 0052bc2f  8b4218               mov eax, dword ptr [edx + 0x18]
// 0052bc32  56                   push esi
// 0052bc33  ffd0                 call eax
// 0052bc35  8b8e90010000         mov ecx, dword ptr [esi + 0x190]
// 0052bc3b  8b5108               mov edx, dword ptr [ecx + 8]
// 0052bc3e  56                   push esi
// 0052bc3f  ffd2                 call edx
// 0052bc41  8b4e08               mov ecx, dword ptr [esi + 8]
// 0052bc44  83c408               add esp, 8
// 0052bc47  3bcb                 cmp ecx, ebx
// 0052bc49  744b                 je 0x52bc96
// 0052bc4b  385e40               cmp byte ptr [esi + 0x40], bl
// 0052bc4e  7546                 jne 0x52bc96
// 0052bc50  8b8690010000         mov eax, dword ptr [esi + 0x190]
// 0052bc56  385810               cmp byte ptr [eax + 0x10], bl
// 0052bc59  743b                 je 0x52bc96
// 0052bc5b  8b4624               mov eax, dword ptr [esi + 0x24]
// 0052bc5e  389ec8000000         cmp byte ptr [esi + 0xc8], bl
// 0052bc64  7404                 je 0x52bc6a
// 0052bc66  8d444002             lea eax, [eax + eax*2 + 2]
// 0052bc6a  895904               mov dword ptr [ecx + 4], ebx
// 0052bc6d  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 0052bc73  8b5608               mov edx, dword ptr [esi + 8]
// 0052bc76  0fafc8               imul ecx, eax
// 0052bc79  894a08               mov dword ptr [edx + 8], ecx
// 0052bc7c  8b4608               mov eax, dword ptr [esi + 8]
// 0052bc7f  89580c               mov dword ptr [eax + 0xc], ebx
// 0052bc82  8b5608               mov edx, dword ptr [esi + 8]
// 0052bc85  33c9                 xor ecx, ecx
// 0052bc87  385e5a               cmp byte ptr [esi + 0x5a], bl
// 0052bc8a  0f95c1               setne cl
// 0052bc8d  83c102               add ecx, 2
// 0052bc90  894a10               mov dword ptr [edx + 0x10], ecx
// 0052bc93  ff470c               inc dword ptr [edi + 0xc]
// 0052bc96  5f                   pop edi
// 0052bc97  5b                   pop ebx
// 0052bc98  59                   pop ecx
// 0052bc99  c3                   ret 
// library jpeg-6b/jdmaster.c (function _master_selection)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmaster.c
