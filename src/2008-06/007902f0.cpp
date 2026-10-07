// roc 2008-06 007902f0  unit: CXTShadowWnd  size: 226 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007902f0
//
// 007902f0  83ec20               sub esp, 0x20
// 007902f3  53                   push ebx
// 007902f4  56                   push esi
// 007902f5  8bf1                 mov esi, ecx
// 007902f7  56                   push esi
// 007902f8  8d4c240c             lea ecx, [esp + 0xc]
// 007902fc  e8cf77f6ff           call 0x6f7ad0
// 00790301  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00790305  8b5804               mov ebx, dword ptr [eax + 4]
// 00790308  85db                 test ebx, ebx
// 0079030a  0f84ba000000         je 0x7903ca
// 00790310  55                   push ebp
// 00790311  57                   push edi
// 00790312  8bc3                 mov eax, ebx
// 00790314  8b4008               mov eax, dword ptr [eax + 8]
// 00790317  8b1b                 mov ebx, dword ptr [ebx]
// 00790319  33c9                 xor ecx, ecx
// 0079031b  39485c               cmp dword ptr [eax + 0x5c], ecx
// 0079031e  0f94c1               sete cl
// 00790321  394e5c               cmp dword ptr [esi + 0x5c], ecx
// 00790324  0f8596000000         jne 0x7903c0
// 0079032a  50                   push eax
// 0079032b  8d4c2424             lea ecx, [esp + 0x24]
// 0079032f  e89c77f6ff           call 0x6f7ad0
// 00790334  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 00790338  7540                 jne 0x79037a
// 0079033a  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0079033e  8b542414             mov edx, dword ptr [esp + 0x14]
// 00790342  8d41ff               lea eax, [ecx - 1]
// 00790345  3bd0                 cmp edx, eax
// 00790347  7577                 jne 0x7903c0
// 00790349  8b442418             mov eax, dword ptr [esp + 0x18]
// 0079034d  3b442428             cmp eax, dword ptr [esp + 0x28]
// 00790351  7d6d                 jge 0x7903c0
// 00790353  3b442420             cmp eax, dword ptr [esp + 0x20]
// 00790357  7e67                 jle 0x7903c0
// 00790359  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0079035d  2bf9                 sub edi, ecx
// 0079035f  8d0c7a               lea ecx, [edx + edi*2]
// 00790362  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00790366  6a01                 push 1
// 00790368  2bd1                 sub edx, ecx
// 0079036a  52                   push edx
// 0079036b  8b542418             mov edx, dword ptr [esp + 0x18]
// 0079036f  2bc2                 sub eax, edx
// 00790371  50                   push eax
// 00790372  51                   push ecx
// 00790373  894c2424             mov dword ptr [esp + 0x24], ecx
// 00790377  52                   push edx
// 00790378  eb3f                 jmp 0x7903b9
// 0079037a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0079037e  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00790382  8d41ff               lea eax, [ecx - 1]
// 00790385  3bf8                 cmp edi, eax
// 00790387  7537                 jne 0x7903c0
// 00790389  8b542414             mov edx, dword ptr [esp + 0x14]
// 0079038d  3b542424             cmp edx, dword ptr [esp + 0x24]
// 00790391  7e2d                 jle 0x7903c0
// 00790393  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00790397  3b44242c             cmp eax, dword ptr [esp + 0x2c]
// 0079039b  7d23                 jge 0x7903c0
// 0079039d  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 007903a1  6a01                 push 1
// 007903a3  2bc2                 sub eax, edx
// 007903a5  50                   push eax
// 007903a6  8b442420             mov eax, dword ptr [esp + 0x20]
// 007903aa  2be9                 sub ebp, ecx
// 007903ac  8d4c6fff             lea ecx, [edi + ebp*2 - 1]
// 007903b0  2bc1                 sub eax, ecx
// 007903b2  50                   push eax
// 007903b3  52                   push edx
// 007903b4  894c2420             mov dword ptr [esp + 0x20], ecx
// 007903b8  51                   push ecx
// 007903b9  8bce                 mov ecx, esi
// 007903bb  e88c06f1ff           call 0x6a0a4c
// 007903c0  85db                 test ebx, ebx
// 007903c2  0f854affffff         jne 0x790312
// 007903c8  5f                   pop edi
// 007903c9  5d                   pop ebp
// 007903ca  5e                   pop esi
// 007903cb  5b                   pop ebx
// 007903cc  83c420               add esp, 0x20
// 007903cf  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?LongShadow@CXTShadowWnd@@IAEXPAVCShadowList@CXTShadowsManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
