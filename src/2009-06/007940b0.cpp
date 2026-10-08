// roc 2009-06 007940b0  unit: PAVCXTPCommandBar::?$CArray  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007940b0
//
// 007940b0  56                   push esi
// 007940b1  8b742408             mov esi, dword ptr [esp + 8]
// 007940b5  85f6                 test esi, esi
// 007940b7  747c                 je 0x794135
// 007940b9  8b5620               mov edx, dword ptr [esi + 0x20]
// 007940bc  85d2                 test edx, edx
// 007940be  7475                 je 0x794135
// 007940c0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007940c4  3d00020000           cmp eax, 0x200
// 007940c9  7747                 ja 0x794112
// 007940cb  7411                 je 0x7940de
// 007940cd  0560ffffff           add eax, 0xffffff60
// 007940d2  83f807               cmp eax, 7
// 007940d5  775e                 ja 0x794135
// 007940d7  ff24853c417900       jmp dword ptr [eax*4 + 0x79413c]
// 007940de  83be2c01000000       cmp dword ptr [esi + 0x12c], 0
// 007940e5  7f4e                 jg 0x794135
// 007940e7  8d442410             lea eax, [esp + 0x10]
// 007940eb  50                   push eax
// 007940ec  52                   push edx
// 007940ed  ff1530ee8900         call dword ptr [0x89ee30]
// 007940f3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007940f7  8b542414             mov edx, dword ptr [esp + 0x14]
// 007940fb  83ec08               sub esp, 8
// 007940fe  8bc4                 mov eax, esp
// 00794100  8908                 mov dword ptr [eax], ecx
// 00794102  6a00                 push 0
// 00794104  8bce                 mov ecx, esi
// 00794106  895004               mov dword ptr [eax + 4], edx
// 00794109  e8829bf9ff           call 0x72dc90
// 0079410e  5e                   pop esi
// 0079410f  c21000               ret 0x10
// 00794112  05fffdffff           add eax, 0xfffffdff
// 00794117  83f806               cmp eax, 6
// 0079411a  7719                 ja 0x794135
// 0079411c  0fb69068417900       movzx edx, byte ptr [eax + 0x794168]
// 00794123  ff24955c417900       jmp dword ptr [edx*4 + 0x79415c]
// 0079412a  83790400             cmp dword ptr [ecx + 4], 0
// 0079412e  7f05                 jg 0x794135
// 00794130  e88bfeffff           call 0x793fc0
// 00794135  5e                   pop esi
// 00794136  c21000               ret 0x10
// 00794139  8d4900               lea ecx, [ecx]
// 0079413c  de4079               fiadd word ptr [eax + 0x79]
// 0079413f  0030                 add byte ptr [eax], dh
// 00794141  41                   inc ecx
// 00794142  7900                 jns 0x794144
// 00794144  2a4179               sub al, byte ptr [ecx + 0x79]
// 00794147  003541790030         add byte ptr [0x30007941], dh
// 0079414d  41                   inc ecx
// 0079414e  7900                 jns 0x794150
// 00794150  3541790035           xor eax, 0x35007941
// 00794155  41                   inc ecx
// 00794156  7900                 jns 0x794158
// 00794158  304179               xor byte ptr [ecx + 0x79], al
// 0079415b  0030                 add byte ptr [eax], dh
// 0079415d  41                   inc ecx
// 0079415e  7900                 jns 0x794160
// 00794160  2a4179               sub al, byte ptr [ecx + 0x79]
// 00794163  003541790000         add byte ptr [0x7941], dh
// 00794169  0102                 add dword ptr [edx], eax
// 0079416b  0002                 add byte ptr [edx], al
// 0079416d  0200                 add al, byte ptr [eax]
// library xtp-11.2.2/Source\CommandBars\XTPMouseManager.cpp (function ?DeliverMessage@CXTPMouseManager@@AAEXPAVCXTPCommandBar@@IUtagPOINT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMouseManager.cpp
