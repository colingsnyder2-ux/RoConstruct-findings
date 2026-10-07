// roc 2012-06 0049fa20  unit: Scintilla::CScintillaView  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049fa20
//
// 0049fa20  83ec18               sub esp, 0x18
// 0049fa23  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0049fa27  8b5004               mov edx, dword ptr [eax + 4]
// 0049fa2a  56                   push esi
// 0049fa2b  8bf1                 mov esi, ecx
// 0049fa2d  8b08                 mov ecx, dword ptr [eax]
// 0049fa2f  8d44240c             lea eax, [esp + 0xc]
// 0049fa33  894c2404             mov dword ptr [esp + 4], ecx
// 0049fa37  50                   push eax
// 0049fa38  8d4c2408             lea ecx, [esp + 8]
// 0049fa3c  8954240c             mov dword ptr [esp + 0xc], edx
// 0049fa40  e8fbe9ffff           call 0x49e440
// 0049fa45  84c0                 test al, al
// 0049fa47  7420                 je 0x49fa69
// 0049fa49  8d4c240c             lea ecx, [esp + 0xc]
// 0049fa4d  56                   push esi
// 0049fa4e  51                   push ecx
// 0049fa4f  e83ce9ffff           call 0x49e390
// 0049fa54  83c408               add esp, 8
// 0049fa57  85c0                 test eax, eax
// 0049fa59  740e                 je 0x49fa69
// 0049fa5b  33c0                 xor eax, eax
// 0049fa5d  894608               mov dword ptr [esi + 8], eax
// 0049fa60  8bc6                 mov eax, esi
// 0049fa62  5e                   pop esi
// 0049fa63  83c418               add esp, 0x18
// 0049fa66  c20400               ret 4
// 0049fa69  b801000000           mov eax, 1
// 0049fa6e  894608               mov dword ptr [esi + 8], eax
// 0049fa71  8bc6                 mov eax, esi
// 0049fa73  5e                   pop esi
// 0049fa74  83c418               add esp, 0x18
// 0049fa77  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarControl.cpp (function ??4COleDateTime@ATL@@QAEAAV01@AB_J@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarControl.cpp
