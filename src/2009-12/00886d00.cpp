// roc 2009-12 00886d00  unit: XTPPaintThemes::CXTPNativeXPTheme  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00886d00
//
// 00886d00  56                   push esi
// 00886d01  57                   push edi
// 00886d02  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00886d06  8bf1                 mov esi, ecx
// 00886d08  83ff03               cmp edi, 3
// 00886d0b  7405                 je 0x886d12
// 00886d0d  83ff02               cmp edi, 2
// 00886d10  753c                 jne 0x886d4e
// 00886d12  8d8e6c040000         lea ecx, [esi + 0x46c]
// 00886d18  e8a34efeff           call 0x86bbc0
// 00886d1d  85c0                 test eax, eax
// 00886d1f  742d                 je 0x886d4e
// 00886d21  8b442424             mov eax, dword ptr [esp + 0x24]
// 00886d25  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00886d29  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00886d2d  50                   push eax
// 00886d2e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00886d32  51                   push ecx
// 00886d33  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00886d37  52                   push edx
// 00886d38  50                   push eax
// 00886d39  57                   push edi
// 00886d3a  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00886d3e  51                   push ecx
// 00886d3f  57                   push edi
// 00886d40  8bce                 mov ecx, esi
// 00886d42  e8e99bf7ff           call 0x800930
// 00886d47  8bc7                 mov eax, edi
// 00886d49  5f                   pop edi
// 00886d4a  5e                   pop esi
// 00886d4b  c21c00               ret 0x1c
// 00886d4e  8b542424             mov edx, dword ptr [esp + 0x24]
// 00886d52  8b442420             mov eax, dword ptr [esp + 0x20]
// 00886d56  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00886d5a  52                   push edx
// 00886d5b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00886d5f  50                   push eax
// 00886d60  8b442418             mov eax, dword ptr [esp + 0x18]
// 00886d64  51                   push ecx
// 00886d65  52                   push edx
// 00886d66  57                   push edi
// 00886d67  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00886d6b  50                   push eax
// 00886d6c  57                   push edi
// 00886d6d  8bce                 mov ecx, esi
// 00886d6f  e89c61ffff           call 0x87cf10
// 00886d74  8bc7                 mov eax, edi
// 00886d76  5f                   pop edi
// 00886d77  5e                   pop esi
// 00886d78  c21c00               ret 0x1c
// library xtp-11.2.2/Source\CommandBars\XTPNativeXPTheme.cpp (function ?DrawSpecialControl@CXTPNativeXPTheme@XTPPaintThemes@@MAE?AVCSize@@PAVCDC@@W4XTPSpecialControl@@PAVCXTPControl@@PAVCXTPCommandBar@@HPAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPNativeXPTheme.cpp
