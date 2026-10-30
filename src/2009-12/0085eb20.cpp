// roc 2009-12 0085eb20  unit: CXTSplitterWnd  size: 507 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085eb20
//
// 0085eb20  83ec10               sub esp, 0x10
// 0085eb23  53                   push ebx
// 0085eb24  55                   push ebp
// 0085eb25  56                   push esi
// 0085eb26  57                   push edi
// 0085eb27  8be9                 mov ebp, ecx
// 0085eb29  e882ecffff           call 0x85d7b0
// 0085eb2e  8b7814               mov edi, dword ptr [eax + 0x14]
// 0085eb31  8bcd                 mov ecx, ebp
// 0085eb33  e878ecffff           call 0x85d7b0
// 0085eb38  8b742424             mov esi, dword ptr [esp + 0x24]
// 0085eb3c  8b5818               mov ebx, dword ptr [eax + 0x18]
// 0085eb3f  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0085eb43  85f6                 test esi, esi
// 0085eb45  7518                 jne 0x85eb5f
// 0085eb47  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 0085eb4a  6a41                 push 0x41
// 0085eb4c  56                   push esi
// 0085eb4d  50                   push eax
// 0085eb4e  51                   push ecx
// 0085eb4f  ff151ccb9800         call dword ptr [0x98cb1c]
// 0085eb55  5f                   pop edi
// 0085eb56  5e                   pop esi
// 0085eb57  5d                   pop ebp
// 0085eb58  5b                   pop ebx
// 0085eb59  83c410               add esp, 0x10
// 0085eb5c  c20c00               ret 0xc
// 0085eb5f  8b10                 mov edx, dword ptr [eax]
// 0085eb61  8b4804               mov ecx, dword ptr [eax + 4]
// 0085eb64  89542410             mov dword ptr [esp + 0x10], edx
// 0085eb68  8b5008               mov edx, dword ptr [eax + 8]
// 0085eb6b  8b400c               mov eax, dword ptr [eax + 0xc]
// 0085eb6e  8944241c             mov dword ptr [esp + 0x1c], eax
// 0085eb72  8b442428             mov eax, dword ptr [esp + 0x28]
// 0085eb76  894c2414             mov dword ptr [esp + 0x14], ecx
// 0085eb7a  89542418             mov dword ptr [esp + 0x18], edx
// 0085eb7e  85c0                 test eax, eax
// 0085eb80  0f84db000000         je 0x85ec61
// 0085eb86  83f803               cmp eax, 3
// 0085eb89  0f8575010000         jne 0x85ed04
// 0085eb8f  83bd0401000000       cmp dword ptr [ebp + 0x104], 0
// 0085eb96  7478                 je 0x85ec10
// 0085eb98  f6850801000004       test byte ptr [ebp + 0x108], 4
// 0085eb9f  57                   push edi
// 0085eba0  8d4c2414             lea ecx, [esp + 0x14]
// 0085eba4  57                   push edi
// 0085eba5  51                   push ecx
// 0085eba6  8bce                 mov ecx, esi
// 0085eba8  753a                 jne 0x85ebe4
// 0085ebaa  e8495af9ff           call 0x7f45f8
// 0085ebaf  6aff                 push -1
// 0085ebb1  6aff                 push -1
// 0085ebb3  8d542418             lea edx, [esp + 0x18]
// 0085ebb7  52                   push edx
// 0085ebb8  ff1558ca9800         call dword ptr [0x98ca58]
// 0085ebbe  e80d0efdff           call 0x82f9d0
// 0085ebc3  6a14                 push 0x14
// 0085ebc5  8bc8                 mov ecx, eax
// 0085ebc7  e83405fdff           call 0x82f100
// 0085ebcc  50                   push eax
// 0085ebcd  53                   push ebx
// 0085ebce  8d442418             lea eax, [esp + 0x18]
// 0085ebd2  50                   push eax
// 0085ebd3  8bce                 mov ecx, esi
// 0085ebd5  e81e5af9ff           call 0x7f45f8
// 0085ebda  5f                   pop edi
// 0085ebdb  5e                   pop esi
// 0085ebdc  5d                   pop ebp
// 0085ebdd  5b                   pop ebx
// 0085ebde  83c410               add esp, 0x10
// 0085ebe1  c20c00               ret 0xc
// 0085ebe4  e80f5af9ff           call 0x7f45f8
// 0085ebe9  6aff                 push -1
// 0085ebeb  6aff                 push -1
// 0085ebed  8d542418             lea edx, [esp + 0x18]
// 0085ebf1  52                   push edx
// 0085ebf2  ff1558ca9800         call dword ptr [0x98ca58]
// 0085ebf8  57                   push edi
// 0085ebf9  57                   push edi
// 0085ebfa  8d442418             lea eax, [esp + 0x18]
// 0085ebfe  50                   push eax
// 0085ebff  8bce                 mov ecx, esi
// 0085ec01  e8f259f9ff           call 0x7f45f8
// 0085ec06  5f                   pop edi
// 0085ec07  5e                   pop esi
// 0085ec08  5d                   pop ebp
// 0085ec09  5b                   pop ebx
// 0085ec0a  83c410               add esp, 0x10
// 0085ec0d  c20c00               ret 0xc
// 0085ec10  e8bb0dfdff           call 0x82f9d0
// 0085ec15  6a14                 push 0x14
// 0085ec17  8bc8                 mov ecx, eax
// 0085ec19  e8e204fdff           call 0x82f100
// 0085ec1e  50                   push eax
// 0085ec1f  53                   push ebx
// 0085ec20  8d4c2418             lea ecx, [esp + 0x18]
// 0085ec24  51                   push ecx
// 0085ec25  8bce                 mov ecx, esi
// 0085ec27  e8cc59f9ff           call 0x7f45f8
// 0085ec2c  6aff                 push -1
// 0085ec2e  6aff                 push -1
// 0085ec30  8d542418             lea edx, [esp + 0x18]
// 0085ec34  52                   push edx
// 0085ec35  ff1558ca9800         call dword ptr [0x98ca58]
// 0085ec3b  e8900dfdff           call 0x82f9d0
// 0085ec40  6a06                 push 6
// 0085ec42  8bc8                 mov ecx, eax
// 0085ec44  e8b704fdff           call 0x82f100
// 0085ec49  57                   push edi
// 0085ec4a  50                   push eax
// 0085ec4b  8d442418             lea eax, [esp + 0x18]
// 0085ec4f  50                   push eax
// 0085ec50  8bce                 mov ecx, esi
// 0085ec52  e8a159f9ff           call 0x7f45f8
// 0085ec57  5f                   pop edi
// 0085ec58  5e                   pop esi
// 0085ec59  5d                   pop ebp
// 0085ec5a  5b                   pop ebx
// 0085ec5b  83c410               add esp, 0x10
// 0085ec5e  c20c00               ret 0xc
// 0085ec61  83bd0401000000       cmp dword ptr [ebp + 0x104], 0
// 0085ec68  7446                 je 0x85ecb0
// 0085ec6a  57                   push edi
// 0085ec6b  57                   push edi
// 0085ec6c  8d4c2418             lea ecx, [esp + 0x18]
// 0085ec70  51                   push ecx
// 0085ec71  8bce                 mov ecx, esi
// 0085ec73  e88059f9ff           call 0x7f45f8
// 0085ec78  8b2d58ca9800         mov ebp, dword ptr [0x98ca58]
// 0085ec7e  6aff                 push -1
// 0085ec80  6aff                 push -1
// 0085ec82  8d542418             lea edx, [esp + 0x18]
// 0085ec86  52                   push edx
// 0085ec87  ffd5                 call ebp
// 0085ec89  e8420dfdff           call 0x82f9d0
// 0085ec8e  6a14                 push 0x14
// 0085ec90  8bc8                 mov ecx, eax
// 0085ec92  e86904fdff           call 0x82f100
// 0085ec97  53                   push ebx
// 0085ec98  50                   push eax
// 0085ec99  8d442418             lea eax, [esp + 0x18]
// 0085ec9d  50                   push eax
// 0085ec9e  8bce                 mov ecx, esi
// 0085eca0  e85359f9ff           call 0x7f45f8
// 0085eca5  6aff                 push -1
// 0085eca7  6aff                 push -1
// 0085eca9  8d4c2418             lea ecx, [esp + 0x18]
// 0085ecad  51                   push ecx
// 0085ecae  eb52                 jmp 0x85ed02
// 0085ecb0  e81b0dfdff           call 0x82f9d0
// 0085ecb5  6a06                 push 6
// 0085ecb7  8bc8                 mov ecx, eax
// 0085ecb9  e84204fdff           call 0x82f100
// 0085ecbe  50                   push eax
// 0085ecbf  57                   push edi
// 0085ecc0  8d542418             lea edx, [esp + 0x18]
// 0085ecc4  52                   push edx
// 0085ecc5  8bce                 mov ecx, esi
// 0085ecc7  e82c59f9ff           call 0x7f45f8
// 0085eccc  8b2d58ca9800         mov ebp, dword ptr [0x98ca58]
// 0085ecd2  6aff                 push -1
// 0085ecd4  6aff                 push -1
// 0085ecd6  8d442418             lea eax, [esp + 0x18]
// 0085ecda  50                   push eax
// 0085ecdb  ffd5                 call ebp
// 0085ecdd  e8ee0cfdff           call 0x82f9d0
// 0085ece2  6a14                 push 0x14
// 0085ece4  8bc8                 mov ecx, eax
// 0085ece6  e81504fdff           call 0x82f100
// 0085eceb  53                   push ebx
// 0085ecec  50                   push eax
// 0085eced  8d4c2418             lea ecx, [esp + 0x18]
// 0085ecf1  51                   push ecx
// 0085ecf2  8bce                 mov ecx, esi
// 0085ecf4  e8ff58f9ff           call 0x7f45f8
// 0085ecf9  6aff                 push -1
// 0085ecfb  6aff                 push -1
// 0085ecfd  8d542418             lea edx, [esp + 0x18]
// 0085ed01  52                   push edx
// 0085ed02  ffd5                 call ebp
// 0085ed04  57                   push edi
// 0085ed05  8d442414             lea eax, [esp + 0x14]
// 0085ed09  50                   push eax
// 0085ed0a  8bce                 mov ecx, esi
// 0085ed0c  e8ed58f9ff           call 0x7f45fe
// 0085ed11  5f                   pop edi
// 0085ed12  5e                   pop esi
// 0085ed13  5d                   pop ebp
// 0085ed14  5b                   pop ebx
// 0085ed15  83c410               add esp, 0x10
// 0085ed18  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnDrawSplitter@CXTSplitterWnd@@MAEXPAVCDC@@W4ESplitType@CSplitterWnd@@ABVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1