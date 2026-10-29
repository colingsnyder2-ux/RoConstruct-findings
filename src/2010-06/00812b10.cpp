// roc 2010-06 00812b10  unit: CXTSplitterWnd  size: 507 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00812b10
//
// 00812b10  83ec10               sub esp, 0x10
// 00812b13  53                   push ebx
// 00812b14  55                   push ebp
// 00812b15  56                   push esi
// 00812b16  57                   push edi
// 00812b17  8be9                 mov ebp, ecx
// 00812b19  e872ecffff           call 0x811790
// 00812b1e  8b7814               mov edi, dword ptr [eax + 0x14]
// 00812b21  8bcd                 mov ecx, ebp
// 00812b23  e868ecffff           call 0x811790
// 00812b28  8b742424             mov esi, dword ptr [esp + 0x24]
// 00812b2c  8b5818               mov ebx, dword ptr [eax + 0x18]
// 00812b2f  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00812b33  85f6                 test esi, esi
// 00812b35  7518                 jne 0x812b4f
// 00812b37  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 00812b3a  6a41                 push 0x41
// 00812b3c  56                   push esi
// 00812b3d  50                   push eax
// 00812b3e  51                   push ecx
// 00812b3f  ff15d4b99e00         call dword ptr [0x9eb9d4]
// 00812b45  5f                   pop edi
// 00812b46  5e                   pop esi
// 00812b47  5d                   pop ebp
// 00812b48  5b                   pop ebx
// 00812b49  83c410               add esp, 0x10
// 00812b4c  c20c00               ret 0xc
// 00812b4f  8b10                 mov edx, dword ptr [eax]
// 00812b51  8b4804               mov ecx, dword ptr [eax + 4]
// 00812b54  89542410             mov dword ptr [esp + 0x10], edx
// 00812b58  8b5008               mov edx, dword ptr [eax + 8]
// 00812b5b  8b400c               mov eax, dword ptr [eax + 0xc]
// 00812b5e  8944241c             mov dword ptr [esp + 0x1c], eax
// 00812b62  8b442428             mov eax, dword ptr [esp + 0x28]
// 00812b66  894c2414             mov dword ptr [esp + 0x14], ecx
// 00812b6a  89542418             mov dword ptr [esp + 0x18], edx
// 00812b6e  85c0                 test eax, eax
// 00812b70  0f84db000000         je 0x812c51
// 00812b76  83f803               cmp eax, 3
// 00812b79  0f8575010000         jne 0x812cf4
// 00812b7f  83bd0401000000       cmp dword ptr [ebp + 0x104], 0
// 00812b86  7478                 je 0x812c00
// 00812b88  f6850801000004       test byte ptr [ebp + 0x108], 4
// 00812b8f  57                   push edi
// 00812b90  8d4c2414             lea ecx, [esp + 0x14]
// 00812b94  57                   push edi
// 00812b95  51                   push ecx
// 00812b96  8bce                 mov ecx, esi
// 00812b98  753a                 jne 0x812bd4
// 00812b9a  e8995bf9ff           call 0x7a8738
// 00812b9f  6aff                 push -1
// 00812ba1  6aff                 push -1
// 00812ba3  8d542418             lea edx, [esp + 0x18]
// 00812ba7  52                   push edx
// 00812ba8  ff15dcbb9e00         call dword ptr [0x9ebbdc]
// 00812bae  e86d0ffdff           call 0x7e3b20
// 00812bb3  6a14                 push 0x14
// 00812bb5  8bc8                 mov ecx, eax
// 00812bb7  e8f406fdff           call 0x7e32b0
// 00812bbc  50                   push eax
// 00812bbd  53                   push ebx
// 00812bbe  8d442418             lea eax, [esp + 0x18]
// 00812bc2  50                   push eax
// 00812bc3  8bce                 mov ecx, esi
// 00812bc5  e86e5bf9ff           call 0x7a8738
// 00812bca  5f                   pop edi
// 00812bcb  5e                   pop esi
// 00812bcc  5d                   pop ebp
// 00812bcd  5b                   pop ebx
// 00812bce  83c410               add esp, 0x10
// 00812bd1  c20c00               ret 0xc
// 00812bd4  e85f5bf9ff           call 0x7a8738
// 00812bd9  6aff                 push -1
// 00812bdb  6aff                 push -1
// 00812bdd  8d542418             lea edx, [esp + 0x18]
// 00812be1  52                   push edx
// 00812be2  ff15dcbb9e00         call dword ptr [0x9ebbdc]
// 00812be8  57                   push edi
// 00812be9  57                   push edi
// 00812bea  8d442418             lea eax, [esp + 0x18]
// 00812bee  50                   push eax
// 00812bef  8bce                 mov ecx, esi
// 00812bf1  e8425bf9ff           call 0x7a8738
// 00812bf6  5f                   pop edi
// 00812bf7  5e                   pop esi
// 00812bf8  5d                   pop ebp
// 00812bf9  5b                   pop ebx
// 00812bfa  83c410               add esp, 0x10
// 00812bfd  c20c00               ret 0xc
// 00812c00  e81b0ffdff           call 0x7e3b20
// 00812c05  6a14                 push 0x14
// 00812c07  8bc8                 mov ecx, eax
// 00812c09  e8a206fdff           call 0x7e32b0
// 00812c0e  50                   push eax
// 00812c0f  53                   push ebx
// 00812c10  8d4c2418             lea ecx, [esp + 0x18]
// 00812c14  51                   push ecx
// 00812c15  8bce                 mov ecx, esi
// 00812c17  e81c5bf9ff           call 0x7a8738
// 00812c1c  6aff                 push -1
// 00812c1e  6aff                 push -1
// 00812c20  8d542418             lea edx, [esp + 0x18]
// 00812c24  52                   push edx
// 00812c25  ff15dcbb9e00         call dword ptr [0x9ebbdc]
// 00812c2b  e8f00efdff           call 0x7e3b20
// 00812c30  6a06                 push 6
// 00812c32  8bc8                 mov ecx, eax
// 00812c34  e87706fdff           call 0x7e32b0
// 00812c39  57                   push edi
// 00812c3a  50                   push eax
// 00812c3b  8d442418             lea eax, [esp + 0x18]
// 00812c3f  50                   push eax
// 00812c40  8bce                 mov ecx, esi
// 00812c42  e8f15af9ff           call 0x7a8738
// 00812c47  5f                   pop edi
// 00812c48  5e                   pop esi
// 00812c49  5d                   pop ebp
// 00812c4a  5b                   pop ebx
// 00812c4b  83c410               add esp, 0x10
// 00812c4e  c20c00               ret 0xc
// 00812c51  83bd0401000000       cmp dword ptr [ebp + 0x104], 0
// 00812c58  7446                 je 0x812ca0
// 00812c5a  57                   push edi
// 00812c5b  57                   push edi
// 00812c5c  8d4c2418             lea ecx, [esp + 0x18]
// 00812c60  51                   push ecx
// 00812c61  8bce                 mov ecx, esi
// 00812c63  e8d05af9ff           call 0x7a8738
// 00812c68  8b2ddcbb9e00         mov ebp, dword ptr [0x9ebbdc]
// 00812c6e  6aff                 push -1
// 00812c70  6aff                 push -1
// 00812c72  8d542418             lea edx, [esp + 0x18]
// 00812c76  52                   push edx
// 00812c77  ffd5                 call ebp
// 00812c79  e8a20efdff           call 0x7e3b20
// 00812c7e  6a14                 push 0x14
// 00812c80  8bc8                 mov ecx, eax
// 00812c82  e82906fdff           call 0x7e32b0
// 00812c87  53                   push ebx
// 00812c88  50                   push eax
// 00812c89  8d442418             lea eax, [esp + 0x18]
// 00812c8d  50                   push eax
// 00812c8e  8bce                 mov ecx, esi
// 00812c90  e8a35af9ff           call 0x7a8738
// 00812c95  6aff                 push -1
// 00812c97  6aff                 push -1
// 00812c99  8d4c2418             lea ecx, [esp + 0x18]
// 00812c9d  51                   push ecx
// 00812c9e  eb52                 jmp 0x812cf2
// 00812ca0  e87b0efdff           call 0x7e3b20
// 00812ca5  6a06                 push 6
// 00812ca7  8bc8                 mov ecx, eax
// 00812ca9  e80206fdff           call 0x7e32b0
// 00812cae  50                   push eax
// 00812caf  57                   push edi
// 00812cb0  8d542418             lea edx, [esp + 0x18]
// 00812cb4  52                   push edx
// 00812cb5  8bce                 mov ecx, esi
// 00812cb7  e87c5af9ff           call 0x7a8738
// 00812cbc  8b2ddcbb9e00         mov ebp, dword ptr [0x9ebbdc]
// 00812cc2  6aff                 push -1
// 00812cc4  6aff                 push -1
// 00812cc6  8d442418             lea eax, [esp + 0x18]
// 00812cca  50                   push eax
// 00812ccb  ffd5                 call ebp
// 00812ccd  e84e0efdff           call 0x7e3b20
// 00812cd2  6a14                 push 0x14
// 00812cd4  8bc8                 mov ecx, eax
// 00812cd6  e8d505fdff           call 0x7e32b0
// 00812cdb  53                   push ebx
// 00812cdc  50                   push eax
// 00812cdd  8d4c2418             lea ecx, [esp + 0x18]
// 00812ce1  51                   push ecx
// 00812ce2  8bce                 mov ecx, esi
// 00812ce4  e84f5af9ff           call 0x7a8738
// 00812ce9  6aff                 push -1
// 00812ceb  6aff                 push -1
// 00812ced  8d542418             lea edx, [esp + 0x18]
// 00812cf1  52                   push edx
// 00812cf2  ffd5                 call ebp
// 00812cf4  57                   push edi
// 00812cf5  8d442414             lea eax, [esp + 0x14]
// 00812cf9  50                   push eax
// 00812cfa  8bce                 mov ecx, esi
// 00812cfc  e83d5af9ff           call 0x7a873e
// 00812d01  5f                   pop edi
// 00812d02  5e                   pop esi
// 00812d03  5d                   pop ebp
// 00812d04  5b                   pop ebx
// 00812d05  83c410               add esp, 0x10
// 00812d08  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnDrawSplitter@CXTSplitterWnd@@MAEXPAVCDC@@W4ESplitType@CSplitterWnd@@ABVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1