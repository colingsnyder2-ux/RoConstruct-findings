// roc 2008-06 00531d90  unit: seg_00530000  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00531d90
//
// 00531d90  56                   push esi
// 00531d91  57                   push edi
// 00531d92  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00531d96  8bb788010000         mov esi, dword ptr [edi + 0x188]
// 00531d9c  837e1000             cmp dword ptr [esi + 0x10], 0
// 00531da0  742a                 je 0x531dcc
// 00531da2  807f4900             cmp byte ptr [edi + 0x49], 0
// 00531da6  741d                 je 0x531dc5
// 00531da8  e883f8ffff           call 0x531630
// 00531dad  84c0                 test al, al
// 00531daf  7414                 je 0x531dc5
// 00531db1  c7460c90175300       mov dword ptr [esi + 0xc], 0x531790
// 00531db8  c7878800000000000000 mov dword ptr [edi + 0x88], 0
// 00531dc2  5f                   pop edi
// 00531dc3  5e                   pop esi
// 00531dc4  c3                   ret 
// 00531dc5  c7460ca0145300       mov dword ptr [esi + 0xc], 0x5314a0
// 00531dcc  c7878800000000000000 mov dword ptr [edi + 0x88], 0
// 00531dd6  5f                   pop edi
// 00531dd7  5e                   pop esi
// 00531dd8  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _start_output_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
