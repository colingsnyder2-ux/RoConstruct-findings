// roc 2009-12 008e7930  unit: CXTPTabPaintManager::CColorSetDefault  size: 421 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e7930
//
// 008e7930  56                   push esi
// 008e7931  57                   push edi
// 008e7932  8bf1                 mov esi, ecx
// 008e7934  e817f8ffff           call 0x8e7150
// 008e7939  6afe                 push -2
// 008e793b  8d8ee0000000         lea ecx, [esi + 0xe0]
// 008e7941  e8da7ff4ff           call 0x82f920
// 008e7946  e88580f4ff           call 0x82f9d0
// 008e794b  6a14                 push 0x14
// 008e794d  8bc8                 mov ecx, eax
// 008e794f  e8ac77f4ff           call 0x82f100
// 008e7954  8bf8                 mov edi, eax
// 008e7956  e87580f4ff           call 0x82f9d0
// 008e795b  d905dcf29a00         fld dword ptr [0x9af2dc]
// 008e7961  51                   push ecx
// 008e7962  d91c24               fstp dword ptr [esp]
// 008e7965  57                   push edi
// 008e7966  6a10                 push 0x10
// 008e7968  8bc8                 mov ecx, eax
// 008e796a  e89177f4ff           call 0x82f100
// 008e796f  50                   push eax
// 008e7970  8d8e00010000         lea ecx, [esi + 0x100]
// 008e7976  e8e574f4ff           call 0x82ee60
// 008e797b  e85080f4ff           call 0x82f9d0
// 008e7980  6a12                 push 0x12
// 008e7982  8bc8                 mov ecx, eax
// 008e7984  e87777f4ff           call 0x82f100
// 008e7989  898690010000         mov dword ptr [esi + 0x190], eax
// 008e798f  e83c80f4ff           call 0x82f9d0
// 008e7994  6a12                 push 0x12
// 008e7996  8bc8                 mov ecx, eax
// 008e7998  e86377f4ff           call 0x82f100
// 008e799d  898678010000         mov dword ptr [esi + 0x178], eax
// 008e79a3  e82880f4ff           call 0x82f9d0
// 008e79a8  6a12                 push 0x12
// 008e79aa  8bc8                 mov ecx, eax
// 008e79ac  e84f77f4ff           call 0x82f100
// 008e79b1  898684010000         mov dword ptr [esi + 0x184], eax
// 008e79b7  e81480f4ff           call 0x82f9d0
// 008e79bc  6a05                 push 5
// 008e79be  8bc8                 mov ecx, eax
// 008e79c0  e83b77f4ff           call 0x82f100
// 008e79c5  89869c010000         mov dword ptr [esi + 0x19c], eax
// 008e79cb  e80080f4ff           call 0x82f9d0
// 008e79d0  6a10                 push 0x10
// 008e79d2  8bc8                 mov ecx, eax
// 008e79d4  e82777f4ff           call 0x82f100
// 008e79d9  8986b4010000         mov dword ptr [esi + 0x1b4], eax
// 008e79df  e8ec7ff4ff           call 0x82f9d0
// 008e79e4  6a10                 push 0x10
// 008e79e6  8bc8                 mov ecx, eax
// 008e79e8  e81377f4ff           call 0x82f100
// 008e79ed  8986a8010000         mov dword ptr [esi + 0x1a8], eax
// 008e79f3  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 008e79f9  8986c4010000         mov dword ptr [esi + 0x1c4], eax
// 008e79ff  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 008e7a05  898ec0010000         mov dword ptr [esi + 0x1c0], ecx
// 008e7a0b  8b9688010000         mov edx, dword ptr [esi + 0x188]
// 008e7a11  8996d0010000         mov dword ptr [esi + 0x1d0], edx
// 008e7a17  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 008e7a1d  8986cc010000         mov dword ptr [esi + 0x1cc], eax
// 008e7a23  8b8e94010000         mov ecx, dword ptr [esi + 0x194]
// 008e7a29  898edc010000         mov dword ptr [esi + 0x1dc], ecx
// 008e7a2f  8b9690010000         mov edx, dword ptr [esi + 0x190]
// 008e7a35  8996d8010000         mov dword ptr [esi + 0x1d8], edx
// 008e7a3b  8b86a0010000         mov eax, dword ptr [esi + 0x1a0]
// 008e7a41  8986e8010000         mov dword ptr [esi + 0x1e8], eax
// 008e7a47  8b8e9c010000         mov ecx, dword ptr [esi + 0x19c]
// 008e7a4d  898ee4010000         mov dword ptr [esi + 0x1e4], ecx
// 008e7a53  8b96ac010000         mov edx, dword ptr [esi + 0x1ac]
// 008e7a59  8996f4010000         mov dword ptr [esi + 0x1f4], edx
// 008e7a5f  8b86a8010000         mov eax, dword ptr [esi + 0x1a8]
// 008e7a65  8986f0010000         mov dword ptr [esi + 0x1f0], eax
// 008e7a6b  8b8eb8010000         mov ecx, dword ptr [esi + 0x1b8]
// 008e7a71  898e00020000         mov dword ptr [esi + 0x200], ecx
// 008e7a77  8b8e04020000         mov ecx, dword ptr [esi + 0x204]
// 008e7a7d  83c8ff               or eax, 0xffffffff
// 008e7a80  8986e4010000         mov dword ptr [esi + 0x1e4], eax
// 008e7a86  8986f0010000         mov dword ptr [esi + 0x1f0], eax
// 008e7a8c  8986fc010000         mov dword ptr [esi + 0x1fc], eax
// 008e7a92  e849cef7ff           call 0x8648e0
// 008e7a97  83f807               cmp eax, 7
// 008e7a9a  7536                 jne 0x8e7ad2
// 008e7a9c  e82f7ff4ff           call 0x82f9d0
// 008e7aa1  6a0f                 push 0xf
// 008e7aa3  8bc8                 mov ecx, eax
// 008e7aa5  e85676f4ff           call 0x82f100
// 008e7aaa  894678               mov dword ptr [esi + 0x78], eax
// 008e7aad  e81e7ff4ff           call 0x82f9d0
// 008e7ab2  6a05                 push 5
// 008e7ab4  8bc8                 mov ecx, eax
// 008e7ab6  e84576f4ff           call 0x82f100
// 008e7abb  89869c000000         mov dword ptr [esi + 0x9c], eax
// 008e7ac1  e80a7ff4ff           call 0x82f9d0
// 008e7ac6  6a12                 push 0x12
// 008e7ac8  8bc8                 mov ecx, eax
// 008e7aca  e83176f4ff           call 0x82f100
// 008e7acf  894648               mov dword ptr [esi + 0x48], eax
// 008e7ad2  5f                   pop edi
// 008e7ad3  5e                   pop esi
// 008e7ad4  c3                   ret 
// copied from an identical function in another client (function ?RefreshMetrics@CColorSetDefault@CXTPTabPaintManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/TabManager/XTPTabPaintManagerColors.cpp