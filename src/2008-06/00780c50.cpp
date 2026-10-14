// roc 2008-06 00780c50  unit: CXTPTabPaintManager  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00780c50
//
// 00780c50  8b442418             mov eax, dword ptr [esp + 0x18]
// 00780c54  83f803               cmp eax, 3
// 00780c57  0f8786000000         ja 0x780ce3
// 00780c5d  ff2485e40c7800       jmp dword ptr [eax*4 + 0x780ce4]
// 00780c64  8b442404             mov eax, dword ptr [esp + 4]
// 00780c68  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00780c6c  8b542408             mov edx, dword ptr [esp + 8]
// 00780c70  294804               sub dword ptr [eax + 4], ecx
// 00780c73  2910                 sub dword ptr [eax], edx
// 00780c75  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00780c79  8b542410             mov edx, dword ptr [esp + 0x10]
// 00780c7d  01480c               add dword ptr [eax + 0xc], ecx
// 00780c80  015008               add dword ptr [eax + 8], edx
// 00780c83  c3                   ret 
// 00780c84  8b442404             mov eax, dword ptr [esp + 4]
// 00780c88  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00780c8c  8b542410             mov edx, dword ptr [esp + 0x10]
// 00780c90  2908                 sub dword ptr [eax], ecx
// 00780c92  01500c               add dword ptr [eax + 0xc], edx
// 00780c95  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00780c99  8b542408             mov edx, dword ptr [esp + 8]
// 00780c9d  014808               add dword ptr [eax + 8], ecx
// 00780ca0  295004               sub dword ptr [eax + 4], edx
// 00780ca3  c3                   ret 
// 00780ca4  8b442404             mov eax, dword ptr [esp + 4]
// 00780ca8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00780cac  8b542410             mov edx, dword ptr [esp + 0x10]
// 00780cb0  01480c               add dword ptr [eax + 0xc], ecx
// 00780cb3  015008               add dword ptr [eax + 8], edx
// 00780cb6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00780cba  8b542408             mov edx, dword ptr [esp + 8]
// 00780cbe  294804               sub dword ptr [eax + 4], ecx
// 00780cc1  2910                 sub dword ptr [eax], edx
// 00780cc3  c3                   ret 
// 00780cc4  8b442404             mov eax, dword ptr [esp + 4]
// 00780cc8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00780ccc  8b542408             mov edx, dword ptr [esp + 8]
// 00780cd0  014808               add dword ptr [eax + 8], ecx
// 00780cd3  295004               sub dword ptr [eax + 4], edx
// 00780cd6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00780cda  8b542410             mov edx, dword ptr [esp + 0x10]
// 00780cde  2908                 sub dword ptr [eax], ecx
// 00780ce0  01500c               add dword ptr [eax + 0xc], edx
// 00780ce3  c3                   ret 
// 00780ce4  640c78               or al, 0x78
// 00780ce7  00840c7800a40c       add byte ptr [esp + ecx + 0xca40078], al
// 00780cee  7800                 js 0x780cf0
// 00780cf0  c40c78               les ecx, ptr [eax + edi*2]
// library xtp-11.2.2-lib-strlen/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?InflateRectEx@CAppearanceSet@CXTPTabPaintManager@@SAXAAVCRect@@V3@W4XTPTabPosition@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/TabManager/XTPTabPaintManagerAppearance.cpp
