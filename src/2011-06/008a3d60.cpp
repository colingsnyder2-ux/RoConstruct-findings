// roc 2011-06 008a3d60  unit: CXTPDockBar  size: 212 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a3d60
//
// 008a3d60  83ec58               sub esp, 0x58
// 008a3d63  56                   push esi
// 008a3d64  8b742460             mov esi, dword ptr [esp + 0x60]
// 008a3d68  8b06                 mov eax, dword ptr [esi]
// 008a3d6a  8b9004020000         mov edx, dword ptr [eax + 0x204]
// 008a3d70  57                   push edi
// 008a3d71  6a00                 push 0
// 008a3d73  6a4a                 push 0x4a
// 008a3d75  8bf9                 mov edi, ecx
// 008a3d77  68007d0000           push 0x7d00
// 008a3d7c  8d4c2414             lea ecx, [esp + 0x14]
// 008a3d80  51                   push ecx
// 008a3d81  8bce                 mov ecx, esi
// 008a3d83  ffd2                 call edx
// 008a3d85  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008a3d89  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008a3d8d  6a01                 push 1
// 008a3d8f  50                   push eax
// 008a3d90  51                   push ecx
// 008a3d91  6a00                 push 0
// 008a3d93  6a00                 push 0
// 008a3d95  8bce                 mov ecx, esi
// 008a3d97  e89466f6ff           call 0x80a430
// 008a3d9c  8b8e80010000         mov ecx, dword ptr [esi + 0x180]
// 008a3da2  85c9                 test ecx, ecx
// 008a3da4  741d                 je 0x8a3dc3
// 008a3da6  6aff                 push -1
// 008a3da8  56                   push esi
// 008a3da9  e8b2fbffff           call 0x8a3960
// 008a3dae  6a1f                 push 0x1f
// 008a3db0  6a00                 push 0
// 008a3db2  8bce                 mov ecx, esi
// 008a3db4  e8576ff7ff           call 0x81ad10
// 008a3db9  81a6f0000000ffffbfff and dword ptr [esi + 0xf0], 0xffbfffff
// 008a3dc3  8b542468             mov edx, dword ptr [esp + 0x68]
// 008a3dc7  52                   push edx
// 008a3dc8  6a00                 push 0
// 008a3dca  6a00                 push 0
// 008a3dcc  56                   push esi
// 008a3dcd  8bcf                 mov ecx, edi
// 008a3dcf  e85e8f1200           call 0x9ccd32
// 008a3dd4  85c0                 test eax, eax
// 008a3dd6  7508                 jne 0x8a3de0
// 008a3dd8  5f                   pop edi
// 008a3dd9  5e                   pop esi
// 008a3dda  83c458               add esp, 0x58
// 008a3ddd  c20800               ret 8
// 008a3de0  8b07                 mov eax, dword ptr [edi]
// 008a3de2  8b9020010000         mov edx, dword ptr [eax + 0x120]
// 008a3de8  8bb6d8000000         mov esi, dword ptr [esi + 0xd8]
// 008a3dee  6a00                 push 0
// 008a3df0  6a00                 push 0
// 008a3df2  680c040000           push 0x40c
// 008a3df7  8bcf                 mov ecx, edi
// 008a3df9  ffd2                 call edx
// 008a3dfb  8b17                 mov edx, dword ptr [edi]
// 008a3dfd  8b9220010000         mov edx, dword ptr [edx + 0x120]
// 008a3e03  8d4c2410             lea ecx, [esp + 0x10]
// 008a3e07  51                   push ecx
// 008a3e08  48                   dec eax
// 008a3e09  50                   push eax
// 008a3e0a  6806040000           push 0x406
// 008a3e0f  8bcf                 mov ecx, edi
// 008a3e11  c744241c50000000     mov dword ptr [esp + 0x1c], 0x50
// 008a3e19  c744242000010000     mov dword ptr [esp + 0x20], 0x100
// 008a3e21  89742450             mov dword ptr [esp + 0x50], esi
// 008a3e25  ffd2                 call edx
// 008a3e27  5f                   pop edi
// 008a3e28  b801000000           mov eax, 1
// 008a3e2d  5e                   pop esi
// 008a3e2e  83c458               add esp, 0x58
// 008a3e31  c20800               ret 8
// copied from an identical function in another client (function ?AddToolBar@CXTPReBar@@QAEHPAVCXTPToolBar@@K@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPReBar.cpp