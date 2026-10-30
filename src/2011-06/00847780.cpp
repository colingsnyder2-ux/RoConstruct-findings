// roc 2011-06 00847780  unit: CRobloxTreeCtrl  size: 790 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00847780
//
// 00847780  6aff                 push -1
// 00847782  680d55a000           push 0xa0550d
// 00847787  64a100000000         mov eax, dword ptr fs:[0]
// 0084778d  50                   push eax
// 0084778e  83ec18               sub esp, 0x18
// 00847791  53                   push ebx
// 00847792  55                   push ebp
// 00847793  56                   push esi
// 00847794  57                   push edi
// 00847795  a12058c900           mov eax, dword ptr [0xc95820]
// 0084779a  33c4                 xor eax, esp
// 0084779c  50                   push eax
// 0084779d  8d44242c             lea eax, [esp + 0x2c]
// 008477a1  64a300000000         mov dword ptr fs:[0], eax
// 008477a7  8bd9                 mov ebx, ecx
// 008477a9  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008477ad  50                   push eax
// 008477ae  8d4c241c             lea ecx, [esp + 0x1c]
// 008477b2  ff15002ea400         call dword ptr [0xa42e00]
// 008477b8  8d4c2418             lea ecx, [esp + 0x18]
// 008477bc  c744243400000000     mov dword ptr [esp + 0x34], 0
// 008477c4  ff15a826a400         call dword ptr [0xa426a8]
// 008477ca  8944241c             mov dword ptr [esp + 0x1c], eax
// 008477ce  85c0                 test eax, eax
// 008477d0  0f8484000000         je 0x84785a
// 008477d6  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 008477da  85c0                 test eax, eax
// 008477dc  7408                 je 0x8477e6
// 008477de  8bf0                 mov esi, eax
// 008477e0  8974244c             mov dword ptr [esp + 0x4c], esi
// 008477e4  eb1c                 jmp 0x847802
// 008477e6  8b4334               mov eax, dword ptr [ebx + 0x34]
// 008477e9  8b4820               mov ecx, dword ptr [eax + 0x20]
// 008477ec  6a00                 push 0
// 008477ee  6a09                 push 9
// 008477f0  680a110000           push 0x110a
// 008477f5  51                   push ecx
// 008477f6  ff15c019a400         call dword ptr [0xa419c0]
// 008477fc  8944244c             mov dword ptr [esp + 0x4c], eax
// 00847800  8bf0                 mov esi, eax
// 00847802  85f6                 test esi, esi
// 00847804  751a                 jne 0x847820
// 00847806  8b4334               mov eax, dword ptr [ebx + 0x34]
// 00847809  8b5020               mov edx, dword ptr [eax + 0x20]
// 0084780c  56                   push esi
// 0084780d  56                   push esi
// 0084780e  680a110000           push 0x110a
// 00847813  52                   push edx
// 00847814  ff15c019a400         call dword ptr [0xa419c0]
// 0084781a  8944244c             mov dword ptr [esp + 0x4c], eax
// 0084781e  8bf0                 mov esi, eax
// 00847820  8d442418             lea eax, [esp + 0x18]
// 00847824  50                   push eax
// 00847825  8d4c2418             lea ecx, [esp + 0x18]
// 00847829  8bee                 mov ebp, esi
// 0084782b  ff15e42da400         call dword ptr [0xa42de4]
// 00847831  837c244000           cmp dword ptr [esp + 0x40], 0
// 00847836  c644243401           mov byte ptr [esp + 0x34], 1
// 0084783b  750a                 jne 0x847847
// 0084783d  8d4c2414             lea ecx, [esp + 0x14]
// 00847841  ff15e428a400         call dword ptr [0xa428e4]
// 00847847  b801000000           mov eax, 1
// 0084784c  85f6                 test esi, esi
// 0084784e  7538                 jne 0x847888
// 00847850  8d4c2414             lea ecx, [esp + 0x14]
// 00847854  ff15082ea400         call dword ptr [0xa42e08]
// 0084785a  8d4c2418             lea ecx, [esp + 0x18]
// 0084785e  ff15082ea400         call dword ptr [0xa42e08]
// 00847864  33c0                 xor eax, eax
// 00847866  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0084786a  64890d00000000       mov dword ptr fs:[0], ecx
// 00847871  59                   pop ecx
// 00847872  5f                   pop edi
// 00847873  5e                   pop esi
// 00847874  5d                   pop ebp
// 00847875  5b                   pop ebx
// 00847876  83c424               add esp, 0x24
// 00847879  c21400               ret 0x14
// 0084787c  8d642400             lea esp, [esp]
// 00847880  8b442420             mov eax, dword ptr [esp + 0x20]
// 00847884  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 00847888  3bee                 cmp ebp, esi
// 0084788a  7504                 jne 0x847890
// 0084788c  85c0                 test eax, eax
// 0084788e  74c0                 je 0x847850
// 00847890  55                   push ebp
// 00847891  8d4c2440             lea ecx, [esp + 0x40]
// 00847895  51                   push ecx
// 00847896  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00847899  c744242800000000     mov dword ptr [esp + 0x28], 0
// 008478a1  e8d64f1800           call 0x9cc87c
// 008478a6  837c244000           cmp dword ptr [esp + 0x40], 0
// 008478ab  c644243402           mov byte ptr [esp + 0x34], 2
// 008478b0  750a                 jne 0x8478bc
// 008478b2  8d4c243c             lea ecx, [esp + 0x3c]
// 008478b6  ff15e428a400         call dword ptr [0xa428e4]
// 008478bc  6a00                 push 0
// 008478be  8d4c2418             lea ecx, [esp + 0x18]
// 008478c2  ff15c82da400         call dword ptr [0xa42dc8]
// 008478c8  50                   push eax
// 008478c9  8d4c2444             lea ecx, [esp + 0x44]
// 008478cd  ff15a428a400         call dword ptr [0xa428a4]
// 008478d3  8bf8                 mov edi, eax
// 008478d5  83ffff               cmp edi, -1
// 008478d8  0f8435010000         je 0x847a13
// 008478de  837c244800           cmp dword ptr [esp + 0x48], 0
// 008478e3  0f841c010000         je 0x847a05
// 008478e9  85ff                 test edi, edi
// 008478eb  7467                 je 0x847954
// 008478ed  8d77ff               lea esi, [edi - 1]
// 008478f0  56                   push esi
// 008478f1  8d4c2440             lea ecx, [esp + 0x40]
// 008478f5  ff153c25a400         call dword ptr [0xa4253c]
// 008478fb  0fbed0               movsx edx, al
// 008478fe  52                   push edx
// 008478ff  ff156407a400         call dword ptr [0xa40764]
// 00847905  83c404               add esp, 4
// 00847908  85c0                 test eax, eax
// 0084790a  750f                 jne 0x84791b
// 0084790c  56                   push esi
// 0084790d  8d4c2440             lea ecx, [esp + 0x40]
// 00847911  ff153c25a400         call dword ptr [0xa4253c]
// 00847917  3c5f                 cmp al, 0x5f
// 00847919  7539                 jne 0x847954
// 0084791b  8d4c243c             lea ecx, [esp + 0x3c]
// 0084791f  ff15a826a400         call dword ptr [0xa426a8]
// 00847925  2bc7                 sub eax, edi
// 00847927  2b44241c             sub eax, dword ptr [esp + 0x1c]
// 0084792b  8d4c243c             lea ecx, [esp + 0x3c]
// 0084792f  50                   push eax
// 00847930  8d442428             lea eax, [esp + 0x28]
// 00847934  50                   push eax
// 00847935  ff154829a400         call dword ptr [0xa42948]
// 0084793b  50                   push eax
// 0084793c  8d4c2440             lea ecx, [esp + 0x40]
// 00847940  c644243803           mov byte ptr [esp + 0x38], 3
// 00847945  ff156425a400         call dword ptr [0xa42564]
// 0084794b  8d4c2424             lea ecx, [esp + 0x24]
// 0084794f  e982000000           jmp 0x8479d6
// 00847954  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00847958  8d340f               lea esi, [edi + ecx]
// 0084795b  8d4c243c             lea ecx, [esp + 0x3c]
// 0084795f  ff15a826a400         call dword ptr [0xa426a8]
// 00847965  3bc6                 cmp eax, esi
// 00847967  0f8e98000000         jle 0x847a05
// 0084796d  56                   push esi
// 0084796e  8d4c2440             lea ecx, [esp + 0x40]
// 00847972  ff153c25a400         call dword ptr [0xa4253c]
// 00847978  0fbed0               movsx edx, al
// 0084797b  52                   push edx
// 0084797c  ff156407a400         call dword ptr [0xa40764]
// 00847982  83c404               add esp, 4
// 00847985  85c0                 test eax, eax
// 00847987  750f                 jne 0x847998
// 00847989  56                   push esi
// 0084798a  8d4c2440             lea ecx, [esp + 0x40]
// 0084798e  ff153c25a400         call dword ptr [0xa4253c]
// 00847994  3c5f                 cmp al, 0x5f
// 00847996  756d                 jne 0x847a05
// 00847998  8d4c243c             lea ecx, [esp + 0x3c]
// 0084799c  ff15a826a400         call dword ptr [0xa426a8]
// 008479a2  8bf0                 mov esi, eax
// 008479a4  8d4c2414             lea ecx, [esp + 0x14]
// 008479a8  2bf7                 sub esi, edi
// 008479aa  ff15a826a400         call dword ptr [0xa426a8]
// 008479b0  2bf0                 sub esi, eax
// 008479b2  56                   push esi
// 008479b3  8d44242c             lea eax, [esp + 0x2c]
// 008479b7  50                   push eax
// 008479b8  8d4c2444             lea ecx, [esp + 0x44]
// 008479bc  ff154829a400         call dword ptr [0xa42948]
// 008479c2  50                   push eax
// 008479c3  8d4c2440             lea ecx, [esp + 0x40]
// 008479c7  c644243804           mov byte ptr [esp + 0x38], 4
// 008479cc  ff156425a400         call dword ptr [0xa42564]
// 008479d2  8d4c2428             lea ecx, [esp + 0x28]
// 008479d6  c644243402           mov byte ptr [esp + 0x34], 2
// 008479db  ff15082ea400         call dword ptr [0xa42e08]
// 008479e1  6a00                 push 0
// 008479e3  8d4c2418             lea ecx, [esp + 0x18]
// 008479e7  ff15c82da400         call dword ptr [0xa42dc8]
// 008479ed  50                   push eax
// 008479ee  8d4c2444             lea ecx, [esp + 0x44]
// 008479f2  ff15a428a400         call dword ptr [0xa428a4]
// 008479f8  8bf8                 mov edi, eax
// 008479fa  83ffff               cmp edi, -1
// 008479fd  0f85dbfeffff         jne 0x8478de
// 00847a03  eb0e                 jmp 0x847a13
// 00847a05  8b13                 mov edx, dword ptr [ebx]
// 00847a07  8b4268               mov eax, dword ptr [edx + 0x68]
// 00847a0a  55                   push ebp
// 00847a0b  8bcb                 mov ecx, ebx
// 00847a0d  ffd0                 call eax
// 00847a0f  85c0                 test eax, eax
// 00847a11  755e                 jne 0x847a71
// 00847a13  8b742444             mov esi, dword ptr [esp + 0x44]
// 00847a17  8b13                 mov edx, dword ptr [ebx]
// 00847a19  55                   push ebp
// 00847a1a  8bcb                 mov ecx, ebx
// 00847a1c  85f6                 test esi, esi
// 00847a1e  7405                 je 0x847a25
// 00847a20  8b4208               mov eax, dword ptr [edx + 8]
// 00847a23  eb03                 jmp 0x847a28
// 00847a25  8b420c               mov eax, dword ptr [edx + 0xc]
// 00847a28  ffd0                 call eax
// 00847a2a  8be8                 mov ebp, eax
// 00847a2c  85ed                 test ebp, ebp
// 00847a2e  7525                 jne 0x847a55
// 00847a30  50                   push eax
// 00847a31  85f6                 test esi, esi
// 00847a33  7415                 je 0x847a4a
// 00847a35  8b4334               mov eax, dword ptr [ebx + 0x34]
// 00847a38  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00847a3b  55                   push ebp
// 00847a3c  680a110000           push 0x110a
// 00847a41  51                   push ecx
// 00847a42  ff15c019a400         call dword ptr [0xa419c0]
// 00847a48  eb09                 jmp 0x847a53
// 00847a4a  8b13                 mov edx, dword ptr [ebx]
// 00847a4c  8b4210               mov eax, dword ptr [edx + 0x10]
// 00847a4f  8bcb                 mov ecx, ebx
// 00847a51  ffd0                 call eax
// 00847a53  8be8                 mov ebp, eax
// 00847a55  8d4c243c             lea ecx, [esp + 0x3c]
// 00847a59  c644243401           mov byte ptr [esp + 0x34], 1
// 00847a5e  ff15082ea400         call dword ptr [0xa42e08]
// 00847a64  85ed                 test ebp, ebp
// 00847a66  0f8514feffff         jne 0x847880
// 00847a6c  e9dffdffff           jmp 0x847850
// 00847a71  8d4c243c             lea ecx, [esp + 0x3c]
// 00847a75  ff15082ea400         call dword ptr [0xa42e08]
// 00847a7b  8d4c2414             lea ecx, [esp + 0x14]
// 00847a7f  ff15082ea400         call dword ptr [0xa42e08]
// 00847a85  8d4c2418             lea ecx, [esp + 0x18]
// 00847a89  ff15082ea400         call dword ptr [0xa42e08]
// 00847a8f  8bc5                 mov eax, ebp
// 00847a91  e9d0fdffff           jmp 0x847866
// copied from an identical function in another client (function ?FindItem@CXTTreeBase@@UAEPAU_TREEITEM@@PBDHHHPAU2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp