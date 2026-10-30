// roc 2012-06 00a512b0  unit: CXTPTabPaintManager  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a512b0
//
// 00a512b0  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a512b4  83f803               cmp eax, 3
// 00a512b7  0f8786000000         ja 0xa51343
// 00a512bd  ff24854413a500       jmp dword ptr [eax*4 + 0xa51344]
// 00a512c4  8b442404             mov eax, dword ptr [esp + 4]
// 00a512c8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a512cc  8b542408             mov edx, dword ptr [esp + 8]
// 00a512d0  294804               sub dword ptr [eax + 4], ecx
// 00a512d3  2910                 sub dword ptr [eax], edx
// 00a512d5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a512d9  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a512dd  01480c               add dword ptr [eax + 0xc], ecx
// 00a512e0  015008               add dword ptr [eax + 8], edx
// 00a512e3  c3                   ret 
// 00a512e4  8b442404             mov eax, dword ptr [esp + 4]
// 00a512e8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a512ec  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a512f0  2908                 sub dword ptr [eax], ecx
// 00a512f2  01500c               add dword ptr [eax + 0xc], edx
// 00a512f5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a512f9  8b542408             mov edx, dword ptr [esp + 8]
// 00a512fd  014808               add dword ptr [eax + 8], ecx
// 00a51300  295004               sub dword ptr [eax + 4], edx
// 00a51303  c3                   ret 
// 00a51304  8b442404             mov eax, dword ptr [esp + 4]
// 00a51308  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a5130c  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a51310  01480c               add dword ptr [eax + 0xc], ecx
// 00a51313  015008               add dword ptr [eax + 8], edx
// 00a51316  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a5131a  8b542408             mov edx, dword ptr [esp + 8]
// 00a5131e  294804               sub dword ptr [eax + 4], ecx
// 00a51321  2910                 sub dword ptr [eax], edx
// 00a51323  c3                   ret 
// 00a51324  8b442404             mov eax, dword ptr [esp + 4]
// 00a51328  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a5132c  8b542408             mov edx, dword ptr [esp + 8]
// 00a51330  014808               add dword ptr [eax + 8], ecx
// 00a51333  295004               sub dword ptr [eax + 4], edx
// 00a51336  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a5133a  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a5133e  2908                 sub dword ptr [eax], ecx
// 00a51340  01500c               add dword ptr [eax + 0xc], edx
// 00a51343  c3                   ret 
// 00a51344  c412                 les edx, ptr [edx]
// 00a51346  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 00a51347  00e4                 add ah, ah
// 00a51349  12a5000413a5         adc ah, byte ptr [ebp - 0x5aecfc00]
// 00a5134f  002413               add byte ptr [ebx + edx], ah
// 00a51352  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// copied from an identical function in another client (function ?InflateRectEx@CXTPTabPaintManagerAppearanceSet@@SAXAAVCRect@@V2@W4XTPTabPosition@@@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabPaintManagerAppearance.cpp