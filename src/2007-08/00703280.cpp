// from server: 100% by auto
// roc 2007-08 00703280  unit: CXTPTabPaintManager  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00703280
//
// 00703280  8b442418             mov eax, dword ptr [esp + 0x18]
// 00703284  83f803               cmp eax, 3
// 00703287  0f8786000000         ja 0x703313
// 0070328d  ff248514337000       jmp dword ptr [eax*4 + 0x703314]
// 00703294  8b442404             mov eax, dword ptr [esp + 4]
// 00703298  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0070329c  8b542408             mov edx, dword ptr [esp + 8]
// 007032a0  294804               sub dword ptr [eax + 4], ecx
// 007032a3  2910                 sub dword ptr [eax], edx
// 007032a5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007032a9  8b542410             mov edx, dword ptr [esp + 0x10]
// 007032ad  01480c               add dword ptr [eax + 0xc], ecx
// 007032b0  015008               add dword ptr [eax + 8], edx
// 007032b3  c3                   ret 
// 007032b4  8b442404             mov eax, dword ptr [esp + 4]
// 007032b8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007032bc  8b542410             mov edx, dword ptr [esp + 0x10]
// 007032c0  2908                 sub dword ptr [eax], ecx
// 007032c2  01500c               add dword ptr [eax + 0xc], edx
// 007032c5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007032c9  8b542408             mov edx, dword ptr [esp + 8]
// 007032cd  014808               add dword ptr [eax + 8], ecx
// 007032d0  295004               sub dword ptr [eax + 4], edx
// 007032d3  c3                   ret 
// 007032d4  8b442404             mov eax, dword ptr [esp + 4]
// 007032d8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007032dc  8b542410             mov edx, dword ptr [esp + 0x10]
// 007032e0  01480c               add dword ptr [eax + 0xc], ecx
// 007032e3  015008               add dword ptr [eax + 8], edx
// 007032e6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007032ea  8b542408             mov edx, dword ptr [esp + 8]
// 007032ee  294804               sub dword ptr [eax + 4], ecx
// 007032f1  2910                 sub dword ptr [eax], edx
// 007032f3  c3                   ret 
// 007032f4  8b442404             mov eax, dword ptr [esp + 4]
// 007032f8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007032fc  8b542408             mov edx, dword ptr [esp + 8]
// 00703300  014808               add dword ptr [eax + 8], ecx
// 00703303  295004               sub dword ptr [eax + 4], edx
// 00703306  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0070330a  8b542410             mov edx, dword ptr [esp + 0x10]
// 0070330e  2908                 sub dword ptr [eax], ecx
// 00703310  01500c               add dword ptr [eax + 0xc], edx
// 00703313  c3                   ret 
// 00703314  94                   xchg esp, eax
// 00703315  327000               xor dh, byte ptr [eax]
// 00703318  b432                 mov ah, 0x32
// 0070331a  7000                 jo 0x70331c
// 0070331c  d432                 aam 0x32
// 0070331e  7000                 jo 0x703320
// 00703320  f4                   hlt 
// 00703321  327000               xor dh, byte ptr [eax]
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?InflateRectEx@CAppearanceSet@CXTPTabPaintManager@@SAXAAVCRect@@V3@W4XTPTabPosition@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManagerAppearance.cpp
