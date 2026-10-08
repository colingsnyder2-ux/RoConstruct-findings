// from server: 100% by auto
// roc 2007-08 0071af20  unit: CXTPTabPaintManager::CColorSetDefault  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071af20
//
// 0071af20  8b8104020000         mov eax, dword ptr [ecx + 0x204]
// 0071af26  83783400             cmp dword ptr [eax + 0x34], 0
// 0071af2a  740c                 je 0x71af38
// 0071af2c  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0071af30  e81b22feff           call 0x6fd150
// 0071af35  c20400               ret 4
// 0071af38  8b442404             mov eax, dword ptr [esp + 4]
// 0071af3c  8b5060               mov edx, dword ptr [eax + 0x60]
// 0071af3f  394204               cmp dword ptr [edx + 4], eax
// 0071af42  8d4174               lea eax, [ecx + 0x74]
// 0071af45  7406                 je 0x71af4d
// 0071af47  8d8198000000         lea eax, [ecx + 0x98]
// 0071af4d  8b4808               mov ecx, dword ptr [eax + 8]
// 0071af50  83f9ff               cmp ecx, -1
// 0071af53  7506                 jne 0x71af5b
// 0071af55  8b4004               mov eax, dword ptr [eax + 4]
// 0071af58  c20400               ret 4
// 0071af5b  8bc1                 mov eax, ecx
// 0071af5d  c20400               ret 4
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?GetItemColor@CColorSet@CXTPTabPaintManager@@UAEKPAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManagerColors.cpp
