// from server: 100% by auto
// roc 2007-08 006a4410  unit: CXTPShortcutManager  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a4410
//
// 006a4410  8a442404             mov al, byte ptr [esp + 4]
// 006a4414  8d4c2404             lea ecx, [esp + 4]
// 006a4418  51                   push ecx
// 006a4419  88442408             mov byte ptr [esp + 8], al
// 006a441d  c644240900           mov byte ptr [esp + 9], 0
// 006a4422  ff156ced7700         call dword ptr [0x77ed6c]
// 006a4428  8a442404             mov al, byte ptr [esp + 4]
// 006a442c  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPShortcutManager.cpp (function ?ToUpper@CXTPShortcutManager@@SADD@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPShortcutManager.cpp
