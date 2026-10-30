// roc 2009-12 00816b10  unit: MyXTPCommandBars  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00816b10
//
// 00816b10  56                   push esi
// 00816b11  8b742408             mov esi, dword ptr [esp + 8]
// 00816b15  57                   push edi
// 00816b16  8bf9                 mov edi, ecx
// 00816b18  85f6                 test esi, esi
// 00816b1a  7475                 je 0x816b91
// 00816b1c  53                   push ebx
// 00816b1d  56                   push esi
// 00816b1e  e8dde4ffff           call 0x815000
// 00816b23  8bd8                 mov ebx, eax
// 00816b25  83fbff               cmp ebx, -1
// 00816b28  7466                 je 0x816b90
// 00816b2a  837e2000             cmp dword ptr [esi + 0x20], 0
// 00816b2e  7409                 je 0x816b39
// 00816b30  6a00                 push 0
// 00816b32  8bce                 mov ecx, esi
// 00816b34  e80fd0fdff           call 0x7f3b48
// 00816b39  8b8e80010000         mov ecx, dword ptr [esi + 0x180]
// 00816b3f  c786dc00000000000000 mov dword ptr [esi + 0xdc], 0
// 00816b49  85c9                 test ecx, ecx
// 00816b4b  741b                 je 0x816b68
// 00816b4d  6aff                 push -1
// 00816b4f  56                   push esi
// 00816b50  e87bba0700           call 0x8925d0
// 00816b55  6a00                 push 0
// 00816b57  8bcf                 mov ecx, edi
// 00816b59  c7868001000000000000 mov dword ptr [esi + 0x180], 0
// 00816b63  e838deffff           call 0x8149a0
// 00816b68  8b07                 mov eax, dword ptr [edi]
// 00816b6a  8b507c               mov edx, dword ptr [eax + 0x7c]
// 00816b6d  56                   push esi
// 00816b6e  8bcf                 mov ecx, edi
// 00816b70  ffd2                 call edx
// 00816b72  8b06                 mov eax, dword ptr [esi]
// 00816b74  8b90f0010000         mov edx, dword ptr [eax + 0x1f0]
// 00816b7a  8bce                 mov ecx, esi
// 00816b7c  ffd2                 call edx
// 00816b7e  6a01                 push 1
// 00816b80  53                   push ebx
// 00816b81  8d4f7c               lea ecx, [edi + 0x7c]
// 00816b84  e8f7660100           call 0x82d280
// 00816b89  8bce                 mov ecx, esi
// 00816b8b  e84cd2fdff           call 0x7f3ddc
// 00816b90  5b                   pop ebx
// 00816b91  5f                   pop edi
// 00816b92  5e                   pop esi
// 00816b93  c20400               ret 4
// copied from an identical function in another client (function ?Remove@CXTPCommandBars@@QAEXPAVCXTPToolBar@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBars.cpp