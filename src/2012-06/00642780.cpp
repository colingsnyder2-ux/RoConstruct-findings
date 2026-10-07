// roc 2012-06 00642780  unit: G3D::Sphere  size: 760 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00642780
//
// 00642780  83ec18               sub esp, 0x18
// 00642783  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 00642789  80780d00             cmp byte ptr [eax + 0xd], 0
// 0064278d  53                   push ebx
// 0064278e  55                   push ebp
// 0064278f  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 00642792  8b5d00               mov ebx, dword ptr [ebp]
// 00642795  57                   push edi
// 00642796  8b7d04               mov edi, dword ptr [ebp + 4]
// 00642799  896c2420             mov dword ptr [esp + 0x20], ebp
// 0064279d  7513                 jne 0x6427b2
// 0064279f  8b0e                 mov ecx, dword ptr [esi]
// 006427a1  c741143e000000       mov dword ptr [ecx + 0x14], 0x3e
// 006427a8  8b16                 mov edx, dword ptr [esi]
// 006427aa  8b02                 mov eax, dword ptr [edx]
// 006427ac  56                   push esi
// 006427ad  ffd0                 call eax
// 006427af  83c404               add esp, 4
// 006427b2  85ff                 test edi, edi
// 006427b4  751e                 jne 0x6427d4
// 006427b6  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 006427b9  56                   push esi
// 006427ba  ffd1                 call ecx
// 006427bc  83c404               add esp, 4
// 006427bf  84c0                 test al, al
// 006427c1  7509                 jne 0x6427cc
// 006427c3  5f                   pop edi
// 006427c4  5d                   pop ebp
// 006427c5  32c0                 xor al, al
// 006427c7  5b                   pop ebx
// 006427c8  83c418               add esp, 0x18
// 006427cb  c3                   ret 
// 006427cc  8b5504               mov edx, dword ptr [ebp + 4]
// 006427cf  8b5d00               mov ebx, dword ptr [ebp]
// 006427d2  8bfa                 mov edi, edx
// 006427d4  0fb603               movzx eax, byte ptr [ebx]
// 006427d7  4f                   dec edi
// 006427d8  c1e008               shl eax, 8
// 006427db  43                   inc ebx
// 006427dc  89442410             mov dword ptr [esp + 0x10], eax
// 006427e0  85ff                 test edi, edi
// 006427e2  7519                 jne 0x6427fd
// 006427e4  8b450c               mov eax, dword ptr [ebp + 0xc]
// 006427e7  56                   push esi
// 006427e8  ffd0                 call eax
// 006427ea  83c404               add esp, 4
// 006427ed  84c0                 test al, al
// 006427ef  74d2                 je 0x6427c3
// 006427f1  8b4d04               mov ecx, dword ptr [ebp + 4]
// 006427f4  8b5d00               mov ebx, dword ptr [ebp]
// 006427f7  8b442410             mov eax, dword ptr [esp + 0x10]
// 006427fb  8bf9                 mov edi, ecx
// 006427fd  0fb613               movzx edx, byte ptr [ebx]
// 00642800  4f                   dec edi
// 00642801  03c2                 add eax, edx
// 00642803  43                   inc ebx
// 00642804  89442410             mov dword ptr [esp + 0x10], eax
// 00642808  85ff                 test edi, edi
// 0064280a  7515                 jne 0x642821
// 0064280c  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0064280f  56                   push esi
// 00642810  ffd0                 call eax
// 00642812  83c404               add esp, 4
// 00642815  84c0                 test al, al
// 00642817  74aa                 je 0x6427c3
// 00642819  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0064281c  8b5d00               mov ebx, dword ptr [ebp]
// 0064281f  8bf9                 mov edi, ecx
// 00642821  0fb603               movzx eax, byte ptr [ebx]
// 00642824  8b16                 mov edx, dword ptr [esi]
// 00642826  c7421467000000       mov dword ptr [edx + 0x14], 0x67
// 0064282d  8b0e                 mov ecx, dword ptr [esi]
// 0064282f  894118               mov dword ptr [ecx + 0x18], eax
// 00642832  8b16                 mov edx, dword ptr [esi]
// 00642834  89442418             mov dword ptr [esp + 0x18], eax
// 00642838  8b4204               mov eax, dword ptr [edx + 4]
// 0064283b  6a01                 push 1
// 0064283d  56                   push esi
// 0064283e  4f                   dec edi
// 0064283f  43                   inc ebx
// 00642840  ffd0                 call eax
// 00642842  8b442420             mov eax, dword ptr [esp + 0x20]
// 00642846  8d4c0006             lea ecx, [eax + eax + 6]
// 0064284a  83c408               add esp, 8
// 0064284d  394c2410             cmp dword ptr [esp + 0x10], ecx
// 00642851  750a                 jne 0x64285d
// 00642853  83f801               cmp eax, 1
// 00642856  7c05                 jl 0x64285d
// 00642858  83f804               cmp eax, 4
// 0064285b  7e17                 jle 0x642874
// 0064285d  8b16                 mov edx, dword ptr [esi]
// 0064285f  c742140b000000       mov dword ptr [edx + 0x14], 0xb
// 00642866  8b06                 mov eax, dword ptr [esi]
// 00642868  8b08                 mov ecx, dword ptr [eax]
// 0064286a  56                   push esi
// 0064286b  ffd1                 call ecx
// 0064286d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00642871  83c404               add esp, 4
// 00642874  898624010000         mov dword ptr [esi + 0x124], eax
// 0064287a  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00642882  85c0                 test eax, eax
// 00642884  0f8efc000000         jle 0x642986
// 0064288a  8d9628010000         lea edx, [esi + 0x128]
// 00642890  89542414             mov dword ptr [esp + 0x14], edx
// 00642894  85ff                 test edi, edi
// 00642896  751d                 jne 0x6428b5
// 00642898  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0064289b  56                   push esi
// 0064289c  ffd0                 call eax
// 0064289e  83c404               add esp, 4
// 006428a1  84c0                 test al, al
// 006428a3  0f841affffff         je 0x6427c3
// 006428a9  8b4d04               mov ecx, dword ptr [ebp + 4]
// 006428ac  8b5d00               mov ebx, dword ptr [ebp]
// 006428af  894c240c             mov dword ptr [esp + 0xc], ecx
// 006428b3  8bf9                 mov edi, ecx
// 006428b5  0fb613               movzx edx, byte ptr [ebx]
// 006428b8  4f                   dec edi
// 006428b9  43                   inc ebx
// 006428ba  89542410             mov dword ptr [esp + 0x10], edx
// 006428be  85ff                 test edi, edi
// 006428c0  751d                 jne 0x6428df
// 006428c2  8b450c               mov eax, dword ptr [ebp + 0xc]
// 006428c5  56                   push esi
// 006428c6  ffd0                 call eax
// 006428c8  83c404               add esp, 4
// 006428cb  84c0                 test al, al
// 006428cd  0f84f0feffff         je 0x6427c3
// 006428d3  8b4d04               mov ecx, dword ptr [ebp + 4]
// 006428d6  8b5d00               mov ebx, dword ptr [ebp]
// 006428d9  894c240c             mov dword ptr [esp + 0xc], ecx
// 006428dd  8bf9                 mov edi, ecx
// 006428df  0fb62b               movzx ebp, byte ptr [ebx]
// 006428e2  4f                   dec edi
// 006428e3  33c0                 xor eax, eax
// 006428e5  43                   inc ebx
// 006428e6  394624               cmp dword ptr [esi + 0x24], eax
// 006428e9  897c240c             mov dword ptr [esp + 0xc], edi
// 006428ed  8bbec4000000         mov edi, dword ptr [esi + 0xc4]
// 006428f3  7e11                 jle 0x642906
// 006428f5  8b542410             mov edx, dword ptr [esp + 0x10]
// 006428f9  3b17                 cmp edx, dword ptr [edi]
// 006428fb  7425                 je 0x642922
// 006428fd  40                   inc eax
// 006428fe  83c754               add edi, 0x54
// 00642901  3b4624               cmp eax, dword ptr [esi + 0x24]
// 00642904  7cef                 jl 0x6428f5
// 00642906  8b06                 mov eax, dword ptr [esi]
// 00642908  8b542410             mov edx, dword ptr [esp + 0x10]
// 0064290c  c7401405000000       mov dword ptr [eax + 0x14], 5
// 00642913  8b0e                 mov ecx, dword ptr [esi]
// 00642915  895118               mov dword ptr [ecx + 0x18], edx
// 00642918  8b06                 mov eax, dword ptr [esi]
// 0064291a  8b08                 mov ecx, dword ptr [eax]
// 0064291c  56                   push esi
// 0064291d  ffd1                 call ecx
// 0064291f  83c404               add esp, 4
// 00642922  8b542414             mov edx, dword ptr [esp + 0x14]
// 00642926  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0064292a  893a                 mov dword ptr [edx], edi
// 0064292c  8bc5                 mov eax, ebp
// 0064292e  c1f804               sar eax, 4
// 00642931  83e00f               and eax, 0xf
// 00642934  894714               mov dword ptr [edi + 0x14], eax
// 00642937  83e50f               and ebp, 0xf
// 0064293a  896f18               mov dword ptr [edi + 0x18], ebp
// 0064293d  8b06                 mov eax, dword ptr [esi]
// 0064293f  83c018               add eax, 0x18
// 00642942  8908                 mov dword ptr [eax], ecx
// 00642944  8b5714               mov edx, dword ptr [edi + 0x14]
// 00642947  895004               mov dword ptr [eax + 4], edx
// 0064294a  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 0064294d  894808               mov dword ptr [eax + 8], ecx
// 00642950  8b16                 mov edx, dword ptr [esi]
// 00642952  c7421468000000       mov dword ptr [edx + 0x14], 0x68
// 00642959  8b06                 mov eax, dword ptr [esi]
// 0064295b  8b4804               mov ecx, dword ptr [eax + 4]
// 0064295e  6a01                 push 1
// 00642960  56                   push esi
// 00642961  ffd1                 call ecx
// 00642963  8b442424             mov eax, dword ptr [esp + 0x24]
// 00642967  8344241c04           add dword ptr [esp + 0x1c], 4
// 0064296c  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00642970  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00642974  40                   inc eax
// 00642975  83c408               add esp, 8
// 00642978  3b442418             cmp eax, dword ptr [esp + 0x18]
// 0064297c  8944241c             mov dword ptr [esp + 0x1c], eax
// 00642980  0f8c0effffff         jl 0x642894
// 00642986  85ff                 test edi, edi
// 00642988  751d                 jne 0x6429a7
// 0064298a  8b550c               mov edx, dword ptr [ebp + 0xc]
// 0064298d  56                   push esi
// 0064298e  ffd2                 call edx
// 00642990  83c404               add esp, 4
// 00642993  84c0                 test al, al
// 00642995  0f8428feffff         je 0x6427c3
// 0064299b  8b4504               mov eax, dword ptr [ebp + 4]
// 0064299e  8b5d00               mov ebx, dword ptr [ebp]
// 006429a1  8944240c             mov dword ptr [esp + 0xc], eax
// 006429a5  8bf8                 mov edi, eax
// 006429a7  0fb603               movzx eax, byte ptr [ebx]
// 006429aa  4f                   dec edi
// 006429ab  43                   inc ebx
// 006429ac  89866c010000         mov dword ptr [esi + 0x16c], eax
// 006429b2  85ff                 test edi, edi
// 006429b4  751d                 jne 0x6429d3
// 006429b6  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 006429b9  56                   push esi
// 006429ba  ffd1                 call ecx
// 006429bc  83c404               add esp, 4
// 006429bf  84c0                 test al, al
// 006429c1  0f84fcfdffff         je 0x6427c3
// 006429c7  8b5504               mov edx, dword ptr [ebp + 4]
// 006429ca  8b5d00               mov ebx, dword ptr [ebp]
// 006429cd  8954240c             mov dword ptr [esp + 0xc], edx
// 006429d1  8bfa                 mov edi, edx
// 006429d3  0fb603               movzx eax, byte ptr [ebx]
// 006429d6  4f                   dec edi
// 006429d7  43                   inc ebx
// 006429d8  898670010000         mov dword ptr [esi + 0x170], eax
// 006429de  85ff                 test edi, edi
// 006429e0  751d                 jne 0x6429ff
// 006429e2  8b450c               mov eax, dword ptr [ebp + 0xc]
// 006429e5  56                   push esi
// 006429e6  ffd0                 call eax
// 006429e8  83c404               add esp, 4
// 006429eb  84c0                 test al, al
// 006429ed  0f84d0fdffff         je 0x6427c3
// 006429f3  8b4d04               mov ecx, dword ptr [ebp + 4]
// 006429f6  8b5d00               mov ebx, dword ptr [ebp]
// 006429f9  894c240c             mov dword ptr [esp + 0xc], ecx
// 006429fd  8bf9                 mov edi, ecx
// 006429ff  0fb603               movzx eax, byte ptr [ebx]
// 00642a02  8b8e6c010000         mov ecx, dword ptr [esi + 0x16c]
// 00642a08  8bd0                 mov edx, eax
// 00642a0a  83e00f               and eax, 0xf
// 00642a0d  898678010000         mov dword ptr [esi + 0x178], eax
// 00642a13  8b06                 mov eax, dword ptr [esi]
// 00642a15  c1fa04               sar edx, 4
// 00642a18  83e20f               and edx, 0xf
// 00642a1b  899674010000         mov dword ptr [esi + 0x174], edx
// 00642a21  83c018               add eax, 0x18
// 00642a24  8908                 mov dword ptr [eax], ecx
// 00642a26  8b9670010000         mov edx, dword ptr [esi + 0x170]
// 00642a2c  895004               mov dword ptr [eax + 4], edx
// 00642a2f  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 00642a35  894808               mov dword ptr [eax + 8], ecx
// 00642a38  8b9678010000         mov edx, dword ptr [esi + 0x178]
// 00642a3e  89500c               mov dword ptr [eax + 0xc], edx
// 00642a41  8b06                 mov eax, dword ptr [esi]
// 00642a43  c7401469000000       mov dword ptr [eax + 0x14], 0x69
// 00642a4a  8b0e                 mov ecx, dword ptr [esi]
// 00642a4c  8b5104               mov edx, dword ptr [ecx + 4]
// 00642a4f  6a01                 push 1
// 00642a51  56                   push esi
// 00642a52  ffd2                 call edx
// 00642a54  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 00642a5a  c7401000000000       mov dword ptr [eax + 0x10], 0
// 00642a61  ff467c               inc dword ptr [esi + 0x7c]
// 00642a64  83c408               add esp, 8
// 00642a67  43                   inc ebx
// 00642a68  4f                   dec edi
// 00642a69  897d04               mov dword ptr [ebp + 4], edi
// 00642a6c  5f                   pop edi
// 00642a6d  895d00               mov dword ptr [ebp], ebx
// 00642a70  5d                   pop ebp
// 00642a71  b001                 mov al, 1
// 00642a73  5b                   pop ebx
// 00642a74  83c418               add esp, 0x18
// 00642a77  c3                   ret 
// library jpeg-6b/jdmarker.c (function _get_sos)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
