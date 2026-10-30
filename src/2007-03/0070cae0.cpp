// roc 2007-03 0070cae0  unit: seg_00700000  size: 421 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0070cae0
//
// 0070cae0  56                   push esi
// 0070cae1  57                   push edi
// 0070cae2  8bf1                 mov esi, ecx
// 0070cae4  e827f8ffff           call 0x70c310
// 0070cae9  6afe                 push -2
// 0070caeb  8d8ee0000000         lea ecx, [esi + 0xe0]
// 0070caf1  e81a84f4ff           call 0x654f10
// 0070caf6  e8a584f4ff           call 0x654fa0
// 0070cafb  6a14                 push 0x14
// 0070cafd  8bc8                 mov ecx, eax
// 0070caff  e8ac7cf4ff           call 0x6547b0
// 0070cb04  8bf8                 mov edi, eax
// 0070cb06  e89584f4ff           call 0x654fa0
// 0070cb0b  d9058c727900         fld dword ptr [0x79728c]
// 0070cb11  51                   push ecx
// 0070cb12  d91c24               fstp dword ptr [esp]
// 0070cb15  57                   push edi
// 0070cb16  6a10                 push 0x10
// 0070cb18  8bc8                 mov ecx, eax
// 0070cb1a  e8917cf4ff           call 0x6547b0
// 0070cb1f  50                   push eax
// 0070cb20  8d8e00010000         lea ecx, [esi + 0x100]
// 0070cb26  e8057af4ff           call 0x654530
// 0070cb2b  e87084f4ff           call 0x654fa0
// 0070cb30  6a12                 push 0x12
// 0070cb32  8bc8                 mov ecx, eax
// 0070cb34  e8777cf4ff           call 0x6547b0
// 0070cb39  898690010000         mov dword ptr [esi + 0x190], eax
// 0070cb3f  e85c84f4ff           call 0x654fa0
// 0070cb44  6a12                 push 0x12
// 0070cb46  8bc8                 mov ecx, eax
// 0070cb48  e8637cf4ff           call 0x6547b0
// 0070cb4d  898678010000         mov dword ptr [esi + 0x178], eax
// 0070cb53  e84884f4ff           call 0x654fa0
// 0070cb58  6a12                 push 0x12
// 0070cb5a  8bc8                 mov ecx, eax
// 0070cb5c  e84f7cf4ff           call 0x6547b0
// 0070cb61  898684010000         mov dword ptr [esi + 0x184], eax
// 0070cb67  e83484f4ff           call 0x654fa0
// 0070cb6c  6a05                 push 5
// 0070cb6e  8bc8                 mov ecx, eax
// 0070cb70  e83b7cf4ff           call 0x6547b0
// 0070cb75  89869c010000         mov dword ptr [esi + 0x19c], eax
// 0070cb7b  e82084f4ff           call 0x654fa0
// 0070cb80  6a10                 push 0x10
// 0070cb82  8bc8                 mov ecx, eax
// 0070cb84  e8277cf4ff           call 0x6547b0
// 0070cb89  8986b4010000         mov dword ptr [esi + 0x1b4], eax
// 0070cb8f  e80c84f4ff           call 0x654fa0
// 0070cb94  6a10                 push 0x10
// 0070cb96  8bc8                 mov ecx, eax
// 0070cb98  e8137cf4ff           call 0x6547b0
// 0070cb9d  8986a8010000         mov dword ptr [esi + 0x1a8], eax
// 0070cba3  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 0070cba9  8986c4010000         mov dword ptr [esi + 0x1c4], eax
// 0070cbaf  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 0070cbb5  898ec0010000         mov dword ptr [esi + 0x1c0], ecx
// 0070cbbb  8b9688010000         mov edx, dword ptr [esi + 0x188]
// 0070cbc1  8996d0010000         mov dword ptr [esi + 0x1d0], edx
// 0070cbc7  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 0070cbcd  8986cc010000         mov dword ptr [esi + 0x1cc], eax
// 0070cbd3  8b8e94010000         mov ecx, dword ptr [esi + 0x194]
// 0070cbd9  898edc010000         mov dword ptr [esi + 0x1dc], ecx
// 0070cbdf  8b9690010000         mov edx, dword ptr [esi + 0x190]
// 0070cbe5  8996d8010000         mov dword ptr [esi + 0x1d8], edx
// 0070cbeb  8b86a0010000         mov eax, dword ptr [esi + 0x1a0]
// 0070cbf1  8986e8010000         mov dword ptr [esi + 0x1e8], eax
// 0070cbf7  8b8e9c010000         mov ecx, dword ptr [esi + 0x19c]
// 0070cbfd  898ee4010000         mov dword ptr [esi + 0x1e4], ecx
// 0070cc03  8b96ac010000         mov edx, dword ptr [esi + 0x1ac]
// 0070cc09  8996f4010000         mov dword ptr [esi + 0x1f4], edx
// 0070cc0f  8b86a8010000         mov eax, dword ptr [esi + 0x1a8]
// 0070cc15  8986f0010000         mov dword ptr [esi + 0x1f0], eax
// 0070cc1b  8b8eb8010000         mov ecx, dword ptr [esi + 0x1b8]
// 0070cc21  898e00020000         mov dword ptr [esi + 0x200], ecx
// 0070cc27  8b8e04020000         mov ecx, dword ptr [esi + 0x204]
// 0070cc2d  83c8ff               or eax, 0xffffffff
// 0070cc30  8986e4010000         mov dword ptr [esi + 0x1e4], eax
// 0070cc36  8986f0010000         mov dword ptr [esi + 0x1f0], eax
// 0070cc3c  8986fc010000         mov dword ptr [esi + 0x1fc], eax
// 0070cc42  e889b0fdff           call 0x6e7cd0
// 0070cc47  83f807               cmp eax, 7
// 0070cc4a  7536                 jne 0x70cc82
// 0070cc4c  e84f83f4ff           call 0x654fa0
// 0070cc51  6a0f                 push 0xf
// 0070cc53  8bc8                 mov ecx, eax
// 0070cc55  e8567bf4ff           call 0x6547b0
// 0070cc5a  894678               mov dword ptr [esi + 0x78], eax
// 0070cc5d  e83e83f4ff           call 0x654fa0
// 0070cc62  6a05                 push 5
// 0070cc64  8bc8                 mov ecx, eax
// 0070cc66  e8457bf4ff           call 0x6547b0
// 0070cc6b  89869c000000         mov dword ptr [esi + 0x9c], eax
// 0070cc71  e82a83f4ff           call 0x654fa0
// 0070cc76  6a12                 push 0x12
// 0070cc78  8bc8                 mov ecx, eax
// 0070cc7a  e8317bf4ff           call 0x6547b0
// 0070cc7f  894648               mov dword ptr [esi + 0x48], eax
// 0070cc82  5f                   pop edi
// 0070cc83  5e                   pop esi
// 0070cc84  c3                   ret 
// copied from an identical function in another client (function ?RefreshMetrics@CColorSetDefault@CXTPTabPaintManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/TabManager/XTPTabPaintManagerColors.cpp