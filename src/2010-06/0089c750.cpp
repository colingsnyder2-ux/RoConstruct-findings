// roc 2010-06 0089c750  unit: CXTPTabPaintManager::CColorSetDefault  size: 421 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089c750
//
// 0089c750  56                   push esi
// 0089c751  57                   push edi
// 0089c752  8bf1                 mov esi, ecx
// 0089c754  e817f8ffff           call 0x89bf70
// 0089c759  6afe                 push -2
// 0089c75b  8d8ee0000000         lea ecx, [esi + 0xe0]
// 0089c761  e80a73f4ff           call 0x7e3a70
// 0089c766  e8b573f4ff           call 0x7e3b20
// 0089c76b  6a14                 push 0x14
// 0089c76d  8bc8                 mov ecx, eax
// 0089c76f  e83c6bf4ff           call 0x7e32b0
// 0089c774  8bf8                 mov edi, eax
// 0089c776  e8a573f4ff           call 0x7e3b20
// 0089c77b  d905e026a100         fld dword ptr [0xa126e0]
// 0089c781  51                   push ecx
// 0089c782  d91c24               fstp dword ptr [esp]
// 0089c785  57                   push edi
// 0089c786  6a10                 push 0x10
// 0089c788  8bc8                 mov ecx, eax
// 0089c78a  e8216bf4ff           call 0x7e32b0
// 0089c78f  50                   push eax
// 0089c790  8d8e00010000         lea ecx, [esi + 0x100]
// 0089c796  e87568f4ff           call 0x7e3010
// 0089c79b  e88073f4ff           call 0x7e3b20
// 0089c7a0  6a12                 push 0x12
// 0089c7a2  8bc8                 mov ecx, eax
// 0089c7a4  e8076bf4ff           call 0x7e32b0
// 0089c7a9  898690010000         mov dword ptr [esi + 0x190], eax
// 0089c7af  e86c73f4ff           call 0x7e3b20
// 0089c7b4  6a12                 push 0x12
// 0089c7b6  8bc8                 mov ecx, eax
// 0089c7b8  e8f36af4ff           call 0x7e32b0
// 0089c7bd  898678010000         mov dword ptr [esi + 0x178], eax
// 0089c7c3  e85873f4ff           call 0x7e3b20
// 0089c7c8  6a12                 push 0x12
// 0089c7ca  8bc8                 mov ecx, eax
// 0089c7cc  e8df6af4ff           call 0x7e32b0
// 0089c7d1  898684010000         mov dword ptr [esi + 0x184], eax
// 0089c7d7  e84473f4ff           call 0x7e3b20
// 0089c7dc  6a05                 push 5
// 0089c7de  8bc8                 mov ecx, eax
// 0089c7e0  e8cb6af4ff           call 0x7e32b0
// 0089c7e5  89869c010000         mov dword ptr [esi + 0x19c], eax
// 0089c7eb  e83073f4ff           call 0x7e3b20
// 0089c7f0  6a10                 push 0x10
// 0089c7f2  8bc8                 mov ecx, eax
// 0089c7f4  e8b76af4ff           call 0x7e32b0
// 0089c7f9  8986b4010000         mov dword ptr [esi + 0x1b4], eax
// 0089c7ff  e81c73f4ff           call 0x7e3b20
// 0089c804  6a10                 push 0x10
// 0089c806  8bc8                 mov ecx, eax
// 0089c808  e8a36af4ff           call 0x7e32b0
// 0089c80d  8986a8010000         mov dword ptr [esi + 0x1a8], eax
// 0089c813  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 0089c819  8986c4010000         mov dword ptr [esi + 0x1c4], eax
// 0089c81f  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 0089c825  898ec0010000         mov dword ptr [esi + 0x1c0], ecx
// 0089c82b  8b9688010000         mov edx, dword ptr [esi + 0x188]
// 0089c831  8996d0010000         mov dword ptr [esi + 0x1d0], edx
// 0089c837  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 0089c83d  8986cc010000         mov dword ptr [esi + 0x1cc], eax
// 0089c843  8b8e94010000         mov ecx, dword ptr [esi + 0x194]
// 0089c849  898edc010000         mov dword ptr [esi + 0x1dc], ecx
// 0089c84f  8b9690010000         mov edx, dword ptr [esi + 0x190]
// 0089c855  8996d8010000         mov dword ptr [esi + 0x1d8], edx
// 0089c85b  8b86a0010000         mov eax, dword ptr [esi + 0x1a0]
// 0089c861  8986e8010000         mov dword ptr [esi + 0x1e8], eax
// 0089c867  8b8e9c010000         mov ecx, dword ptr [esi + 0x19c]
// 0089c86d  898ee4010000         mov dword ptr [esi + 0x1e4], ecx
// 0089c873  8b96ac010000         mov edx, dword ptr [esi + 0x1ac]
// 0089c879  8996f4010000         mov dword ptr [esi + 0x1f4], edx
// 0089c87f  8b86a8010000         mov eax, dword ptr [esi + 0x1a8]
// 0089c885  8986f0010000         mov dword ptr [esi + 0x1f0], eax
// 0089c88b  8b8eb8010000         mov ecx, dword ptr [esi + 0x1b8]
// 0089c891  898e00020000         mov dword ptr [esi + 0x200], ecx
// 0089c897  8b8e04020000         mov ecx, dword ptr [esi + 0x204]
// 0089c89d  83c8ff               or eax, 0xffffffff
// 0089c8a0  8986e4010000         mov dword ptr [esi + 0x1e4], eax
// 0089c8a6  8986f0010000         mov dword ptr [esi + 0x1f0], eax
// 0089c8ac  8986fc010000         mov dword ptr [esi + 0x1fc], eax
// 0089c8b2  e8299ec3ff           call 0x4d66e0
// 0089c8b7  83f807               cmp eax, 7
// 0089c8ba  7536                 jne 0x89c8f2
// 0089c8bc  e85f72f4ff           call 0x7e3b20
// 0089c8c1  6a0f                 push 0xf
// 0089c8c3  8bc8                 mov ecx, eax
// 0089c8c5  e8e669f4ff           call 0x7e32b0
// 0089c8ca  894678               mov dword ptr [esi + 0x78], eax
// 0089c8cd  e84e72f4ff           call 0x7e3b20
// 0089c8d2  6a05                 push 5
// 0089c8d4  8bc8                 mov ecx, eax
// 0089c8d6  e8d569f4ff           call 0x7e32b0
// 0089c8db  89869c000000         mov dword ptr [esi + 0x9c], eax
// 0089c8e1  e83a72f4ff           call 0x7e3b20
// 0089c8e6  6a12                 push 0x12
// 0089c8e8  8bc8                 mov ecx, eax
// 0089c8ea  e8c169f4ff           call 0x7e32b0
// 0089c8ef  894648               mov dword ptr [esi + 0x48], eax
// 0089c8f2  5f                   pop edi
// 0089c8f3  5e                   pop esi
// 0089c8f4  c3                   ret 
// copied from an identical function in another client (function ?RefreshMetrics@CColorSetDefault@CXTPTabPaintManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/TabManager/XTPTabPaintManagerColors.cpp