// roc 2008-06 0042e430  unit: VCLuaFunction::?$CComObject  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042e430
//
// 0042e430  56                   push esi
// 0042e431  8bf1                 mov esi, ecx
// 0042e433  8b06                 mov eax, dword ptr [esi]
// 0042e435  8b9098010000         mov edx, dword ptr [eax + 0x198]
// 0042e43b  ffd2                 call edx
// 0042e43d  85c0                 test eax, eax
// 0042e43f  750a                 jne 0x42e44b
// 0042e441  8b442408             mov eax, dword ptr [esp + 8]
// 0042e445  898638010000         mov dword ptr [esi + 0x138], eax
// 0042e44b  5e                   pop esi
// 0042e44c  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPMenuBar.cpp (function ?EnableCustomization@CXTPCommandBar@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPMenuBar.cpp
