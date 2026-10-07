// roc 2011-06 00557980  unit: seg_00550000  size: 273 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00557980
//
// 00557980  56                   push esi
// 00557981  8b742408             mov esi, dword ptr [esp + 8]
// 00557985  8b4614               mov eax, dword ptr [esi + 0x14]
// 00557988  83f865               cmp eax, 0x65
// 0055798b  7421                 je 0x5579ae
// 0055798d  83f866               cmp eax, 0x66
// 00557990  741c                 je 0x5579ae
// 00557992  83f867               cmp eax, 0x67
// 00557995  7444                 je 0x5579db
// 00557997  8b06                 mov eax, dword ptr [esi]
// 00557999  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 005579a0  8b0e                 mov ecx, dword ptr [esi]
// 005579a2  8b5614               mov edx, dword ptr [esi + 0x14]
// 005579a5  895118               mov dword ptr [ecx + 0x18], edx
// 005579a8  8b06                 mov eax, dword ptr [esi]
// 005579aa  8b08                 mov ecx, dword ptr [eax]
// 005579ac  eb27                 jmp 0x5579d5
// 005579ae  8b96d0000000         mov edx, dword ptr [esi + 0xd0]
// 005579b4  3b5620               cmp edx, dword ptr [esi + 0x20]
// 005579b7  7313                 jae 0x5579cc
// 005579b9  8b06                 mov eax, dword ptr [esi]
// 005579bb  c7401443000000       mov dword ptr [eax + 0x14], 0x43
// 005579c2  8b0e                 mov ecx, dword ptr [esi]
// 005579c4  8b11                 mov edx, dword ptr [ecx]
// 005579c6  56                   push esi
// 005579c7  ffd2                 call edx
// 005579c9  83c404               add esp, 4
// 005579cc  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 005579d2  8b4808               mov ecx, dword ptr [eax + 8]
// 005579d5  56                   push esi
// 005579d6  ffd1                 call ecx
// 005579d8  83c404               add esp, 4
// 005579db  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 005579e1  80780d00             cmp byte ptr [eax + 0xd], 0
// 005579e5  0f8586000000         jne 0x557a71
// 005579eb  53                   push ebx
// 005579ec  57                   push edi
// 005579ed  bb18000000           mov ebx, 0x18
// 005579f2  8b10                 mov edx, dword ptr [eax]
// 005579f4  56                   push esi
// 005579f5  ffd2                 call edx
// 005579f7  33ff                 xor edi, edi
// 005579f9  83c404               add esp, 4
// 005579fc  39bee0000000         cmp dword ptr [esi + 0xe0], edi
// 00557a02  7650                 jbe 0x557a54
// 00557a04  837e0800             cmp dword ptr [esi + 8], 0
// 00557a08  741d                 je 0x557a27
// 00557a0a  8b4608               mov eax, dword ptr [esi + 8]
// 00557a0d  897804               mov dword ptr [eax + 4], edi
// 00557a10  8b4e08               mov ecx, dword ptr [esi + 8]
// 00557a13  8b96e0000000         mov edx, dword ptr [esi + 0xe0]
// 00557a19  895108               mov dword ptr [ecx + 8], edx
// 00557a1c  8b4608               mov eax, dword ptr [esi + 8]
// 00557a1f  8b08                 mov ecx, dword ptr [eax]
// 00557a21  56                   push esi
// 00557a22  ffd1                 call ecx
// 00557a24  83c404               add esp, 4
// 00557a27  8b9648010000         mov edx, dword ptr [esi + 0x148]
// 00557a2d  8b4204               mov eax, dword ptr [edx + 4]
// 00557a30  6a00                 push 0
// 00557a32  56                   push esi
// 00557a33  ffd0                 call eax
// 00557a35  83c408               add esp, 8
// 00557a38  84c0                 test al, al
// 00557a3a  750f                 jne 0x557a4b
// 00557a3c  8b0e                 mov ecx, dword ptr [esi]
// 00557a3e  895914               mov dword ptr [ecx + 0x14], ebx
// 00557a41  8b16                 mov edx, dword ptr [esi]
// 00557a43  8b02                 mov eax, dword ptr [edx]
// 00557a45  56                   push esi
// 00557a46  ffd0                 call eax
// 00557a48  83c404               add esp, 4
// 00557a4b  47                   inc edi
// 00557a4c  3bbee0000000         cmp edi, dword ptr [esi + 0xe0]
// 00557a52  72b0                 jb 0x557a04
// 00557a54  8b8e3c010000         mov ecx, dword ptr [esi + 0x13c]
// 00557a5a  8b5108               mov edx, dword ptr [ecx + 8]
// 00557a5d  56                   push esi
// 00557a5e  ffd2                 call edx
// 00557a60  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 00557a66  83c404               add esp, 4
// 00557a69  80780d00             cmp byte ptr [eax + 0xd], 0
// 00557a6d  7483                 je 0x5579f2
// 00557a6f  5f                   pop edi
// 00557a70  5b                   pop ebx
// 00557a71  8b864c010000         mov eax, dword ptr [esi + 0x14c]
// 00557a77  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00557a7a  56                   push esi
// 00557a7b  ffd1                 call ecx
// 00557a7d  8b5618               mov edx, dword ptr [esi + 0x18]
// 00557a80  8b4210               mov eax, dword ptr [edx + 0x10]
// 00557a83  56                   push esi
// 00557a84  ffd0                 call eax
// 00557a86  56                   push esi
// 00557a87  e864020100           call 0x567cf0
// 00557a8c  83c40c               add esp, 0xc
// 00557a8f  5e                   pop esi
// 00557a90  c3                   ret 
// library jpeg-6b/jcapimin.c (function _jpeg_finish_compress)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcapimin.c
