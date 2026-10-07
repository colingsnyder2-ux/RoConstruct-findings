// roc 2011-06 0089f760  unit: CXTPShortcutManager  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089f760
//
// 0089f760  8a442404             mov al, byte ptr [esp + 4]
// 0089f764  8d4c2404             lea ecx, [esp + 4]
// 0089f768  51                   push ecx
// 0089f769  88442408             mov byte ptr [esp + 8], al
// 0089f76d  c644240900           mov byte ptr [esp + 9], 0
// 0089f772  ff154c1aa400         call dword ptr [0xa41a4c]
// 0089f778  8a442404             mov al, byte ptr [esp + 4]
// 0089f77c  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPShortcutManager.cpp (function ?ToUpper@CXTPShortcutManager@@SADD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPShortcutManager.cpp
