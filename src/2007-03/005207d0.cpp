// roc 2007-03 005207d0  unit: seg_00520000  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005207d0
//
// 005207d0  56                   push esi
// 005207d1  57                   push edi
// 005207d2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005207d6  8bb788010000         mov esi, dword ptr [edi + 0x188]
// 005207dc  837e1000             cmp dword ptr [esi + 0x10], 0
// 005207e0  742a                 je 0x52080c
// 005207e2  807f4900             cmp byte ptr [edi + 0x49], 0
// 005207e6  741d                 je 0x520805
// 005207e8  e833f8ffff           call 0x520020
// 005207ed  84c0                 test al, al
// 005207ef  7414                 je 0x520805
// 005207f1  c7460c80015200       mov dword ptr [esi + 0xc], 0x520180
// 005207f8  c7878800000000000000 mov dword ptr [edi + 0x88], 0
// 00520802  5f                   pop edi
// 00520803  5e                   pop esi
// 00520804  c3                   ret 
// 00520805  c7460c90fe5100       mov dword ptr [esi + 0xc], 0x51fe90
// 0052080c  c7878800000000000000 mov dword ptr [edi + 0x88], 0
// 00520816  5f                   pop edi
// 00520817  5e                   pop esi
// 00520818  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _start_output_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
