// roc 2009-12 00824d00  unit: CXTPReportControl  size: 595 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00824d00
//
// 00824d00  6aff                 push -1
// 00824d02  68ecb39500           push 0x95b3ec
// 00824d07  64a100000000         mov eax, dword ptr fs:[0]
// 00824d0d  50                   push eax
// 00824d0e  83ec3c               sub esp, 0x3c
// 00824d11  53                   push ebx
// 00824d12  55                   push ebp
// 00824d13  56                   push esi
// 00824d14  57                   push edi
// 00824d15  a10052b600           mov eax, dword ptr [0xb65200]
// 00824d1a  33c4                 xor eax, esp
// 00824d1c  50                   push eax
// 00824d1d  8d442450             lea eax, [esp + 0x50]
// 00824d21  64a300000000         mov dword ptr fs:[0], eax
// 00824d27  8be9                 mov ebp, ecx
// 00824d29  8b85ec000000         mov eax, dword ptr [ebp + 0xec]
// 00824d2f  33f6                 xor esi, esi
// 00824d31  3bc6                 cmp eax, esi
// 00824d33  0f846c010000         je 0x824ea5
// 00824d39  8d4c243c             lea ecx, [esp + 0x3c]
// 00824d3d  e882191000           call 0x9266c4
// 00824d42  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00824d46  8d44243c             lea eax, [esp + 0x3c]
// 00824d4a  50                   push eax
// 00824d4b  68ccb79a00           push 0x9ab7cc
// 00824d50  51                   push ecx
// 00824d51  89742464             mov dword ptr [esp + 0x64], esi
// 00824d55  e8a6a4ffff           call 0x81f200
// 00824d5a  8b5500               mov edx, dword ptr [ebp]
// 00824d5d  8b92fc010000         mov edx, dword ptr [edx + 0x1fc]
// 00824d63  83c40c               add esp, 0xc
// 00824d66  8d442414             lea eax, [esp + 0x14]
// 00824d6a  50                   push eax
// 00824d6b  8d4c2440             lea ecx, [esp + 0x40]
// 00824d6f  51                   push ecx
// 00824d70  8bcd                 mov ecx, ebp
// 00824d72  8974241c             mov dword ptr [esp + 0x1c], esi
// 00824d76  ffd2                 call edx
// 00824d78  3bc6                 cmp eax, esi
// 00824d7a  0f85a1010000         jne 0x824f21
// 00824d80  39742414             cmp dword ptr [esp + 0x14], esi
// 00824d84  0f8597010000         jne 0x824f21
// 00824d8a  6a54                 push 0x54
// 00824d8c  e80f69ffff           call 0x81b6a0
// 00824d91  89442460             mov dword ptr [esp + 0x60], eax
// 00824d95  c644245801           mov byte ptr [esp + 0x58], 1
// 00824d9a  3bc6                 cmp eax, esi
// 00824d9c  7409                 je 0x824da7
// 00824d9e  8bc8                 mov ecx, eax
// 00824da0  e82b600000           call 0x82add0
// 00824da5  eb02                 jmp 0x824da9
// 00824da7  33c0                 xor eax, eax
// 00824da9  c644245800           mov byte ptr [esp + 0x58], 0
// 00824dae  89442414             mov dword ptr [esp + 0x14], eax
// 00824db2  3bc6                 cmp eax, esi
// 00824db4  0f84da000000         je 0x824e94
// 00824dba  8b85ec000000         mov eax, dword ptr [ebp + 0xec]
// 00824dc0  8b7830               mov edi, dword ptr [eax + 0x30]
// 00824dc3  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 00824dc7  895c2460             mov dword ptr [esp + 0x60], ebx
// 00824dcb  85ff                 test edi, edi
// 00824dcd  7e6d                 jle 0x824e3c
// 00824dcf  b302                 mov bl, 2
// 00824dd1  33c0                 xor eax, eax
// 00824dd3  6856fd9900           push 0x99fd56
// 00824dd8  8d4c2420             lea ecx, [esp + 0x20]
// 00824ddc  6689442420           mov word ptr [esp + 0x20], ax
// 00824de1  e8ae181000           call 0x926694
// 00824de6  688c000000           push 0x8c
// 00824deb  885c245c             mov byte ptr [esp + 0x5c], bl
// 00824def  e8ac68ffff           call 0x81b6a0
// 00824df4  89442418             mov dword ptr [esp + 0x18], eax
// 00824df8  c644245803           mov byte ptr [esp + 0x58], 3
// 00824dfd  85c0                 test eax, eax
// 00824dff  740e                 je 0x824e0f
// 00824e01  8d4c241c             lea ecx, [esp + 0x1c]
// 00824e05  51                   push ecx
// 00824e06  8bc8                 mov ecx, eax
// 00824e08  e843700000           call 0x82be50
// 00824e0d  eb02                 jmp 0x824e11
// 00824e0f  33c0                 xor eax, eax
// 00824e11  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00824e15  885c2458             mov byte ptr [esp + 0x58], bl
// 00824e19  85c0                 test eax, eax
// 00824e1b  745b                 je 0x824e78
// 00824e1d  50                   push eax
// 00824e1e  e84d600000           call 0x82ae70
// 00824e23  8d54241c             lea edx, [esp + 0x1c]
// 00824e27  52                   push edx
// 00824e28  c644245c00           mov byte ptr [esp + 0x5c], 0
// 00824e2d  ff1534ba9800         call dword ptr [0x98ba34]
// 00824e33  46                   inc esi
// 00824e34  3bf7                 cmp esi, edi
// 00824e36  7c99                 jl 0x824dd1
// 00824e38  8b5c2460             mov ebx, dword ptr [esp + 0x60]
// 00824e3c  8b8dec000000         mov ecx, dword ptr [ebp + 0xec]
// 00824e42  e8b9850400           call 0x86d400
// 00824e47  8bf8                 mov edi, eax
// 00824e49  33f6                 xor esi, esi
// 00824e4b  85ff                 test edi, edi
// 00824e4d  0f8ece000000         jle 0x824f21
// 00824e53  3bf3                 cmp esi, ebx
// 00824e55  7d55                 jge 0x824eac
// 00824e57  85f6                 test esi, esi
// 00824e59  0f8cef000000         jl 0x824f4e
// 00824e5f  3b742444             cmp esi, dword ptr [esp + 0x44]
// 00824e63  0f8de5000000         jge 0x824f4e
// 00824e69  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00824e6d  8d0cb1               lea ecx, [ecx + esi*4]
// 00824e70  ff1580de9800         call dword ptr [0x98de80]
// 00824e76  eb39                 jmp 0x824eb1
// 00824e78  85c9                 test ecx, ecx
// 00824e7a  740d                 je 0x824e89
// 00824e7c  e85beffcff           call 0x7f3ddc
// 00824e81  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00824e89  8d44241c             lea eax, [esp + 0x1c]
// 00824e8d  50                   push eax
// 00824e8e  ff1534ba9800         call dword ptr [0x98ba34]
// 00824e94  8d4c243c             lea ecx, [esp + 0x3c]
// 00824e98  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 00824ea0  e819181000           call 0x9266be
// 00824ea5  33c0                 xor eax, eax
// 00824ea7  e98c000000           jmp 0x824f38
// 00824eac  b856fd9900           mov eax, 0x99fd56
// 00824eb1  33d2                 xor edx, edx
// 00824eb3  50                   push eax
// 00824eb4  8d4c2430             lea ecx, [esp + 0x30]
// 00824eb8  6689542430           mov word ptr [esp + 0x30], dx
// 00824ebd  e8d2171000           call 0x926694
// 00824ec2  8b8dec000000         mov ecx, dword ptr [ebp + 0xec]
// 00824ec8  56                   push esi
// 00824ec9  c644245c04           mov byte ptr [esp + 0x5c], 4
// 00824ece  e82d860400           call 0x86d500
// 00824ed3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00824ed7  50                   push eax
// 00824ed8  e8635e0000           call 0x82ad40
// 00824edd  85c0                 test eax, eax
// 00824edf  7507                 jne 0x824ee8
// 00824ee1  8d44242c             lea eax, [esp + 0x2c]
// 00824ee5  50                   push eax
// 00824ee6  eb25                 jmp 0x824f0d
// 00824ee8  50                   push eax
// 00824ee9  e812690000           call 0x82b800
// 00824eee  50                   push eax
// 00824eef  e84aedfcff           call 0x7f3c3e
// 00824ef4  83c408               add esp, 8
// 00824ef7  85c0                 test eax, eax
// 00824ef9  740d                 je 0x824f08
// 00824efb  8d4c242c             lea ecx, [esp + 0x2c]
// 00824eff  51                   push ecx
// 00824f00  8d487c               lea ecx, [eax + 0x7c]
// 00824f03  e8c8171000           call 0x9266d0
// 00824f08  8d54242c             lea edx, [esp + 0x2c]
// 00824f0c  52                   push edx
// 00824f0d  c644245c00           mov byte ptr [esp + 0x5c], 0
// 00824f12  ff1534ba9800         call dword ptr [0x98ba34]
// 00824f18  46                   inc esi
// 00824f19  3bf7                 cmp esi, edi
// 00824f1b  0f8c32ffffff         jl 0x824e53
// 00824f21  8b742414             mov esi, dword ptr [esp + 0x14]
// 00824f25  8d4c243c             lea ecx, [esp + 0x3c]
// 00824f29  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 00824f31  e888171000           call 0x9266be
// 00824f36  8bc6                 mov eax, esi
// 00824f38  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00824f3c  64890d00000000       mov dword ptr fs:[0], ecx
// 00824f43  59                   pop ecx
// 00824f44  5f                   pop edi
// 00824f45  5e                   pop esi
// 00824f46  5d                   pop ebp
// 00824f47  5b                   pop ebx
// 00824f48  83c448               add esp, 0x48
// 00824f4b  c20400               ret 4
// 00824f4e  e8b9ebfcff           call 0x7f3b0c
// copied from an identical function in another client (function ?_CreateRecodFromText@CXTPReportControl@@MAEPAVCXTPReportRecord@@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp