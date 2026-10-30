// roc 2011-06 008d8fa0  unit: CXTPTabPaintManager  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d8fa0
//
// 008d8fa0  8b442418             mov eax, dword ptr [esp + 0x18]
// 008d8fa4  83f803               cmp eax, 3
// 008d8fa7  0f8786000000         ja 0x8d9033
// 008d8fad  ff248534908d00       jmp dword ptr [eax*4 + 0x8d9034]
// 008d8fb4  8b442404             mov eax, dword ptr [esp + 4]
// 008d8fb8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008d8fbc  8b542408             mov edx, dword ptr [esp + 8]
// 008d8fc0  294804               sub dword ptr [eax + 4], ecx
// 008d8fc3  2910                 sub dword ptr [eax], edx
// 008d8fc5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008d8fc9  8b542410             mov edx, dword ptr [esp + 0x10]
// 008d8fcd  01480c               add dword ptr [eax + 0xc], ecx
// 008d8fd0  015008               add dword ptr [eax + 8], edx
// 008d8fd3  c3                   ret 
// 008d8fd4  8b442404             mov eax, dword ptr [esp + 4]
// 008d8fd8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008d8fdc  8b542410             mov edx, dword ptr [esp + 0x10]
// 008d8fe0  2908                 sub dword ptr [eax], ecx
// 008d8fe2  01500c               add dword ptr [eax + 0xc], edx
// 008d8fe5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008d8fe9  8b542408             mov edx, dword ptr [esp + 8]
// 008d8fed  014808               add dword ptr [eax + 8], ecx
// 008d8ff0  295004               sub dword ptr [eax + 4], edx
// 008d8ff3  c3                   ret 
// 008d8ff4  8b442404             mov eax, dword ptr [esp + 4]
// 008d8ff8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008d8ffc  8b542410             mov edx, dword ptr [esp + 0x10]
// 008d9000  01480c               add dword ptr [eax + 0xc], ecx
// 008d9003  015008               add dword ptr [eax + 8], edx
// 008d9006  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008d900a  8b542408             mov edx, dword ptr [esp + 8]
// 008d900e  294804               sub dword ptr [eax + 4], ecx
// 008d9011  2910                 sub dword ptr [eax], edx
// 008d9013  c3                   ret 
// 008d9014  8b442404             mov eax, dword ptr [esp + 4]
// 008d9018  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008d901c  8b542408             mov edx, dword ptr [esp + 8]
// 008d9020  014808               add dword ptr [eax + 8], ecx
// 008d9023  295004               sub dword ptr [eax + 4], edx
// 008d9026  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008d902a  8b542410             mov edx, dword ptr [esp + 0x10]
// 008d902e  2908                 sub dword ptr [eax], ecx
// 008d9030  01500c               add dword ptr [eax + 0xc], edx
// 008d9033  c3                   ret 
// 008d9034  b48f                 mov ah, 0x8f
// 008d9036  8d00                 lea eax, [eax]
// 008d9038  d48f                 aam 0x8f
// 008d903a  8d00                 lea eax, [eax]
// 008d903c  f4                   hlt 
// copied from an identical function in another client (function ?InflateRectEx@CXTPTabPaintManagerAppearanceSet@@SAXAAVCRect@@V2@W4XTPTabPosition@@@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabPaintManagerAppearance.cpp