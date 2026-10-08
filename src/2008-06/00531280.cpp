// from server: 100% by auto
// roc 2008-06 00531280  unit: seg_00530000  size: 534 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00531280
//
// 00531280  83ec2c               sub esp, 0x2c
// 00531283  53                   push ebx
// 00531284  55                   push ebp
// 00531285  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 00531289  56                   push esi
// 0053128a  57                   push edi
// 0053128b  8bbd88010000         mov edi, dword ptr [ebp + 0x188]
// 00531291  33f6                 xor esi, esi
// 00531293  39b524010000         cmp dword ptr [ebp + 0x124], esi
// 00531299  897c2420             mov dword ptr [esp + 0x20], edi
// 0053129d  7e4d                 jle 0x5312ec
// 0053129f  8d8528010000         lea eax, [ebp + 0x128]
// 005312a5  89442410             mov dword ptr [esp + 0x10], eax
// 005312a9  8da42400000000       lea esp, [esp]
// 005312b0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005312b4  8b01                 mov eax, dword ptr [ecx]
// 005312b6  8b480c               mov ecx, dword ptr [eax + 0xc]
// 005312b9  8b9d80000000         mov ebx, dword ptr [ebp + 0x80]
// 005312bf  8b4004               mov eax, dword ptr [eax + 4]
// 005312c2  0fafd9               imul ebx, ecx
// 005312c5  8b5504               mov edx, dword ptr [ebp + 4]
// 005312c8  8b5220               mov edx, dword ptr [edx + 0x20]
// 005312cb  6a01                 push 1
// 005312cd  51                   push ecx
// 005312ce  8b4c8748             mov ecx, dword ptr [edi + eax*4 + 0x48]
// 005312d2  53                   push ebx
// 005312d3  51                   push ecx
// 005312d4  55                   push ebp
// 005312d5  ffd2                 call edx
// 005312d7  8344242404           add dword ptr [esp + 0x24], 4
// 005312dc  8944b440             mov dword ptr [esp + esi*4 + 0x40], eax
// 005312e0  46                   inc esi
// 005312e1  83c414               add esp, 0x14
// 005312e4  3bb524010000         cmp esi, dword ptr [ebp + 0x124]
// 005312ea  7cc4                 jl 0x5312b0
// 005312ec  8b7718               mov esi, dword ptr [edi + 0x18]
// 005312ef  3b771c               cmp esi, dword ptr [edi + 0x1c]
// 005312f2  89742424             mov dword ptr [esp + 0x24], esi
// 005312f6  0f8d02010000         jge 0x5313fe
// 005312fc  8d642400             lea esp, [esp]
// 00531300  8b4714               mov eax, dword ptr [edi + 0x14]
// 00531303  89442410             mov dword ptr [esp + 0x10], eax
// 00531307  3b8538010000         cmp eax, dword ptr [ebp + 0x138]
// 0053130d  0f83d6000000         jae 0x5313e9
// 00531313  33d2                 xor edx, edx
// 00531315  33db                 xor ebx, ebx
// 00531317  399524010000         cmp dword ptr [ebp + 0x124], edx
// 0053131d  8954241c             mov dword ptr [esp + 0x1c], edx
// 00531321  0f8e96000000         jle 0x5313bd
// 00531327  8d8528010000         lea eax, [ebp + 0x128]
// 0053132d  89442414             mov dword ptr [esp + 0x14], eax
// 00531331  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00531335  8b39                 mov edi, dword ptr [ecx]
// 00531337  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 0053133a  8bc1                 mov eax, ecx
// 0053133c  0faf442410           imul eax, dword ptr [esp + 0x10]
// 00531341  837f3800             cmp dword ptr [edi + 0x38], 0
// 00531345  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0053134d  7e54                 jle 0x5313a3
// 0053134f  8b54942c             mov edx, dword ptr [esp + edx*4 + 0x2c]
// 00531353  c1e007               shl eax, 7
// 00531356  89442428             mov dword ptr [esp + 0x28], eax
// 0053135a  8d2cb2               lea ebp, [edx + esi*4]
// 0053135d  8d4900               lea ecx, [ecx]
// 00531360  8b4500               mov eax, dword ptr [ebp]
// 00531363  03442428             add eax, dword ptr [esp + 0x28]
// 00531367  33d2                 xor edx, edx
// 00531369  85c9                 test ecx, ecx
// 0053136b  7e19                 jle 0x531386
// 0053136d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00531371  8d749920             lea esi, [ecx + ebx*4 + 0x20]
// 00531375  8906                 mov dword ptr [esi], eax
// 00531377  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 0053137a  42                   inc edx
// 0053137b  43                   inc ebx
// 0053137c  83c604               add esi, 4
// 0053137f  83e880               sub eax, -0x80
// 00531382  3bd1                 cmp edx, ecx
// 00531384  7cef                 jl 0x531375
// 00531386  8b442418             mov eax, dword ptr [esp + 0x18]
// 0053138a  40                   inc eax
// 0053138b  83c504               add ebp, 4
// 0053138e  3b4738               cmp eax, dword ptr [edi + 0x38]
// 00531391  89442418             mov dword ptr [esp + 0x18], eax
// 00531395  7cc9                 jl 0x531360
// 00531397  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 0053139b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0053139f  8b742424             mov esi, dword ptr [esp + 0x24]
// 005313a3  8344241404           add dword ptr [esp + 0x14], 4
// 005313a8  42                   inc edx
// 005313a9  3b9524010000         cmp edx, dword ptr [ebp + 0x124]
// 005313af  8954241c             mov dword ptr [esp + 0x1c], edx
// 005313b3  0f8c78ffffff         jl 0x531331
// 005313b9  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005313bd  8b9598010000         mov edx, dword ptr [ebp + 0x198]
// 005313c3  8d4720               lea eax, [edi + 0x20]
// 005313c6  50                   push eax
// 005313c7  8b4204               mov eax, dword ptr [edx + 4]
// 005313ca  55                   push ebp
// 005313cb  ffd0                 call eax
// 005313cd  83c408               add esp, 8
// 005313d0  84c0                 test al, al
// 005313d2  7469                 je 0x53143d
// 005313d4  8b442410             mov eax, dword ptr [esp + 0x10]
// 005313d8  40                   inc eax
// 005313d9  89442410             mov dword ptr [esp + 0x10], eax
// 005313dd  3b8538010000         cmp eax, dword ptr [ebp + 0x138]
// 005313e3  0f822affffff         jb 0x531313
// 005313e9  46                   inc esi
// 005313ea  c7471400000000       mov dword ptr [edi + 0x14], 0
// 005313f1  3b771c               cmp esi, dword ptr [edi + 0x1c]
// 005313f4  89742424             mov dword ptr [esp + 0x24], esi
// 005313f8  0f8c02ffffff         jl 0x531300
// 005313fe  8b951c010000         mov edx, dword ptr [ebp + 0x11c]
// 00531404  be01000000           mov esi, 1
// 00531409  01b580000000         add dword ptr [ebp + 0x80], esi
// 0053140f  8b8d80000000         mov ecx, dword ptr [ebp + 0x80]
// 00531415  3bca                 cmp ecx, edx
// 00531417  7361                 jae 0x53147a
// 00531419  39b524010000         cmp dword ptr [ebp + 0x124], esi
// 0053141f  8b8588010000         mov eax, dword ptr [ebp + 0x188]
// 00531425  7e2a                 jle 0x531451
// 00531427  33c9                 xor ecx, ecx
// 00531429  5f                   pop edi
// 0053142a  89701c               mov dword ptr [eax + 0x1c], esi
// 0053142d  894814               mov dword ptr [eax + 0x14], ecx
// 00531430  894818               mov dword ptr [eax + 0x18], ecx
// 00531433  8d4602               lea eax, [esi + 2]
// 00531436  5e                   pop esi
// 00531437  5d                   pop ebp
// 00531438  5b                   pop ebx
// 00531439  83c42c               add esp, 0x2c
// 0053143c  c3                   ret 
// 0053143d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00531441  897718               mov dword ptr [edi + 0x18], esi
// 00531444  894f14               mov dword ptr [edi + 0x14], ecx
// 00531447  5f                   pop edi
// 00531448  5e                   pop esi
// 00531449  5d                   pop ebp
// 0053144a  33c0                 xor eax, eax
// 0053144c  5b                   pop ebx
// 0053144d  83c42c               add esp, 0x2c
// 00531450  c3                   ret 
// 00531451  4a                   dec edx
// 00531452  3bca                 cmp ecx, edx
// 00531454  8b9528010000         mov edx, dword ptr [ebp + 0x128]
// 0053145a  7305                 jae 0x531461
// 0053145c  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 0053145f  eb03                 jmp 0x531464
// 00531461  8b4a48               mov ecx, dword ptr [edx + 0x48]
// 00531464  5f                   pop edi
// 00531465  89481c               mov dword ptr [eax + 0x1c], ecx
// 00531468  33c9                 xor ecx, ecx
// 0053146a  5e                   pop esi
// 0053146b  5d                   pop ebp
// 0053146c  894814               mov dword ptr [eax + 0x14], ecx
// 0053146f  894818               mov dword ptr [eax + 0x18], ecx
// 00531472  8d4103               lea eax, [ecx + 3]
// 00531475  5b                   pop ebx
// 00531476  83c42c               add esp, 0x2c
// 00531479  c3                   ret 
// 0053147a  8b9590010000         mov edx, dword ptr [ebp + 0x190]
// 00531480  8b420c               mov eax, dword ptr [edx + 0xc]
// 00531483  55                   push ebp
// 00531484  ffd0                 call eax
// 00531486  83c404               add esp, 4
// 00531489  5f                   pop edi
// 0053148a  5e                   pop esi
// 0053148b  5d                   pop ebp
// 0053148c  b804000000           mov eax, 4
// 00531491  5b                   pop ebx
// 00531492  83c42c               add esp, 0x2c
// 00531495  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _consume_data)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
