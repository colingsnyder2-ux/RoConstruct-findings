// roc 2011-06 0057c870  unit: seg_00570000  size: 305 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057c870
//
// 0057c870  53                   push ebx
// 0057c871  8b5e1c               mov ebx, dword ptr [esi + 0x1c]
// 0057c874  55                   push ebp
// 0057c875  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0057c879  85ed                 test ebp, ebp
// 0057c87b  7519                 jne 0x57c896
// 0057c87d  8b4620               mov eax, dword ptr [esi + 0x20]
// 0057c880  8b08                 mov ecx, dword ptr [eax]
// 0057c882  c7411428000000       mov dword ptr [ecx + 0x14], 0x28
// 0057c889  8b4620               mov eax, dword ptr [esi + 0x20]
// 0057c88c  8b10                 mov edx, dword ptr [eax]
// 0057c88e  50                   push eax
// 0057c88f  8b02                 mov eax, dword ptr [edx]
// 0057c891  ffd0                 call eax
// 0057c893  83c404               add esp, 4
// 0057c896  807e0c00             cmp byte ptr [esi + 0xc], 0
// 0057c89a  0f85fe000000         jne 0x57c99e
// 0057c8a0  57                   push edi
// 0057c8a1  8bcd                 mov ecx, ebp
// 0057c8a3  bf01000000           mov edi, 1
// 0057c8a8  d3e7                 shl edi, cl
// 0057c8aa  03dd                 add ebx, ebp
// 0057c8ac  b918000000           mov ecx, 0x18
// 0057c8b1  2bcb                 sub ecx, ebx
// 0057c8b3  4f                   dec edi
// 0057c8b4  237c2410             and edi, dword ptr [esp + 0x10]
// 0057c8b8  d3e7                 shl edi, cl
// 0057c8ba  0b7e18               or edi, dword ptr [esi + 0x18]
// 0057c8bd  83fb08               cmp ebx, 8
// 0057c8c0  0f8cd1000000         jl 0x57c997
// 0057c8c6  8beb                 mov ebp, ebx
// 0057c8c8  c1ed03               shr ebp, 3
// 0057c8cb  8bcd                 mov ecx, ebp
// 0057c8cd  f7d9                 neg ecx
// 0057c8cf  8d14cb               lea edx, [ebx + ecx*8]
// 0057c8d2  896c2414             mov dword ptr [esp + 0x14], ebp
// 0057c8d6  89542410             mov dword ptr [esp + 0x10], edx
// 0057c8da  8d9b00000000         lea ebx, [ebx]
// 0057c8e0  8b4610               mov eax, dword ptr [esi + 0x10]
// 0057c8e3  8bdf                 mov ebx, edi
// 0057c8e5  c1fb10               sar ebx, 0x10
// 0057c8e8  81e3ff000000         and ebx, 0xff
// 0057c8ee  8818                 mov byte ptr [eax], bl
// 0057c8f0  ff4610               inc dword ptr [esi + 0x10]
// 0057c8f3  834614ff             add dword ptr [esi + 0x14], -1
// 0057c8f7  753c                 jne 0x57c935
// 0057c8f9  8b4620               mov eax, dword ptr [esi + 0x20]
// 0057c8fc  8b6818               mov ebp, dword ptr [eax + 0x18]
// 0057c8ff  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0057c902  50                   push eax
// 0057c903  ffd1                 call ecx
// 0057c905  83c404               add esp, 4
// 0057c908  84c0                 test al, al
// 0057c90a  7519                 jne 0x57c925
// 0057c90c  8b5620               mov edx, dword ptr [esi + 0x20]
// 0057c90f  8b02                 mov eax, dword ptr [edx]
// 0057c911  c7401418000000       mov dword ptr [eax + 0x14], 0x18
// 0057c918  8b4620               mov eax, dword ptr [esi + 0x20]
// 0057c91b  8b08                 mov ecx, dword ptr [eax]
// 0057c91d  8b11                 mov edx, dword ptr [ecx]
// 0057c91f  50                   push eax
// 0057c920  ffd2                 call edx
// 0057c922  83c404               add esp, 4
// 0057c925  8b4500               mov eax, dword ptr [ebp]
// 0057c928  894610               mov dword ptr [esi + 0x10], eax
// 0057c92b  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0057c92e  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0057c932  894e14               mov dword ptr [esi + 0x14], ecx
// 0057c935  81fbff000000         cmp ebx, 0xff
// 0057c93b  7546                 jne 0x57c983
// 0057c93d  8b5610               mov edx, dword ptr [esi + 0x10]
// 0057c940  c60200               mov byte ptr [edx], 0
// 0057c943  ff4610               inc dword ptr [esi + 0x10]
// 0057c946  834614ff             add dword ptr [esi + 0x14], -1
// 0057c94a  7537                 jne 0x57c983
// 0057c94c  8b4620               mov eax, dword ptr [esi + 0x20]
// 0057c94f  8b5818               mov ebx, dword ptr [eax + 0x18]
// 0057c952  50                   push eax
// 0057c953  8b430c               mov eax, dword ptr [ebx + 0xc]
// 0057c956  ffd0                 call eax
// 0057c958  83c404               add esp, 4
// 0057c95b  84c0                 test al, al
// 0057c95d  7519                 jne 0x57c978
// 0057c95f  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0057c962  8b11                 mov edx, dword ptr [ecx]
// 0057c964  c7421418000000       mov dword ptr [edx + 0x14], 0x18
// 0057c96b  8b4620               mov eax, dword ptr [esi + 0x20]
// 0057c96e  8b08                 mov ecx, dword ptr [eax]
// 0057c970  8b11                 mov edx, dword ptr [ecx]
// 0057c972  50                   push eax
// 0057c973  ffd2                 call edx
// 0057c975  83c404               add esp, 4
// 0057c978  8b03                 mov eax, dword ptr [ebx]
// 0057c97a  894610               mov dword ptr [esi + 0x10], eax
// 0057c97d  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0057c980  894e14               mov dword ptr [esi + 0x14], ecx
// 0057c983  c1e708               shl edi, 8
// 0057c986  83ed01               sub ebp, 1
// 0057c989  896c2414             mov dword ptr [esp + 0x14], ebp
// 0057c98d  0f854dffffff         jne 0x57c8e0
// 0057c993  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0057c997  897e18               mov dword ptr [esi + 0x18], edi
// 0057c99a  895e1c               mov dword ptr [esi + 0x1c], ebx
// 0057c99d  5f                   pop edi
// 0057c99e  5d                   pop ebp
// 0057c99f  5b                   pop ebx
// 0057c9a0  c3                   ret 
// library jpeg-6b/jcphuff.c (function _emit_bits)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
