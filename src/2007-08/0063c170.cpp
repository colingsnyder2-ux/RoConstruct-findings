// roc 2007-08 0063c170  unit: CXTPControl  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063c170
//
// 0063c170  83ec10               sub esp, 0x10
// 0063c173  56                   push esi
// 0063c174  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0063c178  57                   push edi
// 0063c179  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0063c17d  8d442408             lea eax, [esp + 8]
// 0063c181  50                   push eax
// 0063c182  6a64                 push 0x64
// 0063c184  56                   push esi
// 0063c185  8bcf                 mov ecx, edi
// 0063c187  e884e6ffff           call 0x63a810
// 0063c18c  85c0                 test eax, eax
// 0063c18e  7517                 jne 0x63c1a7
// 0063c190  8b8f84000000         mov ecx, dword ptr [edi + 0x84]
// 0063c196  8b5620               mov edx, dword ptr [esi + 0x20]
// 0063c199  50                   push eax
// 0063c19a  51                   push ecx
// 0063c19b  6811010000           push 0x111
// 0063c1a0  52                   push edx
// 0063c1a1  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0063c1a7  5f                   pop edi
// 0063c1a8  5e                   pop esi
// 0063c1a9  83c410               add esp, 0x10
// 0063c1ac  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControl.cpp (function ?NotifyExecute@@YAXPAVCXTPControl@@PAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControl.cpp
