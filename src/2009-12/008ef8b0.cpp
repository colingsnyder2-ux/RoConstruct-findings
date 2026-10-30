// roc 2009-12 008ef8b0  unit: CXTPRibbonTabPopupToolBar  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ef8b0
//
// 008ef8b0  56                   push esi
// 008ef8b1  8b742408             mov esi, dword ptr [esp + 8]
// 008ef8b5  8b06                 mov eax, dword ptr [esi]
// 008ef8b7  8b909c010000         mov edx, dword ptr [eax + 0x19c]
// 008ef8bd  8bce                 mov ecx, esi
// 008ef8bf  ffd2                 call edx
// 008ef8c1  85c0                 test eax, eax
// 008ef8c3  7408                 je 0x8ef8cd
// 008ef8c5  8d86c4010000         lea eax, [esi + 0x1c4]
// 008ef8cb  5e                   pop esi
// 008ef8cc  c3                   ret 
// 008ef8cd  e82ef4ffff           call 0x8eed00
// 008ef8d2  50                   push eax
// 008ef8d3  8bce                 mov ecx, esi
// 008ef8d5  e80e45f0ff           call 0x7f3de8
// 008ef8da  85c0                 test eax, eax
// 008ef8dc  7408                 je 0x8ef8e6
// 008ef8de  8d865c020000         lea eax, [esi + 0x25c]
// 008ef8e4  5e                   pop esi
// 008ef8e5  c3                   ret 
// 008ef8e6  e825f4ffff           call 0x8eed10
// 008ef8eb  50                   push eax
// 008ef8ec  8bce                 mov ecx, esi
// 008ef8ee  e8f544f0ff           call 0x7f3de8
// 008ef8f3  85c0                 test eax, eax
// 008ef8f5  75e7                 jne 0x8ef8de
// 008ef8f7  5e                   pop esi
// 008ef8f8  c3                   ret 
// copied from an identical function in another client (function ?GetScrollableBar@@YAPAVCXTPRibbonScrollableBar@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonPopups.cpp