// roc 2009-06 007abe40  unit: XTPPaintThemes::CXTPNativeXPTheme  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007abe40
//
// 007abe40  56                   push esi
// 007abe41  57                   push edi
// 007abe42  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 007abe46  8bf1                 mov esi, ecx
// 007abe48  83ff03               cmp edi, 3
// 007abe4b  7405                 je 0x7abe52
// 007abe4d  83ff02               cmp edi, 2
// 007abe50  753c                 jne 0x7abe8e
// 007abe52  8d8e6c040000         lea ecx, [esi + 0x46c]
// 007abe58  e8434dfeff           call 0x790ba0
// 007abe5d  85c0                 test eax, eax
// 007abe5f  742d                 je 0x7abe8e
// 007abe61  8b442424             mov eax, dword ptr [esp + 0x24]
// 007abe65  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007abe69  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007abe6d  50                   push eax
// 007abe6e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007abe72  51                   push ecx
// 007abe73  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007abe77  52                   push edx
// 007abe78  50                   push eax
// 007abe79  57                   push edi
// 007abe7a  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 007abe7e  51                   push ecx
// 007abe7f  57                   push edi
// 007abe80  8bce                 mov ecx, esi
// 007abe82  e8399bf7ff           call 0x7259c0
// 007abe87  8bc7                 mov eax, edi
// 007abe89  5f                   pop edi
// 007abe8a  5e                   pop esi
// 007abe8b  c21c00               ret 0x1c
// 007abe8e  8b542424             mov edx, dword ptr [esp + 0x24]
// 007abe92  8b442420             mov eax, dword ptr [esp + 0x20]
// 007abe96  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007abe9a  52                   push edx
// 007abe9b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007abe9f  50                   push eax
// 007abea0  8b442418             mov eax, dword ptr [esp + 0x18]
// 007abea4  51                   push ecx
// 007abea5  52                   push edx
// 007abea6  57                   push edi
// 007abea7  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 007abeab  50                   push eax
// 007abeac  57                   push edi
// 007abead  8bce                 mov ecx, esi
// 007abeaf  e81c61ffff           call 0x7a1fd0
// 007abeb4  8bc7                 mov eax, edi
// 007abeb6  5f                   pop edi
// 007abeb7  5e                   pop esi
// 007abeb8  c21c00               ret 0x1c
// library xtp-11.2.2/Source\CommandBars\XTPNativeXPTheme.cpp (function ?DrawSpecialControl@CXTPNativeXPTheme@XTPPaintThemes@@MAE?AVCSize@@PAVCDC@@W4XTPSpecialControl@@PAVCXTPControl@@PAVCXTPCommandBar@@HPAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPNativeXPTheme.cpp
