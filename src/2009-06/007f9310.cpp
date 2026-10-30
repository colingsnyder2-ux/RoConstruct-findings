// roc 2009-06 007f9310  unit: CXTPTabPaintManager  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f9310
//
// 007f9310  8b442418             mov eax, dword ptr [esp + 0x18]
// 007f9314  83f803               cmp eax, 3
// 007f9317  0f8786000000         ja 0x7f93a3
// 007f931d  ff2485a4937f00       jmp dword ptr [eax*4 + 0x7f93a4]
// 007f9324  8b442404             mov eax, dword ptr [esp + 4]
// 007f9328  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007f932c  8b542408             mov edx, dword ptr [esp + 8]
// 007f9330  294804               sub dword ptr [eax + 4], ecx
// 007f9333  2910                 sub dword ptr [eax], edx
// 007f9335  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007f9339  8b542410             mov edx, dword ptr [esp + 0x10]
// 007f933d  01480c               add dword ptr [eax + 0xc], ecx
// 007f9340  015008               add dword ptr [eax + 8], edx
// 007f9343  c3                   ret 
// 007f9344  8b442404             mov eax, dword ptr [esp + 4]
// 007f9348  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007f934c  8b542410             mov edx, dword ptr [esp + 0x10]
// 007f9350  2908                 sub dword ptr [eax], ecx
// 007f9352  01500c               add dword ptr [eax + 0xc], edx
// 007f9355  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007f9359  8b542408             mov edx, dword ptr [esp + 8]
// 007f935d  014808               add dword ptr [eax + 8], ecx
// 007f9360  295004               sub dword ptr [eax + 4], edx
// 007f9363  c3                   ret 
// 007f9364  8b442404             mov eax, dword ptr [esp + 4]
// 007f9368  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007f936c  8b542410             mov edx, dword ptr [esp + 0x10]
// 007f9370  01480c               add dword ptr [eax + 0xc], ecx
// 007f9373  015008               add dword ptr [eax + 8], edx
// 007f9376  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007f937a  8b542408             mov edx, dword ptr [esp + 8]
// 007f937e  294804               sub dword ptr [eax + 4], ecx
// 007f9381  2910                 sub dword ptr [eax], edx
// 007f9383  c3                   ret 
// 007f9384  8b442404             mov eax, dword ptr [esp + 4]
// 007f9388  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007f938c  8b542408             mov edx, dword ptr [esp + 8]
// 007f9390  014808               add dword ptr [eax + 8], ecx
// 007f9393  295004               sub dword ptr [eax + 4], edx
// 007f9396  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007f939a  8b542410             mov edx, dword ptr [esp + 0x10]
// 007f939e  2908                 sub dword ptr [eax], ecx
// 007f93a0  01500c               add dword ptr [eax + 0xc], edx
// 007f93a3  c3                   ret 
// 007f93a4  2493                 and al, 0x93
// 007f93a6  7f00                 jg 0x7f93a8
// 007f93a8  44                   inc esp
// 007f93a9  93                   xchg ebx, eax
// 007f93aa  7f00                 jg 0x7f93ac
// 007f93ac  6493                 xchg ebx, eax
// 007f93ae  7f00                 jg 0x7f93b0
// copied from an identical function in another client (function ?InflateRectEx@CAppearanceSet@CXTPTabPaintManager@@SAXAAVCRect@@V3@W4XTPTabPosition@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/TabManager/XTPTabPaintManagerAppearance.cpp