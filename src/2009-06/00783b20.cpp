// roc 2009-06 00783b20  unit: CXTSplitterWnd  size: 507 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00783b20
//
// 00783b20  83ec10               sub esp, 0x10
// 00783b23  53                   push ebx
// 00783b24  55                   push ebp
// 00783b25  56                   push esi
// 00783b26  57                   push edi
// 00783b27  8be9                 mov ebp, ecx
// 00783b29  e882ecffff           call 0x7827b0
// 00783b2e  8b7814               mov edi, dword ptr [eax + 0x14]
// 00783b31  8bcd                 mov ecx, ebp
// 00783b33  e878ecffff           call 0x7827b0
// 00783b38  8b742424             mov esi, dword ptr [esp + 0x24]
// 00783b3c  8b5818               mov ebx, dword ptr [eax + 0x18]
// 00783b3f  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00783b43  85f6                 test esi, esi
// 00783b45  7518                 jne 0x783b5f
// 00783b47  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 00783b4a  6a41                 push 0x41
// 00783b4c  56                   push esi
// 00783b4d  50                   push eax
// 00783b4e  51                   push ecx
// 00783b4f  ff15e8ee8900         call dword ptr [0x89eee8]
// 00783b55  5f                   pop edi
// 00783b56  5e                   pop esi
// 00783b57  5d                   pop ebp
// 00783b58  5b                   pop ebx
// 00783b59  83c410               add esp, 0x10
// 00783b5c  c20c00               ret 0xc
// 00783b5f  8b10                 mov edx, dword ptr [eax]
// 00783b61  8b4804               mov ecx, dword ptr [eax + 4]
// 00783b64  89542410             mov dword ptr [esp + 0x10], edx
// 00783b68  8b5008               mov edx, dword ptr [eax + 8]
// 00783b6b  8b400c               mov eax, dword ptr [eax + 0xc]
// 00783b6e  8944241c             mov dword ptr [esp + 0x1c], eax
// 00783b72  8b442428             mov eax, dword ptr [esp + 0x28]
// 00783b76  894c2414             mov dword ptr [esp + 0x14], ecx
// 00783b7a  89542418             mov dword ptr [esp + 0x18], edx
// 00783b7e  85c0                 test eax, eax
// 00783b80  0f84db000000         je 0x783c61
// 00783b86  83f803               cmp eax, 3
// 00783b89  0f8575010000         jne 0x783d04
// 00783b8f  83bd0401000000       cmp dword ptr [ebp + 0x104], 0
// 00783b96  7478                 je 0x783c10
// 00783b98  f6850801000004       test byte ptr [ebp + 0x108], 4
// 00783b9f  57                   push edi
// 00783ba0  8d4c2414             lea ecx, [esp + 0x14]
// 00783ba4  57                   push edi
// 00783ba5  51                   push ecx
// 00783ba6  8bce                 mov ecx, esi
// 00783ba8  753a                 jne 0x783be4
// 00783baa  e81b5cf9ff           call 0x7197ca
// 00783baf  6aff                 push -1
// 00783bb1  6aff                 push -1
// 00783bb3  8d542418             lea edx, [esp + 0x18]
// 00783bb7  52                   push edx
// 00783bb8  ff15bced8900         call dword ptr [0x89edbc]
// 00783bbe  e85d0ffdff           call 0x754b20
// 00783bc3  6a14                 push 0x14
// 00783bc5  8bc8                 mov ecx, eax
// 00783bc7  e8d406fdff           call 0x7542a0
// 00783bcc  50                   push eax
// 00783bcd  53                   push ebx
// 00783bce  8d442418             lea eax, [esp + 0x18]
// 00783bd2  50                   push eax
// 00783bd3  8bce                 mov ecx, esi
// 00783bd5  e8f05bf9ff           call 0x7197ca
// 00783bda  5f                   pop edi
// 00783bdb  5e                   pop esi
// 00783bdc  5d                   pop ebp
// 00783bdd  5b                   pop ebx
// 00783bde  83c410               add esp, 0x10
// 00783be1  c20c00               ret 0xc
// 00783be4  e8e15bf9ff           call 0x7197ca
// 00783be9  6aff                 push -1
// 00783beb  6aff                 push -1
// 00783bed  8d542418             lea edx, [esp + 0x18]
// 00783bf1  52                   push edx
// 00783bf2  ff15bced8900         call dword ptr [0x89edbc]
// 00783bf8  57                   push edi
// 00783bf9  57                   push edi
// 00783bfa  8d442418             lea eax, [esp + 0x18]
// 00783bfe  50                   push eax
// 00783bff  8bce                 mov ecx, esi
// 00783c01  e8c45bf9ff           call 0x7197ca
// 00783c06  5f                   pop edi
// 00783c07  5e                   pop esi
// 00783c08  5d                   pop ebp
// 00783c09  5b                   pop ebx
// 00783c0a  83c410               add esp, 0x10
// 00783c0d  c20c00               ret 0xc
// 00783c10  e80b0ffdff           call 0x754b20
// 00783c15  6a14                 push 0x14
// 00783c17  8bc8                 mov ecx, eax
// 00783c19  e88206fdff           call 0x7542a0
// 00783c1e  50                   push eax
// 00783c1f  53                   push ebx
// 00783c20  8d4c2418             lea ecx, [esp + 0x18]
// 00783c24  51                   push ecx
// 00783c25  8bce                 mov ecx, esi
// 00783c27  e89e5bf9ff           call 0x7197ca
// 00783c2c  6aff                 push -1
// 00783c2e  6aff                 push -1
// 00783c30  8d542418             lea edx, [esp + 0x18]
// 00783c34  52                   push edx
// 00783c35  ff15bced8900         call dword ptr [0x89edbc]
// 00783c3b  e8e00efdff           call 0x754b20
// 00783c40  6a06                 push 6
// 00783c42  8bc8                 mov ecx, eax
// 00783c44  e85706fdff           call 0x7542a0
// 00783c49  57                   push edi
// 00783c4a  50                   push eax
// 00783c4b  8d442418             lea eax, [esp + 0x18]
// 00783c4f  50                   push eax
// 00783c50  8bce                 mov ecx, esi
// 00783c52  e8735bf9ff           call 0x7197ca
// 00783c57  5f                   pop edi
// 00783c58  5e                   pop esi
// 00783c59  5d                   pop ebp
// 00783c5a  5b                   pop ebx
// 00783c5b  83c410               add esp, 0x10
// 00783c5e  c20c00               ret 0xc
// 00783c61  83bd0401000000       cmp dword ptr [ebp + 0x104], 0
// 00783c68  7446                 je 0x783cb0
// 00783c6a  57                   push edi
// 00783c6b  57                   push edi
// 00783c6c  8d4c2418             lea ecx, [esp + 0x18]
// 00783c70  51                   push ecx
// 00783c71  8bce                 mov ecx, esi
// 00783c73  e8525bf9ff           call 0x7197ca
// 00783c78  8b2dbced8900         mov ebp, dword ptr [0x89edbc]
// 00783c7e  6aff                 push -1
// 00783c80  6aff                 push -1
// 00783c82  8d542418             lea edx, [esp + 0x18]
// 00783c86  52                   push edx
// 00783c87  ffd5                 call ebp
// 00783c89  e8920efdff           call 0x754b20
// 00783c8e  6a14                 push 0x14
// 00783c90  8bc8                 mov ecx, eax
// 00783c92  e80906fdff           call 0x7542a0
// 00783c97  53                   push ebx
// 00783c98  50                   push eax
// 00783c99  8d442418             lea eax, [esp + 0x18]
// 00783c9d  50                   push eax
// 00783c9e  8bce                 mov ecx, esi
// 00783ca0  e8255bf9ff           call 0x7197ca
// 00783ca5  6aff                 push -1
// 00783ca7  6aff                 push -1
// 00783ca9  8d4c2418             lea ecx, [esp + 0x18]
// 00783cad  51                   push ecx
// 00783cae  eb52                 jmp 0x783d02
// 00783cb0  e86b0efdff           call 0x754b20
// 00783cb5  6a06                 push 6
// 00783cb7  8bc8                 mov ecx, eax
// 00783cb9  e8e205fdff           call 0x7542a0
// 00783cbe  50                   push eax
// 00783cbf  57                   push edi
// 00783cc0  8d542418             lea edx, [esp + 0x18]
// 00783cc4  52                   push edx
// 00783cc5  8bce                 mov ecx, esi
// 00783cc7  e8fe5af9ff           call 0x7197ca
// 00783ccc  8b2dbced8900         mov ebp, dword ptr [0x89edbc]
// 00783cd2  6aff                 push -1
// 00783cd4  6aff                 push -1
// 00783cd6  8d442418             lea eax, [esp + 0x18]
// 00783cda  50                   push eax
// 00783cdb  ffd5                 call ebp
// 00783cdd  e83e0efdff           call 0x754b20
// 00783ce2  6a14                 push 0x14
// 00783ce4  8bc8                 mov ecx, eax
// 00783ce6  e8b505fdff           call 0x7542a0
// 00783ceb  53                   push ebx
// 00783cec  50                   push eax
// 00783ced  8d4c2418             lea ecx, [esp + 0x18]
// 00783cf1  51                   push ecx
// 00783cf2  8bce                 mov ecx, esi
// 00783cf4  e8d15af9ff           call 0x7197ca
// 00783cf9  6aff                 push -1
// 00783cfb  6aff                 push -1
// 00783cfd  8d542418             lea edx, [esp + 0x18]
// 00783d01  52                   push edx
// 00783d02  ffd5                 call ebp
// 00783d04  57                   push edi
// 00783d05  8d442414             lea eax, [esp + 0x14]
// 00783d09  50                   push eax
// 00783d0a  8bce                 mov ecx, esi
// 00783d0c  e8bf5af9ff           call 0x7197d0
// 00783d11  5f                   pop edi
// 00783d12  5e                   pop esi
// 00783d13  5d                   pop ebp
// 00783d14  5b                   pop ebx
// 00783d15  83c410               add esp, 0x10
// 00783d18  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnDrawSplitter@CXTSplitterWnd@@MAEXPAVCDC@@W4ESplitType@CSplitterWnd@@ABVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1