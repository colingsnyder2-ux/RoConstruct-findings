// roc 2009-12 00816c10  unit: MyXTPCommandBars  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00816c10
//
// 00816c10  56                   push esi
// 00816c11  8b742408             mov esi, dword ptr [esp + 8]
// 00816c15  57                   push edi
// 00816c16  8bf9                 mov edi, ecx
// 00816c18  85f6                 test esi, esi
// 00816c1a  7507                 jne 0x816c23
// 00816c1c  5f                   pop edi
// 00816c1d  33c0                 xor eax, eax
// 00816c1f  5e                   pop esi
// 00816c20  c20800               ret 8
// 00816c23  53                   push ebx
// 00816c24  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00816c28  85db                 test ebx, ebx
// 00816c2a  7431                 je 0x816c5d
// 00816c2c  83bf8400000002       cmp dword ptr [edi + 0x84], 2
// 00816c33  0f8c88000000         jl 0x816cc1
// 00816c39  56                   push esi
// 00816c3a  e8c1e3ffff           call 0x815000
// 00816c3f  8bf0                 mov esi, eax
// 00816c41  53                   push ebx
// 00816c42  56                   push esi
// 00816c43  8bcf                 mov ecx, edi
// 00816c45  e8f6e3ffff           call 0x815040
// 00816c4a  3bf0                 cmp esi, eax
// 00816c4c  7473                 je 0x816cc1
// 00816c4e  83f8ff               cmp eax, -1
// 00816c51  746e                 je 0x816cc1
// 00816c53  50                   push eax
// 00816c54  8bcf                 mov ecx, edi
// 00816c56  e885e0ffff           call 0x814ce0
// 00816c5b  8bf0                 mov esi, eax
// 00816c5d  8bcf                 mov ecx, edi
// 00816c5f  e87cf2ffff           call 0x815ee0
// 00816c64  6a01                 push 1
// 00816c66  8bcf                 mov ecx, edi
// 00816c68  e8d3eeffff           call 0x815b40
// 00816c6d  6a01                 push 1
// 00816c6f  c7474401000000       mov dword ptr [edi + 0x44], 1
// 00816c76  8b06                 mov eax, dword ptr [esi]
// 00816c78  8b9048010000         mov edx, dword ptr [eax + 0x148]
// 00816c7e  6a00                 push 0
// 00816c80  6a01                 push 1
// 00816c82  8bce                 mov ecx, esi
// 00816c84  ffd2                 call edx
// 00816c86  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 00816c8c  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00816c92  8b3e                 mov edi, dword ptr [esi]
// 00816c94  33d2                 xor edx, edx
// 00816c96  85c0                 test eax, eax
// 00816c98  6a02                 push 2
// 00816c9a  0f94c2               sete dl
// 00816c9d  6a01                 push 1
// 00816c9f  52                   push edx
// 00816ca0  6a01                 push 1
// 00816ca2  6a01                 push 1
// 00816ca4  6aff                 push -1
// 00816ca6  e825e80200           call 0x8454d0
// 00816cab  50                   push eax
// 00816cac  8b8750010000         mov eax, dword ptr [edi + 0x150]
// 00816cb2  8bce                 mov ecx, esi
// 00816cb4  ffd0                 call eax
// 00816cb6  5b                   pop ebx
// 00816cb7  5f                   pop edi
// 00816cb8  b801000000           mov eax, 1
// 00816cbd  5e                   pop esi
// 00816cbe  c20800               ret 8
// 00816cc1  5b                   pop ebx
// 00816cc2  5f                   pop edi
// 00816cc3  33c0                 xor eax, eax
// 00816cc5  5e                   pop esi
// 00816cc6  c20800               ret 8
// copied from an identical function in another client (function ?SetToolBarFocus@CXTPCommandBars@@QAEHPAVCXTPToolBar@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBars.cpp