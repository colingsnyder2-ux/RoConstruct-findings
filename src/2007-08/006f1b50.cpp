// from server: 100% by auto
// roc 2007-08 006f1b50  unit: CStatic  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f1b50
//
// 006f1b50  8b442404             mov eax, dword ptr [esp + 4]
// 006f1b54  894154               mov dword ptr [ecx + 0x54], eax
// 006f1b57  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 006f1b5a  85c9                 test ecx, ecx
// 006f1b5c  740b                 je 0x6f1b69
// 006f1b5e  6a00                 push 0
// 006f1b60  6a00                 push 0
// 006f1b62  51                   push ecx
// 006f1b63  ff15dcec7700         call dword ptr [0x77ecdc]
// 006f1b69  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPImageEditor.cpp (function ?SetColor@CXTPImageEditorPicker@@QAEXK@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPImageEditor.cpp
