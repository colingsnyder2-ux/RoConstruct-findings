// roc 2010-06 007d8d70  unit: CXTPReportControl  size: 595 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007d8d70
//
// 007d8d70  6aff                 push -1
// 007d8d72  687c119b00           push 0x9b117c
// 007d8d77  64a100000000         mov eax, dword ptr fs:[0]
// 007d8d7d  50                   push eax
// 007d8d7e  83ec3c               sub esp, 0x3c
// 007d8d81  53                   push ebx
// 007d8d82  55                   push ebp
// 007d8d83  56                   push esi
// 007d8d84  57                   push edi
// 007d8d85  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007d8d8a  33c4                 xor eax, esp
// 007d8d8c  50                   push eax
// 007d8d8d  8d442450             lea eax, [esp + 0x50]
// 007d8d91  64a300000000         mov dword ptr fs:[0], eax
// 007d8d97  8be9                 mov ebp, ecx
// 007d8d99  8b85ec000000         mov eax, dword ptr [ebp + 0xec]
// 007d8d9f  33f6                 xor esi, esi
// 007d8da1  3bc6                 cmp eax, esi
// 007d8da3  0f846c010000         je 0x7d8f15
// 007d8da9  8d4c243c             lea ecx, [esp + 0x3c]
// 007d8dad  e84e421a00           call 0x97d000
// 007d8db2  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 007d8db6  8d44243c             lea eax, [esp + 0x3c]
// 007d8dba  50                   push eax
// 007d8dbb  68d8c5a000           push 0xa0c5d8
// 007d8dc0  51                   push ecx
// 007d8dc1  89742464             mov dword ptr [esp + 0x64], esi
// 007d8dc5  e896a4ffff           call 0x7d3260
// 007d8dca  8b5500               mov edx, dword ptr [ebp]
// 007d8dcd  8b92fc010000         mov edx, dword ptr [edx + 0x1fc]
// 007d8dd3  83c40c               add esp, 0xc
// 007d8dd6  8d442414             lea eax, [esp + 0x14]
// 007d8dda  50                   push eax
// 007d8ddb  8d4c2440             lea ecx, [esp + 0x40]
// 007d8ddf  51                   push ecx
// 007d8de0  8bcd                 mov ecx, ebp
// 007d8de2  8974241c             mov dword ptr [esp + 0x1c], esi
// 007d8de6  ffd2                 call edx
// 007d8de8  3bc6                 cmp eax, esi
// 007d8dea  0f85a1010000         jne 0x7d8f91
// 007d8df0  39742414             cmp dword ptr [esp + 0x14], esi
// 007d8df4  0f8597010000         jne 0x7d8f91
// 007d8dfa  6a54                 push 0x54
// 007d8dfc  e84f69ffff           call 0x7cf750
// 007d8e01  89442460             mov dword ptr [esp + 0x60], eax
// 007d8e05  c644245801           mov byte ptr [esp + 0x58], 1
// 007d8e0a  3bc6                 cmp eax, esi
// 007d8e0c  7409                 je 0x7d8e17
// 007d8e0e  8bc8                 mov ecx, eax
// 007d8e10  e82b600000           call 0x7dee40
// 007d8e15  eb02                 jmp 0x7d8e19
// 007d8e17  33c0                 xor eax, eax
// 007d8e19  c644245800           mov byte ptr [esp + 0x58], 0
// 007d8e1e  89442414             mov dword ptr [esp + 0x14], eax
// 007d8e22  3bc6                 cmp eax, esi
// 007d8e24  0f84da000000         je 0x7d8f04
// 007d8e2a  8b85ec000000         mov eax, dword ptr [ebp + 0xec]
// 007d8e30  8b7830               mov edi, dword ptr [eax + 0x30]
// 007d8e33  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 007d8e37  895c2460             mov dword ptr [esp + 0x60], ebx
// 007d8e3b  85ff                 test edi, edi
// 007d8e3d  7e6d                 jle 0x7d8eac
// 007d8e3f  b302                 mov bl, 2
// 007d8e41  33c0                 xor eax, eax
// 007d8e43  68fe08a000           push 0xa008fe
// 007d8e48  8d4c2420             lea ecx, [esp + 0x20]
// 007d8e4c  6689442420           mov word ptr [esp + 0x20], ax
// 007d8e51  e87a411a00           call 0x97cfd0
// 007d8e56  688c000000           push 0x8c
// 007d8e5b  885c245c             mov byte ptr [esp + 0x5c], bl
// 007d8e5f  e8ec68ffff           call 0x7cf750
// 007d8e64  89442418             mov dword ptr [esp + 0x18], eax
// 007d8e68  c644245803           mov byte ptr [esp + 0x58], 3
// 007d8e6d  85c0                 test eax, eax
// 007d8e6f  740e                 je 0x7d8e7f
// 007d8e71  8d4c241c             lea ecx, [esp + 0x1c]
// 007d8e75  51                   push ecx
// 007d8e76  8bc8                 mov ecx, eax
// 007d8e78  e813700000           call 0x7dfe90
// 007d8e7d  eb02                 jmp 0x7d8e81
// 007d8e7f  33c0                 xor eax, eax
// 007d8e81  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007d8e85  885c2458             mov byte ptr [esp + 0x58], bl
// 007d8e89  85c0                 test eax, eax
// 007d8e8b  745b                 je 0x7d8ee8
// 007d8e8d  50                   push eax
// 007d8e8e  e84d600000           call 0x7deee0
// 007d8e93  8d54241c             lea edx, [esp + 0x1c]
// 007d8e97  52                   push edx
// 007d8e98  c644245c00           mov byte ptr [esp + 0x5c], 0
// 007d8e9d  ff1564aa9e00         call dword ptr [0x9eaa64]
// 007d8ea3  46                   inc esi
// 007d8ea4  3bf7                 cmp esi, edi
// 007d8ea6  7c99                 jl 0x7d8e41
// 007d8ea8  8b5c2460             mov ebx, dword ptr [esp + 0x60]
// 007d8eac  8b8dec000000         mov ecx, dword ptr [ebp + 0xec]
// 007d8eb2  e8d9720400           call 0x820190
// 007d8eb7  8bf8                 mov edi, eax
// 007d8eb9  33f6                 xor esi, esi
// 007d8ebb  85ff                 test edi, edi
// 007d8ebd  0f8ece000000         jle 0x7d8f91
// 007d8ec3  3bf3                 cmp esi, ebx
// 007d8ec5  7d55                 jge 0x7d8f1c
// 007d8ec7  85f6                 test esi, esi
// 007d8ec9  0f8cef000000         jl 0x7d8fbe
// 007d8ecf  3b742444             cmp esi, dword ptr [esp + 0x44]
// 007d8ed3  0f8de5000000         jge 0x7d8fbe
// 007d8ed9  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007d8edd  8d0cb1               lea ecx, [ecx + esi*4]
// 007d8ee0  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 007d8ee6  eb39                 jmp 0x7d8f21
// 007d8ee8  85c9                 test ecx, ecx
// 007d8eea  740d                 je 0x7d8ef9
// 007d8eec  e82bf0fcff           call 0x7a7f1c
// 007d8ef1  c744241400000000     mov dword ptr [esp + 0x14], 0
// 007d8ef9  8d44241c             lea eax, [esp + 0x1c]
// 007d8efd  50                   push eax
// 007d8efe  ff1564aa9e00         call dword ptr [0x9eaa64]
// 007d8f04  8d4c243c             lea ecx, [esp + 0x3c]
// 007d8f08  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 007d8f10  e8e5401a00           call 0x97cffa
// 007d8f15  33c0                 xor eax, eax
// 007d8f17  e98c000000           jmp 0x7d8fa8
// 007d8f1c  b8fe08a000           mov eax, 0xa008fe
// 007d8f21  33d2                 xor edx, edx
// 007d8f23  50                   push eax
// 007d8f24  8d4c2430             lea ecx, [esp + 0x30]
// 007d8f28  6689542430           mov word ptr [esp + 0x30], dx
// 007d8f2d  e89e401a00           call 0x97cfd0
// 007d8f32  8b8dec000000         mov ecx, dword ptr [ebp + 0xec]
// 007d8f38  56                   push esi
// 007d8f39  c644245c04           mov byte ptr [esp + 0x5c], 4
// 007d8f3e  e84d730400           call 0x820290
// 007d8f43  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007d8f47  50                   push eax
// 007d8f48  e8635e0000           call 0x7dedb0
// 007d8f4d  85c0                 test eax, eax
// 007d8f4f  7507                 jne 0x7d8f58
// 007d8f51  8d44242c             lea eax, [esp + 0x2c]
// 007d8f55  50                   push eax
// 007d8f56  eb25                 jmp 0x7d8f7d
// 007d8f58  50                   push eax
// 007d8f59  e8e2680000           call 0x7df840
// 007d8f5e  50                   push eax
// 007d8f5f  e81aeefcff           call 0x7a7d7e
// 007d8f64  83c408               add esp, 8
// 007d8f67  85c0                 test eax, eax
// 007d8f69  740d                 je 0x7d8f78
// 007d8f6b  8d4c242c             lea ecx, [esp + 0x2c]
// 007d8f6f  51                   push ecx
// 007d8f70  8d487c               lea ecx, [eax + 0x7c]
// 007d8f73  e894401a00           call 0x97d00c
// 007d8f78  8d54242c             lea edx, [esp + 0x2c]
// 007d8f7c  52                   push edx
// 007d8f7d  c644245c00           mov byte ptr [esp + 0x5c], 0
// 007d8f82  ff1564aa9e00         call dword ptr [0x9eaa64]
// 007d8f88  46                   inc esi
// 007d8f89  3bf7                 cmp esi, edi
// 007d8f8b  0f8c32ffffff         jl 0x7d8ec3
// 007d8f91  8b742414             mov esi, dword ptr [esp + 0x14]
// 007d8f95  8d4c243c             lea ecx, [esp + 0x3c]
// 007d8f99  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 007d8fa1  e854401a00           call 0x97cffa
// 007d8fa6  8bc6                 mov eax, esi
// 007d8fa8  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 007d8fac  64890d00000000       mov dword ptr fs:[0], ecx
// 007d8fb3  59                   pop ecx
// 007d8fb4  5f                   pop edi
// 007d8fb5  5e                   pop esi
// 007d8fb6  5d                   pop ebp
// 007d8fb7  5b                   pop ebx
// 007d8fb8  83c448               add esp, 0x48
// 007d8fbb  c20400               ret 4
// 007d8fbe  e889ecfcff           call 0x7a7c4c
// copied from an identical function in another client (function ?_CreateRecodFromText@CXTPReportControl@@MAEPAVCXTPReportRecord@@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp