// from server: 100% by auto
// roc 2007-08 00612f50  unit: seg_00610000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00612f50
//
// 00612f50  53                   push ebx
// 00612f51  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00612f55  55                   push ebp
// 00612f56  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00612f5a  56                   push esi
// 00612f5b  57                   push edi
// 00612f5c  8d3c9d14000000       lea edi, [ebx*4 + 0x14]
// 00612f63  57                   push edi
// 00612f64  6a00                 push 0
// 00612f66  6a00                 push 0
// 00612f68  55                   push ebp
// 00612f69  e8820a0000           call 0x6139f0
// 00612f6e  8bf0                 mov esi, eax
// 00612f70  6a06                 push 6
// 00612f72  56                   push esi
// 00612f73  55                   push ebp
// 00612f74  e8d7cfffff           call 0x60ff50
// 00612f79  8b442438             mov eax, dword ptr [esp + 0x38]
// 00612f7d  83c41c               add esp, 0x1c
// 00612f80  85db                 test ebx, ebx
// 00612f82  c6460600             mov byte ptr [esi + 6], 0
// 00612f86  89460c               mov dword ptr [esi + 0xc], eax
// 00612f89  885e07               mov byte ptr [esi + 7], bl
// 00612f8c  7413                 je 0x612fa1
// 00612f8e  8d0437               lea eax, [edi + esi]
// 00612f91  83eb01               sub ebx, 1
// 00612f94  83e804               sub eax, 4
// 00612f97  85db                 test ebx, ebx
// 00612f99  c70000000000         mov dword ptr [eax], 0
// 00612f9f  75f0                 jne 0x612f91
// 00612fa1  5f                   pop edi
// 00612fa2  8bc6                 mov eax, esi
// 00612fa4  5e                   pop esi
// 00612fa5  5d                   pop ebp
// 00612fa6  5b                   pop ebx
// 00612fa7  c3                   ret 
// library lua-5.1.4/lfunc.c (function _luaF_newLclosure)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lfunc.c
