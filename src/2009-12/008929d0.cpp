// roc 2009-12 008929d0  unit: CXTPDockBar  size: 212 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008929d0
//
// 008929d0  83ec58               sub esp, 0x58
// 008929d3  56                   push esi
// 008929d4  8b742460             mov esi, dword ptr [esp + 0x60]
// 008929d8  8b06                 mov eax, dword ptr [esi]
// 008929da  8b9004020000         mov edx, dword ptr [eax + 0x204]
// 008929e0  57                   push edi
// 008929e1  6a00                 push 0
// 008929e3  6a4a                 push 0x4a
// 008929e5  8bf9                 mov edi, ecx
// 008929e7  68007d0000           push 0x7d00
// 008929ec  8d4c2414             lea ecx, [esp + 0x14]
// 008929f0  51                   push ecx
// 008929f1  8bce                 mov ecx, esi
// 008929f3  ffd2                 call edx
// 008929f5  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008929f9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008929fd  6a01                 push 1
// 008929ff  50                   push eax
// 00892a00  51                   push ecx
// 00892a01  6a00                 push 0
// 00892a03  6a00                 push 0
// 00892a05  8bce                 mov ecx, esi
// 00892a07  e82612f6ff           call 0x7f3c32
// 00892a0c  8b8e80010000         mov ecx, dword ptr [esi + 0x180]
// 00892a12  85c9                 test ecx, ecx
// 00892a14  741d                 je 0x892a33
// 00892a16  6aff                 push -1
// 00892a18  56                   push esi
// 00892a19  e8b2fbffff           call 0x8925d0
// 00892a1e  6a1f                 push 0x1f
// 00892a20  6a00                 push 0
// 00892a22  8bce                 mov ecx, esi
// 00892a24  e8271df7ff           call 0x804750
// 00892a29  81a6f0000000ffffbfff and dword ptr [esi + 0xf0], 0xffbfffff
// 00892a33  8b542468             mov edx, dword ptr [esp + 0x68]
// 00892a37  52                   push edx
// 00892a38  6a00                 push 0
// 00892a3a  6a00                 push 0
// 00892a3c  56                   push esi
// 00892a3d  8bcf                 mov ecx, edi
// 00892a3f  e868420900           call 0x926cac
// 00892a44  85c0                 test eax, eax
// 00892a46  7508                 jne 0x892a50
// 00892a48  5f                   pop edi
// 00892a49  5e                   pop esi
// 00892a4a  83c458               add esp, 0x58
// 00892a4d  c20800               ret 8
// 00892a50  8b07                 mov eax, dword ptr [edi]
// 00892a52  8b9020010000         mov edx, dword ptr [eax + 0x120]
// 00892a58  8bb6d8000000         mov esi, dword ptr [esi + 0xd8]
// 00892a5e  6a00                 push 0
// 00892a60  6a00                 push 0
// 00892a62  680c040000           push 0x40c
// 00892a67  8bcf                 mov ecx, edi
// 00892a69  ffd2                 call edx
// 00892a6b  8b17                 mov edx, dword ptr [edi]
// 00892a6d  8b9220010000         mov edx, dword ptr [edx + 0x120]
// 00892a73  8d4c2410             lea ecx, [esp + 0x10]
// 00892a77  51                   push ecx
// 00892a78  48                   dec eax
// 00892a79  50                   push eax
// 00892a7a  6806040000           push 0x406
// 00892a7f  8bcf                 mov ecx, edi
// 00892a81  c744241c50000000     mov dword ptr [esp + 0x1c], 0x50
// 00892a89  c744242000010000     mov dword ptr [esp + 0x20], 0x100
// 00892a91  89742450             mov dword ptr [esp + 0x50], esi
// 00892a95  ffd2                 call edx
// 00892a97  5f                   pop edi
// 00892a98  b801000000           mov eax, 1
// 00892a9d  5e                   pop esi
// 00892a9e  83c458               add esp, 0x58
// 00892aa1  c20800               ret 8
// copied from an identical function in another client (function ?AddToolBar@CXTPReBar@@QAEHPAVCXTPToolBar@@K@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPReBar.cpp