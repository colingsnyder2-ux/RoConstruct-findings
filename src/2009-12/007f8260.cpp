// roc 2009-12 007f8260  unit: CXTPControl  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f8260
//
// 007f8260  83ec10               sub esp, 0x10
// 007f8263  56                   push esi
// 007f8264  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 007f8268  57                   push edi
// 007f8269  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 007f826d  8d442408             lea eax, [esp + 8]
// 007f8271  50                   push eax
// 007f8272  6a64                 push 0x64
// 007f8274  56                   push esi
// 007f8275  8bcf                 mov ecx, edi
// 007f8277  e8c4e5ffff           call 0x7f6840
// 007f827c  85c0                 test eax, eax
// 007f827e  7517                 jne 0x7f8297
// 007f8280  8b8f84000000         mov ecx, dword ptr [edi + 0x84]
// 007f8286  8b5620               mov edx, dword ptr [esi + 0x20]
// 007f8289  50                   push eax
// 007f828a  51                   push ecx
// 007f828b  6811010000           push 0x111
// 007f8290  52                   push edx
// 007f8291  ff15c4cb9800         call dword ptr [0x98cbc4]
// 007f8297  5f                   pop edi
// 007f8298  5e                   pop esi
// 007f8299  83c410               add esp, 0x10
// 007f829c  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?NotifyExecute@@YAXPAVCXTPControl@@PAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
