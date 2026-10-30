// roc 2009-06 0080ce40  unit: CXTPTabPaintManager::CColorSetDefault  size: 421 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080ce40
//
// 0080ce40  56                   push esi
// 0080ce41  57                   push edi
// 0080ce42  8bf1                 mov esi, ecx
// 0080ce44  e817f8ffff           call 0x80c660
// 0080ce49  6afe                 push -2
// 0080ce4b  8d8ee0000000         lea ecx, [esi + 0xe0]
// 0080ce51  e81a7cf4ff           call 0x754a70
// 0080ce56  e8c57cf4ff           call 0x754b20
// 0080ce5b  6a14                 push 0x14
// 0080ce5d  8bc8                 mov ecx, eax
// 0080ce5f  e83c74f4ff           call 0x7542a0
// 0080ce64  8bf8                 mov edi, eax
// 0080ce66  e8b57cf4ff           call 0x754b20
// 0080ce6b  d9054cad8b00         fld dword ptr [0x8bad4c]
// 0080ce71  51                   push ecx
// 0080ce72  d91c24               fstp dword ptr [esp]
// 0080ce75  57                   push edi
// 0080ce76  6a10                 push 0x10
// 0080ce78  8bc8                 mov ecx, eax
// 0080ce7a  e82174f4ff           call 0x7542a0
// 0080ce7f  50                   push eax
// 0080ce80  8d8e00010000         lea ecx, [esi + 0x100]
// 0080ce86  e87571f4ff           call 0x754000
// 0080ce8b  e8907cf4ff           call 0x754b20
// 0080ce90  6a12                 push 0x12
// 0080ce92  8bc8                 mov ecx, eax
// 0080ce94  e80774f4ff           call 0x7542a0
// 0080ce99  898690010000         mov dword ptr [esi + 0x190], eax
// 0080ce9f  e87c7cf4ff           call 0x754b20
// 0080cea4  6a12                 push 0x12
// 0080cea6  8bc8                 mov ecx, eax
// 0080cea8  e8f373f4ff           call 0x7542a0
// 0080cead  898678010000         mov dword ptr [esi + 0x178], eax
// 0080ceb3  e8687cf4ff           call 0x754b20
// 0080ceb8  6a12                 push 0x12
// 0080ceba  8bc8                 mov ecx, eax
// 0080cebc  e8df73f4ff           call 0x7542a0
// 0080cec1  898684010000         mov dword ptr [esi + 0x184], eax
// 0080cec7  e8547cf4ff           call 0x754b20
// 0080cecc  6a05                 push 5
// 0080cece  8bc8                 mov ecx, eax
// 0080ced0  e8cb73f4ff           call 0x7542a0
// 0080ced5  89869c010000         mov dword ptr [esi + 0x19c], eax
// 0080cedb  e8407cf4ff           call 0x754b20
// 0080cee0  6a10                 push 0x10
// 0080cee2  8bc8                 mov ecx, eax
// 0080cee4  e8b773f4ff           call 0x7542a0
// 0080cee9  8986b4010000         mov dword ptr [esi + 0x1b4], eax
// 0080ceef  e82c7cf4ff           call 0x754b20
// 0080cef4  6a10                 push 0x10
// 0080cef6  8bc8                 mov ecx, eax
// 0080cef8  e8a373f4ff           call 0x7542a0
// 0080cefd  8986a8010000         mov dword ptr [esi + 0x1a8], eax
// 0080cf03  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 0080cf09  8986c4010000         mov dword ptr [esi + 0x1c4], eax
// 0080cf0f  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 0080cf15  898ec0010000         mov dword ptr [esi + 0x1c0], ecx
// 0080cf1b  8b9688010000         mov edx, dword ptr [esi + 0x188]
// 0080cf21  8996d0010000         mov dword ptr [esi + 0x1d0], edx
// 0080cf27  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 0080cf2d  8986cc010000         mov dword ptr [esi + 0x1cc], eax
// 0080cf33  8b8e94010000         mov ecx, dword ptr [esi + 0x194]
// 0080cf39  898edc010000         mov dword ptr [esi + 0x1dc], ecx
// 0080cf3f  8b9690010000         mov edx, dword ptr [esi + 0x190]
// 0080cf45  8996d8010000         mov dword ptr [esi + 0x1d8], edx
// 0080cf4b  8b86a0010000         mov eax, dword ptr [esi + 0x1a0]
// 0080cf51  8986e8010000         mov dword ptr [esi + 0x1e8], eax
// 0080cf57  8b8e9c010000         mov ecx, dword ptr [esi + 0x19c]
// 0080cf5d  898ee4010000         mov dword ptr [esi + 0x1e4], ecx
// 0080cf63  8b96ac010000         mov edx, dword ptr [esi + 0x1ac]
// 0080cf69  8996f4010000         mov dword ptr [esi + 0x1f4], edx
// 0080cf6f  8b86a8010000         mov eax, dword ptr [esi + 0x1a8]
// 0080cf75  8986f0010000         mov dword ptr [esi + 0x1f0], eax
// 0080cf7b  8b8eb8010000         mov ecx, dword ptr [esi + 0x1b8]
// 0080cf81  898e00020000         mov dword ptr [esi + 0x200], ecx
// 0080cf87  8b8e04020000         mov ecx, dword ptr [esi + 0x204]
// 0080cf8d  83c8ff               or eax, 0xffffffff
// 0080cf90  8986e4010000         mov dword ptr [esi + 0x1e4], eax
// 0080cf96  8986f0010000         mov dword ptr [esi + 0x1f0], eax
// 0080cf9c  8986fc010000         mov dword ptr [esi + 0x1fc], eax
// 0080cfa2  e8798dfeff           call 0x7f5d20
// 0080cfa7  83f807               cmp eax, 7
// 0080cfaa  7536                 jne 0x80cfe2
// 0080cfac  e86f7bf4ff           call 0x754b20
// 0080cfb1  6a0f                 push 0xf
// 0080cfb3  8bc8                 mov ecx, eax
// 0080cfb5  e8e672f4ff           call 0x7542a0
// 0080cfba  894678               mov dword ptr [esi + 0x78], eax
// 0080cfbd  e85e7bf4ff           call 0x754b20
// 0080cfc2  6a05                 push 5
// 0080cfc4  8bc8                 mov ecx, eax
// 0080cfc6  e8d572f4ff           call 0x7542a0
// 0080cfcb  89869c000000         mov dword ptr [esi + 0x9c], eax
// 0080cfd1  e84a7bf4ff           call 0x754b20
// 0080cfd6  6a12                 push 0x12
// 0080cfd8  8bc8                 mov ecx, eax
// 0080cfda  e8c172f4ff           call 0x7542a0
// 0080cfdf  894648               mov dword ptr [esi + 0x48], eax
// 0080cfe2  5f                   pop edi
// 0080cfe3  5e                   pop esi
// 0080cfe4  c3                   ret 
// copied from an identical function in another client (function ?RefreshMetrics@CColorSetDefault@CXTPTabPaintManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/TabManager/XTPTabPaintManagerColors.cpp