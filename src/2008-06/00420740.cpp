// roc 2008-06 00420740  unit: CInsertObjectDialog  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00420740
//
// 00420740  8b542404             mov edx, dword ptr [esp + 4]
// 00420744  8b4104               mov eax, dword ptr [ecx + 4]
// 00420747  3bc2                 cmp eax, edx
// 00420749  7604                 jbe 0x42074f
// 0042074b  48                   dec eax
// 0042074c  894104               mov dword ptr [ecx + 4], eax
// 0042074f  8b01                 mov eax, dword ptr [ecx]
// 00420751  3bc2                 cmp eax, edx
// 00420753  7203                 jb 0x420758
// 00420755  48                   dec eax
// 00420756  8901                 mov dword ptr [ecx], eax
// 00420758  8b4908               mov ecx, dword ptr [ecx + 8]
// 0042075b  85c9                 test ecx, ecx
// 0042075d  75e5                 jne 0x420744
// 0042075f  c20400               ret 4
// library openrbx-client/App\v8datamodel\Selection.cpp (function ?removeIndex@RaiseRange@RBX@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Selection.cpp
