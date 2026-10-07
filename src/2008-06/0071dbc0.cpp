// roc 2008-06 0071dbc0  unit: CXTPShortcutManager  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071dbc0
//
// 0071dbc0  8a442404             mov al, byte ptr [esp + 4]
// 0071dbc4  8d4c2404             lea ecx, [esp + 4]
// 0071dbc8  51                   push ecx
// 0071dbc9  88442408             mov byte ptr [esp + 8], al
// 0071dbcd  c644240900           mov byte ptr [esp + 9], 0
// 0071dbd2  ff150c2c8000         call dword ptr [0x802c0c]
// 0071dbd8  8a442404             mov al, byte ptr [esp + 4]
// 0071dbdc  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPShortcutManager.cpp (function ?ToUpper@CXTPShortcutManager@@SADD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShortcutManager.cpp
