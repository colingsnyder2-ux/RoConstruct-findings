// roc 2009-12 0061e0a0  unit: seg_00610000  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061e0a0
//
// 0061e0a0  56                   push esi
// 0061e0a1  57                   push edi
// 0061e0a2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0061e0a6  8bb788010000         mov esi, dword ptr [edi + 0x188]
// 0061e0ac  837e1000             cmp dword ptr [esi + 0x10], 0
// 0061e0b0  742a                 je 0x61e0dc
// 0061e0b2  807f4900             cmp byte ptr [edi + 0x49], 0
// 0061e0b6  741d                 je 0x61e0d5
// 0061e0b8  e883f8ffff           call 0x61d940
// 0061e0bd  84c0                 test al, al
// 0061e0bf  7414                 je 0x61e0d5
// 0061e0c1  c7460ca0da6100       mov dword ptr [esi + 0xc], 0x61daa0
// 0061e0c8  c7878800000000000000 mov dword ptr [edi + 0x88], 0
// 0061e0d2  5f                   pop edi
// 0061e0d3  5e                   pop esi
// 0061e0d4  c3                   ret 
// 0061e0d5  c7460cb0d76100       mov dword ptr [esi + 0xc], 0x61d7b0
// 0061e0dc  c7878800000000000000 mov dword ptr [edi + 0x88], 0
// 0061e0e6  5f                   pop edi
// 0061e0e7  5e                   pop esi
// 0061e0e8  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _start_output_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
