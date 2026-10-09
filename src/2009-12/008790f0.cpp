// roc 2009-12 008790f0  unit: CXTPControlGalleryPaintManager  size: 3093 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008790f0
//
// 008790f0  81ec84000000         sub esp, 0x84
// 008790f6  53                   push ebx
// 008790f7  8b9c2490000000       mov ebx, dword ptr [esp + 0x90]
// 008790fe  8b4360               mov eax, dword ptr [ebx + 0x60]
// 00879101  55                   push ebp
// 00879102  56                   push esi
// 00879103  57                   push edi
// 00879104  898c2480000000       mov dword ptr [esp + 0x80], ecx
// 0087910b  85c0                 test eax, eax
// 0087910d  741d                 je 0x87912c
// 0087910f  83c9ff               or ecx, 0xffffffff
// 00879112  83783000             cmp dword ptr [eax + 0x30], 0
// 00879116  750b                 jne 0x879123
// 00879118  833800               cmp dword ptr [eax], 0
// 0087911b  7506                 jne 0x879123
// 0087911d  894c2410             mov dword ptr [esp + 0x10], ecx
// 00879121  eb14                 jmp 0x879137
// 00879123  8b4358               mov eax, dword ptr [ebx + 0x58]
// 00879126  89442410             mov dword ptr [esp + 0x10], eax
// 0087912a  eb0b                 jmp 0x879137
// 0087912c  8b4b58               mov ecx, dword ptr [ebx + 0x58]
// 0087912f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00879137  8b5320               mov edx, dword ptr [ebx + 0x20]
// 0087913a  2b531c               sub edx, dword ptr [ebx + 0x1c]
// 0087913d  894c2414             mov dword ptr [esp + 0x14], ecx
// 00879141  85d2                 test edx, edx
// 00879143  0f8eaf0b0000         jle 0x879cf8
// 00879149  8b4308               mov eax, dword ptr [ebx + 8]
// 0087914c  2b430c               sub eax, dword ptr [ebx + 0xc]
// 0087914f  2b4304               sub eax, dword ptr [ebx + 4]
// 00879152  40                   inc eax
// 00879153  85c0                 test eax, eax
// 00879155  7e14                 jle 0x87916b
// 00879157  8b13                 mov edx, dword ptr [ebx]
// 00879159  8b4204               mov eax, dword ptr [edx + 4]
// 0087915c  8bcb                 mov ecx, ebx
// 0087915e  ffd0                 call eax
// 00879160  85c0                 test eax, eax
// 00879162  7407                 je 0x87916b
// 00879164  bf01000000           mov edi, 1
// 00879169  eb02                 jmp 0x87916d
// 0087916b  33ff                 xor edi, edi
// 0087916d  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00879170  8b4338               mov eax, dword ptr [ebx + 0x38]
// 00879173  8bf1                 mov esi, ecx
// 00879175  2bf0                 sub esi, eax
// 00879177  2b4328               sub eax, dword ptr [ebx + 0x28]
// 0087917a  8944244c             mov dword ptr [esp + 0x4c], eax
// 0087917e  85ff                 test edi, edi
// 00879180  7405                 je 0x879187
// 00879182  3b4b2c               cmp ecx, dword ptr [ebx + 0x2c]
// 00879185  7e06                 jle 0x87918d
// 00879187  33f6                 xor esi, esi
// 00879189  8974244c             mov dword ptr [esp + 0x4c], esi
// 0087918d  8bcb                 mov ecx, ebx
// 0087918f  e82c200700           call 0x8eb1c0
// 00879194  837b5c00             cmp dword ptr [ebx + 0x5c], 0
// 00879198  89442448             mov dword ptr [esp + 0x48], eax
// 0087919c  0f84b1050000         je 0x879753
// 008791a2  8d4b48               lea ecx, [ebx + 0x48]
// 008791a5  51                   push ecx
// 008791a6  8d942488000000       lea edx, [esp + 0x88]
// 008791ad  52                   push edx
// 008791ae  ff1564cc9800         call dword ptr [0x98cc64]
// 008791b4  8b6b2c               mov ebp, dword ptr [ebx + 0x2c]
// 008791b7  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 008791be  8b5328               mov edx, dword ptr [ebx + 0x28]
// 008791c1  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 008791c8  896c241c             mov dword ptr [esp + 0x1c], ebp
// 008791cc  8bac2490000000       mov ebp, dword ptr [esp + 0x90]
// 008791d3  896c2424             mov dword ptr [esp + 0x24], ebp
// 008791d7  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 008791db  896c245c             mov dword ptr [esp + 0x5c], ebp
// 008791df  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 008791e3  89542444             mov dword ptr [esp + 0x44], edx
// 008791e7  89542454             mov dword ptr [esp + 0x54], edx
// 008791eb  89542474             mov dword ptr [esp + 0x74], edx
// 008791ef  03d5                 add edx, ebp
// 008791f1  03f2                 add esi, edx
// 008791f3  89442438             mov dword ptr [esp + 0x38], eax
// 008791f7  89442418             mov dword ptr [esp + 0x18], eax
// 008791fb  89442450             mov dword ptr [esp + 0x50], eax
// 008791ff  89442470             mov dword ptr [esp + 0x70], eax
// 00879203  89442428             mov dword ptr [esp + 0x28], eax
// 00879207  89442460             mov dword ptr [esp + 0x60], eax
// 0087920b  8b442448             mov eax, dword ptr [esp + 0x48]
// 0087920f  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00879213  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 0087921a  8954247c             mov dword ptr [esp + 0x7c], edx
// 0087921e  8954242c             mov dword ptr [esp + 0x2c], edx
// 00879222  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00879226  894c2440             mov dword ptr [esp + 0x40], ecx
// 0087922a  894c2420             mov dword ptr [esp + 0x20], ecx
// 0087922e  894c2458             mov dword ptr [esp + 0x58], ecx
// 00879232  894c2478             mov dword ptr [esp + 0x78], ecx
// 00879236  894c2430             mov dword ptr [esp + 0x30], ecx
// 0087923a  89742434             mov dword ptr [esp + 0x34], esi
// 0087923e  89742464             mov dword ptr [esp + 0x64], esi
// 00879242  894c2468             mov dword ptr [esp + 0x68], ecx
// 00879246  8954246c             mov dword ptr [esp + 0x6c], edx
// 0087924a  83f803               cmp eax, 3
// 0087924d  0f85fc010000         jne 0x87944f
// 00879253  8bb42480000000       mov esi, dword ptr [esp + 0x80]
// 0087925a  83c620               add esi, 0x20
// 0087925d  8bce                 mov ecx, esi
// 0087925f  e85c29ffff           call 0x86bbc0
// 00879264  85c0                 test eax, eax
// 00879266  0f8443030000         je 0x8795af
// 0087926c  85ff                 test edi, edi
// 0087926e  7505                 jne 0x879275
// 00879270  8d4f04               lea ecx, [edi + 4]
// 00879273  eb1a                 jmp 0x87928f
// 00879275  b83c000000           mov eax, 0x3c
// 0087927a  39442410             cmp dword ptr [esp + 0x10], eax
// 0087927e  7505                 jne 0x879285
// 00879280  8d48c7               lea ecx, [eax - 0x39]
// 00879283  eb0a                 jmp 0x87928f
// 00879285  33c9                 xor ecx, ecx
// 00879287  39442414             cmp dword ptr [esp + 0x14], eax
// 0087928b  0f94c1               sete cl
// 0087928e  41                   inc ecx
// 0087928f  8b9c2498000000       mov ebx, dword ptr [esp + 0x98]
// 00879296  85db                 test ebx, ebx
// 00879298  7504                 jne 0x87929e
// 0087929a  33c0                 xor eax, eax
// 0087929c  eb03                 jmp 0x8792a1
// 0087929e  8b4304               mov eax, dword ptr [ebx + 4]
// 008792a1  6a00                 push 0
// 008792a3  8d54243c             lea edx, [esp + 0x3c]
// 008792a7  52                   push edx
// 008792a8  51                   push ecx
// 008792a9  6a01                 push 1
// 008792ab  50                   push eax
// 008792ac  8bce                 mov ecx, esi
// 008792ae  e88d25ffff           call 0x86b840
// 008792b3  85ff                 test edi, edi
// 008792b5  7505                 jne 0x8792bc
// 008792b7  8d4f08               lea ecx, [edi + 8]
// 008792ba  eb1c                 jmp 0x8792d8
// 008792bc  b83d000000           mov eax, 0x3d
// 008792c1  39442410             cmp dword ptr [esp + 0x10], eax
// 008792c5  7505                 jne 0x8792cc
// 008792c7  8d48ca               lea ecx, [eax - 0x36]
// 008792ca  eb0c                 jmp 0x8792d8
// 008792cc  33c9                 xor ecx, ecx
// 008792ce  39442414             cmp dword ptr [esp + 0x14], eax
// 008792d2  0f94c1               sete cl
// 008792d5  83c105               add ecx, 5
// 008792d8  85db                 test ebx, ebx
// 008792da  7504                 jne 0x8792e0
// 008792dc  33c0                 xor eax, eax
// 008792de  eb03                 jmp 0x8792e3
// 008792e0  8b4304               mov eax, dword ptr [ebx + 4]
// 008792e3  6a00                 push 0
// 008792e5  8d54241c             lea edx, [esp + 0x1c]
// 008792e9  52                   push edx
// 008792ea  51                   push ecx
// 008792eb  6a01                 push 1
// 008792ed  50                   push eax
// 008792ee  8bce                 mov ecx, esi
// 008792f0  e84b25ffff           call 0x86b840
// 008792f5  8b2d68cc9800         mov ebp, dword ptr [0x98cc68]
// 008792fb  8d442450             lea eax, [esp + 0x50]
// 008792ff  50                   push eax
// 00879300  ffd5                 call ebp
// 00879302  85c0                 test eax, eax
// 00879304  0f85ee090000         jne 0x879cf8
// 0087930a  8d4c2470             lea ecx, [esp + 0x70]
// 0087930e  51                   push ecx
// 0087930f  ffd5                 call ebp
// 00879311  85c0                 test eax, eax
// 00879313  7540                 jne 0x879355
// 00879315  85ff                 test edi, edi
// 00879317  7505                 jne 0x87931e
// 00879319  8d4804               lea ecx, [eax + 4]
// 0087931c  eb1a                 jmp 0x879338
// 0087931e  b83e000000           mov eax, 0x3e
// 00879323  39442410             cmp dword ptr [esp + 0x10], eax
// 00879327  7505                 jne 0x87932e
// 00879329  8d48c5               lea ecx, [eax - 0x3b]
// 0087932c  eb0a                 jmp 0x879338
// 0087932e  33c9                 xor ecx, ecx
// 00879330  39442414             cmp dword ptr [esp + 0x14], eax
// 00879334  0f94c1               sete cl
// 00879337  41                   inc ecx
// 00879338  85db                 test ebx, ebx
// 0087933a  7504                 jne 0x879340
// 0087933c  33c0                 xor eax, eax
// 0087933e  eb03                 jmp 0x879343
// 00879340  8b4304               mov eax, dword ptr [ebx + 4]
// 00879343  6a00                 push 0
// 00879345  8d542474             lea edx, [esp + 0x74]
// 00879349  52                   push edx
// 0087934a  51                   push ecx
// 0087934b  6a06                 push 6
// 0087934d  50                   push eax
// 0087934e  8bce                 mov ecx, esi
// 00879350  e8eb24ffff           call 0x86b840
// 00879355  8d442428             lea eax, [esp + 0x28]
// 00879359  50                   push eax
// 0087935a  ffd5                 call ebp
// 0087935c  85c0                 test eax, eax
// 0087935e  0f858f000000         jne 0x8793f3
// 00879364  b840000000           mov eax, 0x40
// 00879369  85ff                 test edi, edi
// 0087936b  7505                 jne 0x879372
// 0087936d  8d48c4               lea ecx, [eax - 0x3c]
// 00879370  eb17                 jmp 0x879389
// 00879372  39442410             cmp dword ptr [esp + 0x10], eax
// 00879376  7507                 jne 0x87937f
// 00879378  b903000000           mov ecx, 3
// 0087937d  eb0a                 jmp 0x879389
// 0087937f  33c9                 xor ecx, ecx
// 00879381  39442414             cmp dword ptr [esp + 0x14], eax
// 00879385  0f94c1               sete cl
// 00879388  41                   inc ecx
// 00879389  85db                 test ebx, ebx
// 0087938b  7504                 jne 0x879391
// 0087938d  33c0                 xor eax, eax
// 0087938f  eb03                 jmp 0x879394
// 00879391  8b4304               mov eax, dword ptr [ebx + 4]
// 00879394  6a00                 push 0
// 00879396  8d54242c             lea edx, [esp + 0x2c]
// 0087939a  52                   push edx
// 0087939b  51                   push ecx
// 0087939c  6a03                 push 3
// 0087939e  50                   push eax
// 0087939f  8bce                 mov ecx, esi
// 008793a1  e89a24ffff           call 0x86b840
// 008793a6  8b442434             mov eax, dword ptr [esp + 0x34]
// 008793aa  2b44242c             sub eax, dword ptr [esp + 0x2c]
// 008793ae  83f80d               cmp eax, 0xd
// 008793b1  7e40                 jle 0x8793f3
// 008793b3  85ff                 test edi, edi
// 008793b5  7505                 jne 0x8793bc
// 008793b7  8d4f04               lea ecx, [edi + 4]
// 008793ba  eb1a                 jmp 0x8793d6
// 008793bc  b840000000           mov eax, 0x40
// 008793c1  39442410             cmp dword ptr [esp + 0x10], eax
// 008793c5  7505                 jne 0x8793cc
// 008793c7  8d48c3               lea ecx, [eax - 0x3d]
// 008793ca  eb0a                 jmp 0x8793d6
// 008793cc  33c9                 xor ecx, ecx
// 008793ce  39442414             cmp dword ptr [esp + 0x14], eax
// 008793d2  0f94c1               sete cl
// 008793d5  41                   inc ecx
// 008793d6  85db                 test ebx, ebx
// 008793d8  7504                 jne 0x8793de
// 008793da  33c0                 xor eax, eax
// 008793dc  eb03                 jmp 0x8793e1
// 008793de  8b4304               mov eax, dword ptr [ebx + 4]
// 008793e1  6a00                 push 0
// 008793e3  8d54242c             lea edx, [esp + 0x2c]
// 008793e7  52                   push edx
// 008793e8  51                   push ecx
// 008793e9  6a09                 push 9
// 008793eb  50                   push eax
// 008793ec  8bce                 mov ecx, esi
// 008793ee  e84d24ffff           call 0x86b840
// 008793f3  8d442460             lea eax, [esp + 0x60]
// 008793f7  50                   push eax
// 008793f8  ffd5                 call ebp
// 008793fa  85c0                 test eax, eax
// 008793fc  0f85f6080000         jne 0x879cf8
// 00879402  85ff                 test edi, edi
// 00879404  7505                 jne 0x87940b
// 00879406  8d4804               lea ecx, [eax + 4]
// 00879409  eb1a                 jmp 0x879425
// 0087940b  b83f000000           mov eax, 0x3f
// 00879410  39442410             cmp dword ptr [esp + 0x10], eax
// 00879414  7505                 jne 0x87941b
// 00879416  8d48c4               lea ecx, [eax - 0x3c]
// 00879419  eb0a                 jmp 0x879425
// 0087941b  33c9                 xor ecx, ecx
// 0087941d  39442414             cmp dword ptr [esp + 0x14], eax
// 00879421  0f94c1               sete cl
// 00879424  41                   inc ecx
// 00879425  85db                 test ebx, ebx
// 00879427  7504                 jne 0x87942d
// 00879429  33c0                 xor eax, eax
// 0087942b  eb03                 jmp 0x879430
// 0087942d  8b4304               mov eax, dword ptr [ebx + 4]
// 00879430  6a00                 push 0
// 00879432  8d542464             lea edx, [esp + 0x64]
// 00879436  52                   push edx
// 00879437  51                   push ecx
// 00879438  6a07                 push 7
// 0087943a  50                   push eax
// 0087943b  8bce                 mov ecx, esi
// 0087943d  e8fe23ffff           call 0x86b840
// 00879442  5f                   pop edi
// 00879443  5e                   pop esi
// 00879444  5d                   pop ebp
// 00879445  5b                   pop ebx
// 00879446  81c484000000         add esp, 0x84
// 0087944c  c20800               ret 8
// 0087944f  83f802               cmp eax, 2
// 00879452  0f8557010000         jne 0x8795af
// 00879458  e87365fbff           call 0x82f9d0
// 0087945d  6a0f                 push 0xf
// 0087945f  8bc8                 mov ecx, eax
// 00879461  e89a5cfbff           call 0x82f100
// 00879466  8bb42498000000       mov esi, dword ptr [esp + 0x98]
// 0087946d  50                   push eax
// 0087946e  8d44243c             lea eax, [esp + 0x3c]
// 00879472  50                   push eax
// 00879473  8bce                 mov ecx, esi
// 00879475  e884b1f7ff           call 0x7f45fe
// 0087947a  85ff                 test edi, edi
// 0087947c  742e                 je 0x8794ac
// 0087947e  837c24103c           cmp dword ptr [esp + 0x10], 0x3c
// 00879483  7527                 jne 0x8794ac
// 00879485  e84665fbff           call 0x82f9d0
// 0087948a  6a14                 push 0x14
// 0087948c  8bc8                 mov ecx, eax
// 0087948e  e86d5cfbff           call 0x82f100
// 00879493  8be8                 mov ebp, eax
// 00879495  e83665fbff           call 0x82f9d0
// 0087949a  6a10                 push 0x10
// 0087949c  8bc8                 mov ecx, eax
// 0087949e  e85d5cfbff           call 0x82f100
// 008794a3  55                   push ebp
// 008794a4  50                   push eax
// 008794a5  8d4c2440             lea ecx, [esp + 0x40]
// 008794a9  51                   push ecx
// 008794aa  eb25                 jmp 0x8794d1
// 008794ac  e81f65fbff           call 0x82f9d0
// 008794b1  6a10                 push 0x10
// 008794b3  8bc8                 mov ecx, eax
// 008794b5  e8465cfbff           call 0x82f100
// 008794ba  8be8                 mov ebp, eax
// 008794bc  e80f65fbff           call 0x82f9d0
// 008794c1  6a14                 push 0x14
// 008794c3  8bc8                 mov ecx, eax
// 008794c5  e8365cfbff           call 0x82f100
// 008794ca  55                   push ebp
// 008794cb  50                   push eax
// 008794cc  8d542440             lea edx, [esp + 0x40]
// 008794d0  52                   push edx
// 008794d1  8bce                 mov ecx, esi
// 008794d3  e820b1f7ff           call 0x7f45f8
// 008794d8  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008794dc  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008794e0  57                   push edi
// 008794e1  6a01                 push 1
// 008794e3  6a00                 push 0
// 008794e5  83ec10               sub esp, 0x10
// 008794e8  8bc4                 mov eax, esp
// 008794ea  8908                 mov dword ptr [eax], ecx
// 008794ec  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008794f0  895004               mov dword ptr [eax + 4], edx
// 008794f3  8b542460             mov edx, dword ptr [esp + 0x60]
// 008794f7  894808               mov dword ptr [eax + 8], ecx
// 008794fa  56                   push esi
// 008794fb  89500c               mov dword ptr [eax + 0xc], edx
// 008794fe  e8bdfaffff           call 0x878fc0
// 00879503  83c420               add esp, 0x20
// 00879506  e8c564fbff           call 0x82f9d0
// 0087950b  6a0f                 push 0xf
// 0087950d  8bc8                 mov ecx, eax
// 0087950f  e8ec5bfbff           call 0x82f100
// 00879514  50                   push eax
// 00879515  8d44241c             lea eax, [esp + 0x1c]
// 00879519  50                   push eax
// 0087951a  8bce                 mov ecx, esi
// 0087951c  e8ddb0f7ff           call 0x7f45fe
// 00879521  85ff                 test edi, edi
// 00879523  742e                 je 0x879553
// 00879525  837c24103d           cmp dword ptr [esp + 0x10], 0x3d
// 0087952a  7527                 jne 0x879553
// 0087952c  e89f64fbff           call 0x82f9d0
// 00879531  6a14                 push 0x14
// 00879533  8bc8                 mov ecx, eax
// 00879535  e8c65bfbff           call 0x82f100
// 0087953a  8be8                 mov ebp, eax
// 0087953c  e88f64fbff           call 0x82f9d0
// 00879541  6a10                 push 0x10
// 00879543  8bc8                 mov ecx, eax
// 00879545  e8b65bfbff           call 0x82f100
// 0087954a  55                   push ebp
// 0087954b  50                   push eax
// 0087954c  8d4c2420             lea ecx, [esp + 0x20]
// 00879550  51                   push ecx
// 00879551  eb25                 jmp 0x879578
// 00879553  e87864fbff           call 0x82f9d0
// 00879558  6a10                 push 0x10
// 0087955a  8bc8                 mov ecx, eax
// 0087955c  e89f5bfbff           call 0x82f100
// 00879561  8be8                 mov ebp, eax
// 00879563  e86864fbff           call 0x82f9d0
// 00879568  6a14                 push 0x14
// 0087956a  8bc8                 mov ecx, eax
// 0087956c  e88f5bfbff           call 0x82f100
// 00879571  55                   push ebp
// 00879572  50                   push eax
// 00879573  8d542420             lea edx, [esp + 0x20]
// 00879577  52                   push edx
// 00879578  8bce                 mov ecx, esi
// 0087957a  e879b0f7ff           call 0x7f45f8
// 0087957f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00879583  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00879587  57                   push edi
// 00879588  6a00                 push 0
// 0087958a  6a00                 push 0
// 0087958c  83ec10               sub esp, 0x10
// 0087958f  8bc4                 mov eax, esp
// 00879591  8908                 mov dword ptr [eax], ecx
// 00879593  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00879597  895004               mov dword ptr [eax + 4], edx
// 0087959a  8b542440             mov edx, dword ptr [esp + 0x40]
// 0087959e  894808               mov dword ptr [eax + 8], ecx
// 008795a1  56                   push esi
// 008795a2  89500c               mov dword ptr [eax + 0xc], edx
// 008795a5  e816faffff           call 0x878fc0
// 008795aa  83c420               add esp, 0x20
// 008795ad  eb72                 jmp 0x879621
// 008795af  8bb42498000000       mov esi, dword ptr [esp + 0x98]
// 008795b6  85f6                 test esi, esi
// 008795b8  7504                 jne 0x8795be
// 008795ba  33c0                 xor eax, eax
// 008795bc  eb03                 jmp 0x8795c1
// 008795be  8b4604               mov eax, dword ptr [esi + 4]
// 008795c1  f7df                 neg edi
// 008795c3  1bff                 sbb edi, edi
// 008795c5  8b2d68ca9800         mov ebp, dword ptr [0x98ca68]
// 008795cb  33c9                 xor ecx, ecx
// 008795cd  81e700ffffff         and edi, 0xffffff00
// 008795d3  81c700010000         add edi, 0x100
// 008795d9  837c24103c           cmp dword ptr [esp + 0x10], 0x3c
// 008795de  8d542438             lea edx, [esp + 0x38]
// 008795e2  0f95c1               setne cl
// 008795e5  49                   dec ecx
// 008795e6  81e100020000         and ecx, 0x200
// 008795ec  0bcf                 or ecx, edi
// 008795ee  51                   push ecx
// 008795ef  6a03                 push 3
// 008795f1  52                   push edx
// 008795f2  50                   push eax
// 008795f3  ffd5                 call ebp
// 008795f5  85f6                 test esi, esi
// 008795f7  7504                 jne 0x8795fd
// 008795f9  33c0                 xor eax, eax
// 008795fb  eb03                 jmp 0x879600
// 008795fd  8b4604               mov eax, dword ptr [esi + 4]
// 00879600  33c9                 xor ecx, ecx
// 00879602  837c24103d           cmp dword ptr [esp + 0x10], 0x3d
// 00879607  8d542418             lea edx, [esp + 0x18]
// 0087960b  0f95c1               setne cl
// 0087960e  49                   dec ecx
// 0087960f  81e100020000         and ecx, 0x200
// 00879615  0bcf                 or ecx, edi
// 00879617  83c901               or ecx, 1
// 0087961a  51                   push ecx
// 0087961b  6a03                 push 3
// 0087961d  52                   push edx
// 0087961e  50                   push eax
// 0087961f  ffd5                 call ebp
// 00879621  8b03                 mov eax, dword ptr [ebx]
// 00879623  8b5008               mov edx, dword ptr [eax + 8]
// 00879626  8bcb                 mov ecx, ebx
// 00879628  ffd2                 call edx
// 0087962a  85c0                 test eax, eax
// 0087962c  7504                 jne 0x879632
// 0087962e  33d2                 xor edx, edx
// 00879630  eb03                 jmp 0x879635
// 00879632  8b5020               mov edx, dword ptr [eax + 0x20]
// 00879635  85f6                 test esi, esi
// 00879637  7504                 jne 0x87963d
// 00879639  33c9                 xor ecx, ecx
// 0087963b  eb03                 jmp 0x879640
// 0087963d  8b4e04               mov ecx, dword ptr [esi + 4]
// 00879640  85c0                 test eax, eax
// 00879642  7403                 je 0x879647
// 00879644  8b4020               mov eax, dword ptr [eax + 0x20]
// 00879647  52                   push edx
// 00879648  51                   push ecx
// 00879649  6837010000           push 0x137
// 0087964e  50                   push eax
// 0087964f  ff15dcc99800         call dword ptr [0x98c9dc]
// 00879655  85f6                 test esi, esi
// 00879657  7504                 jne 0x87965d
// 00879659  33c9                 xor ecx, ecx
// 0087965b  eb03                 jmp 0x879660
// 0087965d  8b4e04               mov ecx, dword ptr [esi + 4]
// 00879660  50                   push eax
// 00879661  8d442454             lea eax, [esp + 0x54]
// 00879665  50                   push eax
// 00879666  51                   push ecx
// 00879667  ff1560cb9800         call dword ptr [0x98cb60]
// 0087966d  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00879671  8b2da0ca9800         mov ebp, dword ptr [0x98caa0]
// 00879677  83fb3e               cmp ebx, 0x3e
// 0087967a  7513                 jne 0x87968f
// 0087967c  85f6                 test esi, esi
// 0087967e  7504                 jne 0x879684
// 00879680  33c0                 xor eax, eax
// 00879682  eb03                 jmp 0x879687
// 00879684  8b4604               mov eax, dword ptr [esi + 4]
// 00879687  8d4c2470             lea ecx, [esp + 0x70]
// 0087968b  51                   push ecx
// 0087968c  50                   push eax
// 0087968d  ffd5                 call ebp
// 0087968f  8b3d68cc9800         mov edi, dword ptr [0x98cc68]
// 00879695  8d542450             lea edx, [esp + 0x50]
// 00879699  52                   push edx
// 0087969a  ffd7                 call edi
// 0087969c  85c0                 test eax, eax
// 0087969e  7579                 jne 0x879719
// 008796a0  8d442428             lea eax, [esp + 0x28]
// 008796a4  50                   push eax
// 008796a5  ffd7                 call edi
// 008796a7  85c0                 test eax, eax
// 008796a9  756e                 jne 0x879719
// 008796ab  e82063fbff           call 0x82f9d0
// 008796b0  6a0f                 push 0xf
// 008796b2  8bc8                 mov ecx, eax
// 008796b4  e8475afbff           call 0x82f100
// 008796b9  50                   push eax
// 008796ba  8d4c242c             lea ecx, [esp + 0x2c]
// 008796be  51                   push ecx
// 008796bf  8bce                 mov ecx, esi
// 008796c1  e838aff7ff           call 0x7f45fe
// 008796c6  837c244802           cmp dword ptr [esp + 0x48], 2
// 008796cb  752e                 jne 0x8796fb
// 008796cd  e8fe62fbff           call 0x82f9d0
// 008796d2  6a10                 push 0x10
// 008796d4  8bc8                 mov ecx, eax
// 008796d6  e8255afbff           call 0x82f100
// 008796db  8bf8                 mov edi, eax
// 008796dd  e8ee62fbff           call 0x82f9d0
// 008796e2  6a14                 push 0x14
// 008796e4  8bc8                 mov ecx, eax
// 008796e6  e8155afbff           call 0x82f100
// 008796eb  57                   push edi
// 008796ec  50                   push eax
// 008796ed  8d542430             lea edx, [esp + 0x30]
// 008796f1  52                   push edx
// 008796f2  8bce                 mov ecx, esi
// 008796f4  e8ffaef7ff           call 0x7f45f8
// 008796f9  eb1e                 jmp 0x879719
// 008796fb  85f6                 test esi, esi
// 008796fd  7504                 jne 0x879703
// 008796ff  33c0                 xor eax, eax
// 00879701  eb03                 jmp 0x879706
// 00879703  8b4604               mov eax, dword ptr [esi + 4]
// 00879706  680f200000           push 0x200f
// 0087970b  6a05                 push 5
// 0087970d  8d4c2430             lea ecx, [esp + 0x30]
// 00879711  51                   push ecx
// 00879712  50                   push eax
// 00879713  ff158ccb9800         call dword ptr [0x98cb8c]
// 00879719  83fb3f               cmp ebx, 0x3f
// 0087971c  0f85d6050000         jne 0x879cf8
// 00879722  85f6                 test esi, esi
// 00879724  7515                 jne 0x87973b
// 00879726  8d542460             lea edx, [esp + 0x60]
// 0087972a  52                   push edx
// 0087972b  56                   push esi
// 0087972c  ffd5                 call ebp
// 0087972e  5f                   pop edi
// 0087972f  5e                   pop esi
// 00879730  5d                   pop ebp
// 00879731  5b                   pop ebx
// 00879732  81c484000000         add esp, 0x84
// 00879738  c20800               ret 8
// 0087973b  8b7604               mov esi, dword ptr [esi + 4]
// 0087973e  8d542460             lea edx, [esp + 0x60]
// 00879742  52                   push edx
// 00879743  56                   push esi
// 00879744  ffd5                 call ebp
// 00879746  5f                   pop edi
// 00879747  5e                   pop esi
// 00879748  5d                   pop ebp
// 00879749  5b                   pop ebx
// 0087974a  81c484000000         add esp, 0x84
// 00879750  c20800               ret 8
// 00879753  8d4348               lea eax, [ebx + 0x48]
// 00879756  50                   push eax
// 00879757  8d8c2488000000       lea ecx, [esp + 0x88]
// 0087975e  51                   push ecx
// 0087975f  ff1564cc9800         call dword ptr [0x98cc64]
// 00879765  8b6b2c               mov ebp, dword ptr [ebx + 0x2c]
// 00879768  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 0087976f  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 00879776  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 0087977d  896c2418             mov dword ptr [esp + 0x18], ebp
// 00879781  8bac248c000000       mov ebp, dword ptr [esp + 0x8c]
// 00879788  896c2420             mov dword ptr [esp + 0x20], ebp
// 0087978c  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00879790  89542428             mov dword ptr [esp + 0x28], edx
// 00879794  8b5328               mov edx, dword ptr [ebx + 0x28]
// 00879797  8944242c             mov dword ptr [esp + 0x2c], eax
// 0087979b  8944241c             mov dword ptr [esp + 0x1c], eax
// 0087979f  89442454             mov dword ptr [esp + 0x54], eax
// 008797a3  89442464             mov dword ptr [esp + 0x64], eax
// 008797a7  8944243c             mov dword ptr [esp + 0x3c], eax
// 008797ab  89442474             mov dword ptr [esp + 0x74], eax
// 008797af  8b442418             mov eax, dword ptr [esp + 0x18]
// 008797b3  896c2458             mov dword ptr [esp + 0x58], ebp
// 008797b7  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 008797bb  89542430             mov dword ptr [esp + 0x30], edx
// 008797bf  89542450             mov dword ptr [esp + 0x50], edx
// 008797c3  89542460             mov dword ptr [esp + 0x60], edx
// 008797c7  03d5                 add edx, ebp
// 008797c9  03f2                 add esi, edx
// 008797cb  89442478             mov dword ptr [esp + 0x78], eax
// 008797cf  8b442448             mov eax, dword ptr [esp + 0x48]
// 008797d3  894c2434             mov dword ptr [esp + 0x34], ecx
// 008797d7  894c2424             mov dword ptr [esp + 0x24], ecx
// 008797db  894c245c             mov dword ptr [esp + 0x5c], ecx
// 008797df  89542468             mov dword ptr [esp + 0x68], edx
// 008797e3  894c246c             mov dword ptr [esp + 0x6c], ecx
// 008797e7  89542438             mov dword ptr [esp + 0x38], edx
// 008797eb  89742440             mov dword ptr [esp + 0x40], esi
// 008797ef  894c2444             mov dword ptr [esp + 0x44], ecx
// 008797f3  89742470             mov dword ptr [esp + 0x70], esi
// 008797f7  894c247c             mov dword ptr [esp + 0x7c], ecx
// 008797fb  83f803               cmp eax, 3
// 008797fe  0f85fe010000         jne 0x879a02
// 00879804  8bb42480000000       mov esi, dword ptr [esp + 0x80]
// 0087980b  83c620               add esi, 0x20
// 0087980e  8bce                 mov ecx, esi
// 00879810  e8ab23ffff           call 0x86bbc0
// 00879815  85c0                 test eax, eax
// 00879817  0f8445030000         je 0x879b62
// 0087981d  85ff                 test edi, edi
// 0087981f  7505                 jne 0x879826
// 00879821  8d4f0c               lea ecx, [edi + 0xc]
// 00879824  eb1c                 jmp 0x879842
// 00879826  b83c000000           mov eax, 0x3c
// 0087982b  39442410             cmp dword ptr [esp + 0x10], eax
// 0087982f  7505                 jne 0x879836
// 00879831  8d48cf               lea ecx, [eax - 0x31]
// 00879834  eb0c                 jmp 0x879842
// 00879836  33c9                 xor ecx, ecx
// 00879838  39442414             cmp dword ptr [esp + 0x14], eax
// 0087983c  0f94c1               sete cl
// 0087983f  83c109               add ecx, 9
// 00879842  8bac2498000000       mov ebp, dword ptr [esp + 0x98]
// 00879849  85ed                 test ebp, ebp
// 0087984b  7504                 jne 0x879851
// 0087984d  33c0                 xor eax, eax
// 0087984f  eb03                 jmp 0x879854
// 00879851  8b4504               mov eax, dword ptr [ebp + 4]
// 00879854  6a00                 push 0
// 00879856  8d54242c             lea edx, [esp + 0x2c]
// 0087985a  52                   push edx
// 0087985b  51                   push ecx
// 0087985c  6a01                 push 1
// 0087985e  50                   push eax
// 0087985f  8bce                 mov ecx, esi
// 00879861  e8da1fffff           call 0x86b840
// 00879866  85ff                 test edi, edi
// 00879868  7505                 jne 0x87986f
// 0087986a  8d4f10               lea ecx, [edi + 0x10]
// 0087986d  eb1c                 jmp 0x87988b
// 0087986f  b83d000000           mov eax, 0x3d
// 00879874  39442410             cmp dword ptr [esp + 0x10], eax
// 00879878  7505                 jne 0x87987f
// 0087987a  8d48d2               lea ecx, [eax - 0x2e]
// 0087987d  eb0c                 jmp 0x87988b
// 0087987f  33c9                 xor ecx, ecx
// 00879881  39442414             cmp dword ptr [esp + 0x14], eax
// 00879885  0f94c1               sete cl
// 00879888  83c10d               add ecx, 0xd
// 0087988b  85ed                 test ebp, ebp
// 0087988d  7504                 jne 0x879893
// 0087988f  33c0                 xor eax, eax
// 00879891  eb03                 jmp 0x879896
// 00879893  8b4504               mov eax, dword ptr [ebp + 4]
// 00879896  6a00                 push 0
// 00879898  8d54241c             lea edx, [esp + 0x1c]
// 0087989c  52                   push edx
// 0087989d  51                   push ecx
// 0087989e  6a01                 push 1
// 008798a0  50                   push eax
// 008798a1  8bce                 mov ecx, esi
// 008798a3  e8981fffff           call 0x86b840
// 008798a8  8b1d68cc9800         mov ebx, dword ptr [0x98cc68]
// 008798ae  8d442450             lea eax, [esp + 0x50]
// 008798b2  50                   push eax
// 008798b3  ffd3                 call ebx
// 008798b5  85c0                 test eax, eax
// 008798b7  0f853b040000         jne 0x879cf8
// 008798bd  8d4c2460             lea ecx, [esp + 0x60]
// 008798c1  51                   push ecx
// 008798c2  ffd3                 call ebx
// 008798c4  85c0                 test eax, eax
// 008798c6  7540                 jne 0x879908
// 008798c8  85ff                 test edi, edi
// 008798ca  7505                 jne 0x8798d1
// 008798cc  8d4804               lea ecx, [eax + 4]
// 008798cf  eb1a                 jmp 0x8798eb
// 008798d1  b83e000000           mov eax, 0x3e
// 008798d6  39442410             cmp dword ptr [esp + 0x10], eax
// 008798da  7505                 jne 0x8798e1
// 008798dc  8d48c5               lea ecx, [eax - 0x3b]
// 008798df  eb0a                 jmp 0x8798eb
// 008798e1  33c9                 xor ecx, ecx
// 008798e3  39442414             cmp dword ptr [esp + 0x14], eax
// 008798e7  0f94c1               sete cl
// 008798ea  41                   inc ecx
// 008798eb  85ed                 test ebp, ebp
// 008798ed  7504                 jne 0x8798f3
// 008798ef  33c0                 xor eax, eax
// 008798f1  eb03                 jmp 0x8798f6
// 008798f3  8b4504               mov eax, dword ptr [ebp + 4]
// 008798f6  6a00                 push 0
// 008798f8  8d542464             lea edx, [esp + 0x64]
// 008798fc  52                   push edx
// 008798fd  51                   push ecx
// 008798fe  6a04                 push 4
// 00879900  50                   push eax
// 00879901  8bce                 mov ecx, esi
// 00879903  e8381fffff           call 0x86b840
// 00879908  8d442438             lea eax, [esp + 0x38]
// 0087990c  50                   push eax
// 0087990d  ffd3                 call ebx
// 0087990f  85c0                 test eax, eax
// 00879911  0f858f000000         jne 0x8799a6
// 00879917  b840000000           mov eax, 0x40
// 0087991c  85ff                 test edi, edi
// 0087991e  7505                 jne 0x879925
// 00879920  8d48c4               lea ecx, [eax - 0x3c]
// 00879923  eb17                 jmp 0x87993c
// 00879925  39442410             cmp dword ptr [esp + 0x10], eax
// 00879929  7507                 jne 0x879932
// 0087992b  b903000000           mov ecx, 3
// 00879930  eb0a                 jmp 0x87993c
// 00879932  33c9                 xor ecx, ecx
// 00879934  39442414             cmp dword ptr [esp + 0x14], eax
// 00879938  0f94c1               sete cl
// 0087993b  41                   inc ecx
// 0087993c  85ed                 test ebp, ebp
// 0087993e  7504                 jne 0x879944
// 00879940  33c0                 xor eax, eax
// 00879942  eb03                 jmp 0x879947
// 00879944  8b4504               mov eax, dword ptr [ebp + 4]
// 00879947  6a00                 push 0
// 00879949  8d54243c             lea edx, [esp + 0x3c]
// 0087994d  52                   push edx
// 0087994e  51                   push ecx
// 0087994f  6a02                 push 2
// 00879951  50                   push eax
// 00879952  8bce                 mov ecx, esi
// 00879954  e8e71effff           call 0x86b840
// 00879959  8b442440             mov eax, dword ptr [esp + 0x40]
// 0087995d  2b442438             sub eax, dword ptr [esp + 0x38]
// 00879961  83f80d               cmp eax, 0xd
// 00879964  7e40                 jle 0x8799a6
// 00879966  85ff                 test edi, edi
// 00879968  7505                 jne 0x87996f
// 0087996a  8d4f04               lea ecx, [edi + 4]
// 0087996d  eb1a                 jmp 0x879989
// 0087996f  b840000000           mov eax, 0x40
// 00879974  39442410             cmp dword ptr [esp + 0x10], eax
// 00879978  7505                 jne 0x87997f
// 0087997a  8d48c3               lea ecx, [eax - 0x3d]
// 0087997d  eb0a                 jmp 0x879989
// 0087997f  33c9                 xor ecx, ecx
// 00879981  39442414             cmp dword ptr [esp + 0x14], eax
// 00879985  0f94c1               sete cl
// 00879988  41                   inc ecx
// 00879989  85ed                 test ebp, ebp
// 0087998b  7504                 jne 0x879991
// 0087998d  33c0                 xor eax, eax
// 0087998f  eb03                 jmp 0x879994
// 00879991  8b4504               mov eax, dword ptr [ebp + 4]
// 00879994  6a00                 push 0
// 00879996  8d54243c             lea edx, [esp + 0x3c]
// 0087999a  52                   push edx
// 0087999b  51                   push ecx
// 0087999c  6a08                 push 8
// 0087999e  50                   push eax
// 0087999f  8bce                 mov ecx, esi
// 008799a1  e89a1effff           call 0x86b840
// 008799a6  8d442470             lea eax, [esp + 0x70]
// 008799aa  50                   push eax
// 008799ab  ffd3                 call ebx
// 008799ad  85c0                 test eax, eax
// 008799af  0f8543030000         jne 0x879cf8
// 008799b5  85ff                 test edi, edi
// 008799b7  7505                 jne 0x8799be
// 008799b9  8d4804               lea ecx, [eax + 4]
// 008799bc  eb1a                 jmp 0x8799d8
// 008799be  b83f000000           mov eax, 0x3f
// 008799c3  39442410             cmp dword ptr [esp + 0x10], eax
// 008799c7  7505                 jne 0x8799ce
// 008799c9  8d48c4               lea ecx, [eax - 0x3c]
// 008799cc  eb0a                 jmp 0x8799d8
// 008799ce  33c9                 xor ecx, ecx
// 008799d0  39442414             cmp dword ptr [esp + 0x14], eax
// 008799d4  0f94c1               sete cl
// 008799d7  41                   inc ecx
// 008799d8  85ed                 test ebp, ebp
// 008799da  7504                 jne 0x8799e0
// 008799dc  33c0                 xor eax, eax
// 008799de  eb03                 jmp 0x8799e3
// 008799e0  8b4504               mov eax, dword ptr [ebp + 4]
// 008799e3  6a00                 push 0
// 008799e5  8d542474             lea edx, [esp + 0x74]
// 008799e9  52                   push edx
// 008799ea  51                   push ecx
// 008799eb  6a05                 push 5
// 008799ed  50                   push eax
// 008799ee  8bce                 mov ecx, esi
// 008799f0  e84b1effff           call 0x86b840
// 008799f5  5f                   pop edi
// 008799f6  5e                   pop esi
// 008799f7  5d                   pop ebp
// 008799f8  5b                   pop ebx
// 008799f9  81c484000000         add esp, 0x84
// 008799ff  c20800               ret 8
// 00879a02  83f802               cmp eax, 2
// 00879a05  0f8557010000         jne 0x879b62
// 00879a0b  e8c05ffbff           call 0x82f9d0
// 00879a10  6a0f                 push 0xf
// 00879a12  8bc8                 mov ecx, eax
// 00879a14  e8e756fbff           call 0x82f100
// 00879a19  8bb42498000000       mov esi, dword ptr [esp + 0x98]
// 00879a20  50                   push eax
// 00879a21  8d44242c             lea eax, [esp + 0x2c]
// 00879a25  50                   push eax
// 00879a26  8bce                 mov ecx, esi
// 00879a28  e8d1abf7ff           call 0x7f45fe
// 00879a2d  85ff                 test edi, edi
// 00879a2f  742e                 je 0x879a5f
// 00879a31  837c24103c           cmp dword ptr [esp + 0x10], 0x3c
// 00879a36  7527                 jne 0x879a5f
// 00879a38  e8935ffbff           call 0x82f9d0
// 00879a3d  6a14                 push 0x14
// 00879a3f  8bc8                 mov ecx, eax
// 00879a41  e8ba56fbff           call 0x82f100
// 00879a46  8be8                 mov ebp, eax
// 00879a48  e8835ffbff           call 0x82f9d0
// 00879a4d  6a10                 push 0x10
// 00879a4f  8bc8                 mov ecx, eax
// 00879a51  e8aa56fbff           call 0x82f100
// 00879a56  55                   push ebp
// 00879a57  50                   push eax
// 00879a58  8d4c2430             lea ecx, [esp + 0x30]
// 00879a5c  51                   push ecx
// 00879a5d  eb25                 jmp 0x879a84
// 00879a5f  e86c5ffbff           call 0x82f9d0
// 00879a64  6a10                 push 0x10
// 00879a66  8bc8                 mov ecx, eax
// 00879a68  e89356fbff           call 0x82f100
// 00879a6d  8be8                 mov ebp, eax
// 00879a6f  e85c5ffbff           call 0x82f9d0
// 00879a74  6a14                 push 0x14
// 00879a76  8bc8                 mov ecx, eax
// 00879a78  e88356fbff           call 0x82f100
// 00879a7d  55                   push ebp
// 00879a7e  50                   push eax
// 00879a7f  8d542430             lea edx, [esp + 0x30]
// 00879a83  52                   push edx
// 00879a84  8bce                 mov ecx, esi
// 00879a86  e86dabf7ff           call 0x7f45f8
// 00879a8b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00879a8f  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00879a93  57                   push edi
// 00879a94  6a01                 push 1
// 00879a96  6a01                 push 1
// 00879a98  83ec10               sub esp, 0x10
// 00879a9b  8bc4                 mov eax, esp
// 00879a9d  8908                 mov dword ptr [eax], ecx
// 00879a9f  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00879aa3  895004               mov dword ptr [eax + 4], edx
// 00879aa6  8b542450             mov edx, dword ptr [esp + 0x50]
// 00879aaa  894808               mov dword ptr [eax + 8], ecx
// 00879aad  56                   push esi
// 00879aae  89500c               mov dword ptr [eax + 0xc], edx
// 00879ab1  e80af5ffff           call 0x878fc0
// 00879ab6  83c420               add esp, 0x20
// 00879ab9  e8125ffbff           call 0x82f9d0
// 00879abe  6a0f                 push 0xf
// 00879ac0  8bc8                 mov ecx, eax
// 00879ac2  e83956fbff           call 0x82f100
// 00879ac7  50                   push eax
// 00879ac8  8d44241c             lea eax, [esp + 0x1c]
// 00879acc  50                   push eax
// 00879acd  8bce                 mov ecx, esi
// 00879acf  e82aabf7ff           call 0x7f45fe
// 00879ad4  85ff                 test edi, edi
// 00879ad6  742e                 je 0x879b06
// 00879ad8  837c24103d           cmp dword ptr [esp + 0x10], 0x3d
// 00879add  7527                 jne 0x879b06
// 00879adf  e8ec5efbff           call 0x82f9d0
// 00879ae4  6a14                 push 0x14
// 00879ae6  8bc8                 mov ecx, eax
// 00879ae8  e81356fbff           call 0x82f100
// 00879aed  8be8                 mov ebp, eax
// 00879aef  e8dc5efbff           call 0x82f9d0
// 00879af4  6a10                 push 0x10
// 00879af6  8bc8                 mov ecx, eax
// 00879af8  e80356fbff           call 0x82f100
// 00879afd  55                   push ebp
// 00879afe  50                   push eax
// 00879aff  8d4c2420             lea ecx, [esp + 0x20]
// 00879b03  51                   push ecx
// 00879b04  eb25                 jmp 0x879b2b
// 00879b06  e8c55efbff           call 0x82f9d0
// 00879b0b  6a10                 push 0x10
// 00879b0d  8bc8                 mov ecx, eax
// 00879b0f  e8ec55fbff           call 0x82f100
// 00879b14  8be8                 mov ebp, eax
// 00879b16  e8b55efbff           call 0x82f9d0
// 00879b1b  6a14                 push 0x14
// 00879b1d  8bc8                 mov ecx, eax
// 00879b1f  e8dc55fbff           call 0x82f100
// 00879b24  55                   push ebp
// 00879b25  50                   push eax
// 00879b26  8d542420             lea edx, [esp + 0x20]
// 00879b2a  52                   push edx
// 00879b2b  8bce                 mov ecx, esi
// 00879b2d  e8c6aaf7ff           call 0x7f45f8
// 00879b32  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00879b36  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00879b3a  57                   push edi
// 00879b3b  6a00                 push 0
// 00879b3d  6a01                 push 1
// 00879b3f  83ec10               sub esp, 0x10
// 00879b42  8bc4                 mov eax, esp
// 00879b44  8908                 mov dword ptr [eax], ecx
// 00879b46  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00879b4a  895004               mov dword ptr [eax + 4], edx
// 00879b4d  8b542440             mov edx, dword ptr [esp + 0x40]
// 00879b51  894808               mov dword ptr [eax + 8], ecx
// 00879b54  56                   push esi
// 00879b55  89500c               mov dword ptr [eax + 0xc], edx
// 00879b58  e863f4ffff           call 0x878fc0
// 00879b5d  83c420               add esp, 0x20
// 00879b60  eb75                 jmp 0x879bd7
// 00879b62  8bb42498000000       mov esi, dword ptr [esp + 0x98]
// 00879b69  85f6                 test esi, esi
// 00879b6b  7504                 jne 0x879b71
// 00879b6d  33c0                 xor eax, eax
// 00879b6f  eb03                 jmp 0x879b74
// 00879b71  8b4604               mov eax, dword ptr [esi + 4]
// 00879b74  f7df                 neg edi
// 00879b76  1bff                 sbb edi, edi
// 00879b78  33c9                 xor ecx, ecx
// 00879b7a  8b2d68ca9800         mov ebp, dword ptr [0x98ca68]
// 00879b80  81e700ffffff         and edi, 0xffffff00
// 00879b86  81c700010000         add edi, 0x100
// 00879b8c  837c24103c           cmp dword ptr [esp + 0x10], 0x3c
// 00879b91  8d542428             lea edx, [esp + 0x28]
// 00879b95  0f95c1               setne cl
// 00879b98  49                   dec ecx
// 00879b99  81e100020000         and ecx, 0x200
// 00879b9f  0bcf                 or ecx, edi
// 00879ba1  83c902               or ecx, 2
// 00879ba4  51                   push ecx
// 00879ba5  6a03                 push 3
// 00879ba7  52                   push edx
// 00879ba8  50                   push eax
// 00879ba9  ffd5                 call ebp
// 00879bab  85f6                 test esi, esi
// 00879bad  7504                 jne 0x879bb3
// 00879baf  33c0                 xor eax, eax
// 00879bb1  eb03                 jmp 0x879bb6
// 00879bb3  8b4604               mov eax, dword ptr [esi + 4]
// 00879bb6  33c9                 xor ecx, ecx
// 00879bb8  837c24103d           cmp dword ptr [esp + 0x10], 0x3d
// 00879bbd  8d542418             lea edx, [esp + 0x18]
// 00879bc1  0f95c1               setne cl
// 00879bc4  49                   dec ecx
// 00879bc5  81e100020000         and ecx, 0x200
// 00879bcb  0bcf                 or ecx, edi
// 00879bcd  83c903               or ecx, 3
// 00879bd0  51                   push ecx
// 00879bd1  6a03                 push 3
// 00879bd3  52                   push edx
// 00879bd4  50                   push eax
// 00879bd5  ffd5                 call ebp
// 00879bd7  8b03                 mov eax, dword ptr [ebx]
// 00879bd9  8b5008               mov edx, dword ptr [eax + 8]
// 00879bdc  8bcb                 mov ecx, ebx
// 00879bde  ffd2                 call edx
// 00879be0  85c0                 test eax, eax
// 00879be2  7504                 jne 0x879be8
// 00879be4  33d2                 xor edx, edx
// 00879be6  eb03                 jmp 0x879beb
// 00879be8  8b5020               mov edx, dword ptr [eax + 0x20]
// 00879beb  85f6                 test esi, esi
// 00879bed  7504                 jne 0x879bf3
// 00879bef  33c9                 xor ecx, ecx
// 00879bf1  eb03                 jmp 0x879bf6
// 00879bf3  8b4e04               mov ecx, dword ptr [esi + 4]
// 00879bf6  85c0                 test eax, eax
// 00879bf8  7403                 je 0x879bfd
// 00879bfa  8b4020               mov eax, dword ptr [eax + 0x20]
// 00879bfd  52                   push edx
// 00879bfe  51                   push ecx
// 00879bff  6837010000           push 0x137
// 00879c04  50                   push eax
// 00879c05  ff15dcc99800         call dword ptr [0x98c9dc]
// 00879c0b  85f6                 test esi, esi
// 00879c0d  7504                 jne 0x879c13
// 00879c0f  33c9                 xor ecx, ecx
// 00879c11  eb03                 jmp 0x879c16
// 00879c13  8b4e04               mov ecx, dword ptr [esi + 4]
// 00879c16  50                   push eax
// 00879c17  8d442454             lea eax, [esp + 0x54]
// 00879c1b  50                   push eax
// 00879c1c  51                   push ecx
// 00879c1d  ff1560cb9800         call dword ptr [0x98cb60]
// 00879c23  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00879c27  8b2da0ca9800         mov ebp, dword ptr [0x98caa0]
// 00879c2d  83fb3e               cmp ebx, 0x3e
// 00879c30  7513                 jne 0x879c45
// 00879c32  85f6                 test esi, esi
// 00879c34  7504                 jne 0x879c3a
// 00879c36  33c0                 xor eax, eax
// 00879c38  eb03                 jmp 0x879c3d
// 00879c3a  8b4604               mov eax, dword ptr [esi + 4]
// 00879c3d  8d4c2460             lea ecx, [esp + 0x60]
// 00879c41  51                   push ecx
// 00879c42  50                   push eax
// 00879c43  ffd5                 call ebp
// 00879c45  8b3d68cc9800         mov edi, dword ptr [0x98cc68]
// 00879c4b  8d542450             lea edx, [esp + 0x50]
// 00879c4f  52                   push edx
// 00879c50  ffd7                 call edi
// 00879c52  85c0                 test eax, eax
// 00879c54  7579                 jne 0x879ccf
// 00879c56  8d442438             lea eax, [esp + 0x38]
// 00879c5a  50                   push eax
// 00879c5b  ffd7                 call edi
// 00879c5d  85c0                 test eax, eax
// 00879c5f  756e                 jne 0x879ccf
// 00879c61  e86a5dfbff           call 0x82f9d0
// 00879c66  6a0f                 push 0xf
// 00879c68  8bc8                 mov ecx, eax
// 00879c6a  e89154fbff           call 0x82f100
// 00879c6f  50                   push eax
// 00879c70  8d4c243c             lea ecx, [esp + 0x3c]
// 00879c74  51                   push ecx
// 00879c75  8bce                 mov ecx, esi
// 00879c77  e882a9f7ff           call 0x7f45fe
// 00879c7c  837c244802           cmp dword ptr [esp + 0x48], 2
// 00879c81  752e                 jne 0x879cb1
// 00879c83  e8485dfbff           call 0x82f9d0
// 00879c88  6a10                 push 0x10
// 00879c8a  8bc8                 mov ecx, eax
// 00879c8c  e86f54fbff           call 0x82f100
// 00879c91  8bf8                 mov edi, eax
// 00879c93  e8385dfbff           call 0x82f9d0
// 00879c98  6a14                 push 0x14
// 00879c9a  8bc8                 mov ecx, eax
// 00879c9c  e85f54fbff           call 0x82f100
// 00879ca1  57                   push edi
// 00879ca2  50                   push eax
// 00879ca3  8d542440             lea edx, [esp + 0x40]
// 00879ca7  52                   push edx
// 00879ca8  8bce                 mov ecx, esi
// 00879caa  e849a9f7ff           call 0x7f45f8
// 00879caf  eb1e                 jmp 0x879ccf
// 00879cb1  85f6                 test esi, esi
// 00879cb3  7504                 jne 0x879cb9
// 00879cb5  33c0                 xor eax, eax
// 00879cb7  eb03                 jmp 0x879cbc
// 00879cb9  8b4604               mov eax, dword ptr [esi + 4]
// 00879cbc  680f200000           push 0x200f
// 00879cc1  6a05                 push 5
// 00879cc3  8d4c2440             lea ecx, [esp + 0x40]
// 00879cc7  51                   push ecx
// 00879cc8  50                   push eax
// 00879cc9  ff158ccb9800         call dword ptr [0x98cb8c]
// 00879ccf  83fb3f               cmp ebx, 0x3f
// 00879cd2  7524                 jne 0x879cf8
// 00879cd4  85f6                 test esi, esi
// 00879cd6  7515                 jne 0x879ced
// 00879cd8  8d542470             lea edx, [esp + 0x70]
// 00879cdc  52                   push edx
// 00879cdd  56                   push esi
// 00879cde  ffd5                 call ebp
// 00879ce0  5f                   pop edi
// 00879ce1  5e                   pop esi
// 00879ce2  5d                   pop ebp
// 00879ce3  5b                   pop ebx
// 00879ce4  81c484000000         add esp, 0x84
// 00879cea  c20800               ret 8
// 00879ced  8b7604               mov esi, dword ptr [esi + 4]
// 00879cf0  8d542470             lea edx, [esp + 0x70]
// 00879cf4  52                   push edx
// 00879cf5  56                   push esi
// 00879cf6  ffd5                 call ebp
// 00879cf8  5f                   pop edi
// 00879cf9  5e                   pop esi
// 00879cfa  5d                   pop ebp
// 00879cfb  5b                   pop ebx
// 00879cfc  81c484000000         add esp, 0x84
// 00879d02  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?DrawScrollBar@CXTPControlGalleryPaintManager@@UAEXPAVCDC@@PAVCXTPScrollBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
