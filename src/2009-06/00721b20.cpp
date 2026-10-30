// roc 2009-06 00721b20  unit: CXTPControl  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00721b20
//
// 00721b20  83ec10               sub esp, 0x10
// 00721b23  56                   push esi
// 00721b24  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00721b28  57                   push edi
// 00721b29  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00721b2d  8d442408             lea eax, [esp + 8]
// 00721b31  50                   push eax
// 00721b32  6a64                 push 0x64
// 00721b34  56                   push esi
// 00721b35  8bcf                 mov ecx, edi
// 00721b37  e8f4e5ffff           call 0x720130
// 00721b3c  85c0                 test eax, eax
// 00721b3e  7517                 jne 0x721b57
// 00721b40  8b8f84000000         mov ecx, dword ptr [edi + 0x84]
// 00721b46  8b5620               mov edx, dword ptr [esi + 0x20]
// 00721b49  50                   push eax
// 00721b4a  51                   push ecx
// 00721b4b  6811010000           push 0x111
// 00721b50  52                   push edx
// 00721b51  ff1590ee8900         call dword ptr [0x89ee90]
// 00721b57  5f                   pop edi
// 00721b58  5e                   pop esi
// 00721b59  83c410               add esp, 0x10
// 00721b5c  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?NotifyExecute@@YAXPAVCXTPControl@@PAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
