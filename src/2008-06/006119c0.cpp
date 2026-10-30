// from server: 100% by auto
// roc 2008-06 006119c0  unit: seg_00610000  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006119c0
//
// 006119c0  53                   push ebx
// 006119c1  55                   push ebp
// 006119c2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 006119c6  56                   push esi
// 006119c7  8b742418             mov esi, dword ptr [esp + 0x18]
// 006119cb  57                   push edi
// 006119cc  85f6                 test esi, esi
// 006119ce  741b                 je 0x6119eb
// 006119d0  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 006119d4  57                   push edi
// 006119d5  55                   push ebp
// 006119d6  e825040000           call 0x611e00
// 006119db  83c408               add esp, 8
// 006119de  85c0                 test eax, eax
// 006119e0  7f04                 jg 0x6119e6
// 006119e2  8bc6                 mov eax, esi
// 006119e4  eb15                 jmp 0x6119fb
// 006119e6  6a00                 push 0
// 006119e8  57                   push edi
// 006119e9  eb07                 jmp 0x6119f2
// 006119eb  8b442418             mov eax, dword ptr [esp + 0x18]
// 006119ef  6a00                 push 0
// 006119f1  50                   push eax
// 006119f2  55                   push ebp
// 006119f3  e8c8fcffff           call 0x6116c0
// 006119f8  83c40c               add esp, 0xc
// 006119fb  8b742420             mov esi, dword ptr [esp + 0x20]
// 006119ff  8b0e                 mov ecx, dword ptr [esi]
// 00611a01  33ff                 xor edi, edi
// 00611a03  85c9                 test ecx, ecx
// 00611a05  743b                 je 0x611a42
// 00611a07  8bd0                 mov edx, eax
// 00611a09  8da42400000000       lea esp, [esp]
// 00611a10  8a19                 mov bl, byte ptr [ecx]
// 00611a12  3a1a                 cmp bl, byte ptr [edx]
// 00611a14  751a                 jne 0x611a30
// 00611a16  84db                 test bl, bl
// 00611a18  7412                 je 0x611a2c
// 00611a1a  8a5901               mov bl, byte ptr [ecx + 1]
// 00611a1d  3a5a01               cmp bl, byte ptr [edx + 1]
// 00611a20  750e                 jne 0x611a30
// 00611a22  83c102               add ecx, 2
// 00611a25  83c202               add edx, 2
// 00611a28  84db                 test bl, bl
// 00611a2a  75e4                 jne 0x611a10
// 00611a2c  33c9                 xor ecx, ecx
// 00611a2e  eb05                 jmp 0x611a35
// 00611a30  1bc9                 sbb ecx, ecx
// 00611a32  83d9ff               sbb ecx, -1
// 00611a35  85c9                 test ecx, ecx
// 00611a37  7429                 je 0x611a62
// 00611a39  8b4cbe04             mov ecx, dword ptr [esi + edi*4 + 4]
// 00611a3d  47                   inc edi
// 00611a3e  85c9                 test ecx, ecx
// 00611a40  75c5                 jne 0x611a07
// 00611a42  50                   push eax
// 00611a43  686c388400           push 0x84386c
// 00611a48  55                   push ebp
// 00611a49  e8d2080000           call 0x612320
// 00611a4e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00611a52  50                   push eax
// 00611a53  51                   push ecx
// 00611a54  55                   push ebp
// 00611a55  e876faffff           call 0x6114d0
// 00611a5a  83c418               add esp, 0x18
// 00611a5d  5f                   pop edi
// 00611a5e  5e                   pop esi
// 00611a5f  5d                   pop ebp
// 00611a60  5b                   pop ebx
// 00611a61  c3                   ret 
// 00611a62  8bc7                 mov eax, edi
// 00611a64  5f                   pop edi
// 00611a65  5e                   pop esi
// 00611a66  5d                   pop ebp
// 00611a67  5b                   pop ebx
// 00611a68  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_checkoption)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
