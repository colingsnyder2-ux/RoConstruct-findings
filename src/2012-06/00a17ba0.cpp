// from server: 100% by auto
// roc 2012-06 00a17ba0  unit: CXTPShortcutManager  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a17ba0
//
// 00a17ba0  8a442404             mov al, byte ptr [esp + 4]
// 00a17ba4  8d4c2404             lea ecx, [esp + 4]
// 00a17ba8  51                   push ecx
// 00a17ba9  88442408             mov byte ptr [esp + 8], al
// 00a17bad  c644240900           mov byte ptr [esp + 9], 0
// 00a17bb2  ff15583cb200         call dword ptr [0xb23c58]
// 00a17bb8  8a442404             mov al, byte ptr [esp + 4]
// 00a17bbc  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPShortcutManager.cpp (function ?ToUpper@CXTPShortcutManager@@SADD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPShortcutManager.cpp
