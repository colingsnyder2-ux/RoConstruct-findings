// roc 2010-06 007fda50  unit: CXTPControlSelector  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007fda50
//
// 007fda50  8b542404             mov edx, dword ptr [esp + 4]
// 007fda54  56                   push esi
// 007fda55  8bf1                 mov esi, ecx
// 007fda57  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 007fda5d  8b8e88010000         mov ecx, dword ptr [esi + 0x188]
// 007fda63  3bd0                 cmp edx, eax
// 007fda65  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007fda69  750b                 jne 0x7fda76
// 007fda6b  3bc1                 cmp eax, ecx
// 007fda6d  7507                 jne 0x7fda76
// 007fda6f  837c241000           cmp dword ptr [esp + 0x10], 0
// 007fda74  7421                 je 0x7fda97
// 007fda76  6a01                 push 1
// 007fda78  8bce                 mov ecx, esi
// 007fda7a  899684010000         mov dword ptr [esi + 0x184], edx
// 007fda80  898688010000         mov dword ptr [esi + 0x188], eax
// 007fda86  e815cdfaff           call 0x7aa7a0
// 007fda8b  6806100000           push 0x1006
// 007fda90  8bce                 mov ecx, esi
// 007fda92  e8d9ecfaff           call 0x7ac770
// 007fda97  5e                   pop esi
// 007fda98  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ?SetItemsActive@CXTPControlSelector@@IAEXVCSize@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp
