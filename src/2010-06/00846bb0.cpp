// roc 2010-06 00846bb0  unit: CXTPDockBar  size: 212 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00846bb0
//
// 00846bb0  83ec58               sub esp, 0x58
// 00846bb3  56                   push esi
// 00846bb4  8b742460             mov esi, dword ptr [esp + 0x60]
// 00846bb8  8b06                 mov eax, dword ptr [esi]
// 00846bba  8b9004020000         mov edx, dword ptr [eax + 0x204]
// 00846bc0  57                   push edi
// 00846bc1  6a00                 push 0
// 00846bc3  6a4a                 push 0x4a
// 00846bc5  8bf9                 mov edi, ecx
// 00846bc7  68007d0000           push 0x7d00
// 00846bcc  8d4c2414             lea ecx, [esp + 0x14]
// 00846bd0  51                   push ecx
// 00846bd1  8bce                 mov ecx, esi
// 00846bd3  ffd2                 call edx
// 00846bd5  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00846bd9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00846bdd  6a01                 push 1
// 00846bdf  50                   push eax
// 00846be0  51                   push ecx
// 00846be1  6a00                 push 0
// 00846be3  6a00                 push 0
// 00846be5  8bce                 mov ecx, esi
// 00846be7  e88611f6ff           call 0x7a7d72
// 00846bec  8b8e80010000         mov ecx, dword ptr [esi + 0x180]
// 00846bf2  85c9                 test ecx, ecx
// 00846bf4  741d                 je 0x846c13
// 00846bf6  6aff                 push -1
// 00846bf8  56                   push esi
// 00846bf9  e8b2fbffff           call 0x8467b0
// 00846bfe  6a1f                 push 0x1f
// 00846c00  6a00                 push 0
// 00846c02  8bce                 mov ecx, esi
// 00846c04  e8471cf7ff           call 0x7b8850
// 00846c09  81a6f0000000ffffbfff and dword ptr [esi + 0xf0], 0xffbfffff
// 00846c13  8b542468             mov edx, dword ptr [esp + 0x68]
// 00846c17  52                   push edx
// 00846c18  6a00                 push 0
// 00846c1a  6a00                 push 0
// 00846c1c  56                   push esi
// 00846c1d  8bcf                 mov ecx, edi
// 00846c1f  e8ca691300           call 0x97d5ee
// 00846c24  85c0                 test eax, eax
// 00846c26  7508                 jne 0x846c30
// 00846c28  5f                   pop edi
// 00846c29  5e                   pop esi
// 00846c2a  83c458               add esp, 0x58
// 00846c2d  c20800               ret 8
// 00846c30  8b07                 mov eax, dword ptr [edi]
// 00846c32  8b9020010000         mov edx, dword ptr [eax + 0x120]
// 00846c38  8bb6d8000000         mov esi, dword ptr [esi + 0xd8]
// 00846c3e  6a00                 push 0
// 00846c40  6a00                 push 0
// 00846c42  680c040000           push 0x40c
// 00846c47  8bcf                 mov ecx, edi
// 00846c49  ffd2                 call edx
// 00846c4b  8b17                 mov edx, dword ptr [edi]
// 00846c4d  8b9220010000         mov edx, dword ptr [edx + 0x120]
// 00846c53  8d4c2410             lea ecx, [esp + 0x10]
// 00846c57  51                   push ecx
// 00846c58  48                   dec eax
// 00846c59  50                   push eax
// 00846c5a  6806040000           push 0x406
// 00846c5f  8bcf                 mov ecx, edi
// 00846c61  c744241c50000000     mov dword ptr [esp + 0x1c], 0x50
// 00846c69  c744242000010000     mov dword ptr [esp + 0x20], 0x100
// 00846c71  89742450             mov dword ptr [esp + 0x50], esi
// 00846c75  ffd2                 call edx
// 00846c77  5f                   pop edi
// 00846c78  b801000000           mov eax, 1
// 00846c7d  5e                   pop esi
// 00846c7e  83c458               add esp, 0x58
// 00846c81  c20800               ret 8
// copied from an identical function in another client (function ?AddToolBar@CXTPReBar@@QAEHPAVCXTPToolBar@@K@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPReBar.cpp