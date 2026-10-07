// roc 2009-06 0059c070  unit: seg_00590000  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059c070
//
// 0059c070  56                   push esi
// 0059c071  57                   push edi
// 0059c072  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0059c076  8bb788010000         mov esi, dword ptr [edi + 0x188]
// 0059c07c  837e1000             cmp dword ptr [esi + 0x10], 0
// 0059c080  742a                 je 0x59c0ac
// 0059c082  807f4900             cmp byte ptr [edi + 0x49], 0
// 0059c086  741d                 je 0x59c0a5
// 0059c088  e883f8ffff           call 0x59b910
// 0059c08d  84c0                 test al, al
// 0059c08f  7414                 je 0x59c0a5
// 0059c091  c7460c70ba5900       mov dword ptr [esi + 0xc], 0x59ba70
// 0059c098  c7878800000000000000 mov dword ptr [edi + 0x88], 0
// 0059c0a2  5f                   pop edi
// 0059c0a3  5e                   pop esi
// 0059c0a4  c3                   ret 
// 0059c0a5  c7460c80b75900       mov dword ptr [esi + 0xc], 0x59b780
// 0059c0ac  c7878800000000000000 mov dword ptr [edi + 0x88], 0
// 0059c0b6  5f                   pop edi
// 0059c0b7  5e                   pop esi
// 0059c0b8  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _start_output_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
