// roc 2009-12 0080d0c0  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 211 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080d0c0
//
// 0080d0c0  56                   push esi
// 0080d0c1  8bf1                 mov esi, ecx
// 0080d0c3  e87a931100           call 0x926442
// 0080d0c8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0080d0cc  8b442408             mov eax, dword ptr [esp + 8]
// 0080d0d0  8b542410             mov edx, dword ptr [esp + 0x10]
// 0080d0d4  894e28               mov dword ptr [esi + 0x28], ecx
// 0080d0d7  8d4e30               lea ecx, [esi + 0x30]
// 0080d0da  c70614329f00         mov dword ptr [esi], 0x9f3214
// 0080d0e0  894624               mov dword ptr [esi + 0x24], eax
// 0080d0e3  89562c               mov dword ptr [esi + 0x2c], edx
// 0080d0e6  e845d7ffff           call 0x80a830
// 0080d0eb  8d4e54               lea ecx, [esi + 0x54]
// 0080d0ee  e83dd7ffff           call 0x80a830
// 0080d0f3  8d4e78               lea ecx, [esi + 0x78]
// 0080d0f6  e835d7ffff           call 0x80a830
// 0080d0fb  8d8e9c000000         lea ecx, [esi + 0x9c]
// 0080d101  e82ad7ffff           call 0x80a830
// 0080d106  8d8ec0000000         lea ecx, [esi + 0xc0]
// 0080d10c  e81fd7ffff           call 0x80a830
// 0080d111  8d8ee4000000         lea ecx, [esi + 0xe4]
// 0080d117  e814d7ffff           call 0x80a830
// 0080d11c  8d8e08010000         lea ecx, [esi + 0x108]
// 0080d122  e809d7ffff           call 0x80a830
// 0080d127  8d8e2c010000         lea ecx, [esi + 0x12c]
// 0080d12d  e8fed6ffff           call 0x80a830
// 0080d132  8b442414             mov eax, dword ptr [esp + 0x14]
// 0080d136  33c9                 xor ecx, ecx
// 0080d138  898650010000         mov dword ptr [esi + 0x150], eax
// 0080d13e  898e54010000         mov dword ptr [esi + 0x154], ecx
// 0080d144  894e20               mov dword ptr [esi + 0x20], ecx
// 0080d147  3bc1                 cmp eax, ecx
// 0080d149  7442                 je 0x80d18d
// 0080d14b  8b4840               mov ecx, dword ptr [eax + 0x40]
// 0080d14e  894e40               mov dword ptr [esi + 0x40], ecx
// 0080d151  8b5040               mov edx, dword ptr [eax + 0x40]
// 0080d154  895664               mov dword ptr [esi + 0x64], edx
// 0080d157  8b4840               mov ecx, dword ptr [eax + 0x40]
// 0080d15a  898e88000000         mov dword ptr [esi + 0x88], ecx
// 0080d160  8b5040               mov edx, dword ptr [eax + 0x40]
// 0080d163  8996ac000000         mov dword ptr [esi + 0xac], edx
// 0080d169  8b4840               mov ecx, dword ptr [eax + 0x40]
// 0080d16c  898ed0000000         mov dword ptr [esi + 0xd0], ecx
// 0080d172  8b5040               mov edx, dword ptr [eax + 0x40]
// 0080d175  8996f4000000         mov dword ptr [esi + 0xf4], edx
// 0080d17b  8b4840               mov ecx, dword ptr [eax + 0x40]
// 0080d17e  898e18010000         mov dword ptr [esi + 0x118], ecx
// 0080d184  8b5040               mov edx, dword ptr [eax + 0x40]
// 0080d187  89963c010000         mov dword ptr [esi + 0x13c], edx
// 0080d18d  8bc6                 mov eax, esi
// 0080d18f  5e                   pop esi
// 0080d190  c21000               ret 0x10
// copied from an identical function in another client (function ??0CXTPImageManagerIcon@@QAE@IHHPAVCXTPImageManagerIconSet@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp