// from server: 100% by auto
// roc 2008-06 007a32d0  unit: CXTIconHandle  size: 1110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a32d0
//
// 007a32d0  83ec3c               sub esp, 0x3c
// 007a32d3  53                   push ebx
// 007a32d4  55                   push ebp
// 007a32d5  56                   push esi
// 007a32d6  57                   push edi
// 007a32d7  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 007a32db  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 007a32de  8b5104               mov edx, dword ptr [ecx + 4]
// 007a32e1  8b5838               mov ebx, dword ptr [eax + 0x38]
// 007a32e4  8b29                 mov ebp, dword ptr [ecx]
// 007a32e6  4d                   dec ebp
// 007a32e7  8d542afb             lea edx, [edx + ebp - 5]
// 007a32eb  89542414             mov dword ptr [esp + 0x14], edx
// 007a32ef  8b710c               mov esi, dword ptr [ecx + 0xc]
// 007a32f2  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 007a32f5  8bd1                 mov edx, ecx
// 007a32f7  2b542454             sub edx, dword ptr [esp + 0x54]
// 007a32fb  4e                   dec esi
// 007a32fc  03d6                 add edx, esi
// 007a32fe  8d8c31fffeffff       lea ecx, [ecx + esi - 0x101]
// 007a3305  89542438             mov dword ptr [esp + 0x38], edx
// 007a3309  8b5028               mov edx, dword ptr [eax + 0x28]
// 007a330c  894c242c             mov dword ptr [esp + 0x2c], ecx
// 007a3310  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 007a3313  89542428             mov dword ptr [esp + 0x28], edx
// 007a3317  8b5030               mov edx, dword ptr [eax + 0x30]
// 007a331a  894c243c             mov dword ptr [esp + 0x3c], ecx
// 007a331e  8b4834               mov ecx, dword ptr [eax + 0x34]
// 007a3321  89542444             mov dword ptr [esp + 0x44], edx
// 007a3325  8b504c               mov edx, dword ptr [eax + 0x4c]
// 007a3328  894c2440             mov dword ptr [esp + 0x40], ecx
// 007a332c  8b4850               mov ecx, dword ptr [eax + 0x50]
// 007a332f  89542420             mov dword ptr [esp + 0x20], edx
// 007a3333  894c2424             mov dword ptr [esp + 0x24], ecx
// 007a3337  8b4854               mov ecx, dword ptr [eax + 0x54]
// 007a333a  ba01000000           mov edx, 1
// 007a333f  d3e2                 shl edx, cl
// 007a3341  8b4858               mov ecx, dword ptr [eax + 0x58]
// 007a3344  89442418             mov dword ptr [esp + 0x18], eax
// 007a3348  8b783c               mov edi, dword ptr [eax + 0x3c]
// 007a334b  c744245401000000     mov dword ptr [esp + 0x54], 1
// 007a3353  8b442454             mov eax, dword ptr [esp + 0x54]
// 007a3357  d3e0                 shl eax, cl
// 007a3359  4a                   dec edx
// 007a335a  896c2410             mov dword ptr [esp + 0x10], ebp
// 007a335e  89542448             mov dword ptr [esp + 0x48], edx
// 007a3362  48                   dec eax
// 007a3363  89442430             mov dword ptr [esp + 0x30], eax
// 007a3367  83ff0f               cmp edi, 0xf
// 007a336a  7320                 jae 0x7a338c
// 007a336c  0fb64501             movzx eax, byte ptr [ebp + 1]
// 007a3370  45                   inc ebp
// 007a3371  8bcf                 mov ecx, edi
// 007a3373  d3e0                 shl eax, cl
// 007a3375  45                   inc ebp
// 007a3376  83c708               add edi, 8
// 007a3379  8bcf                 mov ecx, edi
// 007a337b  03d8                 add ebx, eax
// 007a337d  0fb64500             movzx eax, byte ptr [ebp]
// 007a3381  d3e0                 shl eax, cl
// 007a3383  896c2410             mov dword ptr [esp + 0x10], ebp
// 007a3387  03d8                 add ebx, eax
// 007a3389  83c708               add edi, 8
// 007a338c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007a3390  23d3                 and edx, ebx
// 007a3392  8b0491               mov eax, dword ptr [ecx + edx*4]
// 007a3395  8bd0                 mov edx, eax
// 007a3397  c1ea08               shr edx, 8
// 007a339a  0fb6ca               movzx ecx, dl
// 007a339d  0fb6d0               movzx edx, al
// 007a33a0  d3eb                 shr ebx, cl
// 007a33a2  2bf9                 sub edi, ecx
// 007a33a4  85d2                 test edx, edx
// 007a33a6  7441                 je 0x7a33e9
// 007a33a8  f6c210               test dl, 0x10
// 007a33ab  7547                 jne 0x7a33f4
// 007a33ad  f6c240               test dl, 0x40
// 007a33b0  0f85f4020000         jne 0x7a36aa
// 007a33b6  b901000000           mov ecx, 1
// 007a33bb  894c2454             mov dword ptr [esp + 0x54], ecx
// 007a33bf  8bca                 mov ecx, edx
// 007a33c1  8b542454             mov edx, dword ptr [esp + 0x54]
// 007a33c5  d3e2                 shl edx, cl
// 007a33c7  c1e810               shr eax, 0x10
// 007a33ca  4a                   dec edx
// 007a33cb  23d3                 and edx, ebx
// 007a33cd  03d0                 add edx, eax
// 007a33cf  8b442420             mov eax, dword ptr [esp + 0x20]
// 007a33d3  8b0490               mov eax, dword ptr [eax + edx*4]
// 007a33d6  8bc8                 mov ecx, eax
// 007a33d8  c1e908               shr ecx, 8
// 007a33db  0fb6c9               movzx ecx, cl
// 007a33de  0fb6d0               movzx edx, al
// 007a33e1  d3eb                 shr ebx, cl
// 007a33e3  2bf9                 sub edi, ecx
// 007a33e5  85d2                 test edx, edx
// 007a33e7  75bf                 jne 0x7a33a8
// 007a33e9  46                   inc esi
// 007a33ea  c1e810               shr eax, 0x10
// 007a33ed  8806                 mov byte ptr [esi], al
// 007a33ef  e92b020000           jmp 0x7a361f
// 007a33f4  c1e810               shr eax, 0x10
// 007a33f7  83e20f               and edx, 0xf
// 007a33fa  89442454             mov dword ptr [esp + 0x54], eax
// 007a33fe  742a                 je 0x7a342a
// 007a3400  3bfa                 cmp edi, edx
// 007a3402  7312                 jae 0x7a3416
// 007a3404  0fb64501             movzx eax, byte ptr [ebp + 1]
// 007a3408  45                   inc ebp
// 007a3409  8bcf                 mov ecx, edi
// 007a340b  d3e0                 shl eax, cl
// 007a340d  896c2410             mov dword ptr [esp + 0x10], ebp
// 007a3411  03d8                 add ebx, eax
// 007a3413  83c708               add edi, 8
// 007a3416  8bca                 mov ecx, edx
// 007a3418  b801000000           mov eax, 1
// 007a341d  d3e0                 shl eax, cl
// 007a341f  48                   dec eax
// 007a3420  23c3                 and eax, ebx
// 007a3422  01442454             add dword ptr [esp + 0x54], eax
// 007a3426  d3eb                 shr ebx, cl
// 007a3428  2bfa                 sub edi, edx
// 007a342a  83ff0f               cmp edi, 0xf
// 007a342d  7320                 jae 0x7a344f
// 007a342f  0fb65501             movzx edx, byte ptr [ebp + 1]
// 007a3433  45                   inc ebp
// 007a3434  0fb64501             movzx eax, byte ptr [ebp + 1]
// 007a3438  8bcf                 mov ecx, edi
// 007a343a  45                   inc ebp
// 007a343b  d3e2                 shl edx, cl
// 007a343d  83c708               add edi, 8
// 007a3440  8bcf                 mov ecx, edi
// 007a3442  d3e0                 shl eax, cl
// 007a3444  03da                 add ebx, edx
// 007a3446  896c2410             mov dword ptr [esp + 0x10], ebp
// 007a344a  03d8                 add ebx, eax
// 007a344c  83c708               add edi, 8
// 007a344f  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007a3453  8b542424             mov edx, dword ptr [esp + 0x24]
// 007a3457  23cb                 and ecx, ebx
// 007a3459  8b148a               mov edx, dword ptr [edx + ecx*4]
// 007a345c  8bc2                 mov eax, edx
// 007a345e  c1e808               shr eax, 8
// 007a3461  0fb6c8               movzx ecx, al
// 007a3464  0fb6c2               movzx eax, dl
// 007a3467  d3eb                 shr ebx, cl
// 007a3469  2bf9                 sub edi, ecx
// 007a346b  8954241c             mov dword ptr [esp + 0x1c], edx
// 007a346f  a810                 test al, 0x10
// 007a3471  7539                 jne 0x7a34ac
// 007a3473  a840                 test al, 0x40
// 007a3475  0f8522020000         jne 0x7a369d
// 007a347b  8bc8                 mov ecx, eax
// 007a347d  0fb744241e           movzx eax, word ptr [esp + 0x1e]
// 007a3482  ba01000000           mov edx, 1
// 007a3487  d3e2                 shl edx, cl
// 007a3489  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007a348d  4a                   dec edx
// 007a348e  23d3                 and edx, ebx
// 007a3490  03d0                 add edx, eax
// 007a3492  8b1491               mov edx, dword ptr [ecx + edx*4]
// 007a3495  8bc2                 mov eax, edx
// 007a3497  c1e808               shr eax, 8
// 007a349a  0fb6c8               movzx ecx, al
// 007a349d  0fb6c2               movzx eax, dl
// 007a34a0  d3eb                 shr ebx, cl
// 007a34a2  2bf9                 sub edi, ecx
// 007a34a4  8954241c             mov dword ptr [esp + 0x1c], edx
// 007a34a8  a810                 test al, 0x10
// 007a34aa  74c7                 je 0x7a3473
// 007a34ac  c1ea10               shr edx, 0x10
// 007a34af  83e00f               and eax, 0xf
// 007a34b2  8954241c             mov dword ptr [esp + 0x1c], edx
// 007a34b6  3bf8                 cmp edi, eax
// 007a34b8  7328                 jae 0x7a34e2
// 007a34ba  0fb65501             movzx edx, byte ptr [ebp + 1]
// 007a34be  45                   inc ebp
// 007a34bf  8bcf                 mov ecx, edi
// 007a34c1  d3e2                 shl edx, cl
// 007a34c3  83c708               add edi, 8
// 007a34c6  896c2410             mov dword ptr [esp + 0x10], ebp
// 007a34ca  03da                 add ebx, edx
// 007a34cc  3bf8                 cmp edi, eax
// 007a34ce  7312                 jae 0x7a34e2
// 007a34d0  0fb65501             movzx edx, byte ptr [ebp + 1]
// 007a34d4  45                   inc ebp
// 007a34d5  8bcf                 mov ecx, edi
// 007a34d7  d3e2                 shl edx, cl
// 007a34d9  896c2410             mov dword ptr [esp + 0x10], ebp
// 007a34dd  03da                 add ebx, edx
// 007a34df  83c708               add edi, 8
// 007a34e2  b901000000           mov ecx, 1
// 007a34e7  8bd1                 mov edx, ecx
// 007a34e9  8bc8                 mov ecx, eax
// 007a34eb  d3e2                 shl edx, cl
// 007a34ed  2bf8                 sub edi, eax
// 007a34ef  4a                   dec edx
// 007a34f0  23d3                 and edx, ebx
// 007a34f2  8bca                 mov ecx, edx
// 007a34f4  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007a34f8  03d1                 add edx, ecx
// 007a34fa  8bc8                 mov ecx, eax
// 007a34fc  8bc6                 mov eax, esi
// 007a34fe  2b442438             sub eax, dword ptr [esp + 0x38]
// 007a3502  d3eb                 shr ebx, cl
// 007a3504  8954241c             mov dword ptr [esp + 0x1c], edx
// 007a3508  3bd0                 cmp edx, eax
// 007a350a  0f862e010000         jbe 0x7a363e
// 007a3510  8bea                 mov ebp, edx
// 007a3512  2be8                 sub ebp, eax
// 007a3514  3b6c243c             cmp ebp, dword ptr [esp + 0x3c]
// 007a3518  0f8764010000         ja 0x7a3682
// 007a351e  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007a3522  8b442444             mov eax, dword ptr [esp + 0x44]
// 007a3526  49                   dec ecx
// 007a3527  894c2434             mov dword ptr [esp + 0x34], ecx
// 007a352b  85c0                 test eax, eax
// 007a352d  7524                 jne 0x7a3553
// 007a352f  8b442428             mov eax, dword ptr [esp + 0x28]
// 007a3533  2bc5                 sub eax, ebp
// 007a3535  03c8                 add ecx, eax
// 007a3537  3b6c2454             cmp ebp, dword ptr [esp + 0x54]
// 007a353b  0f8381000000         jae 0x7a35c2
// 007a3541  296c2454             sub dword ptr [esp + 0x54], ebp
// 007a3545  8a4101               mov al, byte ptr [ecx + 1]
// 007a3548  41                   inc ecx
// 007a3549  46                   inc esi
// 007a354a  83ed01               sub ebp, 1
// 007a354d  8806                 mov byte ptr [esi], al
// 007a354f  75f4                 jne 0x7a3545
// 007a3551  eb6b                 jmp 0x7a35be
// 007a3553  3bc5                 cmp eax, ebp
// 007a3555  734d                 jae 0x7a35a4
// 007a3557  8bd0                 mov edx, eax
// 007a3559  2bd5                 sub edx, ebp
// 007a355b  03542428             add edx, dword ptr [esp + 0x28]
// 007a355f  2be8                 sub ebp, eax
// 007a3561  03ca                 add ecx, edx
// 007a3563  3b6c2454             cmp ebp, dword ptr [esp + 0x54]
// 007a3567  7359                 jae 0x7a35c2
// 007a3569  296c2454             sub dword ptr [esp + 0x54], ebp
// 007a356d  8d4900               lea ecx, [ecx]
// 007a3570  8a5101               mov dl, byte ptr [ecx + 1]
// 007a3573  41                   inc ecx
// 007a3574  46                   inc esi
// 007a3575  83ed01               sub ebp, 1
// 007a3578  8816                 mov byte ptr [esi], dl
// 007a357a  75f4                 jne 0x7a3570
// 007a357c  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007a3580  3b442454             cmp eax, dword ptr [esp + 0x54]
// 007a3584  733c                 jae 0x7a35c2
// 007a3586  29442454             sub dword ptr [esp + 0x54], eax
// 007a358a  8be8                 mov ebp, eax
// 007a358c  8d642400             lea esp, [esp]
// 007a3590  8a4101               mov al, byte ptr [ecx + 1]
// 007a3593  41                   inc ecx
// 007a3594  46                   inc esi
// 007a3595  83ed01               sub ebp, 1
// 007a3598  8806                 mov byte ptr [esi], al
// 007a359a  75f4                 jne 0x7a3590
// 007a359c  8bce                 mov ecx, esi
// 007a359e  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 007a35a2  eb1e                 jmp 0x7a35c2
// 007a35a4  2bc5                 sub eax, ebp
// 007a35a6  03c8                 add ecx, eax
// 007a35a8  3b6c2454             cmp ebp, dword ptr [esp + 0x54]
// 007a35ac  7314                 jae 0x7a35c2
// 007a35ae  296c2454             sub dword ptr [esp + 0x54], ebp
// 007a35b2  8a4101               mov al, byte ptr [ecx + 1]
// 007a35b5  41                   inc ecx
// 007a35b6  46                   inc esi
// 007a35b7  83ed01               sub ebp, 1
// 007a35ba  8806                 mov byte ptr [esi], al
// 007a35bc  75f4                 jne 0x7a35b2
// 007a35be  8bce                 mov ecx, esi
// 007a35c0  2bca                 sub ecx, edx
// 007a35c2  8b442454             mov eax, dword ptr [esp + 0x54]
// 007a35c6  83f802               cmp eax, 2
// 007a35c9  7636                 jbe 0x7a3601
// 007a35cb  8d50fd               lea edx, [eax - 3]
// 007a35ce  b8abaaaaaa           mov eax, 0xaaaaaaab
// 007a35d3  f7e2                 mul edx
// 007a35d5  8bea                 mov ebp, edx
// 007a35d7  d1ed                 shr ebp, 1
// 007a35d9  45                   inc ebp
// 007a35da  8d9b00000000         lea ebx, [ebx]
// 007a35e0  0fb64101             movzx eax, byte ptr [ecx + 1]
// 007a35e4  836c245403           sub dword ptr [esp + 0x54], 3
// 007a35e9  41                   inc ecx
// 007a35ea  46                   inc esi
// 007a35eb  8806                 mov byte ptr [esi], al
// 007a35ed  8a5101               mov dl, byte ptr [ecx + 1]
// 007a35f0  41                   inc ecx
// 007a35f1  46                   inc esi
// 007a35f2  8816                 mov byte ptr [esi], dl
// 007a35f4  0fb64101             movzx eax, byte ptr [ecx + 1]
// 007a35f8  41                   inc ecx
// 007a35f9  46                   inc esi
// 007a35fa  83ed01               sub ebp, 1
// 007a35fd  8806                 mov byte ptr [esi], al
// 007a35ff  75df                 jne 0x7a35e0
// 007a3601  8b6c2454             mov ebp, dword ptr [esp + 0x54]
// 007a3605  85ed                 test ebp, ebp
// 007a3607  7412                 je 0x7a361b
// 007a3609  8a5101               mov dl, byte ptr [ecx + 1]
// 007a360c  41                   inc ecx
// 007a360d  46                   inc esi
// 007a360e  8816                 mov byte ptr [esi], dl
// 007a3610  83fd01               cmp ebp, 1
// 007a3613  7606                 jbe 0x7a361b
// 007a3615  8a4101               mov al, byte ptr [ecx + 1]
// 007a3618  46                   inc esi
// 007a3619  8806                 mov byte ptr [esi], al
// 007a361b  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 007a361f  8b542414             mov edx, dword ptr [esp + 0x14]
// 007a3623  3bea                 cmp ebp, edx
// 007a3625  0f83a9000000         jae 0x7a36d4
// 007a362b  3b74242c             cmp esi, dword ptr [esp + 0x2c]
// 007a362f  0f839f000000         jae 0x7a36d4
// 007a3635  8b542448             mov edx, dword ptr [esp + 0x48]
// 007a3639  e929fdffff           jmp 0x7a3367
// 007a363e  8bc6                 mov eax, esi
// 007a3640  2bc2                 sub eax, edx
// 007a3642  0fb64801             movzx ecx, byte ptr [eax + 1]
// 007a3646  40                   inc eax
// 007a3647  884e01               mov byte ptr [esi + 1], cl
// 007a364a  8a5001               mov dl, byte ptr [eax + 1]
// 007a364d  46                   inc esi
// 007a364e  40                   inc eax
// 007a364f  46                   inc esi
// 007a3650  8816                 mov byte ptr [esi], dl
// 007a3652  0fb64801             movzx ecx, byte ptr [eax + 1]
// 007a3656  40                   inc eax
// 007a3657  46                   inc esi
// 007a3658  880e                 mov byte ptr [esi], cl
// 007a365a  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 007a365e  83e903               sub ecx, 3
// 007a3661  894c2454             mov dword ptr [esp + 0x54], ecx
// 007a3665  83f902               cmp ecx, 2
// 007a3668  77d8                 ja 0x7a3642
// 007a366a  85c9                 test ecx, ecx
// 007a366c  74b1                 je 0x7a361f
// 007a366e  8a5001               mov dl, byte ptr [eax + 1]
// 007a3671  40                   inc eax
// 007a3672  46                   inc esi
// 007a3673  8816                 mov byte ptr [esi], dl
// 007a3675  83f901               cmp ecx, 1
// 007a3678  76a5                 jbe 0x7a361f
// 007a367a  8a4001               mov al, byte ptr [eax + 1]
// 007a367d  46                   inc esi
// 007a367e  8806                 mov byte ptr [esi], al
// 007a3680  eb9d                 jmp 0x7a361f
// 007a3682  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 007a3686  8b542418             mov edx, dword ptr [esp + 0x18]
// 007a368a  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 007a368e  c74118e8ec8600       mov dword ptr [ecx + 0x18], 0x86ece8
// 007a3695  c7021b000000         mov dword ptr [edx], 0x1b
// 007a369b  eb33                 jmp 0x7a36d0
// 007a369d  8b442450             mov eax, dword ptr [esp + 0x50]
// 007a36a1  c7401808ed8600       mov dword ptr [eax + 0x18], 0x86ed08
// 007a36a8  eb1c                 jmp 0x7a36c6
// 007a36aa  f6c220               test dl, 0x20
// 007a36ad  740c                 je 0x7a36bb
// 007a36af  8b542418             mov edx, dword ptr [esp + 0x18]
// 007a36b3  c7020b000000         mov dword ptr [edx], 0xb
// 007a36b9  eb15                 jmp 0x7a36d0
// 007a36bb  8b442450             mov eax, dword ptr [esp + 0x50]
// 007a36bf  c7401820ed8600       mov dword ptr [eax + 0x18], 0x86ed20
// 007a36c6  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007a36ca  c7011b000000         mov dword ptr [ecx], 0x1b
// 007a36d0  8b542414             mov edx, dword ptr [esp + 0x14]
// 007a36d4  8bc7                 mov eax, edi
// 007a36d6  c1e803               shr eax, 3
// 007a36d9  2be8                 sub ebp, eax
// 007a36db  03c0                 add eax, eax
// 007a36dd  03c0                 add eax, eax
// 007a36df  03c0                 add eax, eax
// 007a36e1  2bf8                 sub edi, eax
// 007a36e3  8bcf                 mov ecx, edi
// 007a36e5  b801000000           mov eax, 1
// 007a36ea  d3e0                 shl eax, cl
// 007a36ec  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 007a36f0  2bd5                 sub edx, ebp
// 007a36f2  83c205               add edx, 5
// 007a36f5  48                   dec eax
// 007a36f6  23d8                 and ebx, eax
// 007a36f8  8d4501               lea eax, [ebp + 1]
// 007a36fb  8901                 mov dword ptr [ecx], eax
// 007a36fd  8d4601               lea eax, [esi + 1]
// 007a3700  89410c               mov dword ptr [ecx + 0xc], eax
// 007a3703  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007a3707  2bc6                 sub eax, esi
// 007a3709  0501010000           add eax, 0x101
// 007a370e  894110               mov dword ptr [ecx + 0x10], eax
// 007a3711  8b442418             mov eax, dword ptr [esp + 0x18]
// 007a3715  895104               mov dword ptr [ecx + 4], edx
// 007a3718  89783c               mov dword ptr [eax + 0x3c], edi
// 007a371b  5f                   pop edi
// 007a371c  5e                   pop esi
// 007a371d  5d                   pop ebp
// 007a371e  895838               mov dword ptr [eax + 0x38], ebx
// 007a3721  5b                   pop ebx
// 007a3722  83c43c               add esp, 0x3c
// 007a3725  c3                   ret 
// library zlib-1.2.3/inffast.c (function _inflate_fast)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 inffast.c
