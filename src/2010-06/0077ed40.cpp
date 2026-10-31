// roc 2010-06 0077ed40  unit: seg_00770000  size: 311 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077ed40
//
// 0077ed40  83ec08               sub esp, 8
// 0077ed43  53                   push ebx
// 0077ed44  55                   push ebp
// 0077ed45  56                   push esi
// 0077ed46  8b37                 mov esi, dword ptr [edi]
// 0077ed48  0fb64e48             movzx ecx, byte ptr [esi + 0x48]
// 0077ed4c  8b6e24               mov ebp, dword ptr [esi + 0x24]
// 0077ed4f  8d5e24               lea ebx, [esi + 0x24]
// 0077ed52  33c0                 xor eax, eax
// 0077ed54  896c2410             mov dword ptr [esp + 0x10], ebp
// 0077ed58  85c9                 test ecx, ecx
// 0077ed5a  7e3e                 jle 0x77ed9a
// 0077ed5c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0077ed60  8b11                 mov edx, dword ptr [ecx]
// 0077ed62  8954240c             mov dword ptr [esp + 0xc], edx
// 0077ed66  8d4f34               lea ecx, [edi + 0x34]
// 0077ed69  8da42400000000       lea esp, [esp]
// 0077ed70  0fb651ff             movzx edx, byte ptr [ecx - 1]
// 0077ed74  3b54240c             cmp edx, dword ptr [esp + 0xc]
// 0077ed78  7510                 jne 0x77ed8a
// 0077ed7a  0fb611               movzx edx, byte ptr [ecx]
// 0077ed7d  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0077ed81  3b5508               cmp edx, dword ptr [ebp + 8]
// 0077ed84  0f84e6000000         je 0x77ee70
// 0077ed8a  0fb65648             movzx edx, byte ptr [esi + 0x48]
// 0077ed8e  40                   inc eax
// 0077ed8f  83c102               add ecx, 2
// 0077ed92  3bc2                 cmp eax, edx
// 0077ed94  7cda                 jl 0x77ed70
// 0077ed96  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0077ed9a  0fb64648             movzx eax, byte ptr [esi + 0x48]
// 0077ed9e  40                   inc eax
// 0077ed9f  83f83c               cmp eax, 0x3c
// 0077eda2  7e42                 jle 0x77ede6
// 0077eda4  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0077eda7  68ec30a500           push 0xa530ec
// 0077edac  6a3c                 push 0x3c
// 0077edae  85c0                 test eax, eax
// 0077edb0  7513                 jne 0x77edc5
// 0077edb2  8b4710               mov eax, dword ptr [edi + 0x10]
// 0077edb5  687030a500           push 0xa53070
// 0077edba  50                   push eax
// 0077edbb  e82040fbff           call 0x732de0
// 0077edc0  83c410               add esp, 0x10
// 0077edc3  eb12                 jmp 0x77edd7
// 0077edc5  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 0077edc8  50                   push eax
// 0077edc9  684830a500           push 0xa53048
// 0077edce  51                   push ecx
// 0077edcf  e80c40fbff           call 0x732de0
// 0077edd4  83c414               add esp, 0x14
// 0077edd7  8b570c               mov edx, dword ptr [edi + 0xc]
// 0077edda  6a00                 push 0
// 0077eddc  50                   push eax
// 0077eddd  52                   push edx
// 0077edde  e80d370000           call 0x7824f0
// 0077ede3  83c40c               add esp, 0xc
// 0077ede6  0fb64648             movzx eax, byte ptr [esi + 0x48]
// 0077edea  40                   inc eax
// 0077edeb  3b03                 cmp eax, dword ptr [ebx]
// 0077eded  7e20                 jle 0x77ee0f
// 0077edef  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0077edf2  8b5710               mov edx, dword ptr [edi + 0x10]
// 0077edf5  68fe08a000           push 0xa008fe
// 0077edfa  68fdffff7f           push 0x7ffffffd
// 0077edff  6a04                 push 4
// 0077ee01  53                   push ebx
// 0077ee02  51                   push ecx
// 0077ee03  52                   push edx
// 0077ee04  e847fcffff           call 0x77ea50
// 0077ee09  83c418               add esp, 0x18
// 0077ee0c  89461c               mov dword ptr [esi + 0x1c], eax
// 0077ee0f  3b2b                 cmp ebp, dword ptr [ebx]
// 0077ee11  7d0f                 jge 0x77ee22
// 0077ee13  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0077ee16  c704a800000000       mov dword ptr [eax + ebp*4], 0
// 0077ee1d  45                   inc ebp
// 0077ee1e  3b2b                 cmp ebp, dword ptr [ebx]
// 0077ee20  7cf1                 jl 0x77ee13
// 0077ee22  0fb64e48             movzx ecx, byte ptr [esi + 0x48]
// 0077ee26  8b442418             mov eax, dword ptr [esp + 0x18]
// 0077ee2a  8b561c               mov edx, dword ptr [esi + 0x1c]
// 0077ee2d  89048a               mov dword ptr [edx + ecx*4], eax
// 0077ee30  f6400503             test byte ptr [eax + 5], 3
// 0077ee34  7414                 je 0x77ee4a
// 0077ee36  f6460504             test byte ptr [esi + 5], 4
// 0077ee3a  740e                 je 0x77ee4a
// 0077ee3c  50                   push eax
// 0077ee3d  8b4710               mov eax, dword ptr [edi + 0x10]
// 0077ee40  56                   push esi
// 0077ee41  50                   push eax
// 0077ee42  e809c1ffff           call 0x77af50
// 0077ee47  83c40c               add esp, 0xc
// 0077ee4a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0077ee4e  0fb610               movzx edx, byte ptr [eax]
// 0077ee51  0fb64e48             movzx ecx, byte ptr [esi + 0x48]
// 0077ee55  88544f33             mov byte ptr [edi + ecx*2 + 0x33], dl
// 0077ee59  0fb64e48             movzx ecx, byte ptr [esi + 0x48]
// 0077ee5d  0fb65008             movzx edx, byte ptr [eax + 8]
// 0077ee61  88544f34             mov byte ptr [edi + ecx*2 + 0x34], dl
// 0077ee65  8a4e48               mov cl, byte ptr [esi + 0x48]
// 0077ee68  0fb6c1               movzx eax, cl
// 0077ee6b  fec1                 inc cl
// 0077ee6d  884e48               mov byte ptr [esi + 0x48], cl
// 0077ee70  5e                   pop esi
// 0077ee71  5d                   pop ebp
// 0077ee72  5b                   pop ebx
// 0077ee73  83c408               add esp, 8
// 0077ee76  c3                   ret 
// library lua-5.1.2/roc_espeon_nativeparlistcontext810a97d37dd18cf0.cpp (function ?indexupvalue@@YAHPAUFuncState@@PATTString@@PAUexpdesc@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.2 roc_espeon_nativeparlistcontext810a97d37dd18cf0.cpp
