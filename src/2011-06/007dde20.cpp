// from server: 100% by auto
// roc 2011-06 007dde20  unit: seg_007d0000  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007dde20
//
// 007dde20  51                   push ecx
// 007dde21  8b4e04               mov ecx, dword ptr [esi + 4]
// 007dde24  6a04                 push 4
// 007dde26  8d442404             lea eax, [esp + 4]
// 007dde2a  50                   push eax
// 007dde2b  51                   push ecx
// 007dde2c  e8ffc9ffff           call 0x7da830
// 007dde31  83c40c               add esp, 0xc
// 007dde34  85c0                 test eax, eax
// 007dde36  7423                 je 0x7dde5b
// 007dde38  8b560c               mov edx, dword ptr [esi + 0xc]
// 007dde3b  8b06                 mov eax, dword ptr [esi]
// 007dde3d  68b4e3ab00           push 0xabe3b4
// 007dde42  52                   push edx
// 007dde43  6898e3ab00           push 0xabe398
// 007dde48  50                   push eax
// 007dde49  e8d2eff9ff           call 0x77ce20
// 007dde4e  8b0e                 mov ecx, dword ptr [esi]
// 007dde50  6a03                 push 3
// 007dde52  51                   push ecx
// 007dde53  e89809faff           call 0x77e7f0
// 007dde58  83c418               add esp, 0x18
// 007dde5b  8b0424               mov eax, dword ptr [esp]
// 007dde5e  85c0                 test eax, eax
// 007dde60  7d27                 jge 0x7dde89
// 007dde62  8b560c               mov edx, dword ptr [esi + 0xc]
// 007dde65  8b06                 mov eax, dword ptr [esi]
// 007dde67  68c4e3ab00           push 0xabe3c4
// 007dde6c  52                   push edx
// 007dde6d  6898e3ab00           push 0xabe398
// 007dde72  50                   push eax
// 007dde73  e8a8eff9ff           call 0x77ce20
// 007dde78  8b0e                 mov ecx, dword ptr [esi]
// 007dde7a  6a03                 push 3
// 007dde7c  51                   push ecx
// 007dde7d  e86e09faff           call 0x77e7f0
// 007dde82  8b442418             mov eax, dword ptr [esp + 0x18]
// 007dde86  83c418               add esp, 0x18
// 007dde89  59                   pop ecx
// 007dde8a  c3                   ret 
// library lua-5.1.4/lundump.c (function _LoadInt)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lundump.c
