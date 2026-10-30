// roc 2009-06 007b3ff0  unit: CXTPDockBar  size: 212 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b3ff0
//
// 007b3ff0  83ec58               sub esp, 0x58
// 007b3ff3  56                   push esi
// 007b3ff4  8b742460             mov esi, dword ptr [esp + 0x60]
// 007b3ff8  8b06                 mov eax, dword ptr [esi]
// 007b3ffa  8b9004020000         mov edx, dword ptr [eax + 0x204]
// 007b4000  57                   push edi
// 007b4001  6a00                 push 0
// 007b4003  6a4a                 push 0x4a
// 007b4005  8bf9                 mov edi, ecx
// 007b4007  68007d0000           push 0x7d00
// 007b400c  8d4c2414             lea ecx, [esp + 0x14]
// 007b4010  51                   push ecx
// 007b4011  8bce                 mov ecx, esi
// 007b4013  ffd2                 call edx
// 007b4015  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007b4019  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007b401d  6a01                 push 1
// 007b401f  50                   push eax
// 007b4020  51                   push ecx
// 007b4021  6a00                 push 0
// 007b4023  6a00                 push 0
// 007b4025  8bce                 mov ecx, esi
// 007b4027  e8de4df6ff           call 0x718e0a
// 007b402c  8b8e80010000         mov ecx, dword ptr [esi + 0x180]
// 007b4032  85c9                 test ecx, ecx
// 007b4034  741d                 je 0x7b4053
// 007b4036  6aff                 push -1
// 007b4038  56                   push esi
// 007b4039  e8b2fbffff           call 0x7b3bf0
// 007b403e  6a1f                 push 0x1f
// 007b4040  6a00                 push 0
// 007b4042  8bce                 mov ecx, esi
// 007b4044  e8c795f7ff           call 0x72d610
// 007b4049  81a6f0000000ffffbfff and dword ptr [esi + 0xf0], 0xffbfffff
// 007b4053  8b542468             mov edx, dword ptr [esp + 0x68]
// 007b4057  52                   push edx
// 007b4058  6a00                 push 0
// 007b405a  6a00                 push 0
// 007b405c  56                   push esi
// 007b405d  8bcf                 mov ecx, edi
// 007b405f  e8d6860900           call 0x84c73a
// 007b4064  85c0                 test eax, eax
// 007b4066  7508                 jne 0x7b4070
// 007b4068  5f                   pop edi
// 007b4069  5e                   pop esi
// 007b406a  83c458               add esp, 0x58
// 007b406d  c20800               ret 8
// 007b4070  8b07                 mov eax, dword ptr [edi]
// 007b4072  8b9020010000         mov edx, dword ptr [eax + 0x120]
// 007b4078  8bb6d8000000         mov esi, dword ptr [esi + 0xd8]
// 007b407e  6a00                 push 0
// 007b4080  6a00                 push 0
// 007b4082  680c040000           push 0x40c
// 007b4087  8bcf                 mov ecx, edi
// 007b4089  ffd2                 call edx
// 007b408b  8b17                 mov edx, dword ptr [edi]
// 007b408d  8b9220010000         mov edx, dword ptr [edx + 0x120]
// 007b4093  8d4c2410             lea ecx, [esp + 0x10]
// 007b4097  51                   push ecx
// 007b4098  48                   dec eax
// 007b4099  50                   push eax
// 007b409a  6806040000           push 0x406
// 007b409f  8bcf                 mov ecx, edi
// 007b40a1  c744241c50000000     mov dword ptr [esp + 0x1c], 0x50
// 007b40a9  c744242000010000     mov dword ptr [esp + 0x20], 0x100
// 007b40b1  89742450             mov dword ptr [esp + 0x50], esi
// 007b40b5  ffd2                 call edx
// 007b40b7  5f                   pop edi
// 007b40b8  b801000000           mov eax, 1
// 007b40bd  5e                   pop esi
// 007b40be  83c458               add esp, 0x58
// 007b40c1  c20800               ret 8
// copied from an identical function in another client (function ?AddToolBar@CXTPReBar@@QAEHPAVCXTPToolBar@@K@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPReBar.cpp