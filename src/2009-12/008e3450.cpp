// roc 2009-12 008e3450  unit: CXTShadowWnd  size: 226 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e3450
//
// 008e3450  83ec20               sub esp, 0x20
// 008e3453  53                   push ebx
// 008e3454  56                   push esi
// 008e3455  8bf1                 mov esi, ecx
// 008e3457  56                   push esi
// 008e3458  8d4c240c             lea ecx, [esp + 0xc]
// 008e345c  e80f7ef6ff           call 0x84b270
// 008e3461  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008e3465  8b5804               mov ebx, dword ptr [eax + 4]
// 008e3468  85db                 test ebx, ebx
// 008e346a  0f84ba000000         je 0x8e352a
// 008e3470  55                   push ebp
// 008e3471  57                   push edi
// 008e3472  8bc3                 mov eax, ebx
// 008e3474  8b4008               mov eax, dword ptr [eax + 8]
// 008e3477  8b1b                 mov ebx, dword ptr [ebx]
// 008e3479  33c9                 xor ecx, ecx
// 008e347b  39485c               cmp dword ptr [eax + 0x5c], ecx
// 008e347e  0f94c1               sete cl
// 008e3481  394e5c               cmp dword ptr [esi + 0x5c], ecx
// 008e3484  0f8596000000         jne 0x8e3520
// 008e348a  50                   push eax
// 008e348b  8d4c2424             lea ecx, [esp + 0x24]
// 008e348f  e8dc7df6ff           call 0x84b270
// 008e3494  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 008e3498  7540                 jne 0x8e34da
// 008e349a  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008e349e  8b542414             mov edx, dword ptr [esp + 0x14]
// 008e34a2  8d41ff               lea eax, [ecx - 1]
// 008e34a5  3bd0                 cmp edx, eax
// 008e34a7  7577                 jne 0x8e3520
// 008e34a9  8b442418             mov eax, dword ptr [esp + 0x18]
// 008e34ad  3b442428             cmp eax, dword ptr [esp + 0x28]
// 008e34b1  7d6d                 jge 0x8e3520
// 008e34b3  3b442420             cmp eax, dword ptr [esp + 0x20]
// 008e34b7  7e67                 jle 0x8e3520
// 008e34b9  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 008e34bd  2bf9                 sub edi, ecx
// 008e34bf  8d0c7a               lea ecx, [edx + edi*2]
// 008e34c2  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008e34c6  6a01                 push 1
// 008e34c8  2bd1                 sub edx, ecx
// 008e34ca  52                   push edx
// 008e34cb  8b542418             mov edx, dword ptr [esp + 0x18]
// 008e34cf  2bc2                 sub eax, edx
// 008e34d1  50                   push eax
// 008e34d2  51                   push ecx
// 008e34d3  894c2424             mov dword ptr [esp + 0x24], ecx
// 008e34d7  52                   push edx
// 008e34d8  eb3f                 jmp 0x8e3519
// 008e34da  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008e34de  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008e34e2  8d41ff               lea eax, [ecx - 1]
// 008e34e5  3bf8                 cmp edi, eax
// 008e34e7  7537                 jne 0x8e3520
// 008e34e9  8b542414             mov edx, dword ptr [esp + 0x14]
// 008e34ed  3b542424             cmp edx, dword ptr [esp + 0x24]
// 008e34f1  7e2d                 jle 0x8e3520
// 008e34f3  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008e34f7  3b44242c             cmp eax, dword ptr [esp + 0x2c]
// 008e34fb  7d23                 jge 0x8e3520
// 008e34fd  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 008e3501  6a01                 push 1
// 008e3503  2bc2                 sub eax, edx
// 008e3505  50                   push eax
// 008e3506  8b442420             mov eax, dword ptr [esp + 0x20]
// 008e350a  2be9                 sub ebp, ecx
// 008e350c  8d4c6fff             lea ecx, [edi + ebp*2 - 1]
// 008e3510  2bc1                 sub eax, ecx
// 008e3512  50                   push eax
// 008e3513  52                   push edx
// 008e3514  894c2420             mov dword ptr [esp + 0x20], ecx
// 008e3518  51                   push ecx
// 008e3519  8bce                 mov ecx, esi
// 008e351b  e81207f1ff           call 0x7f3c32
// 008e3520  85db                 test ebx, ebx
// 008e3522  0f854affffff         jne 0x8e3472
// 008e3528  5f                   pop edi
// 008e3529  5d                   pop ebp
// 008e352a  5e                   pop esi
// 008e352b  5b                   pop ebx
// 008e352c  83c420               add esp, 0x20
// 008e352f  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?LongShadow@CXTShadowWnd@@IAEXPAVCShadowList@CXTShadowsManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
