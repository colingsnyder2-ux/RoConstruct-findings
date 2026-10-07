// roc 2008-06 0079bc00  unit: CXTPTabPaintManager::CColorSetDefault  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079bc00
//
// 0079bc00  8b8104020000         mov eax, dword ptr [ecx + 0x204]
// 0079bc06  83783400             cmp dword ptr [eax + 0x34], 0
// 0079bc0a  740c                 je 0x79bc18
// 0079bc0c  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0079bc10  e8ebf0fdff           call 0x77ad00
// 0079bc15  c20400               ret 4
// 0079bc18  8b442404             mov eax, dword ptr [esp + 4]
// 0079bc1c  8b5060               mov edx, dword ptr [eax + 0x60]
// 0079bc1f  394204               cmp dword ptr [edx + 4], eax
// 0079bc22  8d4174               lea eax, [ecx + 0x74]
// 0079bc25  7406                 je 0x79bc2d
// 0079bc27  8d8198000000         lea eax, [ecx + 0x98]
// 0079bc2d  8b4808               mov ecx, dword ptr [eax + 8]
// 0079bc30  83f9ff               cmp ecx, -1
// 0079bc33  7506                 jne 0x79bc3b
// 0079bc35  8b4004               mov eax, dword ptr [eax + 4]
// 0079bc38  c20400               ret 4
// 0079bc3b  8bc1                 mov eax, ecx
// 0079bc3d  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?GetItemColor@CColorSet@CXTPTabPaintManager@@UAEKPAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerColors.cpp
