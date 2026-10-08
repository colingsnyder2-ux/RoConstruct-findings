// from server: 100% by auto
// roc 2008-06 006b1d70  unit: CXTPPaintManager  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b1d70
//
// 006b1d70  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 006b1d75  0f84ce000000         je 0x6b1e49
// 006b1d7b  83796c00             cmp dword ptr [ecx + 0x6c], 0
// 006b1d7f  56                   push esi
// 006b1d80  7479                 je 0x6b1dfb
// 006b1d82  8db138010000         lea esi, [ecx + 0x138]
// 006b1d88  8bce                 mov ecx, esi
// 006b1d8a  e8a1660600           call 0x718430
// 006b1d8f  85c0                 test eax, eax
// 006b1d91  7468                 je 0x6b1dfb
// 006b1d93  33c9                 xor ecx, ecx
// 006b1d95  394c2430             cmp dword ptr [esp + 0x30], ecx
// 006b1d99  7507                 jne 0x6b1da2
// 006b1d9b  b903000000           mov ecx, 3
// 006b1da0  eb10                 jmp 0x6b1db2
// 006b1da2  394c2424             cmp dword ptr [esp + 0x24], ecx
// 006b1da6  740a                 je 0x6b1db2
// 006b1da8  33c9                 xor ecx, ecx
// 006b1daa  394c2428             cmp dword ptr [esp + 0x28], ecx
// 006b1dae  0f95c1               setne cl
// 006b1db1  41                   inc ecx
// 006b1db2  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006b1db6  83f801               cmp eax, 1
// 006b1db9  7505                 jne 0x6b1dc0
// 006b1dbb  83c104               add ecx, 4
// 006b1dbe  eb08                 jmp 0x6b1dc8
// 006b1dc0  83f802               cmp eax, 2
// 006b1dc3  7503                 jne 0x6b1dc8
// 006b1dc5  83c108               add ecx, 8
// 006b1dc8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006b1dcc  85c0                 test eax, eax
// 006b1dce  7403                 je 0x6b1dd3
// 006b1dd0  8b4004               mov eax, dword ptr [eax + 4]
// 006b1dd3  6a00                 push 0
// 006b1dd5  8d542414             lea edx, [esp + 0x14]
// 006b1dd9  52                   push edx
// 006b1dda  41                   inc ecx
// 006b1ddb  51                   push ecx
// 006b1ddc  6a02                 push 2
// 006b1dde  50                   push eax
// 006b1ddf  8bce                 mov ecx, esi
// 006b1de1  e8ca620600           call 0x7180b0
// 006b1de6  8b442408             mov eax, dword ptr [esp + 8]
// 006b1dea  5e                   pop esi
// 006b1deb  c7000d000000         mov dword ptr [eax], 0xd
// 006b1df1  c740040d000000       mov dword ptr [eax + 4], 0xd
// 006b1df8  c22c00               ret 0x2c
// 006b1dfb  837c243000           cmp dword ptr [esp + 0x30], 0
// 006b1e00  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006b1e04  7409                 je 0x6b1e0f
// 006b1e06  83f802               cmp eax, 2
// 006b1e09  7404                 je 0x6b1e0f
// 006b1e0b  33c9                 xor ecx, ecx
// 006b1e0d  eb05                 jmp 0x6b1e14
// 006b1e0f  b900010000           mov ecx, 0x100
// 006b1e14  8b542428             mov edx, dword ptr [esp + 0x28]
// 006b1e18  f7d8                 neg eax
// 006b1e1a  1bc0                 sbb eax, eax
// 006b1e1c  2500040000           and eax, 0x400
// 006b1e21  f7da                 neg edx
// 006b1e23  1bd2                 sbb edx, edx
// 006b1e25  81e200020000         and edx, 0x200
// 006b1e2b  0bc2                 or eax, edx
// 006b1e2d  0bc1                 or eax, ecx
// 006b1e2f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006b1e33  8b5104               mov edx, dword ptr [ecx + 4]
// 006b1e36  83c804               or eax, 4
// 006b1e39  50                   push eax
// 006b1e3a  6a04                 push 4
// 006b1e3c  8d442418             lea eax, [esp + 0x18]
// 006b1e40  50                   push eax
// 006b1e41  52                   push edx
// 006b1e42  ff15402d8000         call dword ptr [0x802d40]
// 006b1e48  5e                   pop esi
// 006b1e49  8b442404             mov eax, dword ptr [esp + 4]
// 006b1e4d  c7000d000000         mov dword ptr [eax], 0xd
// 006b1e53  c740040d000000       mov dword ptr [eax + 4], 0xd
// 006b1e5a  c22c00               ret 0x2c
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?DrawControlRadioButtonMark@CXTPPaintManager@@UAE?AVCSize@@PAVCDC@@VCRect@@HHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
