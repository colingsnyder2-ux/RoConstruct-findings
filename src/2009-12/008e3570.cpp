// roc 2009-12 008e3570  unit: CXTShadowWnd  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e3570
//
// 008e3570  8b442404             mov eax, dword ptr [esp + 4]
// 008e3574  56                   push esi
// 008e3575  3b4104               cmp eax, dword ptr [ecx + 4]
// 008e3578  7507                 jne 0x8e3581
// 008e357a  8b10                 mov edx, dword ptr [eax]
// 008e357c  895104               mov dword ptr [ecx + 4], edx
// 008e357f  eb07                 jmp 0x8e3588
// 008e3581  8b5004               mov edx, dword ptr [eax + 4]
// 008e3584  8b30                 mov esi, dword ptr [eax]
// 008e3586  8932                 mov dword ptr [edx], esi
// 008e3588  3b4108               cmp eax, dword ptr [ecx + 8]
// 008e358b  7510                 jne 0x8e359d
// 008e358d  8b5004               mov edx, dword ptr [eax + 4]
// 008e3590  895108               mov dword ptr [ecx + 8], edx
// 008e3593  5e                   pop esi
// 008e3594  89442404             mov dword ptr [esp + 4], eax
// 008e3598  e9e349fcff           jmp 0x8a7f80
// 008e359d  8b7004               mov esi, dword ptr [eax + 4]
// 008e35a0  8b10                 mov edx, dword ptr [eax]
// 008e35a2  897204               mov dword ptr [edx + 4], esi
// 008e35a5  5e                   pop esi
// 008e35a6  89442404             mov dword ptr [esp + 4], eax
// 008e35aa  e9d149fcff           jmp 0x8a7f80
// copied from an identical function in another client (function ?RemoveAt@?$CList@PAVCXTPDockingPaneBase@@PAV1@@@QAEXPAU__POSITION@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp