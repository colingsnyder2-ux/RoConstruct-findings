// roc 2012-06 00a6ce30  unit: CXTPTabPaintManager::CColorSet  size: 792 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6ce30
//
// 00a6ce30  56                   push esi
// 00a6ce31  57                   push edi
// 00a6ce32  8bf1                 mov esi, ecx
// 00a6ce34  e8f725f5ff           call 0x9bf430
// 00a6ce39  e8220af5ff           call 0x9bd860
// 00a6ce3e  6a10                 push 0x10
// 00a6ce40  8bc8                 mov ecx, eax
// 00a6ce42  e89901f5ff           call 0x9bcfe0
// 00a6ce47  894648               mov dword ptr [esi + 0x48], eax
// 00a6ce4a  e8110af5ff           call 0x9bd860
// 00a6ce4f  6a0f                 push 0xf
// 00a6ce51  8bc8                 mov ecx, eax
// 00a6ce53  8d7e04               lea edi, [esi + 4]
// 00a6ce56  e88501f5ff           call 0x9bcfe0
// 00a6ce5b  50                   push eax
// 00a6ce5c  8bcf                 mov ecx, edi
// 00a6ce5e  e84d09f5ff           call 0x9bd7b0
// 00a6ce63  e8f809f5ff           call 0x9bd860
// 00a6ce68  6a0f                 push 0xf
// 00a6ce6a  8bc8                 mov ecx, eax
// 00a6ce6c  e86f01f5ff           call 0x9bcfe0
// 00a6ce71  894654               mov dword ptr [esi + 0x54], eax
// 00a6ce74  e8e709f5ff           call 0x9bd860
// 00a6ce79  6a0f                 push 0xf
// 00a6ce7b  8bc8                 mov ecx, eax
// 00a6ce7d  e85e01f5ff           call 0x9bcfe0
// 00a6ce82  894660               mov dword ptr [esi + 0x60], eax
// 00a6ce85  e8d609f5ff           call 0x9bd860
// 00a6ce8a  6a14                 push 0x14
// 00a6ce8c  8bc8                 mov ecx, eax
// 00a6ce8e  e84d01f5ff           call 0x9bcfe0
// 00a6ce93  89466c               mov dword ptr [esi + 0x6c], eax
// 00a6ce96  e8c509f5ff           call 0x9bd860
// 00a6ce9b  6a12                 push 0x12
// 00a6ce9d  8bc8                 mov ecx, eax
// 00a6ce9f  e83c01f5ff           call 0x9bcfe0
// 00a6cea4  8986b4000000         mov dword ptr [esi + 0xb4], eax
// 00a6ceaa  e8b109f5ff           call 0x9bd860
// 00a6ceaf  6a12                 push 0x12
// 00a6ceb1  8bc8                 mov ecx, eax
// 00a6ceb3  e82801f5ff           call 0x9bcfe0
// 00a6ceb8  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 00a6cebe  e89d09f5ff           call 0x9bd860
// 00a6cec3  6a12                 push 0x12
// 00a6cec5  8bc8                 mov ecx, eax
// 00a6cec7  e81401f5ff           call 0x9bcfe0
// 00a6cecc  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 00a6ced2  c786cc00000000008000 mov dword ptr [esi + 0xcc], 0x800000
// 00a6cedc  e87f09f5ff           call 0x9bd860
// 00a6cee1  6a11                 push 0x11
// 00a6cee3  8bc8                 mov ecx, eax
// 00a6cee5  e8f600f5ff           call 0x9bcfe0
// 00a6ceea  8986d8000000         mov dword ptr [esi + 0xd8], eax
// 00a6cef0  e86b09f5ff           call 0x9bd860
// 00a6cef5  6a05                 push 5
// 00a6cef7  8bc8                 mov ecx, eax
// 00a6cef9  e8e200f5ff           call 0x9bcfe0
// 00a6cefe  50                   push eax
// 00a6ceff  8d8ee0000000         lea ecx, [esi + 0xe0]
// 00a6cf05  e8a608f5ff           call 0x9bd7b0
// 00a6cf0a  e85109f5ff           call 0x9bd860
// 00a6cf0f  6a0d                 push 0xd
// 00a6cf11  8bc8                 mov ecx, eax
// 00a6cf13  e8c800f5ff           call 0x9bcfe0
// 00a6cf18  50                   push eax
// 00a6cf19  8d8e00010000         lea ecx, [esi + 0x100]
// 00a6cf1f  e88c08f5ff           call 0x9bd7b0
// 00a6cf24  e83709f5ff           call 0x9bd860
// 00a6cf29  6a10                 push 0x10
// 00a6cf2b  8bc8                 mov ecx, eax
// 00a6cf2d  e8ae00f5ff           call 0x9bcfe0
// 00a6cf32  898648010000         mov dword ptr [esi + 0x148], eax
// 00a6cf38  e82309f5ff           call 0x9bd860
// 00a6cf3d  6a10                 push 0x10
// 00a6cf3f  8bc8                 mov ecx, eax
// 00a6cf41  e89a00f5ff           call 0x9bcfe0
// 00a6cf46  898654010000         mov dword ptr [esi + 0x154], eax
// 00a6cf4c  e80f09f5ff           call 0x9bd860
// 00a6cf51  6a0f                 push 0xf
// 00a6cf53  8bc8                 mov ecx, eax
// 00a6cf55  e88600f5ff           call 0x9bcfe0
// 00a6cf5a  898660010000         mov dword ptr [esi + 0x160], eax
// 00a6cf60  e8fb08f5ff           call 0x9bd860
// 00a6cf65  6a0f                 push 0xf
// 00a6cf67  8bc8                 mov ecx, eax
// 00a6cf69  e87200f5ff           call 0x9bcfe0
// 00a6cf6e  89866c010000         mov dword ptr [esi + 0x16c], eax
// 00a6cf74  e8e708f5ff           call 0x9bd860
// 00a6cf79  6a14                 push 0x14
// 00a6cf7b  8bc8                 mov ecx, eax
// 00a6cf7d  e85e00f5ff           call 0x9bcfe0
// 00a6cf82  898624010000         mov dword ptr [esi + 0x124], eax
// 00a6cf88  e8d308f5ff           call 0x9bd860
// 00a6cf8d  6a10                 push 0x10
// 00a6cf8f  8bc8                 mov ecx, eax
// 00a6cf91  e84a00f5ff           call 0x9bcfe0
// 00a6cf96  898630010000         mov dword ptr [esi + 0x130], eax
// 00a6cf9c  e8bf08f5ff           call 0x9bd860
// 00a6cfa1  6a15                 push 0x15
// 00a6cfa3  8bc8                 mov ecx, eax
// 00a6cfa5  e83600f5ff           call 0x9bcfe0
// 00a6cfaa  89863c010000         mov dword ptr [esi + 0x13c], eax
// 00a6cfb0  e8ab08f5ff           call 0x9bd860
// 00a6cfb5  6a12                 push 0x12
// 00a6cfb7  8bc8                 mov ecx, eax
// 00a6cfb9  e82200f5ff           call 0x9bcfe0
// 00a6cfbe  898690010000         mov dword ptr [esi + 0x190], eax
// 00a6cfc4  e89708f5ff           call 0x9bd860
// 00a6cfc9  6a12                 push 0x12
// 00a6cfcb  8bc8                 mov ecx, eax
// 00a6cfcd  e80e00f5ff           call 0x9bcfe0
// 00a6cfd2  898678010000         mov dword ptr [esi + 0x178], eax
// 00a6cfd8  e88308f5ff           call 0x9bd860
// 00a6cfdd  6a10                 push 0x10
// 00a6cfdf  8bc8                 mov ecx, eax
// 00a6cfe1  e8fafff4ff           call 0x9bcfe0
// 00a6cfe6  898684010000         mov dword ptr [esi + 0x184], eax
// 00a6cfec  83c8ff               or eax, 0xffffffff
// 00a6cfef  89869c010000         mov dword ptr [esi + 0x19c], eax
// 00a6cff5  8986a8010000         mov dword ptr [esi + 0x1a8], eax
// 00a6cffb  8986b4010000         mov dword ptr [esi + 0x1b4], eax
// 00a6d001  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 00a6d007  8986c4010000         mov dword ptr [esi + 0x1c4], eax
// 00a6d00d  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 00a6d013  898ec0010000         mov dword ptr [esi + 0x1c0], ecx
// 00a6d019  8b9688010000         mov edx, dword ptr [esi + 0x188]
// 00a6d01f  8996d0010000         mov dword ptr [esi + 0x1d0], edx
// 00a6d025  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 00a6d02b  8986cc010000         mov dword ptr [esi + 0x1cc], eax
// 00a6d031  8b8e94010000         mov ecx, dword ptr [esi + 0x194]
// 00a6d037  898edc010000         mov dword ptr [esi + 0x1dc], ecx
// 00a6d03d  8b9690010000         mov edx, dword ptr [esi + 0x190]
// 00a6d043  8996d8010000         mov dword ptr [esi + 0x1d8], edx
// 00a6d049  8b86a0010000         mov eax, dword ptr [esi + 0x1a0]
// 00a6d04f  8986e8010000         mov dword ptr [esi + 0x1e8], eax
// 00a6d055  8b8e9c010000         mov ecx, dword ptr [esi + 0x19c]
// 00a6d05b  898ee4010000         mov dword ptr [esi + 0x1e4], ecx
// 00a6d061  8b96ac010000         mov edx, dword ptr [esi + 0x1ac]
// 00a6d067  8996f4010000         mov dword ptr [esi + 0x1f4], edx
// 00a6d06d  8b86a8010000         mov eax, dword ptr [esi + 0x1a8]
// 00a6d073  8986f0010000         mov dword ptr [esi + 0x1f0], eax
// 00a6d079  8b8eb8010000         mov ecx, dword ptr [esi + 0x1b8]
// 00a6d07f  898e00020000         mov dword ptr [esi + 0x200], ecx
// 00a6d085  8b96b4010000         mov edx, dword ptr [esi + 0x1b4]
// 00a6d08b  8996fc010000         mov dword ptr [esi + 0x1fc], edx
// 00a6d091  e8ca07f5ff           call 0x9bd860
// 00a6d096  6a05                 push 5
// 00a6d098  8bc8                 mov ecx, eax
// 00a6d09a  e841fff4ff           call 0x9bcfe0
// 00a6d09f  8986e4010000         mov dword ptr [esi + 0x1e4], eax
// 00a6d0a5  e8b607f5ff           call 0x9bd860
// 00a6d0aa  6a10                 push 0x10
// 00a6d0ac  8bc8                 mov ecx, eax
// 00a6d0ae  e82dfff4ff           call 0x9bcfe0
// 00a6d0b3  8986f0010000         mov dword ptr [esi + 0x1f0], eax
// 00a6d0b9  e8a207f5ff           call 0x9bd860
// 00a6d0be  6a0f                 push 0xf
// 00a6d0c0  8bc8                 mov ecx, eax
// 00a6d0c2  e819fff4ff           call 0x9bcfe0
// 00a6d0c7  894678               mov dword ptr [esi + 0x78], eax
// 00a6d0ca  e89107f5ff           call 0x9bd860
// 00a6d0cf  6a0f                 push 0xf
// 00a6d0d1  8bc8                 mov ecx, eax
// 00a6d0d3  e808fff4ff           call 0x9bcfe0
// 00a6d0d8  89869c000000         mov dword ptr [esi + 0x9c], eax
// 00a6d0de  e87d07f5ff           call 0x9bd860
// 00a6d0e3  6a0f                 push 0xf
// 00a6d0e5  8bc8                 mov ecx, eax
// 00a6d0e7  e8f4fef4ff           call 0x9bcfe0
// 00a6d0ec  898684000000         mov dword ptr [esi + 0x84], eax
// 00a6d0f2  e86907f5ff           call 0x9bd860
// 00a6d0f7  6a0f                 push 0xf
// 00a6d0f9  8bc8                 mov ecx, eax
// 00a6d0fb  e8e0fef4ff           call 0x9bcfe0
// 00a6d100  8b8e04020000         mov ecx, dword ptr [esi + 0x204]
// 00a6d106  898690000000         mov dword ptr [esi + 0x90], eax
// 00a6d10c  e82f45f8ff           call 0x9f1640
// 00a6d111  83f807               cmp eax, 7
// 00a6d114  7511                 jne 0xa6d127
// 00a6d116  e84507f5ff           call 0x9bd860
// 00a6d11b  6a05                 push 5
// 00a6d11d  8bc8                 mov ecx, eax
// 00a6d11f  e8bcfef4ff           call 0x9bcfe0
// 00a6d124  894678               mov dword ptr [esi + 0x78], eax
// 00a6d127  8b470c               mov eax, dword ptr [edi + 0xc]
// 00a6d12a  894630               mov dword ptr [esi + 0x30], eax
// 00a6d12d  8b4f08               mov ecx, dword ptr [edi + 8]
// 00a6d130  894e2c               mov dword ptr [esi + 0x2c], ecx
// 00a6d133  8b5718               mov edx, dword ptr [edi + 0x18]
// 00a6d136  89563c               mov dword ptr [esi + 0x3c], edx
// 00a6d139  8b4714               mov eax, dword ptr [edi + 0x14]
// 00a6d13c  894638               mov dword ptr [esi + 0x38], eax
// 00a6d13f  d9471c               fld dword ptr [edi + 0x1c]
// 00a6d142  5f                   pop edi
// 00a6d143  d95e40               fstp dword ptr [esi + 0x40]
// 00a6d146  5e                   pop esi
// 00a6d147  c3                   ret 
// library xtp-13.2.1/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?RefreshMetrics@CColorSet@CXTPTabPaintManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/TabManager/XTPTabPaintManagerColors.cpp
