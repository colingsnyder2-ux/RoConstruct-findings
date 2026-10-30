// roc 2009-12 0088ef80  unit: CXTPShortcutManager  size: 740 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088ef80
//
// 0088ef80  6aff                 push -1
// 0088ef82  68c8109600           push 0x9610c8
// 0088ef87  64a100000000         mov eax, dword ptr fs:[0]
// 0088ef8d  50                   push eax
// 0088ef8e  83ec28               sub esp, 0x28
// 0088ef91  53                   push ebx
// 0088ef92  55                   push ebp
// 0088ef93  56                   push esi
// 0088ef94  57                   push edi
// 0088ef95  a10052b600           mov eax, dword ptr [0xb65200]
// 0088ef9a  33c4                 xor eax, esp
// 0088ef9c  50                   push eax
// 0088ef9d  8d44243c             lea eax, [esp + 0x3c]
// 0088efa1  64a300000000         mov dword ptr fs:[0], eax
// 0088efa7  8bd9                 mov ebx, ecx
// 0088efa9  895c2414             mov dword ptr [esp + 0x14], ebx
// 0088efad  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 0088efb1  837e2800             cmp dword ptr [esi + 0x28], 0
// 0088efb5  0f853d010000         jne 0x88f0f8
// 0088efbb  8b4330               mov eax, dword ptr [ebx + 0x30]
// 0088efbe  8b1d1cca9800         mov ebx, dword ptr [0x98ca1c]
// 0088efc4  6a00                 push 0
// 0088efc6  6a00                 push 0
// 0088efc8  50                   push eax
// 0088efc9  ffd3                 call ebx
// 0088efcb  33c9                 xor ecx, ecx
// 0088efcd  8be8                 mov ebp, eax
// 0088efcf  ba06000000           mov edx, 6
// 0088efd4  f7e2                 mul edx
// 0088efd6  0f90c1               seto cl
// 0088efd9  f7d9                 neg ecx
// 0088efdb  0bc8                 or ecx, eax
// 0088efdd  51                   push ecx
// 0088efde  e85f4bf6ff           call 0x7f3b42
// 0088efe3  83c404               add esp, 4
// 0088efe6  8bf8                 mov edi, eax
// 0088efe8  8b442414             mov eax, dword ptr [esp + 0x14]
// 0088efec  8b4830               mov ecx, dword ptr [eax + 0x30]
// 0088efef  55                   push ebp
// 0088eff0  57                   push edi
// 0088eff1  51                   push ecx
// 0088eff2  897c2424             mov dword ptr [esp + 0x24], edi
// 0088eff6  ffd3                 call ebx
// 0088eff8  8b16                 mov edx, dword ptr [esi]
// 0088effa  8b828c000000         mov eax, dword ptr [edx + 0x8c]
// 0088f000  8bce                 mov ecx, esi
// 0088f002  ffd0                 call eax
// 0088f004  8bce                 mov ecx, esi
// 0088f006  85c0                 test eax, eax
// 0088f008  742f                 je 0x88f039
// 0088f00a  8b16                 mov edx, dword ptr [esi]
// 0088f00c  8b4278               mov eax, dword ptr [edx + 0x78]
// 0088f00f  55                   push ebp
// 0088f010  ffd0                 call eax
// 0088f012  8b16                 mov edx, dword ptr [esi]
// 0088f014  8b9280000000         mov edx, dword ptr [edx + 0x80]
// 0088f01a  8d446d00             lea eax, [ebp + ebp*2]
// 0088f01e  03c0                 add eax, eax
// 0088f020  50                   push eax
// 0088f021  57                   push edi
// 0088f022  6884b09b00           push 0x9bb084
// 0088f027  8bce                 mov ecx, esi
// 0088f029  ffd2                 call edx
// 0088f02b  57                   push edi
// 0088f02c  e8d54af6ff           call 0x7f3b06
// 0088f031  83c404               add esp, 4
// 0088f034  e915020000           jmp 0x88f24e
// 0088f039  8b06                 mov eax, dword ptr [esi]
// 0088f03b  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 0088f041  68c831a000           push 0xa031c8
// 0088f046  ffd2                 call edx
// 0088f048  8bd8                 mov ebx, eax
// 0088f04a  895c244c             mov dword ptr [esp + 0x4c], ebx
// 0088f04e  8b03                 mov eax, dword ptr [ebx]
// 0088f050  8b5004               mov edx, dword ptr [eax + 4]
// 0088f053  6a01                 push 1
// 0088f055  55                   push ebp
// 0088f056  8bcb                 mov ecx, ebx
// 0088f058  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 0088f060  ffd2                 call edx
// 0088f062  89442414             mov dword ptr [esp + 0x14], eax
// 0088f066  85ed                 test ebp, ebp
// 0088f068  7e6e                 jle 0x88f0d8
// 0088f06a  83c702               add edi, 2
// 0088f06d  8d4900               lea ecx, [ecx]
// 0088f070  8b03                 mov eax, dword ptr [ebx]
// 0088f072  8b5008               mov edx, dword ptr [eax + 8]
// 0088f075  8d4c2414             lea ecx, [esp + 0x14]
// 0088f079  51                   push ecx
// 0088f07a  8bcb                 mov ecx, ebx
// 0088f07c  ffd2                 call edx
// 0088f07e  8bf0                 mov esi, eax
// 0088f080  8974241c             mov dword ptr [esp + 0x1c], esi
// 0088f084  6a00                 push 0
// 0088f086  8d4702               lea eax, [edi + 2]
// 0088f089  50                   push eax
// 0088f08a  68a4329f00           push 0x9f32a4
// 0088f08f  56                   push esi
// 0088f090  c644245401           mov byte ptr [esp + 0x54], 1
// 0088f095  e80619fcff           call 0x8509a0
// 0088f09a  6a00                 push 0
// 0088f09c  8d4ffe               lea ecx, [edi - 2]
// 0088f09f  51                   push ecx
// 0088f0a0  68c031a000           push 0xa031c0
// 0088f0a5  56                   push esi
// 0088f0a6  e8c518fcff           call 0x850970
// 0088f0ab  6a00                 push 0
// 0088f0ad  57                   push edi
// 0088f0ae  68d8e19d00           push 0x9de1d8
// 0088f0b3  56                   push esi
// 0088f0b4  e8e718fcff           call 0x8509a0
// 0088f0b9  83c430               add esp, 0x30
// 0088f0bc  c644244400           mov byte ptr [esp + 0x44], 0
// 0088f0c1  85f6                 test esi, esi
// 0088f0c3  7407                 je 0x88f0cc
// 0088f0c5  8bce                 mov ecx, esi
// 0088f0c7  e8104df6ff           call 0x7f3ddc
// 0088f0cc  83c706               add edi, 6
// 0088f0cf  83ed01               sub ebp, 1
// 0088f0d2  759c                 jne 0x88f070
// 0088f0d4  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0088f0d8  8b13                 mov edx, dword ptr [ebx]
// 0088f0da  8b02                 mov eax, dword ptr [edx]
// 0088f0dc  6a01                 push 1
// 0088f0de  8bcb                 mov ecx, ebx
// 0088f0e0  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 0088f0e8  ffd0                 call eax
// 0088f0ea  57                   push edi
// 0088f0eb  e8164af6ff           call 0x7f3b06
// 0088f0f0  83c404               add esp, 4
// 0088f0f3  e956010000           jmp 0x88f24e
// 0088f0f8  8b16                 mov edx, dword ptr [esi]
// 0088f0fa  8b828c000000         mov eax, dword ptr [edx + 0x8c]
// 0088f100  8bce                 mov ecx, esi
// 0088f102  ffd0                 call eax
// 0088f104  85c0                 test eax, eax
// 0088f106  7455                 je 0x88f15d
// 0088f108  8b16                 mov edx, dword ptr [esi]
// 0088f10a  8b427c               mov eax, dword ptr [edx + 0x7c]
// 0088f10d  8bce                 mov ecx, esi
// 0088f10f  ffd0                 call eax
// 0088f111  33c9                 xor ecx, ecx
// 0088f113  8bf8                 mov edi, eax
// 0088f115  ba06000000           mov edx, 6
// 0088f11a  f7e2                 mul edx
// 0088f11c  0f90c1               seto cl
// 0088f11f  f7d9                 neg ecx
// 0088f121  0bc8                 or ecx, eax
// 0088f123  51                   push ecx
// 0088f124  e8194af6ff           call 0x7f3b42
// 0088f129  83c404               add esp, 4
// 0088f12c  8d0c7f               lea ecx, [edi + edi*2]
// 0088f12f  03c9                 add ecx, ecx
// 0088f131  51                   push ecx
// 0088f132  8be8                 mov ebp, eax
// 0088f134  8b06                 mov eax, dword ptr [esi]
// 0088f136  8b9084000000         mov edx, dword ptr [eax + 0x84]
// 0088f13c  55                   push ebp
// 0088f13d  6884b09b00           push 0x9bb084
// 0088f142  8bce                 mov ecx, esi
// 0088f144  ffd2                 call edx
// 0088f146  57                   push edi
// 0088f147  55                   push ebp
// 0088f148  8bcb                 mov ecx, ebx
// 0088f14a  e811f2ffff           call 0x88e360
// 0088f14f  55                   push ebp
// 0088f150  e8b149f6ff           call 0x7f3b06
// 0088f155  83c404               add esp, 4
// 0088f158  e9f1000000           jmp 0x88f24e
// 0088f15d  8d4c2428             lea ecx, [esp + 0x28]
// 0088f161  e84afaffff           call 0x88ebb0
// 0088f166  8b06                 mov eax, dword ptr [esi]
// 0088f168  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 0088f16e  68c831a000           push 0xa031c8
// 0088f173  8bce                 mov ecx, esi
// 0088f175  c744244802000000     mov dword ptr [esp + 0x48], 2
// 0088f17d  ffd2                 call edx
// 0088f17f  8bf8                 mov edi, eax
// 0088f181  897c241c             mov dword ptr [esp + 0x1c], edi
// 0088f185  8b07                 mov eax, dword ptr [edi]
// 0088f187  8b5004               mov edx, dword ptr [eax + 4]
// 0088f18a  6a01                 push 1
// 0088f18c  b303                 mov bl, 3
// 0088f18e  6a00                 push 0
// 0088f190  8bcf                 mov ecx, edi
// 0088f192  885c244c             mov byte ptr [esp + 0x4c], bl
// 0088f196  ffd2                 call edx
// 0088f198  8944244c             mov dword ptr [esp + 0x4c], eax
// 0088f19c  85c0                 test eax, eax
// 0088f19e  747b                 je 0x88f21b
// 0088f1a0  8b07                 mov eax, dword ptr [edi]
// 0088f1a2  8b5008               mov edx, dword ptr [eax + 8]
// 0088f1a5  8d4c244c             lea ecx, [esp + 0x4c]
// 0088f1a9  51                   push ecx
// 0088f1aa  8bcf                 mov ecx, edi
// 0088f1ac  ffd2                 call edx
// 0088f1ae  8bf0                 mov esi, eax
// 0088f1b0  89742418             mov dword ptr [esp + 0x18], esi
// 0088f1b4  6a00                 push 0
// 0088f1b6  8d442428             lea eax, [esp + 0x28]
// 0088f1ba  50                   push eax
// 0088f1bb  68a4329f00           push 0x9f32a4
// 0088f1c0  56                   push esi
// 0088f1c1  c644245404           mov byte ptr [esp + 0x54], 4
// 0088f1c6  e8d517fcff           call 0x8509a0
// 0088f1cb  6a00                 push 0
// 0088f1cd  8d4c2434             lea ecx, [esp + 0x34]
// 0088f1d1  51                   push ecx
// 0088f1d2  68c031a000           push 0xa031c0
// 0088f1d7  56                   push esi
// 0088f1d8  e89317fcff           call 0x850970
// 0088f1dd  6a00                 push 0
// 0088f1df  8d542446             lea edx, [esp + 0x46]
// 0088f1e3  52                   push edx
// 0088f1e4  68d8e19d00           push 0x9de1d8
// 0088f1e9  56                   push esi
// 0088f1ea  e8b117fcff           call 0x8509a0
// 0088f1ef  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0088f1f3  83c430               add esp, 0x30
// 0088f1f6  8d442420             lea eax, [esp + 0x20]
// 0088f1fa  50                   push eax
// 0088f1fb  51                   push ecx
// 0088f1fc  8d4c2430             lea ecx, [esp + 0x30]
// 0088f200  e86bf3ffff           call 0x88e570
// 0088f205  885c2444             mov byte ptr [esp + 0x44], bl
// 0088f209  85f6                 test esi, esi
// 0088f20b  7407                 je 0x88f214
// 0088f20d  8bce                 mov ecx, esi
// 0088f20f  e8c84bf6ff           call 0x7f3ddc
// 0088f214  837c244c00           cmp dword ptr [esp + 0x4c], 0
// 0088f219  7585                 jne 0x88f1a0
// 0088f21b  8b542430             mov edx, dword ptr [esp + 0x30]
// 0088f21f  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0088f223  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0088f227  52                   push edx
// 0088f228  50                   push eax
// 0088f229  e832f1ffff           call 0x88e360
// 0088f22e  8b17                 mov edx, dword ptr [edi]
// 0088f230  8b02                 mov eax, dword ptr [edx]
// 0088f232  6a01                 push 1
// 0088f234  8bcf                 mov ecx, edi
// 0088f236  c644244802           mov byte ptr [esp + 0x48], 2
// 0088f23b  ffd0                 call eax
// 0088f23d  8d4c2428             lea ecx, [esp + 0x28]
// 0088f241  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 0088f249  e882f9ffff           call 0x88ebd0
// 0088f24e  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0088f252  64890d00000000       mov dword ptr fs:[0], ecx
// 0088f259  59                   pop ecx
// 0088f25a  5f                   pop edi
// 0088f25b  5e                   pop esi
// 0088f25c  5d                   pop ebp
// 0088f25d  5b                   pop ebx
// 0088f25e  83c434               add esp, 0x34
// 0088f261  c20400               ret 4
// copied from an identical function in another client (function ?DoPropExchange@CXTPShortcutManager@@UAEXPAVCXTPPropExchange@@@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPShortcutManager.cpp