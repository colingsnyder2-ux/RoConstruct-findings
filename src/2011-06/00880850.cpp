// roc 2011-06 00880850  unit: PAUHWND__::?$CArray  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00880850
//
// 00880850  56                   push esi
// 00880851  8b742408             mov esi, dword ptr [esp + 8]
// 00880855  85f6                 test esi, esi
// 00880857  747c                 je 0x8808d5
// 00880859  8b5620               mov edx, dword ptr [esi + 0x20]
// 0088085c  85d2                 test edx, edx
// 0088085e  7475                 je 0x8808d5
// 00880860  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00880864  3d00020000           cmp eax, 0x200
// 00880869  7747                 ja 0x8808b2
// 0088086b  7411                 je 0x88087e
// 0088086d  0560ffffff           add eax, 0xffffff60
// 00880872  83f807               cmp eax, 7
// 00880875  775e                 ja 0x8808d5
// 00880877  ff2485dc088800       jmp dword ptr [eax*4 + 0x8808dc]
// 0088087e  83be2c01000000       cmp dword ptr [esi + 0x12c], 0
// 00880885  7f4e                 jg 0x8808d5
// 00880887  8d442410             lea eax, [esp + 0x10]
// 0088088b  50                   push eax
// 0088088c  52                   push edx
// 0088088d  ff15f419a400         call dword ptr [0xa419f4]
// 00880893  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00880897  8b542414             mov edx, dword ptr [esp + 0x14]
// 0088089b  83ec08               sub esp, 8
// 0088089e  8bc4                 mov eax, esp
// 008808a0  8908                 mov dword ptr [eax], ecx
// 008808a2  6a00                 push 0
// 008808a4  8bce                 mov ecx, esi
// 008808a6  895004               mov dword ptr [eax + 4], edx
// 008808a9  e8e2aaf9ff           call 0x81b390
// 008808ae  5e                   pop esi
// 008808af  c21000               ret 0x10
// 008808b2  05fffdffff           add eax, 0xfffffdff
// 008808b7  83f806               cmp eax, 6
// 008808ba  7719                 ja 0x8808d5
// 008808bc  0fb69008098800       movzx edx, byte ptr [eax + 0x880908]
// 008808c3  ff2495fc088800       jmp dword ptr [edx*4 + 0x8808fc]
// 008808ca  83790400             cmp dword ptr [ecx + 4], 0
// 008808ce  7f05                 jg 0x8808d5
// 008808d0  e88bfeffff           call 0x880760
// 008808d5  5e                   pop esi
// 008808d6  c21000               ret 0x10
// 008808d9  8d4900               lea ecx, [ecx]
// 008808dc  7e08                 jle 0x8808e6
// 008808de  8800                 mov byte ptr [eax], al
// 008808e0  d008                 ror byte ptr [eax], 1
// 008808e2  8800                 mov byte ptr [eax], al
// 008808e4  ca0888               retf 0x8808
// 008808e7  00d5                 add ch, dl
// 008808e9  088800d00888         or byte ptr [eax - 0x77f73000], cl
// 008808ef  00d5                 add ch, dl
// 008808f1  088800d50888         or byte ptr [eax - 0x77f72b00], cl
// 008808f7  00d0                 add al, dl
// 008808f9  088800d00888         or byte ptr [eax - 0x77f73000], cl
// 008808ff  00ca                 add dl, cl
// 00880901  088800d50888         or byte ptr [eax - 0x77f72b00], cl
// 00880907  0000                 add byte ptr [eax], al
// 00880909  0102                 add dword ptr [edx], eax
// 0088090b  0002                 add byte ptr [edx], al
// 0088090d  0200                 add al, byte ptr [eax]
// library xtp-11.2.2/Source\CommandBars\XTPMouseManager.cpp (function ?DeliverMessage@CXTPMouseManager@@AAEXPAVCXTPCommandBar@@IUtagPOINT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMouseManager.cpp
