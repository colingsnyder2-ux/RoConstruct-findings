// roc 2012-06 00a51bc0  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a51bc0
//
// 00a51bc0  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a51bc4  83f803               cmp eax, 3
// 00a51bc7  0f87a8000000         ja 0xa51c75
// 00a51bcd  ff2485781ca500       jmp dword ptr [eax*4 + 0xa51c78]
// 00a51bd4  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a51bd8  83f8ff               cmp eax, -1
// 00a51bdb  0f8494000000         je 0xa51c75
// 00a51be1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a51be5  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00a51be9  50                   push eax
// 00a51bea  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a51bee  6a01                 push 1
// 00a51bf0  2bc8                 sub ecx, eax
// 00a51bf2  51                   push ecx
// 00a51bf3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a51bf7  52                   push edx
// 00a51bf8  50                   push eax
// 00a51bf9  e892790400           call 0xa99590
// 00a51bfe  c3                   ret 
// 00a51bff  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a51c03  83f8ff               cmp eax, -1
// 00a51c06  746d                 je 0xa51c75
// 00a51c08  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a51c0c  8b542408             mov edx, dword ptr [esp + 8]
// 00a51c10  50                   push eax
// 00a51c11  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a51c15  2bc8                 sub ecx, eax
// 00a51c17  51                   push ecx
// 00a51c18  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a51c1c  6a01                 push 1
// 00a51c1e  50                   push eax
// 00a51c1f  52                   push edx
// 00a51c20  e86b790400           call 0xa99590
// 00a51c25  c3                   ret 
// 00a51c26  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a51c2a  83f8ff               cmp eax, -1
// 00a51c2d  7446                 je 0xa51c75
// 00a51c2f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a51c33  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a51c37  50                   push eax
// 00a51c38  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a51c3c  6a01                 push 1
// 00a51c3e  2bc8                 sub ecx, eax
// 00a51c40  51                   push ecx
// 00a51c41  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a51c45  4a                   dec edx
// 00a51c46  52                   push edx
// 00a51c47  50                   push eax
// 00a51c48  e843790400           call 0xa99590
// 00a51c4d  c3                   ret 
// 00a51c4e  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a51c52  83f8ff               cmp eax, -1
// 00a51c55  741e                 je 0xa51c75
// 00a51c57  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a51c5b  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a51c5f  50                   push eax
// 00a51c60  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a51c64  2bc8                 sub ecx, eax
// 00a51c66  51                   push ecx
// 00a51c67  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a51c6b  6a01                 push 1
// 00a51c6d  4a                   dec edx
// 00a51c6e  50                   push eax
// 00a51c6f  52                   push edx
// 00a51c70  e81b790400           call 0xa99590
// 00a51c75  c3                   ret 
// 00a51c76  8bff                 mov edi, edi
// 00a51c78  d41b                 aam 0x1b
// 00a51c7a  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 00a51c7b  00ff                 add bh, bh
// 00a51c7d  1ba500261ca5         sbb esp, dword ptr [ebp - 0x5ae3da00]
// 00a51c83  004e1c               add byte ptr [esi + 0x1c], cl
// 00a51c86  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// copied from an identical function in another client (function ?DrawSingleLineBorder@CXTPTabPaintManagerAppearanceSet@@SAXPAVCDC@@VCRect@@W4XTPTabPosition@@KK@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabPaintManagerAppearance.cpp