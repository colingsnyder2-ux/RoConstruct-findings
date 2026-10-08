// from server: 100% by auto
// roc 2007-08 006f1d70  unit: CStatic  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f1d70
//
// 006f1d70  83ec0c               sub esp, 0xc
// 006f1d73  56                   push esi
// 006f1d74  8bf1                 mov esi, ecx
// 006f1d76  8b4620               mov eax, dword ptr [esi + 0x20]
// 006f1d79  89442404             mov dword ptr [esp + 4], eax
// 006f1d7d  c744240cfeffffff     mov dword ptr [esp + 0xc], 0xfffffffe
// 006f1d85  e826680400           call 0x7385b0
// 006f1d8a  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006f1d8d  51                   push ecx
// 006f1d8e  8944240c             mov dword ptr [esp + 0xc], eax
// 006f1d92  ff15f8eb7700         call dword ptr [0x77ebf8]
// 006f1d98  50                   push eax
// 006f1d99  e822e4f3ff           call 0x6301c0
// 006f1d9e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006f1da2  8d542404             lea edx, [esp + 4]
// 006f1da6  52                   push edx
// 006f1da7  8b5020               mov edx, dword ptr [eax + 0x20]
// 006f1daa  51                   push ecx
// 006f1dab  6a4e                 push 0x4e
// 006f1dad  52                   push edx
// 006f1dae  ff15d8ec7700         call dword ptr [0x77ecd8]
// 006f1db4  5e                   pop esi
// 006f1db5  83c40c               add esp, 0xc
// 006f1db8  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\CommandBars\XTPImageEditor.cpp (function ?OnLButtonDown@CXTPImageEditorPicker@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPImageEditor.cpp
