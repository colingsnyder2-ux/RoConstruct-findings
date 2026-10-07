// roc 2012-06 00a6ca60  unit: CXTPTabPaintManager::CColorSetDefault  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6ca60
//
// 00a6ca60  8b8104020000         mov eax, dword ptr [ecx + 0x204]
// 00a6ca66  83783400             cmp dword ptr [eax + 0x34], 0
// 00a6ca6a  740c                 je 0xa6ca78
// 00a6ca6c  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00a6ca70  e8abe9fdff           call 0xa4b420
// 00a6ca75  c20400               ret 4
// 00a6ca78  8b442404             mov eax, dword ptr [esp + 4]
// 00a6ca7c  8b5060               mov edx, dword ptr [eax + 0x60]
// 00a6ca7f  394204               cmp dword ptr [edx + 4], eax
// 00a6ca82  8d4174               lea eax, [ecx + 0x74]
// 00a6ca85  7406                 je 0xa6ca8d
// 00a6ca87  8d8198000000         lea eax, [ecx + 0x98]
// 00a6ca8d  8b4808               mov ecx, dword ptr [eax + 8]
// 00a6ca90  83f9ff               cmp ecx, -1
// 00a6ca93  7506                 jne 0xa6ca9b
// 00a6ca95  8b4004               mov eax, dword ptr [eax + 4]
// 00a6ca98  c20400               ret 4
// 00a6ca9b  8bc1                 mov eax, ecx
// 00a6ca9d  c20400               ret 4
// library xtp-13.2.1/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?GetItemColor@CColorSet@CXTPTabPaintManager@@UAEKPAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/TabManager/XTPTabPaintManagerColors.cpp
