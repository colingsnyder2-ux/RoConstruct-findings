// roc 2007-03 006315a0  unit: seg_00630000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006315a0
//
// 006315a0  83ec10               sub esp, 0x10
// 006315a3  56                   push esi
// 006315a4  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 006315a8  57                   push edi
// 006315a9  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006315ad  8d442408             lea eax, [esp + 8]
// 006315b1  50                   push eax
// 006315b2  6a64                 push 0x64
// 006315b4  56                   push esi
// 006315b5  8bcf                 mov ecx, edi
// 006315b7  e874e7ffff           call 0x62fd30
// 006315bc  85c0                 test eax, eax
// 006315be  7517                 jne 0x6315d7
// 006315c0  8b8f84000000         mov ecx, dword ptr [edi + 0x84]
// 006315c6  8b5620               mov edx, dword ptr [esi + 0x20]
// 006315c9  50                   push eax
// 006315ca  51                   push ecx
// 006315cb  6811010000           push 0x111
// 006315d0  52                   push edx
// 006315d1  ff1550ee7700         call dword ptr [0x77ee50]
// 006315d7  5f                   pop edi
// 006315d8  5e                   pop esi
// 006315d9  83c410               add esp, 0x10
// 006315dc  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?NotifyExecute@@YAXPAVCXTPControl@@PAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
