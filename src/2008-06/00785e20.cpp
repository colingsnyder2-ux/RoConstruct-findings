// roc 2008-06 00785e20  unit: CXTColorHex  size: 3251 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00785e20
//
// 00785e20  81ecbc000000         sub esp, 0xbc
// 00785e26  53                   push ebx
// 00785e27  8b5968               mov ebx, dword ptr [ecx + 0x68]
// 00785e2a  55                   push ebp
// 00785e2b  8b696c               mov ebp, dword ptr [ecx + 0x6c]
// 00785e2e  56                   push esi
// 00785e2f  8b35b8208000         mov esi, dword ptr [0x8020b8]
// 00785e35  57                   push edi
// 00785e36  8bbc24d0000000       mov edi, dword ptr [esp + 0xd0]
// 00785e3d  83eb02               sub ebx, 2
// 00785e40  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00785e48  896c242c             mov dword ptr [esp + 0x2c], ebp
// 00785e4c  8d642400             lea esp, [esp]
// 00785e50  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00785e54  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00785e58  8b5704               mov edx, dword ptr [edi + 4]
// 00785e5b  6a00                 push 0
// 00785e5d  50                   push eax
// 00785e5e  03cb                 add ecx, ebx
// 00785e60  51                   push ecx
// 00785e61  52                   push edx
// 00785e62  ffd6                 call esi
// 00785e64  8b442410             mov eax, dword ptr [esp + 0x10]
// 00785e68  ff4c242c             dec dword ptr [esp + 0x2c]
// 00785e6c  40                   inc eax
// 00785e6d  83f803               cmp eax, 3
// 00785e70  89442410             mov dword ptr [esp + 0x10], eax
// 00785e74  7cda                 jl 0x785e50
// 00785e76  6a00                 push 0
// 00785e78  8d45fe               lea eax, [ebp - 2]
// 00785e7b  50                   push eax
// 00785e7c  8d4b03               lea ecx, [ebx + 3]
// 00785e7f  898424b8000000       mov dword ptr [esp + 0xb8], eax
// 00785e86  8b4704               mov eax, dword ptr [edi + 4]
// 00785e89  51                   push ecx
// 00785e8a  50                   push eax
// 00785e8b  894c2458             mov dword ptr [esp + 0x58], ecx
// 00785e8f  ffd6                 call esi
// 00785e91  6a00                 push 0
// 00785e93  8d45fd               lea eax, [ebp - 3]
// 00785e96  8d4b04               lea ecx, [ebx + 4]
// 00785e99  50                   push eax
// 00785e9a  51                   push ecx
// 00785e9b  894c245c             mov dword ptr [esp + 0x5c], ecx
// 00785e9f  8b4f04               mov ecx, dword ptr [edi + 4]
// 00785ea2  51                   push ecx
// 00785ea3  89442434             mov dword ptr [esp + 0x34], eax
// 00785ea7  ffd6                 call esi
// 00785ea9  8b542424             mov edx, dword ptr [esp + 0x24]
// 00785ead  6a00                 push 0
// 00785eaf  8d4305               lea eax, [ebx + 5]
// 00785eb2  52                   push edx
// 00785eb3  50                   push eax
// 00785eb4  89442444             mov dword ptr [esp + 0x44], eax
// 00785eb8  8b4704               mov eax, dword ptr [edi + 4]
// 00785ebb  50                   push eax
// 00785ebc  ffd6                 call esi
// 00785ebe  6a00                 push 0
// 00785ec0  8d45fc               lea eax, [ebp - 4]
// 00785ec3  8d4b06               lea ecx, [ebx + 6]
// 00785ec6  50                   push eax
// 00785ec7  51                   push ecx
// 00785ec8  898c248c000000       mov dword ptr [esp + 0x8c], ecx
// 00785ecf  8b4f04               mov ecx, dword ptr [edi + 4]
// 00785ed2  51                   push ecx
// 00785ed3  89442430             mov dword ptr [esp + 0x30], eax
// 00785ed7  ffd6                 call esi
// 00785ed9  8b542420             mov edx, dword ptr [esp + 0x20]
// 00785edd  6a00                 push 0
// 00785edf  8d4307               lea eax, [ebx + 7]
// 00785ee2  52                   push edx
// 00785ee3  50                   push eax
// 00785ee4  89842484000000       mov dword ptr [esp + 0x84], eax
// 00785eeb  8b4704               mov eax, dword ptr [edi + 4]
// 00785eee  50                   push eax
// 00785eef  ffd6                 call esi
// 00785ef1  6a00                 push 0
// 00785ef3  8d45fb               lea eax, [ebp - 5]
// 00785ef6  8d4b08               lea ecx, [ebx + 8]
// 00785ef9  50                   push eax
// 00785efa  51                   push ecx
// 00785efb  894c247c             mov dword ptr [esp + 0x7c], ecx
// 00785eff  8b4f04               mov ecx, dword ptr [edi + 4]
// 00785f02  51                   push ecx
// 00785f03  89442438             mov dword ptr [esp + 0x38], eax
// 00785f07  ffd6                 call esi
// 00785f09  8b542428             mov edx, dword ptr [esp + 0x28]
// 00785f0d  6a00                 push 0
// 00785f0f  8d4309               lea eax, [ebx + 9]
// 00785f12  52                   push edx
// 00785f13  50                   push eax
// 00785f14  89442474             mov dword ptr [esp + 0x74], eax
// 00785f18  8b4704               mov eax, dword ptr [edi + 4]
// 00785f1b  50                   push eax
// 00785f1c  ffd6                 call esi
// 00785f1e  6a00                 push 0
// 00785f20  8d45fa               lea eax, [ebp - 6]
// 00785f23  8d4b0a               lea ecx, [ebx + 0xa]
// 00785f26  50                   push eax
// 00785f27  51                   push ecx
// 00785f28  894c246c             mov dword ptr [esp + 0x6c], ecx
// 00785f2c  8b4f04               mov ecx, dword ptr [edi + 4]
// 00785f2f  51                   push ecx
// 00785f30  8944244c             mov dword ptr [esp + 0x4c], eax
// 00785f34  ffd6                 call esi
// 00785f36  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00785f3a  8d430b               lea eax, [ebx + 0xb]
// 00785f3d  89842494000000       mov dword ptr [esp + 0x94], eax
// 00785f44  6a00                 push 0
// 00785f46  52                   push edx
// 00785f47  50                   push eax
// 00785f48  8b4704               mov eax, dword ptr [edi + 4]
// 00785f4b  50                   push eax
// 00785f4c  ffd6                 call esi
// 00785f4e  6a00                 push 0
// 00785f50  8d45f9               lea eax, [ebp - 7]
// 00785f53  8d4b0c               lea ecx, [ebx + 0xc]
// 00785f56  50                   push eax
// 00785f57  51                   push ecx
// 00785f58  898c24ac000000       mov dword ptr [esp + 0xac], ecx
// 00785f5f  8b4f04               mov ecx, dword ptr [edi + 4]
// 00785f62  51                   push ecx
// 00785f63  89442468             mov dword ptr [esp + 0x68], eax
// 00785f67  ffd6                 call esi
// 00785f69  8b542458             mov edx, dword ptr [esp + 0x58]
// 00785f6d  6a00                 push 0
// 00785f6f  8d430d               lea eax, [ebx + 0xd]
// 00785f72  52                   push edx
// 00785f73  50                   push eax
// 00785f74  89842498000000       mov dword ptr [esp + 0x98], eax
// 00785f7b  8b4704               mov eax, dword ptr [edi + 4]
// 00785f7e  50                   push eax
// 00785f7f  ffd6                 call esi
// 00785f81  6a00                 push 0
// 00785f83  8d45f8               lea eax, [ebp - 8]
// 00785f86  8d4b0e               lea ecx, [ebx + 0xe]
// 00785f89  50                   push eax
// 00785f8a  51                   push ecx
// 00785f8b  898c24b4000000       mov dword ptr [esp + 0xb4], ecx
// 00785f92  8b4f04               mov ecx, dword ptr [edi + 4]
// 00785f95  51                   push ecx
// 00785f96  ffd6                 call esi
// 00785f98  8b5704               mov edx, dword ptr [edi + 4]
// 00785f9b  6a00                 push 0
// 00785f9d  8d45f8               lea eax, [ebp - 8]
// 00785fa0  8d4b0f               lea ecx, [ebx + 0xf]
// 00785fa3  50                   push eax
// 00785fa4  51                   push ecx
// 00785fa5  52                   push edx
// 00785fa6  898c2494000000       mov dword ptr [esp + 0x94], ecx
// 00785fad  ffd6                 call esi
// 00785faf  6a00                 push 0
// 00785fb1  8d45f8               lea eax, [ebp - 8]
// 00785fb4  50                   push eax
// 00785fb5  8b4704               mov eax, dword ptr [edi + 4]
// 00785fb8  8d4b10               lea ecx, [ebx + 0x10]
// 00785fbb  51                   push ecx
// 00785fbc  50                   push eax
// 00785fbd  898c24c4000000       mov dword ptr [esp + 0xc4], ecx
// 00785fc4  ffd6                 call esi
// 00785fc6  6a00                 push 0
// 00785fc8  8d45f8               lea eax, [ebp - 8]
// 00785fcb  8d4b11               lea ecx, [ebx + 0x11]
// 00785fce  50                   push eax
// 00785fcf  51                   push ecx
// 00785fd0  898c2488000000       mov dword ptr [esp + 0x88], ecx
// 00785fd7  8b4f04               mov ecx, dword ptr [edi + 4]
// 00785fda  51                   push ecx
// 00785fdb  ffd6                 call esi
// 00785fdd  8b5704               mov edx, dword ptr [edi + 4]
// 00785fe0  6a00                 push 0
// 00785fe2  8d45f8               lea eax, [ebp - 8]
// 00785fe5  8d4b12               lea ecx, [ebx + 0x12]
// 00785fe8  50                   push eax
// 00785fe9  51                   push ecx
// 00785fea  52                   push edx
// 00785feb  898c24bc000000       mov dword ptr [esp + 0xbc], ecx
// 00785ff2  ffd6                 call esi
// 00785ff4  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00785ff8  8b5704               mov edx, dword ptr [edi + 4]
// 00785ffb  6a00                 push 0
// 00785ffd  8d4313               lea eax, [ebx + 0x13]
// 00786000  51                   push ecx
// 00786001  50                   push eax
// 00786002  52                   push edx
// 00786003  89842484000000       mov dword ptr [esp + 0x84], eax
// 0078600a  ffd6                 call esi
// 0078600c  8d4314               lea eax, [ebx + 0x14]
// 0078600f  8944245c             mov dword ptr [esp + 0x5c], eax
// 00786013  6a00                 push 0
// 00786015  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00786019  8b5704               mov edx, dword ptr [edi + 4]
// 0078601c  51                   push ecx
// 0078601d  50                   push eax
// 0078601e  52                   push edx
// 0078601f  ffd6                 call esi
// 00786021  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00786025  8b5704               mov edx, dword ptr [edi + 4]
// 00786028  6a00                 push 0
// 0078602a  8d4315               lea eax, [ebx + 0x15]
// 0078602d  51                   push ecx
// 0078602e  50                   push eax
// 0078602f  52                   push edx
// 00786030  8944247c             mov dword ptr [esp + 0x7c], eax
// 00786034  ffd6                 call esi
// 00786036  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0078603a  8b5704               mov edx, dword ptr [edi + 4]
// 0078603d  6a00                 push 0
// 0078603f  8d4316               lea eax, [ebx + 0x16]
// 00786042  51                   push ecx
// 00786043  50                   push eax
// 00786044  52                   push edx
// 00786045  898424b4000000       mov dword ptr [esp + 0xb4], eax
// 0078604c  ffd6                 call esi
// 0078604e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00786052  8b5704               mov edx, dword ptr [edi + 4]
// 00786055  6a00                 push 0
// 00786057  8d4317               lea eax, [ebx + 0x17]
// 0078605a  51                   push ecx
// 0078605b  50                   push eax
// 0078605c  52                   push edx
// 0078605d  89442474             mov dword ptr [esp + 0x74], eax
// 00786061  ffd6                 call esi
// 00786063  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00786067  8b5704               mov edx, dword ptr [edi + 4]
// 0078606a  6a00                 push 0
// 0078606c  8d4318               lea eax, [ebx + 0x18]
// 0078606f  51                   push ecx
// 00786070  50                   push eax
// 00786071  52                   push edx
// 00786072  89442464             mov dword ptr [esp + 0x64], eax
// 00786076  ffd6                 call esi
// 00786078  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0078607c  8b5704               mov edx, dword ptr [edi + 4]
// 0078607f  6a00                 push 0
// 00786081  8d4319               lea eax, [ebx + 0x19]
// 00786084  51                   push ecx
// 00786085  50                   push eax
// 00786086  52                   push edx
// 00786087  898424a8000000       mov dword ptr [esp + 0xa8], eax
// 0078608e  ffd6                 call esi
// 00786090  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00786094  8b5704               mov edx, dword ptr [edi + 4]
// 00786097  6a00                 push 0
// 00786099  8d431a               lea eax, [ebx + 0x1a]
// 0078609c  51                   push ecx
// 0078609d  50                   push eax
// 0078609e  52                   push edx
// 0078609f  89842498000000       mov dword ptr [esp + 0x98], eax
// 007860a6  ffd6                 call esi
// 007860a8  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007860ac  8b5704               mov edx, dword ptr [edi + 4]
// 007860af  6a00                 push 0
// 007860b1  8d431b               lea eax, [ebx + 0x1b]
// 007860b4  51                   push ecx
// 007860b5  50                   push eax
// 007860b6  52                   push edx
// 007860b7  898424ac000000       mov dword ptr [esp + 0xac], eax
// 007860be  ffd6                 call esi
// 007860c0  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007860c4  8b5704               mov edx, dword ptr [edi + 4]
// 007860c7  6a00                 push 0
// 007860c9  8d431c               lea eax, [ebx + 0x1c]
// 007860cc  51                   push ecx
// 007860cd  50                   push eax
// 007860ce  52                   push edx
// 007860cf  898424a0000000       mov dword ptr [esp + 0xa0], eax
// 007860d6  ffd6                 call esi
// 007860d8  8d431d               lea eax, [ebx + 0x1d]
// 007860db  898424b8000000       mov dword ptr [esp + 0xb8], eax
// 007860e2  6a00                 push 0
// 007860e4  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 007860eb  8b5704               mov edx, dword ptr [edi + 4]
// 007860ee  51                   push ecx
// 007860ef  50                   push eax
// 007860f0  52                   push edx
// 007860f1  ffd6                 call esi
// 007860f3  8b8c24b0000000       mov ecx, dword ptr [esp + 0xb0]
// 007860fa  8b5704               mov edx, dword ptr [edi + 4]
// 007860fd  6a00                 push 0
// 007860ff  8d431e               lea eax, [ebx + 0x1e]
// 00786102  51                   push ecx
// 00786103  50                   push eax
// 00786104  52                   push edx
// 00786105  898424cc000000       mov dword ptr [esp + 0xcc], eax
// 0078610c  ffd6                 call esi
// 0078610e  6a00                 push 0
// 00786110  8d45ff               lea eax, [ebp - 1]
// 00786113  50                   push eax
// 00786114  8d4b1f               lea ecx, [ebx + 0x1f]
// 00786117  8944244c             mov dword ptr [esp + 0x4c], eax
// 0078611b  8b4704               mov eax, dword ptr [edi + 4]
// 0078611e  51                   push ecx
// 0078611f  50                   push eax
// 00786120  898c24d0000000       mov dword ptr [esp + 0xd0], ecx
// 00786127  ffd6                 call esi
// 00786129  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00786131  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00786135  8b5704               mov edx, dword ptr [edi + 4]
// 00786138  6a00                 push 0
// 0078613a  03cd                 add ecx, ebp
// 0078613c  51                   push ecx
// 0078613d  8d4320               lea eax, [ebx + 0x20]
// 00786140  50                   push eax
// 00786141  52                   push edx
// 00786142  ffd6                 call esi
// 00786144  8b442410             mov eax, dword ptr [esp + 0x10]
// 00786148  40                   inc eax
// 00786149  83f811               cmp eax, 0x11
// 0078614c  89442410             mov dword ptr [esp + 0x10], eax
// 00786150  7cdf                 jl 0x786131
// 00786152  8b4f04               mov ecx, dword ptr [edi + 4]
// 00786155  6a00                 push 0
// 00786157  8d4511               lea eax, [ebp + 0x11]
// 0078615a  50                   push eax
// 0078615b  8944243c             mov dword ptr [esp + 0x3c], eax
// 0078615f  8b8424c8000000       mov eax, dword ptr [esp + 0xc8]
// 00786166  50                   push eax
// 00786167  51                   push ecx
// 00786168  ffd6                 call esi
// 0078616a  8b9424bc000000       mov edx, dword ptr [esp + 0xbc]
// 00786171  6a00                 push 0
// 00786173  8d4512               lea eax, [ebp + 0x12]
// 00786176  50                   push eax
// 00786177  8944241c             mov dword ptr [esp + 0x1c], eax
// 0078617b  8b4704               mov eax, dword ptr [edi + 4]
// 0078617e  52                   push edx
// 0078617f  50                   push eax
// 00786180  ffd6                 call esi
// 00786182  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00786186  8b9424b8000000       mov edx, dword ptr [esp + 0xb8]
// 0078618d  8b4704               mov eax, dword ptr [edi + 4]
// 00786190  6a00                 push 0
// 00786192  51                   push ecx
// 00786193  52                   push edx
// 00786194  50                   push eax
// 00786195  ffd6                 call esi
// 00786197  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 0078619e  8b5704               mov edx, dword ptr [edi + 4]
// 007861a1  6a00                 push 0
// 007861a3  8d4513               lea eax, [ebp + 0x13]
// 007861a6  50                   push eax
// 007861a7  51                   push ecx
// 007861a8  52                   push edx
// 007861a9  8944242c             mov dword ptr [esp + 0x2c], eax
// 007861ad  ffd6                 call esi
// 007861af  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007861b3  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 007861ba  8b5704               mov edx, dword ptr [edi + 4]
// 007861bd  6a00                 push 0
// 007861bf  50                   push eax
// 007861c0  51                   push ecx
// 007861c1  52                   push edx
// 007861c2  ffd6                 call esi
// 007861c4  8b4f04               mov ecx, dword ptr [edi + 4]
// 007861c7  6a00                 push 0
// 007861c9  8d4514               lea eax, [ebp + 0x14]
// 007861cc  50                   push eax
// 007861cd  89442420             mov dword ptr [esp + 0x20], eax
// 007861d1  8b842490000000       mov eax, dword ptr [esp + 0x90]
// 007861d8  50                   push eax
// 007861d9  51                   push ecx
// 007861da  ffd6                 call esi
// 007861dc  8b542418             mov edx, dword ptr [esp + 0x18]
// 007861e0  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 007861e7  8b4f04               mov ecx, dword ptr [edi + 4]
// 007861ea  6a00                 push 0
// 007861ec  52                   push edx
// 007861ed  50                   push eax
// 007861ee  51                   push ecx
// 007861ef  ffd6                 call esi
// 007861f1  8b542454             mov edx, dword ptr [esp + 0x54]
// 007861f5  6a00                 push 0
// 007861f7  8d4515               lea eax, [ebp + 0x15]
// 007861fa  50                   push eax
// 007861fb  89442438             mov dword ptr [esp + 0x38], eax
// 007861ff  8b4704               mov eax, dword ptr [edi + 4]
// 00786202  52                   push edx
// 00786203  50                   push eax
// 00786204  ffd6                 call esi
// 00786206  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0078620a  8b542464             mov edx, dword ptr [esp + 0x64]
// 0078620e  8b4704               mov eax, dword ptr [edi + 4]
// 00786211  6a00                 push 0
// 00786213  51                   push ecx
// 00786214  52                   push edx
// 00786215  50                   push eax
// 00786216  ffd6                 call esi
// 00786218  8d4516               lea eax, [ebp + 0x16]
// 0078621b  6a00                 push 0
// 0078621d  89442450             mov dword ptr [esp + 0x50], eax
// 00786221  50                   push eax
// 00786222  8b8c24ac000000       mov ecx, dword ptr [esp + 0xac]
// 00786229  8b5704               mov edx, dword ptr [edi + 4]
// 0078622c  51                   push ecx
// 0078622d  52                   push edx
// 0078622e  ffd6                 call esi
// 00786230  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00786234  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 00786238  8b5704               mov edx, dword ptr [edi + 4]
// 0078623b  6a00                 push 0
// 0078623d  50                   push eax
// 0078623e  51                   push ecx
// 0078623f  52                   push edx
// 00786240  ffd6                 call esi
// 00786242  8b4f04               mov ecx, dword ptr [edi + 4]
// 00786245  6a00                 push 0
// 00786247  8d4517               lea eax, [ebp + 0x17]
// 0078624a  50                   push eax
// 0078624b  89442434             mov dword ptr [esp + 0x34], eax
// 0078624f  8b442464             mov eax, dword ptr [esp + 0x64]
// 00786253  50                   push eax
// 00786254  51                   push ecx
// 00786255  ffd6                 call esi
// 00786257  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0078625b  8b442474             mov eax, dword ptr [esp + 0x74]
// 0078625f  8b4f04               mov ecx, dword ptr [edi + 4]
// 00786262  6a00                 push 0
// 00786264  52                   push edx
// 00786265  50                   push eax
// 00786266  51                   push ecx
// 00786267  ffd6                 call esi
// 00786269  8b9424ac000000       mov edx, dword ptr [esp + 0xac]
// 00786270  6a00                 push 0
// 00786272  8d4518               lea eax, [ebp + 0x18]
// 00786275  50                   push eax
// 00786276  8b4704               mov eax, dword ptr [edi + 4]
// 00786279  52                   push edx
// 0078627a  50                   push eax
// 0078627b  ffd6                 call esi
// 0078627d  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 00786281  8b5704               mov edx, dword ptr [edi + 4]
// 00786284  6a00                 push 0
// 00786286  8d4518               lea eax, [ebp + 0x18]
// 00786289  50                   push eax
// 0078628a  51                   push ecx
// 0078628b  52                   push edx
// 0078628c  ffd6                 call esi
// 0078628e  8b4f04               mov ecx, dword ptr [edi + 4]
// 00786291  6a00                 push 0
// 00786293  8d4518               lea eax, [ebp + 0x18]
// 00786296  50                   push eax
// 00786297  8b8424bc000000       mov eax, dword ptr [esp + 0xbc]
// 0078629e  50                   push eax
// 0078629f  51                   push ecx
// 007862a0  ffd6                 call esi
// 007862a2  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 007862a9  6a00                 push 0
// 007862ab  8d4518               lea eax, [ebp + 0x18]
// 007862ae  50                   push eax
// 007862af  8b4704               mov eax, dword ptr [edi + 4]
// 007862b2  52                   push edx
// 007862b3  50                   push eax
// 007862b4  ffd6                 call esi
// 007862b6  8b8c24a8000000       mov ecx, dword ptr [esp + 0xa8]
// 007862bd  8b5704               mov edx, dword ptr [edi + 4]
// 007862c0  6a00                 push 0
// 007862c2  8d4518               lea eax, [ebp + 0x18]
// 007862c5  50                   push eax
// 007862c6  51                   push ecx
// 007862c7  52                   push edx
// 007862c8  ffd6                 call esi
// 007862ca  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007862ce  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 007862d5  8b5704               mov edx, dword ptr [edi + 4]
// 007862d8  6a00                 push 0
// 007862da  50                   push eax
// 007862db  51                   push ecx
// 007862dc  52                   push edx
// 007862dd  ffd6                 call esi
// 007862df  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007862e3  6a00                 push 0
// 007862e5  50                   push eax
// 007862e6  8b8c24a8000000       mov ecx, dword ptr [esp + 0xa8]
// 007862ed  8b5704               mov edx, dword ptr [edi + 4]
// 007862f0  51                   push ecx
// 007862f1  52                   push edx
// 007862f2  ffd6                 call esi
// 007862f4  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 007862f8  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 007862ff  8b5704               mov edx, dword ptr [edi + 4]
// 00786302  6a00                 push 0
// 00786304  50                   push eax
// 00786305  51                   push ecx
// 00786306  52                   push edx
// 00786307  ffd6                 call esi
// 00786309  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0078630d  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00786311  8b5704               mov edx, dword ptr [edi + 4]
// 00786314  6a00                 push 0
// 00786316  50                   push eax
// 00786317  51                   push ecx
// 00786318  52                   push edx
// 00786319  ffd6                 call esi
// 0078631b  8b442430             mov eax, dword ptr [esp + 0x30]
// 0078631f  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00786323  8b5704               mov edx, dword ptr [edi + 4]
// 00786326  6a00                 push 0
// 00786328  50                   push eax
// 00786329  51                   push ecx
// 0078632a  52                   push edx
// 0078632b  ffd6                 call esi
// 0078632d  8b442430             mov eax, dword ptr [esp + 0x30]
// 00786331  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00786335  8b5704               mov edx, dword ptr [edi + 4]
// 00786338  6a00                 push 0
// 0078633a  50                   push eax
// 0078633b  51                   push ecx
// 0078633c  52                   push edx
// 0078633d  ffd6                 call esi
// 0078633f  8b442418             mov eax, dword ptr [esp + 0x18]
// 00786343  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 00786347  8b5704               mov edx, dword ptr [edi + 4]
// 0078634a  6a00                 push 0
// 0078634c  50                   push eax
// 0078634d  51                   push ecx
// 0078634e  52                   push edx
// 0078634f  ffd6                 call esi
// 00786351  8b442418             mov eax, dword ptr [esp + 0x18]
// 00786355  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 0078635c  8b5704               mov edx, dword ptr [edi + 4]
// 0078635f  6a00                 push 0
// 00786361  50                   push eax
// 00786362  51                   push ecx
// 00786363  52                   push edx
// 00786364  ffd6                 call esi
// 00786366  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0078636a  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0078636e  8b5704               mov edx, dword ptr [edi + 4]
// 00786371  6a00                 push 0
// 00786373  50                   push eax
// 00786374  51                   push ecx
// 00786375  52                   push edx
// 00786376  ffd6                 call esi
// 00786378  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0078637c  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00786380  8b5704               mov edx, dword ptr [edi + 4]
// 00786383  6a00                 push 0
// 00786385  50                   push eax
// 00786386  51                   push ecx
// 00786387  52                   push edx
// 00786388  ffd6                 call esi
// 0078638a  8b442414             mov eax, dword ptr [esp + 0x14]
// 0078638e  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00786392  8b5704               mov edx, dword ptr [edi + 4]
// 00786395  6a00                 push 0
// 00786397  50                   push eax
// 00786398  51                   push ecx
// 00786399  52                   push edx
// 0078639a  ffd6                 call esi
// 0078639c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007863a0  8d4302               lea eax, [ebx + 2]
// 007863a3  898424c8000000       mov dword ptr [esp + 0xc8], eax
// 007863aa  6a00                 push 0
// 007863ac  8b5704               mov edx, dword ptr [edi + 4]
// 007863af  51                   push ecx
// 007863b0  50                   push eax
// 007863b1  52                   push edx
// 007863b2  ffd6                 call esi
// 007863b4  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007863b8  8b5704               mov edx, dword ptr [edi + 4]
// 007863bb  6a00                 push 0
// 007863bd  8d4301               lea eax, [ebx + 1]
// 007863c0  51                   push ecx
// 007863c1  50                   push eax
// 007863c2  52                   push edx
// 007863c3  898424d4000000       mov dword ptr [esp + 0xd4], eax
// 007863ca  ffd6                 call esi
// 007863cc  c744241000000000     mov dword ptr [esp + 0x10], 0
// 007863d4  8b442410             mov eax, dword ptr [esp + 0x10]
// 007863d8  8b4f04               mov ecx, dword ptr [edi + 4]
// 007863db  6a00                 push 0
// 007863dd  03c5                 add eax, ebp
// 007863df  50                   push eax
// 007863e0  53                   push ebx
// 007863e1  51                   push ecx
// 007863e2  ffd6                 call esi
// 007863e4  8b442410             mov eax, dword ptr [esp + 0x10]
// 007863e8  40                   inc eax
// 007863e9  83f811               cmp eax, 0x11
// 007863ec  89442410             mov dword ptr [esp + 0x10], eax
// 007863f0  7ce2                 jl 0x7863d4
// 007863f2  33db                 xor ebx, ebx
// 007863f4  8b442450             mov eax, dword ptr [esp + 0x50]
// 007863f8  8b4f04               mov ecx, dword ptr [edi + 4]
// 007863fb  6a00                 push 0
// 007863fd  8d542b01             lea edx, [ebx + ebp + 1]
// 00786401  52                   push edx
// 00786402  50                   push eax
// 00786403  51                   push ecx
// 00786404  ffd6                 call esi
// 00786406  43                   inc ebx
// 00786407  83fb0f               cmp ebx, 0xf
// 0078640a  7ce8                 jl 0x7863f4
// 0078640c  8b542438             mov edx, dword ptr [esp + 0x38]
// 00786410  8b4704               mov eax, dword ptr [edi + 4]
// 00786413  6a00                 push 0
// 00786415  8d5d10               lea ebx, [ebp + 0x10]
// 00786418  53                   push ebx
// 00786419  52                   push edx
// 0078641a  50                   push eax
// 0078641b  895c2450             mov dword ptr [esp + 0x50], ebx
// 0078641f  ffd6                 call esi
// 00786421  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 00786428  8b5704               mov edx, dword ptr [edi + 4]
// 0078642b  6a00                 push 0
// 0078642d  53                   push ebx
// 0078642e  51                   push ecx
// 0078642f  52                   push edx
// 00786430  ffd6                 call esi
// 00786432  8b442434             mov eax, dword ptr [esp + 0x34]
// 00786436  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 0078643a  8b5704               mov edx, dword ptr [edi + 4]
// 0078643d  6a00                 push 0
// 0078643f  50                   push eax
// 00786440  51                   push ecx
// 00786441  52                   push edx
// 00786442  ffd6                 call esi
// 00786444  8b442434             mov eax, dword ptr [esp + 0x34]
// 00786448  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0078644c  8b5704               mov edx, dword ptr [edi + 4]
// 0078644f  6a00                 push 0
// 00786451  50                   push eax
// 00786452  51                   push ecx
// 00786453  52                   push edx
// 00786454  ffd6                 call esi
// 00786456  8b442414             mov eax, dword ptr [esp + 0x14]
// 0078645a  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0078645e  8b5704               mov edx, dword ptr [edi + 4]
// 00786461  6a00                 push 0
// 00786463  50                   push eax
// 00786464  51                   push ecx
// 00786465  52                   push edx
// 00786466  ffd6                 call esi
// 00786468  8b442414             mov eax, dword ptr [esp + 0x14]
// 0078646c  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00786470  8b5704               mov edx, dword ptr [edi + 4]
// 00786473  6a00                 push 0
// 00786475  50                   push eax
// 00786476  51                   push ecx
// 00786477  52                   push edx
// 00786478  ffd6                 call esi
// 0078647a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0078647e  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 00786485  8b5704               mov edx, dword ptr [edi + 4]
// 00786488  6a00                 push 0
// 0078648a  50                   push eax
// 0078648b  51                   push ecx
// 0078648c  52                   push edx
// 0078648d  ffd6                 call esi
// 0078648f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00786493  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 0078649a  8b5704               mov edx, dword ptr [edi + 4]
// 0078649d  6a00                 push 0
// 0078649f  50                   push eax
// 007864a0  51                   push ecx
// 007864a1  52                   push edx
// 007864a2  ffd6                 call esi
// 007864a4  8b442418             mov eax, dword ptr [esp + 0x18]
// 007864a8  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 007864af  8b5704               mov edx, dword ptr [edi + 4]
// 007864b2  6a00                 push 0
// 007864b4  50                   push eax
// 007864b5  51                   push ecx
// 007864b6  52                   push edx
// 007864b7  ffd6                 call esi
// 007864b9  8b442418             mov eax, dword ptr [esp + 0x18]
// 007864bd  8b8c24a8000000       mov ecx, dword ptr [esp + 0xa8]
// 007864c4  8b5704               mov edx, dword ptr [edi + 4]
// 007864c7  6a00                 push 0
// 007864c9  50                   push eax
// 007864ca  51                   push ecx
// 007864cb  52                   push edx
// 007864cc  ffd6                 call esi
// 007864ce  6a00                 push 0
// 007864d0  8b442434             mov eax, dword ptr [esp + 0x34]
// 007864d4  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 007864db  8b5704               mov edx, dword ptr [edi + 4]
// 007864de  50                   push eax
// 007864df  51                   push ecx
// 007864e0  52                   push edx
// 007864e1  ffd6                 call esi
// 007864e3  8b442430             mov eax, dword ptr [esp + 0x30]
// 007864e7  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 007864ee  8b5704               mov edx, dword ptr [edi + 4]
// 007864f1  6a00                 push 0
// 007864f3  50                   push eax
// 007864f4  51                   push ecx
// 007864f5  52                   push edx
// 007864f6  ffd6                 call esi
// 007864f8  8b442430             mov eax, dword ptr [esp + 0x30]
// 007864fc  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 00786500  8b5704               mov edx, dword ptr [edi + 4]
// 00786503  6a00                 push 0
// 00786505  50                   push eax
// 00786506  51                   push ecx
// 00786507  52                   push edx
// 00786508  ffd6                 call esi
// 0078650a  8b442418             mov eax, dword ptr [esp + 0x18]
// 0078650e  8b8c24ac000000       mov ecx, dword ptr [esp + 0xac]
// 00786515  8b5704               mov edx, dword ptr [edi + 4]
// 00786518  6a00                 push 0
// 0078651a  50                   push eax
// 0078651b  51                   push ecx
// 0078651c  52                   push edx
// 0078651d  ffd6                 call esi
// 0078651f  8b442418             mov eax, dword ptr [esp + 0x18]
// 00786523  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00786527  8b5704               mov edx, dword ptr [edi + 4]
// 0078652a  6a00                 push 0
// 0078652c  50                   push eax
// 0078652d  51                   push ecx
// 0078652e  52                   push edx
// 0078652f  ffd6                 call esi
// 00786531  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00786535  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00786539  8b5704               mov edx, dword ptr [edi + 4]
// 0078653c  6a00                 push 0
// 0078653e  50                   push eax
// 0078653f  51                   push ecx
// 00786540  52                   push edx
// 00786541  ffd6                 call esi
// 00786543  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00786547  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 0078654b  8b5704               mov edx, dword ptr [edi + 4]
// 0078654e  6a00                 push 0
// 00786550  50                   push eax
// 00786551  51                   push ecx
// 00786552  52                   push edx
// 00786553  ffd6                 call esi
// 00786555  8b442414             mov eax, dword ptr [esp + 0x14]
// 00786559  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 00786560  8b5704               mov edx, dword ptr [edi + 4]
// 00786563  6a00                 push 0
// 00786565  50                   push eax
// 00786566  51                   push ecx
// 00786567  52                   push edx
// 00786568  ffd6                 call esi
// 0078656a  8b442414             mov eax, dword ptr [esp + 0x14]
// 0078656e  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00786572  8b5704               mov edx, dword ptr [edi + 4]
// 00786575  6a00                 push 0
// 00786577  50                   push eax
// 00786578  51                   push ecx
// 00786579  52                   push edx
// 0078657a  ffd6                 call esi
// 0078657c  8b442434             mov eax, dword ptr [esp + 0x34]
// 00786580  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00786584  8b5704               mov edx, dword ptr [edi + 4]
// 00786587  6a00                 push 0
// 00786589  50                   push eax
// 0078658a  51                   push ecx
// 0078658b  52                   push edx
// 0078658c  ffd6                 call esi
// 0078658e  8b442434             mov eax, dword ptr [esp + 0x34]
// 00786592  6a00                 push 0
// 00786594  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 0078659b  8b5704               mov edx, dword ptr [edi + 4]
// 0078659e  50                   push eax
// 0078659f  51                   push ecx
// 007865a0  52                   push edx
// 007865a1  ffd6                 call esi
// 007865a3  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 007865aa  8b4f04               mov ecx, dword ptr [edi + 4]
// 007865ad  6a00                 push 0
// 007865af  53                   push ebx
// 007865b0  50                   push eax
// 007865b1  51                   push ecx
// 007865b2  ffd6                 call esi
// 007865b4  8b94249c000000       mov edx, dword ptr [esp + 0x9c]
// 007865bb  8b4704               mov eax, dword ptr [edi + 4]
// 007865be  6a00                 push 0
// 007865c0  53                   push ebx
// 007865c1  52                   push edx
// 007865c2  50                   push eax
// 007865c3  ffd6                 call esi
// 007865c5  33db                 xor ebx, ebx
// 007865c7  eb07                 jmp 0x7865d0
// 007865c9  8da42400000000       lea esp, [esp]
// 007865d0  8b942490000000       mov edx, dword ptr [esp + 0x90]
// 007865d7  8b4704               mov eax, dword ptr [edi + 4]
// 007865da  6a00                 push 0
// 007865dc  8d4c2b01             lea ecx, [ebx + ebp + 1]
// 007865e0  51                   push ecx
// 007865e1  52                   push edx
// 007865e2  50                   push eax
// 007865e3  ffd6                 call esi
// 007865e5  43                   inc ebx
// 007865e6  83fb0f               cmp ebx, 0xf
// 007865e9  7ce5                 jl 0x7865d0
// 007865eb  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 007865f2  8b5704               mov edx, dword ptr [edi + 4]
// 007865f5  6a00                 push 0
// 007865f7  55                   push ebp
// 007865f8  51                   push ecx
// 007865f9  52                   push edx
// 007865fa  ffd6                 call esi
// 007865fc  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 00786603  8b4f04               mov ecx, dword ptr [edi + 4]
// 00786606  6a00                 push 0
// 00786608  55                   push ebp
// 00786609  50                   push eax
// 0078660a  51                   push ecx
// 0078660b  ffd6                 call esi
// 0078660d  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 00786611  8b942498000000       mov edx, dword ptr [esp + 0x98]
// 00786618  8b4704               mov eax, dword ptr [edi + 4]
// 0078661b  6a00                 push 0
// 0078661d  53                   push ebx
// 0078661e  52                   push edx
// 0078661f  50                   push eax
// 00786620  ffd6                 call esi
// 00786622  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00786626  8b5704               mov edx, dword ptr [edi + 4]
// 00786629  6a00                 push 0
// 0078662b  53                   push ebx
// 0078662c  51                   push ecx
// 0078662d  52                   push edx
// 0078662e  ffd6                 call esi
// 00786630  8b9c24b0000000       mov ebx, dword ptr [esp + 0xb0]
// 00786637  8b442464             mov eax, dword ptr [esp + 0x64]
// 0078663b  8b4f04               mov ecx, dword ptr [edi + 4]
// 0078663e  6a00                 push 0
// 00786640  53                   push ebx
// 00786641  50                   push eax
// 00786642  51                   push ecx
// 00786643  ffd6                 call esi
// 00786645  8b9424a4000000       mov edx, dword ptr [esp + 0xa4]
// 0078664c  8b4704               mov eax, dword ptr [edi + 4]
// 0078664f  6a00                 push 0
// 00786651  53                   push ebx
// 00786652  52                   push edx
// 00786653  50                   push eax
// 00786654  ffd6                 call esi
// 00786656  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0078665a  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 0078665e  8b4704               mov eax, dword ptr [edi + 4]
// 00786661  6a00                 push 0
// 00786663  51                   push ecx
// 00786664  52                   push edx
// 00786665  50                   push eax
// 00786666  ffd6                 call esi
// 00786668  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0078666c  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 00786670  8b4704               mov eax, dword ptr [edi + 4]
// 00786673  6a00                 push 0
// 00786675  51                   push ecx
// 00786676  52                   push edx
// 00786677  50                   push eax
// 00786678  ffd6                 call esi
// 0078667a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0078667e  8b542474             mov edx, dword ptr [esp + 0x74]
// 00786682  8b4704               mov eax, dword ptr [edi + 4]
// 00786685  6a00                 push 0
// 00786687  51                   push ecx
// 00786688  52                   push edx
// 00786689  50                   push eax
// 0078668a  ffd6                 call esi
// 0078668c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00786690  8b9424ac000000       mov edx, dword ptr [esp + 0xac]
// 00786697  8b4704               mov eax, dword ptr [edi + 4]
// 0078669a  6a00                 push 0
// 0078669c  51                   push ecx
// 0078669d  52                   push edx
// 0078669e  50                   push eax
// 0078669f  ffd6                 call esi
// 007866a1  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007866a5  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 007866a9  6a00                 push 0
// 007866ab  51                   push ecx
// 007866ac  52                   push edx
// 007866ad  8b4704               mov eax, dword ptr [edi + 4]
// 007866b0  50                   push eax
// 007866b1  ffd6                 call esi
// 007866b3  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007866b7  8b9424b4000000       mov edx, dword ptr [esp + 0xb4]
// 007866be  8b4704               mov eax, dword ptr [edi + 4]
// 007866c1  6a00                 push 0
// 007866c3  51                   push ecx
// 007866c4  52                   push edx
// 007866c5  50                   push eax
// 007866c6  ffd6                 call esi
// 007866c8  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007866cc  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 007866d3  8b4704               mov eax, dword ptr [edi + 4]
// 007866d6  6a00                 push 0
// 007866d8  51                   push ecx
// 007866d9  52                   push edx
// 007866da  50                   push eax
// 007866db  ffd6                 call esi
// 007866dd  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007866e1  8b9424a8000000       mov edx, dword ptr [esp + 0xa8]
// 007866e8  8b4704               mov eax, dword ptr [edi + 4]
// 007866eb  6a00                 push 0
// 007866ed  51                   push ecx
// 007866ee  52                   push edx
// 007866ef  50                   push eax
// 007866f0  ffd6                 call esi
// 007866f2  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007866f6  8b94248c000000       mov edx, dword ptr [esp + 0x8c]
// 007866fd  8b4704               mov eax, dword ptr [edi + 4]
// 00786700  6a00                 push 0
// 00786702  51                   push ecx
// 00786703  52                   push edx
// 00786704  50                   push eax
// 00786705  ffd6                 call esi
// 00786707  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0078670b  8b9424a0000000       mov edx, dword ptr [esp + 0xa0]
// 00786712  8b4704               mov eax, dword ptr [edi + 4]
// 00786715  6a00                 push 0
// 00786717  51                   push ecx
// 00786718  52                   push edx
// 00786719  50                   push eax
// 0078671a  ffd6                 call esi
// 0078671c  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00786720  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 00786727  8b4704               mov eax, dword ptr [edi + 4]
// 0078672a  6a00                 push 0
// 0078672c  51                   push ecx
// 0078672d  52                   push edx
// 0078672e  50                   push eax
// 0078672f  ffd6                 call esi
// 00786731  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00786735  8b5704               mov edx, dword ptr [edi + 4]
// 00786738  6a00                 push 0
// 0078673a  53                   push ebx
// 0078673b  51                   push ecx
// 0078673c  52                   push edx
// 0078673d  ffd6                 call esi
// 0078673f  8b442468             mov eax, dword ptr [esp + 0x68]
// 00786743  8b4f04               mov ecx, dword ptr [edi + 4]
// 00786746  6a00                 push 0
// 00786748  53                   push ebx
// 00786749  50                   push eax
// 0078674a  51                   push ecx
// 0078674b  ffd6                 call esi
// 0078674d  8b542444             mov edx, dword ptr [esp + 0x44]
// 00786751  8b442470             mov eax, dword ptr [esp + 0x70]
// 00786755  8b4f04               mov ecx, dword ptr [edi + 4]
// 00786758  6a00                 push 0
// 0078675a  52                   push edx
// 0078675b  50                   push eax
// 0078675c  51                   push ecx
// 0078675d  ffd6                 call esi
// 0078675f  8b542444             mov edx, dword ptr [esp + 0x44]
// 00786763  8b442478             mov eax, dword ptr [esp + 0x78]
// 00786767  8b4f04               mov ecx, dword ptr [edi + 4]
// 0078676a  6a00                 push 0
// 0078676c  52                   push edx
// 0078676d  50                   push eax
// 0078676e  51                   push ecx
// 0078676f  ffd6                 call esi
// 00786771  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 00786778  8b4704               mov eax, dword ptr [edi + 4]
// 0078677b  6a00                 push 0
// 0078677d  55                   push ebp
// 0078677e  52                   push edx
// 0078677f  50                   push eax
// 00786780  ffd6                 call esi
// 00786782  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00786786  8b5704               mov edx, dword ptr [edi + 4]
// 00786789  6a00                 push 0
// 0078678b  55                   push ebp
// 0078678c  51                   push ecx
// 0078678d  52                   push edx
// 0078678e  ffd6                 call esi
// 00786790  896c2410             mov dword ptr [esp + 0x10], ebp
// 00786794  c744243811000000     mov dword ptr [esp + 0x38], 0x11
// 0078679c  8d642400             lea esp, [esp]
// 007867a0  8b442410             mov eax, dword ptr [esp + 0x10]
// 007867a4  8b8c24c4000000       mov ecx, dword ptr [esp + 0xc4]
// 007867ab  8b5704               mov edx, dword ptr [edi + 4]
// 007867ae  68ffffff00           push 0xffffff
// 007867b3  50                   push eax
// 007867b4  51                   push ecx
// 007867b5  52                   push edx
// 007867b6  ffd6                 call esi
// 007867b8  8b442410             mov eax, dword ptr [esp + 0x10]
// 007867bc  8b8c24c8000000       mov ecx, dword ptr [esp + 0xc8]
// 007867c3  8b5704               mov edx, dword ptr [edi + 4]
// 007867c6  68ffffff00           push 0xffffff
// 007867cb  50                   push eax
// 007867cc  51                   push ecx
// 007867cd  52                   push edx
// 007867ce  ffd6                 call esi
// 007867d0  8b442410             mov eax, dword ptr [esp + 0x10]
// 007867d4  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007867d8  8b5704               mov edx, dword ptr [edi + 4]
// 007867db  68ffffff00           push 0xffffff
// 007867e0  50                   push eax
// 007867e1  51                   push ecx
// 007867e2  52                   push edx
// 007867e3  ffd6                 call esi
// 007867e5  b801000000           mov eax, 1
// 007867ea  01442410             add dword ptr [esp + 0x10], eax
// 007867ee  29442438             sub dword ptr [esp + 0x38], eax
// 007867f2  75ac                 jne 0x7867a0
// 007867f4  8b442450             mov eax, dword ptr [esp + 0x50]
// 007867f8  8b4f04               mov ecx, dword ptr [edi + 4]
// 007867fb  68ffffff00           push 0xffffff
// 00786800  55                   push ebp
// 00786801  50                   push eax
// 00786802  51                   push ecx
// 00786803  ffd6                 call esi
// 00786805  8b542440             mov edx, dword ptr [esp + 0x40]
// 00786809  8b442450             mov eax, dword ptr [esp + 0x50]
// 0078680d  8b4f04               mov ecx, dword ptr [edi + 4]
// 00786810  68ffffff00           push 0xffffff
// 00786815  52                   push edx
// 00786816  50                   push eax
// 00786817  51                   push ecx
// 00786818  ffd6                 call esi
// 0078681a  896c2410             mov dword ptr [esp + 0x10], ebp
// 0078681e  c744244811000000     mov dword ptr [esp + 0x48], 0x11
// 00786826  eb08                 jmp 0x786830
// 00786828  8da42400000000       lea esp, [esp]
// 0078682f  90                   nop 
// 00786830  8b542410             mov edx, dword ptr [esp + 0x10]
// 00786834  8b8424b8000000       mov eax, dword ptr [esp + 0xb8]
// 0078683b  8b4f04               mov ecx, dword ptr [edi + 4]
// 0078683e  68ffffff00           push 0xffffff
// 00786843  52                   push edx
// 00786844  50                   push eax
// 00786845  51                   push ecx
// 00786846  ffd6                 call esi
// 00786848  8b542410             mov edx, dword ptr [esp + 0x10]
// 0078684c  8b8424bc000000       mov eax, dword ptr [esp + 0xbc]
// 00786853  8b4f04               mov ecx, dword ptr [edi + 4]
// 00786856  68ffffff00           push 0xffffff
// 0078685b  52                   push edx
// 0078685c  50                   push eax
// 0078685d  51                   push ecx
// 0078685e  ffd6                 call esi
// 00786860  8b542410             mov edx, dword ptr [esp + 0x10]
// 00786864  8b8424c0000000       mov eax, dword ptr [esp + 0xc0]
// 0078686b  8b4f04               mov ecx, dword ptr [edi + 4]
// 0078686e  68ffffff00           push 0xffffff
// 00786873  52                   push edx
// 00786874  50                   push eax
// 00786875  51                   push ecx
// 00786876  ffd6                 call esi
// 00786878  b801000000           mov eax, 1
// 0078687d  01442410             add dword ptr [esp + 0x10], eax
// 00786881  29442448             sub dword ptr [esp + 0x48], eax
// 00786885  75a9                 jne 0x786830
// 00786887  8b5704               mov edx, dword ptr [edi + 4]
// 0078688a  68ffffff00           push 0xffffff
// 0078688f  55                   push ebp
// 00786890  8bac2498000000       mov ebp, dword ptr [esp + 0x98]
// 00786897  55                   push ebp
// 00786898  52                   push edx
// 00786899  ffd6                 call esi
// 0078689b  8b442440             mov eax, dword ptr [esp + 0x40]
// 0078689f  8b4f04               mov ecx, dword ptr [edi + 4]
// 007868a2  68ffffff00           push 0xffffff
// 007868a7  50                   push eax
// 007868a8  55                   push ebp
// 007868a9  51                   push ecx
// 007868aa  ffd6                 call esi
// 007868ac  8b6c2454             mov ebp, dword ptr [esp + 0x54]
// 007868b0  c744244005000000     mov dword ptr [esp + 0x40], 5
// 007868b8  eb06                 jmp 0x7868c0
// 007868ba  8d9b00000000         lea ebx, [ebx]
// 007868c0  8b542444             mov edx, dword ptr [esp + 0x44]
// 007868c4  68ffffff00           push 0xffffff
// 007868c9  52                   push edx
// 007868ca  8d45ea               lea eax, [ebp - 0x16]
// 007868cd  50                   push eax
// 007868ce  8b4704               mov eax, dword ptr [edi + 4]
// 007868d1  50                   push eax
// 007868d2  ffd6                 call esi
// 007868d4  8b4f04               mov ecx, dword ptr [edi + 4]
// 007868d7  68ffffff00           push 0xffffff
// 007868dc  53                   push ebx
// 007868dd  8d45ec               lea eax, [ebp - 0x14]
// 007868e0  50                   push eax
// 007868e1  51                   push ecx
// 007868e2  ffd6                 call esi
// 007868e4  8b542424             mov edx, dword ptr [esp + 0x24]
// 007868e8  68ffffff00           push 0xffffff
// 007868ed  52                   push edx
// 007868ee  8d45ee               lea eax, [ebp - 0x12]
// 007868f1  50                   push eax
// 007868f2  8b4704               mov eax, dword ptr [edi + 4]
// 007868f5  50                   push eax
// 007868f6  ffd6                 call esi
// 007868f8  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007868fc  8b5704               mov edx, dword ptr [edi + 4]
// 007868ff  68ffffff00           push 0xffffff
// 00786904  51                   push ecx
// 00786905  8d45f0               lea eax, [ebp - 0x10]
// 00786908  50                   push eax
// 00786909  52                   push edx
// 0078690a  ffd6                 call esi
// 0078690c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00786910  8b5704               mov edx, dword ptr [edi + 4]
// 00786913  68ffffff00           push 0xffffff
// 00786918  51                   push ecx
// 00786919  8d45f2               lea eax, [ebp - 0xe]
// 0078691c  50                   push eax
// 0078691d  52                   push edx
// 0078691e  ffd6                 call esi
// 00786920  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00786924  8b5704               mov edx, dword ptr [edi + 4]
// 00786927  68ffffff00           push 0xffffff
// 0078692c  51                   push ecx
// 0078692d  8d45f4               lea eax, [ebp - 0xc]
// 00786930  50                   push eax
// 00786931  52                   push edx
// 00786932  ffd6                 call esi
// 00786934  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00786938  8b5704               mov edx, dword ptr [edi + 4]
// 0078693b  68ffffff00           push 0xffffff
// 00786940  51                   push ecx
// 00786941  8d45f8               lea eax, [ebp - 8]
// 00786944  50                   push eax
// 00786945  52                   push edx
// 00786946  ffd6                 call esi
// 00786948  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0078694c  8b5704               mov edx, dword ptr [edi + 4]
// 0078694f  68ffffff00           push 0xffffff
// 00786954  51                   push ecx
// 00786955  8d45f6               lea eax, [ebp - 0xa]
// 00786958  50                   push eax
// 00786959  52                   push edx
// 0078695a  ffd6                 call esi
// 0078695c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00786960  8b5704               mov edx, dword ptr [edi + 4]
// 00786963  68ffffff00           push 0xffffff
// 00786968  51                   push ecx
// 00786969  8d45fa               lea eax, [ebp - 6]
// 0078696c  50                   push eax
// 0078696d  52                   push edx
// 0078696e  ffd6                 call esi
// 00786970  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00786974  8b5704               mov edx, dword ptr [edi + 4]
// 00786977  68ffffff00           push 0xffffff
// 0078697c  51                   push ecx
// 0078697d  8d45fc               lea eax, [ebp - 4]
// 00786980  50                   push eax
// 00786981  52                   push edx
// 00786982  ffd6                 call esi
// 00786984  8d45fe               lea eax, [ebp - 2]
// 00786987  68ffffff00           push 0xffffff
// 0078698c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00786990  8b5704               mov edx, dword ptr [edi + 4]
// 00786993  51                   push ecx
// 00786994  50                   push eax
// 00786995  52                   push edx
// 00786996  ffd6                 call esi
// 00786998  8b4704               mov eax, dword ptr [edi + 4]
// 0078699b  68ffffff00           push 0xffffff
// 007869a0  53                   push ebx
// 007869a1  55                   push ebp
// 007869a2  50                   push eax
// 007869a3  ffd6                 call esi
// 007869a5  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007869a9  8b5704               mov edx, dword ptr [edi + 4]
// 007869ac  68ffffff00           push 0xffffff
// 007869b1  51                   push ecx
// 007869b2  8d4502               lea eax, [ebp + 2]
// 007869b5  50                   push eax
// 007869b6  52                   push edx
// 007869b7  ffd6                 call esi
// 007869b9  8b442434             mov eax, dword ptr [esp + 0x34]
// 007869bd  8b4f04               mov ecx, dword ptr [edi + 4]
// 007869c0  68ffffff00           push 0xffffff
// 007869c5  50                   push eax
// 007869c6  8d4502               lea eax, [ebp + 2]
// 007869c9  50                   push eax
// 007869ca  51                   push ecx
// 007869cb  ffd6                 call esi
// 007869cd  8b542414             mov edx, dword ptr [esp + 0x14]
// 007869d1  8b4704               mov eax, dword ptr [edi + 4]
// 007869d4  68ffffff00           push 0xffffff
// 007869d9  52                   push edx
// 007869da  55                   push ebp
// 007869db  50                   push eax
// 007869dc  ffd6                 call esi
// 007869de  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007869e2  8b5704               mov edx, dword ptr [edi + 4]
// 007869e5  68ffffff00           push 0xffffff
// 007869ea  51                   push ecx
// 007869eb  8d45fe               lea eax, [ebp - 2]
// 007869ee  50                   push eax
// 007869ef  52                   push edx
// 007869f0  ffd6                 call esi
// 007869f2  8b442418             mov eax, dword ptr [esp + 0x18]
// 007869f6  8b4f04               mov ecx, dword ptr [edi + 4]
// 007869f9  68ffffff00           push 0xffffff
// 007869fe  50                   push eax
// 007869ff  8d45fc               lea eax, [ebp - 4]
// 00786a02  50                   push eax
// 00786a03  51                   push ecx
// 00786a04  ffd6                 call esi
// 00786a06  8b542430             mov edx, dword ptr [esp + 0x30]
// 00786a0a  68ffffff00           push 0xffffff
// 00786a0f  52                   push edx
// 00786a10  8d45fa               lea eax, [ebp - 6]
// 00786a13  50                   push eax
// 00786a14  8b4704               mov eax, dword ptr [edi + 4]
// 00786a17  50                   push eax
// 00786a18  ffd6                 call esi
// 00786a1a  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00786a1e  8b5704               mov edx, dword ptr [edi + 4]
// 00786a21  68ffffff00           push 0xffffff
// 00786a26  51                   push ecx
// 00786a27  8d45f6               lea eax, [ebp - 0xa]
// 00786a2a  50                   push eax
// 00786a2b  52                   push edx
// 00786a2c  ffd6                 call esi
// 00786a2e  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00786a32  8b4f04               mov ecx, dword ptr [edi + 4]
// 00786a35  68ffffff00           push 0xffffff
// 00786a3a  50                   push eax
// 00786a3b  8d45f8               lea eax, [ebp - 8]
// 00786a3e  50                   push eax
// 00786a3f  51                   push ecx
// 00786a40  ffd6                 call esi
// 00786a42  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00786a46  68ffffff00           push 0xffffff
// 00786a4b  8d45f4               lea eax, [ebp - 0xc]
// 00786a4e  52                   push edx
// 00786a4f  50                   push eax
// 00786a50  8b4704               mov eax, dword ptr [edi + 4]
// 00786a53  50                   push eax
// 00786a54  ffd6                 call esi
// 00786a56  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00786a5a  8b5704               mov edx, dword ptr [edi + 4]
// 00786a5d  68ffffff00           push 0xffffff
// 00786a62  51                   push ecx
// 00786a63  8d45f2               lea eax, [ebp - 0xe]
// 00786a66  50                   push eax
// 00786a67  52                   push edx
// 00786a68  ffd6                 call esi
// 00786a6a  8b442418             mov eax, dword ptr [esp + 0x18]
// 00786a6e  8b4f04               mov ecx, dword ptr [edi + 4]
// 00786a71  68ffffff00           push 0xffffff
// 00786a76  50                   push eax
// 00786a77  8d45f0               lea eax, [ebp - 0x10]
// 00786a7a  50                   push eax
// 00786a7b  51                   push ecx
// 00786a7c  ffd6                 call esi
// 00786a7e  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00786a82  68ffffff00           push 0xffffff
// 00786a87  52                   push edx
// 00786a88  8d45ee               lea eax, [ebp - 0x12]
// 00786a8b  50                   push eax
// 00786a8c  8b4704               mov eax, dword ptr [edi + 4]
// 00786a8f  50                   push eax
// 00786a90  ffd6                 call esi
// 00786a92  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00786a96  8b5704               mov edx, dword ptr [edi + 4]
// 00786a99  68ffffff00           push 0xffffff
// 00786a9e  51                   push ecx
// 00786a9f  8d45ec               lea eax, [ebp - 0x14]
// 00786aa2  50                   push eax
// 00786aa3  52                   push edx
// 00786aa4  ffd6                 call esi
// 00786aa6  8b442434             mov eax, dword ptr [esp + 0x34]
// 00786aaa  8b4f04               mov ecx, dword ptr [edi + 4]
// 00786aad  68ffffff00           push 0xffffff
// 00786ab2  50                   push eax
// 00786ab3  8d45ea               lea eax, [ebp - 0x16]
// 00786ab6  50                   push eax
// 00786ab7  51                   push ecx
// 00786ab8  ffd6                 call esi
// 00786aba  45                   inc ebp
// 00786abb  836c244001           sub dword ptr [esp + 0x40], 1
// 00786ac0  0f85fafdffff         jne 0x7868c0
// 00786ac6  5f                   pop edi
// 00786ac7  5e                   pop esi
// 00786ac8  5d                   pop ebp
// 00786ac9  5b                   pop ebx
// 00786aca  81c4bc000000         add esp, 0xbc
// 00786ad0  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTColorPageStandard.cpp (function ?DrawLargeSelectCell@CXTColorHex@@IAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPageStandard.cpp
