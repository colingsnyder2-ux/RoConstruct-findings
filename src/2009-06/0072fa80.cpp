// roc 2009-06 0072fa80  unit: CXTPCommandBar  size: 440 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0072fa80
//
// 0072fa80  6aff                 push -1
// 0072fa82  68b2578700           push 0x8757b2
// 0072fa87  64a100000000         mov eax, dword ptr fs:[0]
// 0072fa8d  50                   push eax
// 0072fa8e  83ec08               sub esp, 8
// 0072fa91  53                   push ebx
// 0072fa92  55                   push ebp
// 0072fa93  56                   push esi
// 0072fa94  57                   push edi
// 0072fa95  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0072fa9a  33c4                 xor eax, esp
// 0072fa9c  50                   push eax
// 0072fa9d  8d44241c             lea eax, [esp + 0x1c]
// 0072faa1  64a300000000         mov dword ptr fs:[0], eax
// 0072faa7  894c2418             mov dword ptr [esp + 0x18], ecx
// 0072faab  e8e0d8ffff           call 0x72d390
// 0072fab0  8bf8                 mov edi, eax
// 0072fab2  85ff                 test edi, edi
// 0072fab4  7475                 je 0x72fb2b
// 0072fab6  33f6                 xor esi, esi
// 0072fab8  397734               cmp dword ptr [edi + 0x34], esi
// 0072fabb  7e58                 jle 0x72fb15
// 0072fabd  85f6                 test esi, esi
// 0072fabf  0f8c50010000         jl 0x72fc15
// 0072fac5  3b7734               cmp esi, dword ptr [edi + 0x34]
// 0072fac8  0f8d47010000         jge 0x72fc15
// 0072face  8b4730               mov eax, dword ptr [edi + 0x30]
// 0072fad1  8b1cb0               mov ebx, dword ptr [eax + esi*4]
// 0072fad4  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 0072fad7  8d04b0               lea eax, [eax + esi*4]
// 0072fada  8d6b54               lea ebp, [ebx + 0x54]
// 0072fadd  894c2414             mov dword ptr [esp + 0x14], ecx
// 0072fae1  8bcd                 mov ecx, ebp
// 0072fae3  ff1554fb8900         call dword ptr [0x89fb54]
// 0072fae9  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0072faed  3bc1                 cmp eax, ecx
// 0072faef  7e1e                 jle 0x72fb0f
// 0072faf1  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0072faf5  52                   push edx
// 0072faf6  51                   push ecx
// 0072faf7  8bcd                 mov ecx, ebp
// 0072faf9  ff15e0f98900         call dword ptr [0x89f9e0]
// 0072faff  0fb6c0               movzx eax, al
// 0072fb02  50                   push eax
// 0072fb03  e838520800           call 0x7b4d40
// 0072fb08  83c408               add esp, 8
// 0072fb0b  85c0                 test eax, eax
// 0072fb0d  7532                 jne 0x72fb41
// 0072fb0f  46                   inc esi
// 0072fb10  3b7734               cmp esi, dword ptr [edi + 0x34]
// 0072fb13  7ca8                 jl 0x72fabd
// 0072fb15  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0072fb19  83f810               cmp eax, 0x10
// 0072fb1c  740d                 je 0x72fb2b
// 0072fb1e  83f811               cmp eax, 0x11
// 0072fb21  7408                 je 0x72fb2b
// 0072fb23  6a00                 push 0
// 0072fb25  ff15a8ed8900         call dword ptr [0x89eda8]
// 0072fb2b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0072fb2f  64890d00000000       mov dword ptr fs:[0], ecx
// 0072fb36  59                   pop ecx
// 0072fb37  5f                   pop edi
// 0072fb38  5e                   pop esi
// 0072fb39  5d                   pop ebp
// 0072fb3a  5b                   pop ebx
// 0072fb3b  83c414               add esp, 0x14
// 0072fb3e  c20400               ret 4
// 0072fb41  8b6f48               mov ebp, dword ptr [edi + 0x48]
// 0072fb44  8d7354               lea esi, [ebx + 0x54]
// 0072fb47  8bce                 mov ecx, esi
// 0072fb49  ff1554fb8900         call dword ptr [0x89fb54]
// 0072fb4f  48                   dec eax
// 0072fb50  3bc5                 cmp eax, ebp
// 0072fb52  0f8ec2000000         jle 0x72fc1a
// 0072fb58  8d4501               lea eax, [ebp + 1]
// 0072fb5b  50                   push eax
// 0072fb5c  8d4c2430             lea ecx, [esp + 0x30]
// 0072fb60  51                   push ecx
// 0072fb61  8bce                 mov ecx, esi
// 0072fb63  894748               mov dword ptr [edi + 0x48], eax
// 0072fb66  ff1510f48900         call dword ptr [0x89f410]
// 0072fb6c  8b6f34               mov ebp, dword ptr [edi + 0x34]
// 0072fb6f  83c5ff               add ebp, -1
// 0072fb72  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0072fb7a  0f8886000000         js 0x72fc06
// 0072fb80  85ed                 test ebp, ebp
// 0072fb82  0f8c8d000000         jl 0x72fc15
// 0072fb88  3b6f34               cmp ebp, dword ptr [edi + 0x34]
// 0072fb8b  0f8d84000000         jge 0x72fc15
// 0072fb91  8b5730               mov edx, dword ptr [edi + 0x30]
// 0072fb94  8b34aa               mov esi, dword ptr [edx + ebp*4]
// 0072fb97  8d04aa               lea eax, [edx + ebp*4]
// 0072fb9a  8b4748               mov eax, dword ptr [edi + 0x48]
// 0072fb9d  50                   push eax
// 0072fb9e  8d4c2418             lea ecx, [esp + 0x18]
// 0072fba2  51                   push ecx
// 0072fba3  8d4e54               lea ecx, [esi + 0x54]
// 0072fba6  ff1510f48900         call dword ptr [0x89f410]
// 0072fbac  8bd8                 mov ebx, eax
// 0072fbae  8d4c242c             lea ecx, [esp + 0x2c]
// 0072fbb2  c644242401           mov byte ptr [esp + 0x24], 1
// 0072fbb7  ff15d0fc8900         call dword ptr [0x89fcd0]
// 0072fbbd  50                   push eax
// 0072fbbe  8bcb                 mov ecx, ebx
// 0072fbc0  ff15d4fc8900         call dword ptr [0x89fcd4]
// 0072fbc6  85c0                 test eax, eax
// 0072fbc8  8d4c2414             lea ecx, [esp + 0x14]
// 0072fbcc  0f95c3               setne bl
// 0072fbcf  c644242400           mov byte ptr [esp + 0x24], 0
// 0072fbd4  ff1510fd8900         call dword ptr [0x89fd10]
// 0072fbda  84db                 test bl, bl
// 0072fbdc  741f                 je 0x72fbfd
// 0072fbde  6a01                 push 1
// 0072fbe0  55                   push ebp
// 0072fbe1  8d4f2c               lea ecx, [edi + 0x2c]
// 0072fbe4  e8772a0200           call 0x752660
// 0072fbe9  8b16                 mov edx, dword ptr [esi]
// 0072fbeb  8b4268               mov eax, dword ptr [edx + 0x68]
// 0072fbee  8bce                 mov ecx, esi
// 0072fbf0  ffd0                 call eax
// 0072fbf2  8b16                 mov edx, dword ptr [esi]
// 0072fbf4  8b4204               mov eax, dword ptr [edx + 4]
// 0072fbf7  6a01                 push 1
// 0072fbf9  8bce                 mov ecx, esi
// 0072fbfb  ffd0                 call eax
// 0072fbfd  83ed01               sub ebp, 1
// 0072fc00  0f897affffff         jns 0x72fb80
// 0072fc06  8d4c242c             lea ecx, [esp + 0x2c]
// 0072fc0a  ff1510fd8900         call dword ptr [0x89fd10]
// 0072fc10  e916ffffff           jmp 0x72fb2b
// 0072fc15  e8ca90feff           call 0x718ce4
// 0072fc1a  837b6c00             cmp dword ptr [ebx + 0x6c], 0
// 0072fc1e  0f84fffeffff         je 0x72fb23
// 0072fc24  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0072fc28  8b11                 mov edx, dword ptr [ecx]
// 0072fc2a  8b82c8010000         mov eax, dword ptr [edx + 0x1c8]
// 0072fc30  53                   push ebx
// 0072fc31  ffd0                 call eax
// 0072fc33  e9f3feffff           jmp 0x72fb2b
// copied from an identical function in another client (function ?OnKeyboardTipChar@CXTPCommandBar@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPCommandBar.cpp