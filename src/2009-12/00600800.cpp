// roc 2009-12 00600800  unit: G3D::_internal::DialogTemplate  size: 894 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00600800
//
// 00600800  53                   push ebx
// 00600801  56                   push esi
// 00600802  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00600806  57                   push edi
// 00600807  33db                 xor ebx, ebx
// 00600809  8da42400000000       lea esp, [esp]
// 00600810  399e7c010000         cmp dword ptr [esi + 0x17c], ebx
// 00600816  751f                 jne 0x600837
// 00600818  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 0060081e  56                   push esi
// 0060081f  38580c               cmp byte ptr [eax + 0xc], bl
// 00600822  7507                 jne 0x60082b
// 00600824  e837ffffff           call 0x600760
// 00600829  eb05                 jmp 0x600830
// 0060082b  e810feffff           call 0x600640
// 00600830  83c404               add esp, 4
// 00600833  84c0                 test al, al
// 00600835  7430                 je 0x600867
// 00600837  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 0060083d  8d48ff               lea ecx, [eax - 1]
// 00600840  81f9fd000000         cmp ecx, 0xfd
// 00600846  0f8789010000         ja 0x6009d5
// 0060084c  0fb689800a6000       movzx ecx, byte ptr [ecx + 0x600a80]
// 00600853  ff248d400a6000       jmp dword ptr [ecx*4 + 0x600a40]
// 0060085a  e8b1ebffff           call 0x5ff410
// 0060085f  84c0                 test al, al
// 00600861  0f858c010000         jne 0x6009f3
// 00600867  5f                   pop edi
// 00600868  5e                   pop esi
// 00600869  33c0                 xor eax, eax
// 0060086b  5b                   pop ebx
// 0060086c  c3                   ret 
// 0060086d  32c9                 xor cl, cl
// 0060086f  32c0                 xor al, al
// 00600871  e84aecffff           call 0x5ff4c0
// 00600876  84c0                 test al, al
// 00600878  74ed                 je 0x600867
// 0060087a  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 00600880  eb8e                 jmp 0x600810
// 00600882  32c9                 xor cl, cl
// 00600884  b001                 mov al, 1
// 00600886  e835ecffff           call 0x5ff4c0
// 0060088b  84c0                 test al, al
// 0060088d  74d8                 je 0x600867
// 0060088f  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 00600895  e976ffffff           jmp 0x600810
// 0060089a  b101                 mov cl, 1
// 0060089c  32c0                 xor al, al
// 0060089e  e81decffff           call 0x5ff4c0
// 006008a3  84c0                 test al, al
// 006008a5  74c0                 je 0x600867
// 006008a7  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 006008ad  e95effffff           jmp 0x600810
// 006008b2  b101                 mov cl, 1
// 006008b4  8ac1                 mov al, cl
// 006008b6  e805ecffff           call 0x5ff4c0
// 006008bb  84c0                 test al, al
// 006008bd  74a8                 je 0x600867
// 006008bf  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 006008c5  e946ffffff           jmp 0x600810
// 006008ca  8b16                 mov edx, dword ptr [esi]
// 006008cc  c742143c000000       mov dword ptr [edx + 0x14], 0x3c
// 006008d3  8b06                 mov eax, dword ptr [esi]
// 006008d5  8b8e7c010000         mov ecx, dword ptr [esi + 0x17c]
// 006008db  894818               mov dword ptr [eax + 0x18], ecx
// 006008de  8b16                 mov edx, dword ptr [esi]
// 006008e0  8b02                 mov eax, dword ptr [edx]
// 006008e2  56                   push esi
// 006008e3  ffd0                 call eax
// 006008e5  83c404               add esp, 4
// 006008e8  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 006008ee  e91dffffff           jmp 0x600810
// 006008f3  56                   push esi
// 006008f4  e897fcffff           call 0x600590
// 006008f9  83c404               add esp, 4
// 006008fc  84c0                 test al, al
// 006008fe  0f8463ffffff         je 0x600867
// 00600904  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 0060090a  e901ffffff           jmp 0x600810
// 0060090f  56                   push esi
// 00600910  e8abf1ffff           call 0x5ffac0
// 00600915  83c404               add esp, 4
// 00600918  84c0                 test al, al
// 0060091a  0f8447ffffff         je 0x600867
// 00600920  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 00600926  e9e5feffff           jmp 0x600810
// 0060092b  8bfe                 mov edi, esi
// 0060092d  e88ef4ffff           call 0x5ffdc0
// 00600932  84c0                 test al, al
// 00600934  0f842dffffff         je 0x600867
// 0060093a  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 00600940  e9cbfeffff           jmp 0x600810
// 00600945  56                   push esi
// 00600946  e8d5f6ffff           call 0x600020
// 0060094b  83c404               add esp, 4
// 0060094e  84c0                 test al, al
// 00600950  0f8411ffffff         je 0x600867
// 00600956  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 0060095c  e9affeffff           jmp 0x600810
// 00600961  8b8e94010000         mov ecx, dword ptr [esi + 0x194]
// 00600967  8b94819cfcffff       mov edx, dword ptr [ecx + eax*4 - 0x364]
// 0060096e  56                   push esi
// 0060096f  ffd2                 call edx
// 00600971  83c404               add esp, 4
// 00600974  84c0                 test al, al
// 00600976  0f84ebfeffff         je 0x600867
// 0060097c  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 00600982  e989feffff           jmp 0x600810
// 00600987  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 0060098d  8b4818               mov ecx, dword ptr [eax + 0x18]
// 00600990  56                   push esi
// 00600991  ffd1                 call ecx
// 00600993  83c404               add esp, 4
// 00600996  84c0                 test al, al
// 00600998  0f84c9feffff         je 0x600867
// 0060099e  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 006009a4  e967feffff           jmp 0x600810
// 006009a9  8b16                 mov edx, dword ptr [esi]
// 006009ab  c742145c000000       mov dword ptr [edx + 0x14], 0x5c
// 006009b2  8b06                 mov eax, dword ptr [esi]
// 006009b4  8b8e7c010000         mov ecx, dword ptr [esi + 0x17c]
// 006009ba  894818               mov dword ptr [eax + 0x18], ecx
// 006009bd  8b16                 mov edx, dword ptr [esi]
// 006009bf  8b4204               mov eax, dword ptr [edx + 4]
// 006009c2  6a01                 push 1
// 006009c4  56                   push esi
// 006009c5  ffd0                 call eax
// 006009c7  83c408               add esp, 8
// 006009ca  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 006009d0  e93bfeffff           jmp 0x600810
// 006009d5  8b0e                 mov ecx, dword ptr [esi]
// 006009d7  c7411444000000       mov dword ptr [ecx + 0x14], 0x44
// 006009de  8b16                 mov edx, dword ptr [esi]
// 006009e0  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 006009e6  894218               mov dword ptr [edx + 0x18], eax
// 006009e9  8b0e                 mov ecx, dword ptr [esi]
// 006009eb  8b11                 mov edx, dword ptr [ecx]
// 006009ed  56                   push esi
// 006009ee  ffd2                 call edx
// 006009f0  83c404               add esp, 4
// 006009f3  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 006009f9  e912feffff           jmp 0x600810
// 006009fe  e8bdedffff           call 0x5ff7c0
// 00600a03  84c0                 test al, al
// 00600a05  0f845cfeffff         je 0x600867
// 00600a0b  5f                   pop edi
// 00600a0c  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 00600a12  5e                   pop esi
// 00600a13  b801000000           mov eax, 1
// 00600a18  5b                   pop ebx
// 00600a19  c3                   ret 
// 00600a1a  8b06                 mov eax, dword ptr [esi]
// 00600a1c  c7401455000000       mov dword ptr [eax + 0x14], 0x55
// 00600a23  8b0e                 mov ecx, dword ptr [esi]
// 00600a25  8b5104               mov edx, dword ptr [ecx + 4]
// 00600a28  6a01                 push 1
// 00600a2a  56                   push esi
// 00600a2b  ffd2                 call edx
// 00600a2d  83c408               add esp, 8
// 00600a30  5f                   pop edi
// 00600a31  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 00600a37  5e                   pop esi
// 00600a38  b802000000           mov eax, 2
// 00600a3d  5b                   pop ebx
// 00600a3e  c3                   ret 
// 00600a3f  90                   nop 
// 00600a40  a90960006d           test eax, 0x6d006009
// 00600a45  086000               or byte ptr [eax], ah
// 00600a48  820860               or byte ptr [eax], 0x60
// 00600a4b  00ca                 add dl, cl
// 00600a4d  086000               or byte ptr [eax], ah
// 00600a50  0f09                 wbinvd 
// 00600a52  60                   pushal 
// 00600a53  009a086000b2         add byte ptr [edx - 0x4dff9ff8], bl
// 00600a59  086000               or byte ptr [eax], ah
// 00600a5c  f3086000             or byte ptr [eax], ah
// 00600a60  5a                   pop edx
// 00600a61  086000               or byte ptr [eax], ah
// 00600a64  1a0a                 sbb cl, byte ptr [edx]
// 00600a66  60                   pushal 
// 00600a67  00fe                 add dh, bh
// 00600a69  096000               or dword ptr [eax], esp
// 00600a6c  2b09                 sub ecx, dword ptr [ecx]
// 00600a6e  60                   pushal 
// 00600a6f  004509               add byte ptr [ebp + 9], al
// 00600a72  60                   pushal 
// 00600a73  006109               add byte ptr [ecx + 9], ah
// 00600a76  60                   pushal 
// 00600a77  0087096000d5         add byte ptr [edi - 0x2aff9ff7], al
// 00600a7d  096000               or dword ptr [eax], esp
// 00600a80  000f                 add byte ptr [edi], cl
// library jpeg-6b/jdmarker.c (function _read_markers)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
