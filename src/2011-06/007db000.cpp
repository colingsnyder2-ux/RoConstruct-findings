// from server: 100% by auto
// roc 2011-06 007db000  unit: seg_007d0000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007db000
//
// 007db000  817e101d010000       cmp dword ptr [esi + 0x10], 0x11d
// 007db007  7424                 je 0x7db02d
// 007db009  681d010000           push 0x11d
// 007db00e  56                   push esi
// 007db00f  e85c390000           call 0x7de970
// 007db014  50                   push eax
// 007db015  8b4634               mov eax, dword ptr [esi + 0x34]
// 007db018  682ce1ab00           push 0xabe12c
// 007db01d  50                   push eax
// 007db01e  e8fd1dfaff           call 0x77ce20
// 007db023  50                   push eax
// 007db024  56                   push esi
// 007db025  e8463a0000           call 0x7dea70
// 007db02a  83c41c               add esp, 0x1c
// 007db02d  53                   push ebx
// 007db02e  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 007db031  56                   push esi
// 007db032  e8e94b0000           call 0x7dfc20
// 007db037  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 007db03a  53                   push ebx
// 007db03b  51                   push ecx
// 007db03c  e8df730100           call 0x7f2420
// 007db041  83c9ff               or ecx, 0xffffffff
// 007db044  83c40c               add esp, 0xc
// 007db047  894f10               mov dword ptr [edi + 0x10], ecx
// 007db04a  894f14               mov dword ptr [edi + 0x14], ecx
// 007db04d  c70704000000         mov dword ptr [edi], 4
// 007db053  894708               mov dword ptr [edi + 8], eax
// 007db056  5b                   pop ebx
// 007db057  c3                   ret 
// library lua-5.1.4/lparser.c (function _checkname)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
