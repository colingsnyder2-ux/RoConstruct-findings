// from server: 100% by auto
// roc 2009-06 005a2a30  unit: seg_005a0000  size: 305 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a2a30
//
// 005a2a30  53                   push ebx
// 005a2a31  8b5e1c               mov ebx, dword ptr [esi + 0x1c]
// 005a2a34  55                   push ebp
// 005a2a35  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005a2a39  85ed                 test ebp, ebp
// 005a2a3b  7519                 jne 0x5a2a56
// 005a2a3d  8b4620               mov eax, dword ptr [esi + 0x20]
// 005a2a40  8b08                 mov ecx, dword ptr [eax]
// 005a2a42  c7411428000000       mov dword ptr [ecx + 0x14], 0x28
// 005a2a49  8b4620               mov eax, dword ptr [esi + 0x20]
// 005a2a4c  8b10                 mov edx, dword ptr [eax]
// 005a2a4e  50                   push eax
// 005a2a4f  8b02                 mov eax, dword ptr [edx]
// 005a2a51  ffd0                 call eax
// 005a2a53  83c404               add esp, 4
// 005a2a56  807e0c00             cmp byte ptr [esi + 0xc], 0
// 005a2a5a  0f85fe000000         jne 0x5a2b5e
// 005a2a60  57                   push edi
// 005a2a61  8bcd                 mov ecx, ebp
// 005a2a63  bf01000000           mov edi, 1
// 005a2a68  d3e7                 shl edi, cl
// 005a2a6a  03dd                 add ebx, ebp
// 005a2a6c  b918000000           mov ecx, 0x18
// 005a2a71  2bcb                 sub ecx, ebx
// 005a2a73  4f                   dec edi
// 005a2a74  237c2410             and edi, dword ptr [esp + 0x10]
// 005a2a78  d3e7                 shl edi, cl
// 005a2a7a  0b7e18               or edi, dword ptr [esi + 0x18]
// 005a2a7d  83fb08               cmp ebx, 8
// 005a2a80  0f8cd1000000         jl 0x5a2b57
// 005a2a86  8beb                 mov ebp, ebx
// 005a2a88  c1ed03               shr ebp, 3
// 005a2a8b  8bcd                 mov ecx, ebp
// 005a2a8d  f7d9                 neg ecx
// 005a2a8f  8d14cb               lea edx, [ebx + ecx*8]
// 005a2a92  896c2414             mov dword ptr [esp + 0x14], ebp
// 005a2a96  89542410             mov dword ptr [esp + 0x10], edx
// 005a2a9a  8d9b00000000         lea ebx, [ebx]
// 005a2aa0  8b4610               mov eax, dword ptr [esi + 0x10]
// 005a2aa3  8bdf                 mov ebx, edi
// 005a2aa5  c1fb10               sar ebx, 0x10
// 005a2aa8  81e3ff000000         and ebx, 0xff
// 005a2aae  8818                 mov byte ptr [eax], bl
// 005a2ab0  ff4610               inc dword ptr [esi + 0x10]
// 005a2ab3  834614ff             add dword ptr [esi + 0x14], -1
// 005a2ab7  753c                 jne 0x5a2af5
// 005a2ab9  8b4620               mov eax, dword ptr [esi + 0x20]
// 005a2abc  8b6818               mov ebp, dword ptr [eax + 0x18]
// 005a2abf  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005a2ac2  50                   push eax
// 005a2ac3  ffd1                 call ecx
// 005a2ac5  83c404               add esp, 4
// 005a2ac8  84c0                 test al, al
// 005a2aca  7519                 jne 0x5a2ae5
// 005a2acc  8b5620               mov edx, dword ptr [esi + 0x20]
// 005a2acf  8b02                 mov eax, dword ptr [edx]
// 005a2ad1  c7401418000000       mov dword ptr [eax + 0x14], 0x18
// 005a2ad8  8b4620               mov eax, dword ptr [esi + 0x20]
// 005a2adb  8b08                 mov ecx, dword ptr [eax]
// 005a2add  8b11                 mov edx, dword ptr [ecx]
// 005a2adf  50                   push eax
// 005a2ae0  ffd2                 call edx
// 005a2ae2  83c404               add esp, 4
// 005a2ae5  8b4500               mov eax, dword ptr [ebp]
// 005a2ae8  894610               mov dword ptr [esi + 0x10], eax
// 005a2aeb  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005a2aee  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005a2af2  894e14               mov dword ptr [esi + 0x14], ecx
// 005a2af5  81fbff000000         cmp ebx, 0xff
// 005a2afb  7546                 jne 0x5a2b43
// 005a2afd  8b5610               mov edx, dword ptr [esi + 0x10]
// 005a2b00  c60200               mov byte ptr [edx], 0
// 005a2b03  ff4610               inc dword ptr [esi + 0x10]
// 005a2b06  834614ff             add dword ptr [esi + 0x14], -1
// 005a2b0a  7537                 jne 0x5a2b43
// 005a2b0c  8b4620               mov eax, dword ptr [esi + 0x20]
// 005a2b0f  8b5818               mov ebx, dword ptr [eax + 0x18]
// 005a2b12  50                   push eax
// 005a2b13  8b430c               mov eax, dword ptr [ebx + 0xc]
// 005a2b16  ffd0                 call eax
// 005a2b18  83c404               add esp, 4
// 005a2b1b  84c0                 test al, al
// 005a2b1d  7519                 jne 0x5a2b38
// 005a2b1f  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 005a2b22  8b11                 mov edx, dword ptr [ecx]
// 005a2b24  c7421418000000       mov dword ptr [edx + 0x14], 0x18
// 005a2b2b  8b4620               mov eax, dword ptr [esi + 0x20]
// 005a2b2e  8b08                 mov ecx, dword ptr [eax]
// 005a2b30  8b11                 mov edx, dword ptr [ecx]
// 005a2b32  50                   push eax
// 005a2b33  ffd2                 call edx
// 005a2b35  83c404               add esp, 4
// 005a2b38  8b03                 mov eax, dword ptr [ebx]
// 005a2b3a  894610               mov dword ptr [esi + 0x10], eax
// 005a2b3d  8b4b04               mov ecx, dword ptr [ebx + 4]
// 005a2b40  894e14               mov dword ptr [esi + 0x14], ecx
// 005a2b43  c1e708               shl edi, 8
// 005a2b46  83ed01               sub ebp, 1
// 005a2b49  896c2414             mov dword ptr [esp + 0x14], ebp
// 005a2b4d  0f854dffffff         jne 0x5a2aa0
// 005a2b53  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005a2b57  897e18               mov dword ptr [esi + 0x18], edi
// 005a2b5a  895e1c               mov dword ptr [esi + 0x1c], ebx
// 005a2b5d  5f                   pop edi
// 005a2b5e  5d                   pop ebp
// 005a2b5f  5b                   pop ebx
// 005a2b60  c3                   ret 
// library jpeg-6b/jcphuff.c (function _emit_bits)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
