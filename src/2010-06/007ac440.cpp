// roc 2010-06 007ac440  unit: CXTPControl  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ac440
//
// 007ac440  83ec10               sub esp, 0x10
// 007ac443  56                   push esi
// 007ac444  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 007ac448  57                   push edi
// 007ac449  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 007ac44d  8d442408             lea eax, [esp + 8]
// 007ac451  50                   push eax
// 007ac452  6a64                 push 0x64
// 007ac454  56                   push esi
// 007ac455  8bcf                 mov ecx, edi
// 007ac457  e8c4e4ffff           call 0x7aa920
// 007ac45c  85c0                 test eax, eax
// 007ac45e  7517                 jne 0x7ac477
// 007ac460  8b8f84000000         mov ecx, dword ptr [edi + 0x84]
// 007ac466  8b5620               mov edx, dword ptr [esi + 0x20]
// 007ac469  50                   push eax
// 007ac46a  51                   push ecx
// 007ac46b  6811010000           push 0x111
// 007ac470  52                   push edx
// 007ac471  ff1554ba9e00         call dword ptr [0x9eba54]
// 007ac477  5f                   pop edi
// 007ac478  5e                   pop esi
// 007ac479  83c410               add esp, 0x10
// 007ac47c  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?NotifyExecute@@YAXPAVCXTPControl@@PAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
