// roc 2008-06 006ab310  unit: CRobloxControlColorSelector  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ab310
//
// 006ab310  8b442404             mov eax, dword ptr [esp + 4]
// 006ab314  898104010000         mov dword ptr [ecx + 0x104], eax
// 006ab31a  85c0                 test eax, eax
// 006ab31c  7517                 jne 0x6ab335
// 006ab31e  8b91d0000000         mov edx, dword ptr [ecx + 0xd0]
// 006ab324  8b01                 mov eax, dword ptr [ecx]
// 006ab326  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 006ab32c  83e2df               and edx, 0xffffffdf
// 006ab32f  89542404             mov dword ptr [esp + 4], edx
// 006ab333  ffe0                 jmp eax
// 006ab335  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControl.cpp (function ?SetExpanded@CXTPControl@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControl.cpp
