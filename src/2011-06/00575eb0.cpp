// roc 2011-06 00575eb0  unit: seg_00570000  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00575eb0
//
// 00575eb0  56                   push esi
// 00575eb1  57                   push edi
// 00575eb2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00575eb6  8bb788010000         mov esi, dword ptr [edi + 0x188]
// 00575ebc  837e1000             cmp dword ptr [esi + 0x10], 0
// 00575ec0  742a                 je 0x575eec
// 00575ec2  807f4900             cmp byte ptr [edi + 0x49], 0
// 00575ec6  741d                 je 0x575ee5
// 00575ec8  e883f8ffff           call 0x575750
// 00575ecd  84c0                 test al, al
// 00575ecf  7414                 je 0x575ee5
// 00575ed1  c7460cb0585700       mov dword ptr [esi + 0xc], 0x5758b0
// 00575ed8  c7878800000000000000 mov dword ptr [edi + 0x88], 0
// 00575ee2  5f                   pop edi
// 00575ee3  5e                   pop esi
// 00575ee4  c3                   ret 
// 00575ee5  c7460cc0555700       mov dword ptr [esi + 0xc], 0x5755c0
// 00575eec  c7878800000000000000 mov dword ptr [edi + 0x88], 0
// 00575ef6  5f                   pop edi
// 00575ef7  5e                   pop esi
// 00575ef8  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _start_output_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
