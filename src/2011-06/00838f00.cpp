// roc 2011-06 00838f00  unit: CXTPReportControl  size: 595 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00838f00
//
// 00838f00  6aff                 push -1
// 00838f02  689c47a000           push 0xa0479c
// 00838f07  64a100000000         mov eax, dword ptr fs:[0]
// 00838f0d  50                   push eax
// 00838f0e  83ec3c               sub esp, 0x3c
// 00838f11  53                   push ebx
// 00838f12  55                   push ebp
// 00838f13  56                   push esi
// 00838f14  57                   push edi
// 00838f15  a12058c900           mov eax, dword ptr [0xc95820]
// 00838f1a  33c4                 xor eax, esp
// 00838f1c  50                   push eax
// 00838f1d  8d442450             lea eax, [esp + 0x50]
// 00838f21  64a300000000         mov dword ptr fs:[0], eax
// 00838f27  8be9                 mov ebp, ecx
// 00838f29  8b85ec000000         mov eax, dword ptr [ebp + 0xec]
// 00838f2f  33f6                 xor esi, esi
// 00838f31  3bc6                 cmp eax, esi
// 00838f33  0f846c010000         je 0x8390a5
// 00838f39  8d4c243c             lea ecx, [esp + 0x3c]
// 00838f3d  e8ce381900           call 0x9cc810
// 00838f42  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00838f46  8d44243c             lea eax, [esp + 0x3c]
// 00838f4a  50                   push eax
// 00838f4b  68f8eba600           push 0xa6ebf8
// 00838f50  51                   push ecx
// 00838f51  89742464             mov dword ptr [esp + 0x64], esi
// 00838f55  e896a4ffff           call 0x8333f0
// 00838f5a  8b5500               mov edx, dword ptr [ebp]
// 00838f5d  8b92fc010000         mov edx, dword ptr [edx + 0x1fc]
// 00838f63  83c40c               add esp, 0xc
// 00838f66  8d442414             lea eax, [esp + 0x14]
// 00838f6a  50                   push eax
// 00838f6b  8d4c2440             lea ecx, [esp + 0x40]
// 00838f6f  51                   push ecx
// 00838f70  8bcd                 mov ecx, ebp
// 00838f72  8974241c             mov dword ptr [esp + 0x1c], esi
// 00838f76  ffd2                 call edx
// 00838f78  3bc6                 cmp eax, esi
// 00838f7a  0f85a1010000         jne 0x839121
// 00838f80  39742414             cmp dword ptr [esp + 0x14], esi
// 00838f84  0f8597010000         jne 0x839121
// 00838f8a  6a54                 push 0x54
// 00838f8c  e8cfbcbeff           call 0x424c60
// 00838f91  89442460             mov dword ptr [esp + 0x60], eax
// 00838f95  c644245801           mov byte ptr [esp + 0x58], 1
// 00838f9a  3bc6                 cmp eax, esi
// 00838f9c  7409                 je 0x838fa7
// 00838f9e  8bc8                 mov ecx, eax
// 00838fa0  e84b7a0000           call 0x8409f0
// 00838fa5  eb02                 jmp 0x838fa9
// 00838fa7  33c0                 xor eax, eax
// 00838fa9  c644245800           mov byte ptr [esp + 0x58], 0
// 00838fae  89442414             mov dword ptr [esp + 0x14], eax
// 00838fb2  3bc6                 cmp eax, esi
// 00838fb4  0f84da000000         je 0x839094
// 00838fba  8b85ec000000         mov eax, dword ptr [ebp + 0xec]
// 00838fc0  8b7830               mov edi, dword ptr [eax + 0x30]
// 00838fc3  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 00838fc7  895c2460             mov dword ptr [esp + 0x60], ebx
// 00838fcb  85ff                 test edi, edi
// 00838fcd  7e6d                 jle 0x83903c
// 00838fcf  b302                 mov bl, 2
// 00838fd1  33c0                 xor eax, eax
// 00838fd3  68cabea500           push 0xa5beca
// 00838fd8  8d4c2420             lea ecx, [esp + 0x20]
// 00838fdc  6689442420           mov word ptr [esp + 0x20], ax
// 00838fe1  e8fa371900           call 0x9cc7e0
// 00838fe6  688c000000           push 0x8c
// 00838feb  885c245c             mov byte ptr [esp + 0x5c], bl
// 00838fef  e86cbcbeff           call 0x424c60
// 00838ff4  89442418             mov dword ptr [esp + 0x18], eax
// 00838ff8  c644245803           mov byte ptr [esp + 0x58], 3
// 00838ffd  85c0                 test eax, eax
// 00838fff  740e                 je 0x83900f
// 00839001  8d4c241c             lea ecx, [esp + 0x1c]
// 00839005  51                   push ecx
// 00839006  8bc8                 mov ecx, eax
// 00839008  e8638a0000           call 0x841a70
// 0083900d  eb02                 jmp 0x839011
// 0083900f  33c0                 xor eax, eax
// 00839011  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00839015  885c2458             mov byte ptr [esp + 0x58], bl
// 00839019  85c0                 test eax, eax
// 0083901b  745b                 je 0x839078
// 0083901d  50                   push eax
// 0083901e  e86d7a0000           call 0x840a90
// 00839023  8d54241c             lea edx, [esp + 0x1c]
// 00839027  52                   push edx
// 00839028  c644245c00           mov byte ptr [esp + 0x5c], 0
// 0083902d  ff15d80aa400         call dword ptr [0xa40ad8]
// 00839033  46                   inc esi
// 00839034  3bf7                 cmp esi, edi
// 00839036  7c99                 jl 0x838fd1
// 00839038  8b5c2460             mov ebx, dword ptr [esp + 0x60]
// 0083903c  8b8dec000000         mov ecx, dword ptr [ebp + 0xec]
// 00839042  e859480400           call 0x87d8a0
// 00839047  8bf8                 mov edi, eax
// 00839049  33f6                 xor esi, esi
// 0083904b  85ff                 test edi, edi
// 0083904d  0f8ece000000         jle 0x839121
// 00839053  3bf3                 cmp esi, ebx
// 00839055  7d55                 jge 0x8390ac
// 00839057  85f6                 test esi, esi
// 00839059  0f8cef000000         jl 0x83914e
// 0083905f  3b742444             cmp esi, dword ptr [esp + 0x44]
// 00839063  0f8de5000000         jge 0x83914e
// 00839069  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0083906d  8d0cb1               lea ecx, [ecx + esi*4]
// 00839070  ff15c82da400         call dword ptr [0xa42dc8]
// 00839076  eb39                 jmp 0x8390b1
// 00839078  85c9                 test ecx, ecx
// 0083907a  740d                 je 0x839089
// 0083907c  e85915fdff           call 0x80a5da
// 00839081  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00839089  8d44241c             lea eax, [esp + 0x1c]
// 0083908d  50                   push eax
// 0083908e  ff15d80aa400         call dword ptr [0xa40ad8]
// 00839094  8d4c243c             lea ecx, [esp + 0x3c]
// 00839098  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 008390a0  e865371900           call 0x9cc80a
// 008390a5  33c0                 xor eax, eax
// 008390a7  e98c000000           jmp 0x839138
// 008390ac  b8cabea500           mov eax, 0xa5beca
// 008390b1  33d2                 xor edx, edx
// 008390b3  50                   push eax
// 008390b4  8d4c2430             lea ecx, [esp + 0x30]
// 008390b8  6689542430           mov word ptr [esp + 0x30], dx
// 008390bd  e81e371900           call 0x9cc7e0
// 008390c2  8b8dec000000         mov ecx, dword ptr [ebp + 0xec]
// 008390c8  56                   push esi
// 008390c9  c644245c04           mov byte ptr [esp + 0x5c], 4
// 008390ce  e8cd480400           call 0x87d9a0
// 008390d3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008390d7  50                   push eax
// 008390d8  e883780000           call 0x840960
// 008390dd  85c0                 test eax, eax
// 008390df  7507                 jne 0x8390e8
// 008390e1  8d44242c             lea eax, [esp + 0x2c]
// 008390e5  50                   push eax
// 008390e6  eb25                 jmp 0x83910d
// 008390e8  50                   push eax
// 008390e9  e832830000           call 0x841420
// 008390ee  50                   push eax
// 008390ef  e84813fdff           call 0x80a43c
// 008390f4  83c408               add esp, 8
// 008390f7  85c0                 test eax, eax
// 008390f9  740d                 je 0x839108
// 008390fb  8d4c242c             lea ecx, [esp + 0x2c]
// 008390ff  51                   push ecx
// 00839100  8d487c               lea ecx, [eax + 0x7c]
// 00839103  e814371900           call 0x9cc81c
// 00839108  8d54242c             lea edx, [esp + 0x2c]
// 0083910c  52                   push edx
// 0083910d  c644245c00           mov byte ptr [esp + 0x5c], 0
// 00839112  ff15d80aa400         call dword ptr [0xa40ad8]
// 00839118  46                   inc esi
// 00839119  3bf7                 cmp esi, edi
// 0083911b  0f8c32ffffff         jl 0x839053
// 00839121  8b742414             mov esi, dword ptr [esp + 0x14]
// 00839125  8d4c243c             lea ecx, [esp + 0x3c]
// 00839129  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 00839131  e8d4361900           call 0x9cc80a
// 00839136  8bc6                 mov eax, esi
// 00839138  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0083913c  64890d00000000       mov dword ptr fs:[0], ecx
// 00839143  59                   pop ecx
// 00839144  5f                   pop edi
// 00839145  5e                   pop esi
// 00839146  5d                   pop ebp
// 00839147  5b                   pop ebx
// 00839148  83c448               add esp, 0x48
// 0083914b  c20400               ret 4
// 0083914e  e8b711fdff           call 0x80a30a
// copied from an identical function in another client (function ?_CreateRecodFromText@CXTPReportControl@@MAEPAVCXTPReportRecord@@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp