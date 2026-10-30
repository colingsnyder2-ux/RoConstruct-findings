// roc 2009-12 008e7470  unit: CXTPTabPaintManager::CColorSet  size: 505 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e7470
//
// 008e7470  6aff                 push -1
// 008e7472  6890629600           push 0x966290
// 008e7477  64a100000000         mov eax, dword ptr fs:[0]
// 008e747d  50                   push eax
// 008e747e  83ec24               sub esp, 0x24
// 008e7481  a10052b600           mov eax, dword ptr [0xb65200]
// 008e7486  33c4                 xor eax, esp
// 008e7488  89442420             mov dword ptr [esp + 0x20], eax
// 008e748c  55                   push ebp
// 008e748d  56                   push esi
// 008e748e  57                   push edi
// 008e748f  a10052b600           mov eax, dword ptr [0xb65200]
// 008e7494  33c4                 xor eax, esp
// 008e7496  50                   push eax
// 008e7497  8d442434             lea eax, [esp + 0x34]
// 008e749b  64a300000000         mov dword ptr fs:[0], eax
// 008e74a1  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 008e74a5  8b742444             mov esi, dword ptr [esp + 0x44]
// 008e74a9  83fffe               cmp edi, -2
// 008e74ac  0f853b010000         jne 0x8e75ed
// 008e74b2  b855000000           mov eax, 0x55
// 008e74b7  8bd0                 mov edx, eax
// 008e74b9  b9aa000000           mov ecx, 0xaa
// 008e74be  6689442420           mov word ptr [esp + 0x20], ax
// 008e74c3  8bc1                 mov eax, ecx
// 008e74c5  66894c2422           mov word ptr [esp + 0x22], cx
// 008e74ca  8bca                 mov ecx, edx
// 008e74cc  6689542424           mov word ptr [esp + 0x24], dx
// 008e74d1  8bd0                 mov edx, eax
// 008e74d3  6689442426           mov word ptr [esp + 0x26], ax
// 008e74d8  8bc1                 mov eax, ecx
// 008e74da  66894c2428           mov word ptr [esp + 0x28], cx
// 008e74df  8bca                 mov ecx, edx
// 008e74e1  668954242a           mov word ptr [esp + 0x2a], dx
// 008e74e6  668944242c           mov word ptr [esp + 0x2c], ax
// 008e74eb  66894c242e           mov word ptr [esp + 0x2e], cx
// 008e74f0  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008e74f8  c744241018229a00     mov dword ptr [esp + 0x10], 0x9a2218
// 008e7500  8d542420             lea edx, [esp + 0x20]
// 008e7504  52                   push edx
// 008e7505  6a01                 push 1
// 008e7507  6a01                 push 1
// 008e7509  6a08                 push 8
// 008e750b  6a08                 push 8
// 008e750d  c744245000000000     mov dword ptr [esp + 0x50], 0
// 008e7515  ff1578b19800         call dword ptr [0x98b178]
// 008e751b  50                   push eax
// 008e751c  8d4c2414             lea ecx, [esp + 0x14]
// 008e7520  e805c9f0ff           call 0x7f3e2a
// 008e7525  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 008e752d  c744241848189a00     mov dword ptr [esp + 0x18], 0x9a1848
// 008e7535  8b442414             mov eax, dword ptr [esp + 0x14]
// 008e7539  50                   push eax
// 008e753a  c644244001           mov byte ptr [esp + 0x40], 1
// 008e753f  ff15e4b09800         call dword ptr [0x98b0e4]
// 008e7545  50                   push eax
// 008e7546  8d4c241c             lea ecx, [esp + 0x1c]
// 008e754a  e8dbc8f0ff           call 0x7f3e2a
// 008e754f  8d4c2418             lea ecx, [esp + 0x18]
// 008e7553  51                   push ecx
// 008e7554  8bce                 mov ecx, esi
// 008e7556  e871ef0300           call 0x9264cc
// 008e755b  8bf8                 mov edi, eax
// 008e755d  e86e84f4ff           call 0x82f9d0
// 008e7562  6a0f                 push 0xf
// 008e7564  8bc8                 mov ecx, eax
// 008e7566  e8957bf4ff           call 0x82f100
// 008e756b  8b16                 mov edx, dword ptr [esi]
// 008e756d  50                   push eax
// 008e756e  8b4234               mov eax, dword ptr [edx + 0x34]
// 008e7571  8bce                 mov ecx, esi
// 008e7573  ffd0                 call eax
// 008e7575  e85684f4ff           call 0x82f9d0
// 008e757a  6a14                 push 0x14
// 008e757c  8bc8                 mov ecx, eax
// 008e757e  e87d7bf4ff           call 0x82f100
// 008e7583  8b16                 mov edx, dword ptr [esi]
// 008e7585  50                   push eax
// 008e7586  8b4238               mov eax, dword ptr [edx + 0x38]
// 008e7589  8bce                 mov ecx, esi
// 008e758b  ffd0                 call eax
// 008e758d  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 008e7591  8b442454             mov eax, dword ptr [esp + 0x54]
// 008e7595  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 008e7599  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008e759d  682100f000           push 0xf00021
// 008e75a2  2bc2                 sub eax, edx
// 008e75a4  50                   push eax
// 008e75a5  2bcd                 sub ecx, ebp
// 008e75a7  51                   push ecx
// 008e75a8  8b4e04               mov ecx, dword ptr [esi + 4]
// 008e75ab  52                   push edx
// 008e75ac  55                   push ebp
// 008e75ad  51                   push ecx
// 008e75ae  ff1508b19800         call dword ptr [0x98b108]
// 008e75b4  57                   push edi
// 008e75b5  8bce                 mov ecx, esi
// 008e75b7  e810ef0300           call 0x9264cc
// 008e75bc  c644243c00           mov byte ptr [esp + 0x3c], 0
// 008e75c1  8d4c2418             lea ecx, [esp + 0x18]
// 008e75c5  c744241848189a00     mov dword ptr [esp + 0x18], 0x9a1848
// 008e75cd  e85e7cb2ff           call 0x40f230
// 008e75d2  8d4c2410             lea ecx, [esp + 0x10]
// 008e75d6  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 008e75de  c744241018229a00     mov dword ptr [esp + 0x10], 0x9a2218
// 008e75e6  e8457cb2ff           call 0x40f230
// 008e75eb  eb5c                 jmp 0x8e7649
// 008e75ed  8b442460             mov eax, dword ptr [esp + 0x60]
// 008e75f1  83f802               cmp eax, 2
// 008e75f4  7408                 je 0x8e75fe
// 008e75f6  85c0                 test eax, eax
// 008e75f8  7404                 je 0x8e75fe
// 008e75fa  33ed                 xor ebp, ebp
// 008e75fc  eb05                 jmp 0x8e7603
// 008e75fe  bd01000000           mov ebp, 1
// 008e7603  85c0                 test eax, eax
// 008e7605  740d                 je 0x8e7614
// 008e7607  83f801               cmp eax, 1
// 008e760a  7408                 je 0x8e7614
// 008e760c  8bc7                 mov eax, edi
// 008e760e  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 008e7612  eb04                 jmp 0x8e7618
// 008e7614  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 008e7618  8b9104020000         mov edx, dword ptr [ecx + 0x204]
// 008e761e  83ba8000000000       cmp dword ptr [edx + 0x80], 0
// 008e7625  7406                 je 0x8e762d
// 008e7627  8bcf                 mov ecx, edi
// 008e7629  8bf8                 mov edi, eax
// 008e762b  8bc1                 mov eax, ecx
// 008e762d  33c9                 xor ecx, ecx
// 008e762f  85ed                 test ebp, ebp
// 008e7631  0f94c1               sete cl
// 008e7634  8d542448             lea edx, [esp + 0x48]
// 008e7638  51                   push ecx
// 008e7639  50                   push eax
// 008e763a  57                   push edi
// 008e763b  52                   push edx
// 008e763c  56                   push esi
// 008e763d  e85e5cf6ff           call 0x84d2a0
// 008e7642  8bc8                 mov ecx, eax
// 008e7644  e8875cf6ff           call 0x84d2d0
// 008e7649  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008e764d  64890d00000000       mov dword ptr fs:[0], ecx
// 008e7654  59                   pop ecx
// 008e7655  5f                   pop edi
// 008e7656  5e                   pop esi
// 008e7657  5d                   pop ebp
// 008e7658  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008e765c  33cc                 xor ecx, esp
// 008e765e  e837ddf0ff           call 0x7f539a
// 008e7663  83c430               add esp, 0x30
// 008e7666  c22000               ret 0x20
// copied from an identical function in another client (function ?GradientFill@CColorSet@CXTPTabPaintManager@@QAEXPAVCDC@@VCRect@@KKW4XTPTabPosition@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManagerColors.cpp