// roc 2007-03 00703fd0  unit: seg_00700000  size: 226 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00703fd0
//
// 00703fd0  83ec20               sub esp, 0x20
// 00703fd3  53                   push ebx
// 00703fd4  56                   push esi
// 00703fd5  8bf1                 mov esi, ecx
// 00703fd7  56                   push esi
// 00703fd8  8d4c240c             lea ecx, [esp + 0xc]
// 00703fdc  e8ef77f6ff           call 0x66b7d0
// 00703fe1  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00703fe5  8b5804               mov ebx, dword ptr [eax + 4]
// 00703fe8  85db                 test ebx, ebx
// 00703fea  0f84ba000000         je 0x7040aa
// 00703ff0  55                   push ebp
// 00703ff1  57                   push edi
// 00703ff2  8bc3                 mov eax, ebx
// 00703ff4  8b4008               mov eax, dword ptr [eax + 8]
// 00703ff7  8b1b                 mov ebx, dword ptr [ebx]
// 00703ff9  33c9                 xor ecx, ecx
// 00703ffb  39485c               cmp dword ptr [eax + 0x5c], ecx
// 00703ffe  0f94c1               sete cl
// 00704001  394e5c               cmp dword ptr [esi + 0x5c], ecx
// 00704004  0f8596000000         jne 0x7040a0
// 0070400a  50                   push eax
// 0070400b  8d4c2424             lea ecx, [esp + 0x24]
// 0070400f  e8bc77f6ff           call 0x66b7d0
// 00704014  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 00704018  7540                 jne 0x70405a
// 0070401a  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0070401e  8b542414             mov edx, dword ptr [esp + 0x14]
// 00704022  8d41ff               lea eax, [ecx - 1]
// 00704025  3bd0                 cmp edx, eax
// 00704027  7577                 jne 0x7040a0
// 00704029  8b442418             mov eax, dword ptr [esp + 0x18]
// 0070402d  3b442428             cmp eax, dword ptr [esp + 0x28]
// 00704031  7d6d                 jge 0x7040a0
// 00704033  3b442420             cmp eax, dword ptr [esp + 0x20]
// 00704037  7e67                 jle 0x7040a0
// 00704039  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0070403d  2bf9                 sub edi, ecx
// 0070403f  8d0c7a               lea ecx, [edx + edi*2]
// 00704042  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00704046  6a01                 push 1
// 00704048  2bd1                 sub edx, ecx
// 0070404a  52                   push edx
// 0070404b  8b542418             mov edx, dword ptr [esp + 0x18]
// 0070404f  2bc2                 sub eax, edx
// 00704051  50                   push eax
// 00704052  51                   push ecx
// 00704053  894c2424             mov dword ptr [esp + 0x24], ecx
// 00704057  52                   push edx
// 00704058  eb3f                 jmp 0x704099
// 0070405a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0070405e  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00704062  8d41ff               lea eax, [ecx - 1]
// 00704065  3bf8                 cmp edi, eax
// 00704067  7537                 jne 0x7040a0
// 00704069  8b542414             mov edx, dword ptr [esp + 0x14]
// 0070406d  3b542424             cmp edx, dword ptr [esp + 0x24]
// 00704071  7e2d                 jle 0x7040a0
// 00704073  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00704077  3b44242c             cmp eax, dword ptr [esp + 0x2c]
// 0070407b  7d23                 jge 0x7040a0
// 0070407d  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00704081  6a01                 push 1
// 00704083  2bc2                 sub eax, edx
// 00704085  50                   push eax
// 00704086  8b442420             mov eax, dword ptr [esp + 0x20]
// 0070408a  2be9                 sub ebp, ecx
// 0070408c  8d4c6fff             lea ecx, [edi + ebp*2 - 1]
// 00704090  2bc1                 sub eax, ecx
// 00704092  50                   push eax
// 00704093  52                   push edx
// 00704094  894c2420             mov dword ptr [esp + 0x20], ecx
// 00704098  51                   push ecx
// 00704099  8bce                 mov ecx, esi
// 0070409b  e81ca4f1ff           call 0x61e4bc
// 007040a0  85db                 test ebx, ebx
// 007040a2  0f854affffff         jne 0x703ff2
// 007040a8  5f                   pop edi
// 007040a9  5d                   pop ebp
// 007040aa  5e                   pop esi
// 007040ab  5b                   pop ebx
// 007040ac  83c420               add esp, 0x20
// 007040af  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?LongShadow@CXTShadowWnd@@IAEXPAVCShadowList@CXTShadowsManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
