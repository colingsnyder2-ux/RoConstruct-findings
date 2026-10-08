// from server: 100% by auto
// roc 2012-06 006615c0  unit: seg_00660000  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006615c0
//
// 006615c0  56                   push esi
// 006615c1  57                   push edi
// 006615c2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006615c6  8bb788010000         mov esi, dword ptr [edi + 0x188]
// 006615cc  837e1000             cmp dword ptr [esi + 0x10], 0
// 006615d0  742a                 je 0x6615fc
// 006615d2  807f4900             cmp byte ptr [edi + 0x49], 0
// 006615d6  741d                 je 0x6615f5
// 006615d8  e883f8ffff           call 0x660e60
// 006615dd  84c0                 test al, al
// 006615df  7414                 je 0x6615f5
// 006615e1  c7460cc00f6600       mov dword ptr [esi + 0xc], 0x660fc0
// 006615e8  c7878800000000000000 mov dword ptr [edi + 0x88], 0
// 006615f2  5f                   pop edi
// 006615f3  5e                   pop esi
// 006615f4  c3                   ret 
// 006615f5  c7460cd00c6600       mov dword ptr [esi + 0xc], 0x660cd0
// 006615fc  c7878800000000000000 mov dword ptr [edi + 0x88], 0
// 00661606  5f                   pop edi
// 00661607  5e                   pop esi
// 00661608  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _start_output_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
