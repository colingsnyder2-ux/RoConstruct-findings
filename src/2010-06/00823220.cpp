// roc 2010-06 00823220  unit: PAVCXTPCommandBar::?$CArray  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00823220
//
// 00823220  56                   push esi
// 00823221  8b742408             mov esi, dword ptr [esp + 8]
// 00823225  85f6                 test esi, esi
// 00823227  747c                 je 0x8232a5
// 00823229  8b5620               mov edx, dword ptr [esi + 0x20]
// 0082322c  85d2                 test edx, edx
// 0082322e  7475                 je 0x8232a5
// 00823230  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00823234  3d00020000           cmp eax, 0x200
// 00823239  7747                 ja 0x823282
// 0082323b  7411                 je 0x82324e
// 0082323d  0560ffffff           add eax, 0xffffff60
// 00823242  83f807               cmp eax, 7
// 00823245  775e                 ja 0x8232a5
// 00823247  ff2485ac328200       jmp dword ptr [eax*4 + 0x8232ac]
// 0082324e  83be2c01000000       cmp dword ptr [esi + 0x12c], 0
// 00823255  7f4e                 jg 0x8232a5
// 00823257  8d442410             lea eax, [esp + 0x10]
// 0082325b  50                   push eax
// 0082325c  52                   push edx
// 0082325d  ff1578bc9e00         call dword ptr [0x9ebc78]
// 00823263  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00823267  8b542414             mov edx, dword ptr [esp + 0x14]
// 0082326b  83ec08               sub esp, 8
// 0082326e  8bc4                 mov eax, esp
// 00823270  8908                 mov dword ptr [eax], ecx
// 00823272  6a00                 push 0
// 00823274  8bce                 mov ecx, esi
// 00823276  895004               mov dword ptr [eax + 4], edx
// 00823279  e8c25cf9ff           call 0x7b8f40
// 0082327e  5e                   pop esi
// 0082327f  c21000               ret 0x10
// 00823282  05fffdffff           add eax, 0xfffffdff
// 00823287  83f806               cmp eax, 6
// 0082328a  7719                 ja 0x8232a5
// 0082328c  0fb690d8328200       movzx edx, byte ptr [eax + 0x8232d8]
// 00823293  ff2495cc328200       jmp dword ptr [edx*4 + 0x8232cc]
// 0082329a  83790400             cmp dword ptr [ecx + 4], 0
// 0082329e  7f05                 jg 0x8232a5
// 008232a0  e88bfeffff           call 0x823130
// 008232a5  5e                   pop esi
// 008232a6  c21000               ret 0x10
// 008232a9  8d4900               lea ecx, [ecx]
// 008232ac  4e                   dec esi
// 008232ad  328200a03282         xor al, byte ptr [edx - 0x7dcd6000]
// 008232b3  009a328200a5         add byte ptr [edx - 0x5aff7dce], bl
// 008232b9  328200a03282         xor al, byte ptr [edx - 0x7dcd6000]
// 008232bf  00a5328200a5         add byte ptr [ebp - 0x5aff7dce], ah
// 008232c5  328200a03282         xor al, byte ptr [edx - 0x7dcd6000]
// 008232cb  00a03282009a         add byte ptr [eax - 0x65ff7dce], ah
// 008232d1  328200a53282         xor al, byte ptr [edx - 0x7dcd5b00]
// 008232d7  0000                 add byte ptr [eax], al
// 008232d9  0102                 add dword ptr [edx], eax
// 008232db  0002                 add byte ptr [edx], al
// 008232dd  0200                 add al, byte ptr [eax]
// library xtp-11.2.2/Source\CommandBars\XTPMouseManager.cpp (function ?DeliverMessage@CXTPMouseManager@@AAEXPAVCXTPCommandBar@@IUtagPOINT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMouseManager.cpp
