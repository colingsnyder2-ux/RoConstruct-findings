// roc 2011-06 008decc0  unit: VCEdit::?$CXTMaskEditT  size: 570 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008decc0
//
// 008decc0  6aff                 push -1
// 008decc2  68e2d7a000           push 0xa0d7e2
// 008decc7  64a100000000         mov eax, dword ptr fs:[0]
// 008deccd  50                   push eax
// 008decce  83ec1c               sub esp, 0x1c
// 008decd1  53                   push ebx
// 008decd2  55                   push ebp
// 008decd3  56                   push esi
// 008decd4  57                   push edi
// 008decd5  a12058c900           mov eax, dword ptr [0xc95820]
// 008decda  33c4                 xor eax, esp
// 008decdc  50                   push eax
// 008decdd  8d442430             lea eax, [esp + 0x30]
// 008dece1  64a300000000         mov dword ptr fs:[0], eax
// 008dece7  8bf1                 mov esi, ecx
// 008dece9  33ff                 xor edi, edi
// 008deceb  897c241c             mov dword ptr [esp + 0x1c], edi
// 008decef  39bea8000000         cmp dword ptr [esi + 0xa8], edi
// 008decf5  0f84eb010000         je 0x8deee6
// 008decfb  39beb8000000         cmp dword ptr [esi + 0xb8], edi
// 008ded01  0f85df010000         jne 0x8deee6
// 008ded07  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 008ded0d  3bcf                 cmp ecx, edi
// 008ded0f  0f84b7010000         je 0x8deecc
// 008ded15  39be9c000000         cmp dword ptr [esi + 0x9c], edi
// 008ded1b  0f84ab010000         je 0x8deecc
// 008ded21  8b01                 mov eax, dword ptr [ecx]
// 008ded23  8b5058               mov edx, dword ptr [eax + 0x58]
// 008ded26  ffd2                 call edx
// 008ded28  85c0                 test eax, eax
// 008ded2a  0f859c010000         jne 0x8deecc
// 008ded30  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 008ded36  39b8c8000000         cmp dword ptr [eax + 0xc8], edi
// 008ded3c  0f848a010000         je 0x8deecc
// 008ded42  39787c               cmp dword ptr [eax + 0x7c], edi
// 008ded45  0f8581010000         jne 0x8deecc
// 008ded4b  39beb4000000         cmp dword ptr [esi + 0xb4], edi
// 008ded51  0f8475010000         je 0x8deecc
// 008ded57  89beb4000000         mov dword ptr [esi + 0xb4], edi
// 008ded5d  8ba8c4000000         mov ebp, dword ptr [eax + 0xc4]
// 008ded63  397d28               cmp dword ptr [ebp + 0x28], edi
// 008ded66  0f8460010000         je 0x8deecc
// 008ded6c  8d4c2420             lea ecx, [esp + 0x20]
// 008ded70  ff15b42da400         call dword ptr [0xa42db4]
// 008ded76  8d442420             lea eax, [esp + 0x20]
// 008ded7a  50                   push eax
// 008ded7b  8bce                 mov ecx, esi
// 008ded7d  897c243c             mov dword ptr [esp + 0x3c], edi
// 008ded81  e8c0b8f2ff           call 0x80a646
// 008ded86  8d4c2420             lea ecx, [esp + 0x20]
// 008ded8a  ff15a826a400         call dword ptr [0xa426a8]
// 008ded90  8d4c2424             lea ecx, [esp + 0x24]
// 008ded94  51                   push ecx
// 008ded95  8d54242c             lea edx, [esp + 0x2c]
// 008ded99  52                   push edx
// 008ded9a  8bce                 mov ecx, esi
// 008ded9c  8bd8                 mov ebx, eax
// 008ded9e  897c2430             mov dword ptr [esp + 0x30], edi
// 008deda2  897c242c             mov dword ptr [esp + 0x2c], edi
// 008deda6  e8457ff3ff           call 0x816cf0
// 008dedab  8b442424             mov eax, dword ptr [esp + 0x24]
// 008dedaf  39442428             cmp dword ptr [esp + 0x28], eax
// 008dedb3  0f8501010000         jne 0x8deeba
// 008dedb9  3bd8                 cmp ebx, eax
// 008dedbb  0f85f9000000         jne 0x8deeba
// 008dedc1  3bdf                 cmp ebx, edi
// 008dedc3  0f8ef1000000         jle 0x8deeba
// 008dedc9  397d28               cmp dword ptr [ebp + 0x28], edi
// 008dedcc  0f8ee6000000         jle 0x8deeb8
// 008dedd2  57                   push edi
// 008dedd3  8d44241c             lea eax, [esp + 0x1c]
// 008dedd7  50                   push eax
// 008dedd8  8bcd                 mov ecx, ebp
// 008dedda  e891b6f9ff           call 0x87a470
// 008deddf  8d4c2418             lea ecx, [esp + 0x18]
// 008dede3  c644243801           mov byte ptr [esp + 0x38], 1
// 008dede8  ff15a826a400         call dword ptr [0xa426a8]
// 008dedee  3bc3                 cmp eax, ebx
// 008dedf0  7e31                 jle 0x8dee23
// 008dedf2  53                   push ebx
// 008dedf3  8d4c2430             lea ecx, [esp + 0x30]
// 008dedf7  51                   push ecx
// 008dedf8  8d4c2420             lea ecx, [esp + 0x20]
// 008dedfc  ff15601fa400         call dword ptr [0xa41f60]
// 008dee02  834c241c01           or dword ptr [esp + 0x1c], 1
// 008dee07  8bc8                 mov ecx, eax
// 008dee09  ff15c82da400         call dword ptr [0xa42dc8]
// 008dee0f  50                   push eax
// 008dee10  8d4c2424             lea ecx, [esp + 0x24]
// 008dee14  ff150820a400         call dword ptr [0xa42008]
// 008dee1a  c644241701           mov byte ptr [esp + 0x17], 1
// 008dee1f  85c0                 test eax, eax
// 008dee21  7405                 je 0x8dee28
// 008dee23  c644241700           mov byte ptr [esp + 0x17], 0
// 008dee28  f644241c01           test byte ptr [esp + 0x1c], 1
// 008dee2d  740f                 je 0x8dee3e
// 008dee2f  8364241cfe           and dword ptr [esp + 0x1c], 0xfffffffe
// 008dee34  8d4c242c             lea ecx, [esp + 0x2c]
// 008dee38  ff15082ea400         call dword ptr [0xa42e08]
// 008dee3e  807c241700           cmp byte ptr [esp + 0x17], 0
// 008dee43  8d4c2418             lea ecx, [esp + 0x18]
// 008dee47  7517                 jne 0x8dee60
// 008dee49  c644243800           mov byte ptr [esp + 0x38], 0
// 008dee4e  ff15082ea400         call dword ptr [0xa42e08]
// 008dee54  47                   inc edi
// 008dee55  3b7d28               cmp edi, dword ptr [ebp + 0x28]
// 008dee58  0f8c74ffffff         jl 0x8dedd2
// 008dee5e  eb58                 jmp 0x8deeb8
// 008dee60  c786b800000001000000 mov dword ptr [esi + 0xb8], 1
// 008dee6a  ff15c82da400         call dword ptr [0xa42dc8]
// 008dee70  50                   push eax
// 008dee71  8bce                 mov ecx, esi
// 008dee73  e89ab5f2ff           call 0x80a412
// 008dee78  8d4c2418             lea ecx, [esp + 0x18]
// 008dee7c  ff15a826a400         call dword ptr [0xa426a8]
// 008dee82  8b5620               mov edx, dword ptr [esi + 0x20]
// 008dee85  8b3dc019a400         mov edi, dword ptr [0xa419c0]
// 008dee8b  53                   push ebx
// 008dee8c  50                   push eax
// 008dee8d  68b1000000           push 0xb1
// 008dee92  52                   push edx
// 008dee93  ffd7                 call edi
// 008dee95  8b4620               mov eax, dword ptr [esi + 0x20]
// 008dee98  6a00                 push 0
// 008dee9a  6a00                 push 0
// 008dee9c  68b7000000           push 0xb7
// 008deea1  50                   push eax
// 008deea2  ffd7                 call edi
// 008deea4  8d4c2418             lea ecx, [esp + 0x18]
// 008deea8  c786b800000000000000 mov dword ptr [esi + 0xb8], 0
// 008deeb2  ff15082ea400         call dword ptr [0xa42e08]
// 008deeb8  33ff                 xor edi, edi
// 008deeba  8d4c2420             lea ecx, [esp + 0x20]
// 008deebe  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 008deec6  ff15082ea400         call dword ptr [0xa42e08]
// 008deecc  39bea0000000         cmp dword ptr [esi + 0xa0], edi
// 008deed2  7412                 je 0x8deee6
// 008deed4  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 008deeda  3bcf                 cmp ecx, edi
// 008deedc  7408                 je 0x8deee6
// 008deede  56                   push esi
// 008deedf  6a04                 push 4
// 008deee1  e8ea6ef9ff           call 0x875dd0
// 008deee6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008deeea  64890d00000000       mov dword ptr fs:[0], ecx
// 008deef1  59                   pop ecx
// 008deef2  5f                   pop edi
// 008deef3  5e                   pop esi
// 008deef4  5d                   pop ebp
// 008deef5  5b                   pop ebx
// 008deef6  83c428               add esp, 0x28
// 008deef9  c3                   ret 
// copied from an identical function in another client (function ?OnEnChange@CXTPPropertyGridInplaceEdit@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen-rtm Source/PropertyGrid/XTPPropertyGridInplaceEdit.cpp