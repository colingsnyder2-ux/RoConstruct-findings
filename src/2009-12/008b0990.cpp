// roc 2009-12 008b0990  unit: CXTPDockingPaneAutoHidePanel  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b0990
//
// 008b0990  8b542404             mov edx, dword ptr [esp + 4]
// 008b0994  33c0                 xor eax, eax
// 008b0996  8902                 mov dword ptr [edx], eax
// 008b0998  894204               mov dword ptr [edx + 4], eax
// 008b099b  894208               mov dword ptr [edx + 8], eax
// 008b099e  89420c               mov dword ptr [edx + 0xc], eax
// 008b09a1  894210               mov dword ptr [edx + 0x10], eax
// 008b09a4  894214               mov dword ptr [edx + 0x14], eax
// 008b09a7  894218               mov dword ptr [edx + 0x18], eax
// 008b09aa  89421c               mov dword ptr [edx + 0x1c], eax
// 008b09ad  894220               mov dword ptr [edx + 0x20], eax
// 008b09b0  894224               mov dword ptr [edx + 0x24], eax
// 008b09b3  83791804             cmp dword ptr [ecx + 0x18], 4
// 008b09b7  7525                 jne 0x8b09de
// 008b09b9  e882feffff           call 0x8b0840
// 008b09be  83b8e800000000       cmp dword ptr [eax + 0xe8], 0
// 008b09c5  7517                 jne 0x8b09de
// 008b09c7  e874feffff           call 0x8b0840
// 008b09cc  8b88c0000000         mov ecx, dword ptr [eax + 0xc0]
// 008b09d2  894a18               mov dword ptr [edx + 0x18], ecx
// 008b09d5  8b80c4000000         mov eax, dword ptr [eax + 0xc4]
// 008b09db  89421c               mov dword ptr [edx + 0x1c], eax
// 008b09de  b8007d0000           mov eax, 0x7d00
// 008b09e3  8bc8                 mov ecx, eax
// 008b09e5  894220               mov dword ptr [edx + 0x20], eax
// 008b09e8  894a24               mov dword ptr [edx + 0x24], ecx
// 008b09eb  c20400               ret 4
// copied from an identical function in another client (function ?GetMinMaxInfo@CXTPDockingPaneBase@@UBEXPAUtagMINMAXINFO@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneBase.cpp