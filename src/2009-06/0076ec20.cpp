// roc 2009-06 0076ec20  unit: CXTPControlSelector  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0076ec20
//
// 0076ec20  8b542404             mov edx, dword ptr [esp + 4]
// 0076ec24  56                   push esi
// 0076ec25  8bf1                 mov esi, ecx
// 0076ec27  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 0076ec2d  8b8e88010000         mov ecx, dword ptr [esi + 0x188]
// 0076ec33  3bd0                 cmp edx, eax
// 0076ec35  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0076ec39  750b                 jne 0x76ec46
// 0076ec3b  3bc1                 cmp eax, ecx
// 0076ec3d  7507                 jne 0x76ec46
// 0076ec3f  837c241000           cmp dword ptr [esp + 0x10], 0
// 0076ec44  7421                 je 0x76ec67
// 0076ec46  6a01                 push 1
// 0076ec48  8bce                 mov ecx, esi
// 0076ec4a  899684010000         mov dword ptr [esi + 0x184], edx
// 0076ec50  898688010000         mov dword ptr [esi + 0x188], eax
// 0076ec56  e85513fbff           call 0x71ffb0
// 0076ec5b  6806100000           push 0x1006
// 0076ec60  8bce                 mov ecx, esi
// 0076ec62  e8e931fbff           call 0x721e50
// 0076ec67  5e                   pop esi
// 0076ec68  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ?SetItemsActive@CXTPControlSelector@@IAEXVCSize@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp
