// roc 2009-12 00897f50  unit: CXTPRibbonBar  size: 268 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00897f50
//
// 00897f50  53                   push ebx
// 00897f51  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00897f55  8b8348020000         mov eax, dword ptr [ebx + 0x248]
// 00897f5b  56                   push esi
// 00897f5c  8bf1                 mov esi, ecx
// 00897f5e  898648020000         mov dword ptr [esi + 0x248], eax
// 00897f64  8b838c020000         mov eax, dword ptr [ebx + 0x28c]
// 00897f6a  57                   push edi
// 00897f6b  89868c020000         mov dword ptr [esi + 0x28c], eax
// 00897f71  85c0                 test eax, eax
// 00897f73  7419                 je 0x897f8e
// 00897f75  8b8668020000         mov eax, dword ptr [esi + 0x268]
// 00897f7b  8b9084010000         mov edx, dword ptr [eax + 0x184]
// 00897f81  8d8884010000         lea ecx, [eax + 0x184]
// 00897f87  8b4220               mov eax, dword ptr [edx + 0x20]
// 00897f8a  6a00                 push 0
// 00897f8c  ffd0                 call eax
// 00897f8e  8b13                 mov edx, dword ptr [ebx]
// 00897f90  8b8280010000         mov eax, dword ptr [edx + 0x180]
// 00897f96  8bcb                 mov ecx, ebx
// 00897f98  ffd0                 call eax
// 00897f9a  85c0                 test eax, eax
// 00897f9c  7471                 je 0x89800f
// 00897f9e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00897fa2  51                   push ecx
// 00897fa3  53                   push ebx
// 00897fa4  8bce                 mov ecx, esi
// 00897fa6  e8c5c7ffff           call 0x894770
// 00897fab  8b8e68020000         mov ecx, dword ptr [esi + 0x268]
// 00897fb1  8b11                 mov edx, dword ptr [ecx]
// 00897fb3  8b8368020000         mov eax, dword ptr [ebx + 0x268]
// 00897fb9  8b92e0000000         mov edx, dword ptr [edx + 0xe0]
// 00897fbf  6a00                 push 0
// 00897fc1  50                   push eax
// 00897fc2  ffd2                 call edx
// 00897fc4  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00897fca  8b01                 mov eax, dword ptr [ecx]
// 00897fcc  8b9674020000         mov edx, dword ptr [esi + 0x274]
// 00897fd2  8b4058               mov eax, dword ptr [eax + 0x58]
// 00897fd5  52                   push edx
// 00897fd6  ffd0                 call eax
// 00897fd8  c7867402000000000000 mov dword ptr [esi + 0x274], 0
// 00897fe2  8b8374020000         mov eax, dword ptr [ebx + 0x274]
// 00897fe8  85c0                 test eax, eax
// 00897fea  7416                 je 0x898002
// 00897fec  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00897ff2  6a01                 push 1
// 00897ff4  6a00                 push 0
// 00897ff6  50                   push eax
// 00897ff7  e8b4f2faff           call 0x8472b0
// 00897ffc  898674020000         mov dword ptr [esi + 0x274], eax
// 00898002  8bce                 mov ecx, esi
// 00898004  e8d7ccffff           call 0x894ce0
// 00898009  50                   push eax
// 0089800a  e801dfffff           call 0x895f10
// 0089800f  8b8e64020000         mov ecx, dword ptr [esi + 0x264]
// 00898015  e8c6d2faff           call 0x8452e0
// 0089801a  8b8364020000         mov eax, dword ptr [ebx + 0x264]
// 00898020  33ff                 xor edi, edi
// 00898022  39782c               cmp dword ptr [eax + 0x2c], edi
// 00898025  7e2f                 jle 0x898056
// 00898027  85ff                 test edi, edi
// 00898029  7c0d                 jl 0x898038
// 0089802b  3b782c               cmp edi, dword ptr [eax + 0x2c]
// 0089802e  7d08                 jge 0x898038
// 00898030  8b4828               mov ecx, dword ptr [eax + 0x28]
// 00898033  8b04b9               mov eax, dword ptr [ecx + edi*4]
// 00898036  eb02                 jmp 0x89803a
// 00898038  33c0                 xor eax, eax
// 0089803a  8b8e64020000         mov ecx, dword ptr [esi + 0x264]
// 00898040  6a00                 push 0
// 00898042  6aff                 push -1
// 00898044  50                   push eax
// 00898045  e866f2faff           call 0x8472b0
// 0089804a  8b8364020000         mov eax, dword ptr [ebx + 0x264]
// 00898050  47                   inc edi
// 00898051  3b782c               cmp edi, dword ptr [eax + 0x2c]
// 00898054  7cd1                 jl 0x898027
// 00898056  5f                   pop edi
// 00898057  5e                   pop esi
// 00898058  5b                   pop ebx
// 00898059  c20800               ret 8
// copied from an identical function in another client (function ?Copy@CXTPRibbonBar@@MAEXPAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonBar.cpp