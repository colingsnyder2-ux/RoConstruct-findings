// roc 2012-06 00a1c190  unit: CXTPDockBar  size: 212 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1c190
//
// 00a1c190  83ec58               sub esp, 0x58
// 00a1c193  56                   push esi
// 00a1c194  8b742460             mov esi, dword ptr [esp + 0x60]
// 00a1c198  8b06                 mov eax, dword ptr [esi]
// 00a1c19a  8b9004020000         mov edx, dword ptr [eax + 0x204]
// 00a1c1a0  57                   push edi
// 00a1c1a1  6a00                 push 0
// 00a1c1a3  6a4a                 push 0x4a
// 00a1c1a5  8bf9                 mov edi, ecx
// 00a1c1a7  68007d0000           push 0x7d00
// 00a1c1ac  8d4c2414             lea ecx, [esp + 0x14]
// 00a1c1b0  51                   push ecx
// 00a1c1b1  8bce                 mov ecx, esi
// 00a1c1b3  ffd2                 call edx
// 00a1c1b5  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a1c1b9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00a1c1bd  6a01                 push 1
// 00a1c1bf  50                   push eax
// 00a1c1c0  51                   push ecx
// 00a1c1c1  6a00                 push 0
// 00a1c1c3  6a00                 push 0
// 00a1c1c5  8bce                 mov ecx, esi
// 00a1c1c7  e80e63f6ff           call 0x9824da
// 00a1c1cc  8b8e80010000         mov ecx, dword ptr [esi + 0x180]
// 00a1c1d2  85c9                 test ecx, ecx
// 00a1c1d4  741d                 je 0xa1c1f3
// 00a1c1d6  6aff                 push -1
// 00a1c1d8  56                   push esi
// 00a1c1d9  e8b2fbffff           call 0xa1bd90
// 00a1c1de  6a1f                 push 0x1f
// 00a1c1e0  6a00                 push 0
// 00a1c1e2  8bce                 mov ecx, esi
// 00a1c1e4  e8876df7ff           call 0x992f70
// 00a1c1e9  81a6f0000000ffffbfff and dword ptr [esi + 0xf0], 0xffbfffff
// 00a1c1f3  8b542468             mov edx, dword ptr [esp + 0x68]
// 00a1c1f7  52                   push edx
// 00a1c1f8  6a00                 push 0
// 00a1c1fa  6a00                 push 0
// 00a1c1fc  56                   push esi
// 00a1c1fd  8bcf                 mov ecx, edi
// 00a1c1ff  e8dcda0700           call 0xa99ce0
// 00a1c204  85c0                 test eax, eax
// 00a1c206  7508                 jne 0xa1c210
// 00a1c208  5f                   pop edi
// 00a1c209  5e                   pop esi
// 00a1c20a  83c458               add esp, 0x58
// 00a1c20d  c20800               ret 8
// 00a1c210  8b07                 mov eax, dword ptr [edi]
// 00a1c212  8b9020010000         mov edx, dword ptr [eax + 0x120]
// 00a1c218  8bb6d8000000         mov esi, dword ptr [esi + 0xd8]
// 00a1c21e  6a00                 push 0
// 00a1c220  6a00                 push 0
// 00a1c222  680c040000           push 0x40c
// 00a1c227  8bcf                 mov ecx, edi
// 00a1c229  ffd2                 call edx
// 00a1c22b  8b17                 mov edx, dword ptr [edi]
// 00a1c22d  8b9220010000         mov edx, dword ptr [edx + 0x120]
// 00a1c233  8d4c2410             lea ecx, [esp + 0x10]
// 00a1c237  51                   push ecx
// 00a1c238  48                   dec eax
// 00a1c239  50                   push eax
// 00a1c23a  6806040000           push 0x406
// 00a1c23f  8bcf                 mov ecx, edi
// 00a1c241  c744241c50000000     mov dword ptr [esp + 0x1c], 0x50
// 00a1c249  c744242000010000     mov dword ptr [esp + 0x20], 0x100
// 00a1c251  89742450             mov dword ptr [esp + 0x50], esi
// 00a1c255  ffd2                 call edx
// 00a1c257  5f                   pop edi
// 00a1c258  b801000000           mov eax, 1
// 00a1c25d  5e                   pop esi
// 00a1c25e  83c458               add esp, 0x58
// 00a1c261  c20800               ret 8
// copied from an identical function in another client (function ?AddToolBar@CXTPReBar@@QAEHPAVCXTPToolBar@@K@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPReBar.cpp