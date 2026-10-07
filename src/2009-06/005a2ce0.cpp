// roc 2009-06 005a2ce0  unit: seg_005a0000  size: 356 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a2ce0
//
// 005a2ce0  83ec0c               sub esp, 0xc
// 005a2ce3  55                   push ebp
// 005a2ce4  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005a2ce8  8b4518               mov eax, dword ptr [ebp + 0x18]
// 005a2ceb  8b08                 mov ecx, dword ptr [eax]
// 005a2ced  56                   push esi
// 005a2cee  8bb55c010000         mov esi, dword ptr [ebp + 0x15c]
// 005a2cf4  57                   push edi
// 005a2cf5  8bbd38010000         mov edi, dword ptr [ebp + 0x138]
// 005a2cfb  894e10               mov dword ptr [esi + 0x10], ecx
// 005a2cfe  8b5518               mov edx, dword ptr [ebp + 0x18]
// 005a2d01  8b4204               mov eax, dword ptr [edx + 4]
// 005a2d04  894614               mov dword ptr [esi + 0x14], eax
// 005a2d07  83bdbc00000000       cmp dword ptr [ebp + 0xbc], 0
// 005a2d0e  7414                 je 0x5a2d24
// 005a2d10  837e4400             cmp dword ptr [esi + 0x44], 0
// 005a2d14  750e                 jne 0x5a2d24
// 005a2d16  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 005a2d19  51                   push ecx
// 005a2d1a  8bc6                 mov eax, esi
// 005a2d1c  e81fffffff           call 0x5a2c40
// 005a2d21  83c404               add esp, 4
// 005a2d24  83bd0001000000       cmp dword ptr [ebp + 0x100], 0
// 005a2d2b  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005a2d33  0f8ed1000000         jle 0x5a2e0a
// 005a2d39  0fbfd7               movsx edx, di
// 005a2d3c  8d8504010000         lea eax, [ebp + 0x104]
// 005a2d42  89542414             mov dword ptr [esp + 0x14], edx
// 005a2d46  89442410             mov dword ptr [esp + 0x10], eax
// 005a2d4a  53                   push ebx
// 005a2d4b  eb03                 jmp 0x5a2d50
// 005a2d4d  8d4900               lea ecx, [ecx]
// 005a2d50  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005a2d54  8b39                 mov edi, dword ptr [ecx]
// 005a2d56  8b542424             mov edx, dword ptr [esp + 0x24]
// 005a2d5a  8b442410             mov eax, dword ptr [esp + 0x10]
// 005a2d5e  8b0c82               mov ecx, dword ptr [edx + eax*4]
// 005a2d61  0fbf11               movsx edx, word ptr [ecx]
// 005a2d64  8a4c2418             mov cl, byte ptr [esp + 0x18]
// 005a2d68  8b9cbde8000000       mov ebx, dword ptr [ebp + edi*4 + 0xe8]
// 005a2d6f  d3fa                 sar edx, cl
// 005a2d71  8bc2                 mov eax, edx
// 005a2d73  2b44be24             sub eax, dword ptr [esi + edi*4 + 0x24]
// 005a2d77  8954be24             mov dword ptr [esi + edi*4 + 0x24], edx
// 005a2d7b  89442420             mov dword ptr [esp + 0x20], eax
// 005a2d7f  7906                 jns 0x5a2d87
// 005a2d81  f7d8                 neg eax
// 005a2d83  ff4c2420             dec dword ptr [esp + 0x20]
// 005a2d87  33ff                 xor edi, edi
// 005a2d89  85c0                 test eax, eax
// 005a2d8b  7422                 je 0x5a2daf
// 005a2d8d  8d4900               lea ecx, [ecx]
// 005a2d90  47                   inc edi
// 005a2d91  d1f8                 sar eax, 1
// 005a2d93  75fb                 jne 0x5a2d90
// 005a2d95  83ff0b               cmp edi, 0xb
// 005a2d98  7e15                 jle 0x5a2daf
// 005a2d9a  8b5500               mov edx, dword ptr [ebp]
// 005a2d9d  c7421406000000       mov dword ptr [edx + 0x14], 6
// 005a2da4  8b4500               mov eax, dword ptr [ebp]
// 005a2da7  8b08                 mov ecx, dword ptr [eax]
// 005a2da9  55                   push ebp
// 005a2daa  ffd1                 call ecx
// 005a2dac  83c404               add esp, 4
// 005a2daf  807e0c00             cmp byte ptr [esi + 0xc], 0
// 005a2db3  8b4314               mov eax, dword ptr [ebx + 0x14]
// 005a2db6  740c                 je 0x5a2dc4
// 005a2db8  8b54865c             mov edx, dword ptr [esi + eax*4 + 0x5c]
// 005a2dbc  ff04ba               inc dword ptr [edx + edi*4]
// 005a2dbf  8d04ba               lea eax, [edx + edi*4]
// 005a2dc2  eb19                 jmp 0x5a2ddd
// 005a2dc4  8b44864c             mov eax, dword ptr [esi + eax*4 + 0x4c]
// 005a2dc8  0fbe8c3800040000     movsx ecx, byte ptr [eax + edi + 0x400]
// 005a2dd0  8b14b8               mov edx, dword ptr [eax + edi*4]
// 005a2dd3  51                   push ecx
// 005a2dd4  52                   push edx
// 005a2dd5  e856fcffff           call 0x5a2a30
// 005a2dda  83c408               add esp, 8
// 005a2ddd  85ff                 test edi, edi
// 005a2ddf  740e                 je 0x5a2def
// 005a2de1  8b442420             mov eax, dword ptr [esp + 0x20]
// 005a2de5  57                   push edi
// 005a2de6  50                   push eax
// 005a2de7  e844fcffff           call 0x5a2a30
// 005a2dec  83c408               add esp, 8
// 005a2def  8b442410             mov eax, dword ptr [esp + 0x10]
// 005a2df3  8344241404           add dword ptr [esp + 0x14], 4
// 005a2df8  40                   inc eax
// 005a2df9  3b8500010000         cmp eax, dword ptr [ebp + 0x100]
// 005a2dff  89442410             mov dword ptr [esp + 0x10], eax
// 005a2e03  0f8c47ffffff         jl 0x5a2d50
// 005a2e09  5b                   pop ebx
// 005a2e0a  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 005a2e0d  8b5610               mov edx, dword ptr [esi + 0x10]
// 005a2e10  8911                 mov dword ptr [ecx], edx
// 005a2e12  8b4518               mov eax, dword ptr [ebp + 0x18]
// 005a2e15  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 005a2e18  894804               mov dword ptr [eax + 4], ecx
// 005a2e1b  8badbc000000         mov ebp, dword ptr [ebp + 0xbc]
// 005a2e21  85ed                 test ebp, ebp
// 005a2e23  7416                 je 0x5a2e3b
// 005a2e25  837e4400             cmp dword ptr [esi + 0x44], 0
// 005a2e29  750d                 jne 0x5a2e38
// 005a2e2b  8b5648               mov edx, dword ptr [esi + 0x48]
// 005a2e2e  42                   inc edx
// 005a2e2f  83e207               and edx, 7
// 005a2e32  896e44               mov dword ptr [esi + 0x44], ebp
// 005a2e35  895648               mov dword ptr [esi + 0x48], edx
// 005a2e38  ff4e44               dec dword ptr [esi + 0x44]
// 005a2e3b  5f                   pop edi
// 005a2e3c  5e                   pop esi
// 005a2e3d  b001                 mov al, 1
// 005a2e3f  5d                   pop ebp
// 005a2e40  83c40c               add esp, 0xc
// 005a2e43  c3                   ret 
// library jpeg-6b/jcphuff.c (function _encode_mcu_DC_first)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
