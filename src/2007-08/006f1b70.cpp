// roc 2007-08 006f1b70  unit: CStatic  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f1b70
//
// 006f1b70  8b442404             mov eax, dword ptr [esp + 4]
// 006f1b74  894158               mov dword ptr [ecx + 0x58], eax
// 006f1b77  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 006f1b7a  85c9                 test ecx, ecx
// 006f1b7c  740b                 je 0x6f1b89
// 006f1b7e  6a00                 push 0
// 006f1b80  6a00                 push 0
// 006f1b82  51                   push ecx
// 006f1b83  ff15dcec7700         call dword ptr [0x77ecdc]
// 006f1b89  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPImageEditor.cpp (function ?SetSelected@CXTPImageEditorPicker@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPImageEditor.cpp
