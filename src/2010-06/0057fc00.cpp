// roc 2010-06 0057fc00  unit: seg_00570000  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057fc00
//
// 0057fc00  56                   push esi
// 0057fc01  57                   push edi
// 0057fc02  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0057fc06  8bb788010000         mov esi, dword ptr [edi + 0x188]
// 0057fc0c  837e1000             cmp dword ptr [esi + 0x10], 0
// 0057fc10  742a                 je 0x57fc3c
// 0057fc12  807f4900             cmp byte ptr [edi + 0x49], 0
// 0057fc16  741d                 je 0x57fc35
// 0057fc18  e883f8ffff           call 0x57f4a0
// 0057fc1d  84c0                 test al, al
// 0057fc1f  7414                 je 0x57fc35
// 0057fc21  c7460c00f65700       mov dword ptr [esi + 0xc], 0x57f600
// 0057fc28  c7878800000000000000 mov dword ptr [edi + 0x88], 0
// 0057fc32  5f                   pop edi
// 0057fc33  5e                   pop esi
// 0057fc34  c3                   ret 
// 0057fc35  c7460c10f35700       mov dword ptr [esi + 0xc], 0x57f310
// 0057fc3c  c7878800000000000000 mov dword ptr [edi + 0x88], 0
// 0057fc46  5f                   pop edi
// 0057fc47  5e                   pop esi
// 0057fc48  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _start_output_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
