// roc 2012-06 00a68670  unit: CXTShadowWnd  size: 226 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a68670
//
// 00a68670  83ec20               sub esp, 0x20
// 00a68673  53                   push ebx
// 00a68674  56                   push esi
// 00a68675  8bf1                 mov esi, ecx
// 00a68677  56                   push esi
// 00a68678  8d4c240c             lea ecx, [esp + 0xc]
// 00a6867c  e8bfcaf6ff           call 0x9d5140
// 00a68681  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00a68685  8b5804               mov ebx, dword ptr [eax + 4]
// 00a68688  85db                 test ebx, ebx
// 00a6868a  0f84ba000000         je 0xa6874a
// 00a68690  55                   push ebp
// 00a68691  57                   push edi
// 00a68692  8bc3                 mov eax, ebx
// 00a68694  8b4008               mov eax, dword ptr [eax + 8]
// 00a68697  8b1b                 mov ebx, dword ptr [ebx]
// 00a68699  33c9                 xor ecx, ecx
// 00a6869b  39485c               cmp dword ptr [eax + 0x5c], ecx
// 00a6869e  0f94c1               sete cl
// 00a686a1  394e5c               cmp dword ptr [esi + 0x5c], ecx
// 00a686a4  0f8596000000         jne 0xa68740
// 00a686aa  50                   push eax
// 00a686ab  8d4c2424             lea ecx, [esp + 0x24]
// 00a686af  e88ccaf6ff           call 0x9d5140
// 00a686b4  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 00a686b8  7540                 jne 0xa686fa
// 00a686ba  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a686be  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a686c2  8d41ff               lea eax, [ecx - 1]
// 00a686c5  3bd0                 cmp edx, eax
// 00a686c7  7577                 jne 0xa68740
// 00a686c9  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a686cd  3b442428             cmp eax, dword ptr [esp + 0x28]
// 00a686d1  7d6d                 jge 0xa68740
// 00a686d3  3b442420             cmp eax, dword ptr [esp + 0x20]
// 00a686d7  7e67                 jle 0xa68740
// 00a686d9  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00a686dd  2bf9                 sub edi, ecx
// 00a686df  8d0c7a               lea ecx, [edx + edi*2]
// 00a686e2  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a686e6  6a01                 push 1
// 00a686e8  2bd1                 sub edx, ecx
// 00a686ea  52                   push edx
// 00a686eb  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a686ef  2bc2                 sub eax, edx
// 00a686f1  50                   push eax
// 00a686f2  51                   push ecx
// 00a686f3  894c2424             mov dword ptr [esp + 0x24], ecx
// 00a686f7  52                   push edx
// 00a686f8  eb3f                 jmp 0xa68739
// 00a686fa  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a686fe  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00a68702  8d41ff               lea eax, [ecx - 1]
// 00a68705  3bf8                 cmp edi, eax
// 00a68707  7537                 jne 0xa68740
// 00a68709  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a6870d  3b542424             cmp edx, dword ptr [esp + 0x24]
// 00a68711  7e2d                 jle 0xa68740
// 00a68713  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a68717  3b44242c             cmp eax, dword ptr [esp + 0x2c]
// 00a6871b  7d23                 jge 0xa68740
// 00a6871d  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00a68721  6a01                 push 1
// 00a68723  2bc2                 sub eax, edx
// 00a68725  50                   push eax
// 00a68726  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a6872a  2be9                 sub ebp, ecx
// 00a6872c  8d4c6fff             lea ecx, [edi + ebp*2 - 1]
// 00a68730  2bc1                 sub eax, ecx
// 00a68732  50                   push eax
// 00a68733  52                   push edx
// 00a68734  894c2420             mov dword ptr [esp + 0x20], ecx
// 00a68738  51                   push ecx
// 00a68739  8bce                 mov ecx, esi
// 00a6873b  e89a9df1ff           call 0x9824da
// 00a68740  85db                 test ebx, ebx
// 00a68742  0f854affffff         jne 0xa68692
// 00a68748  5f                   pop edi
// 00a68749  5d                   pop ebp
// 00a6874a  5e                   pop esi
// 00a6874b  5b                   pop ebx
// 00a6874c  83c420               add esp, 0x20
// 00a6874f  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?LongShadow@CXTShadowWnd@@IAEXPAVCShadowList@CXTShadowsManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
