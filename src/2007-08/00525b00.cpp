// roc 2007-08 00525b00  unit: G3D::Line  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00525b00
//
// 00525b00  56                   push esi
// 00525b01  57                   push edi
// 00525b02  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00525b06  8bb788010000         mov esi, dword ptr [edi + 0x188]
// 00525b0c  837e1000             cmp dword ptr [esi + 0x10], 0
// 00525b10  742a                 je 0x525b3c
// 00525b12  807f4900             cmp byte ptr [edi + 0x49], 0
// 00525b16  741d                 je 0x525b35
// 00525b18  e833f8ffff           call 0x525350
// 00525b1d  84c0                 test al, al
// 00525b1f  7414                 je 0x525b35
// 00525b21  c7460cb0545200       mov dword ptr [esi + 0xc], 0x5254b0
// 00525b28  c7878800000000000000 mov dword ptr [edi + 0x88], 0
// 00525b32  5f                   pop edi
// 00525b33  5e                   pop esi
// 00525b34  c3                   ret 
// 00525b35  c7460cc0515200       mov dword ptr [esi + 0xc], 0x5251c0
// 00525b3c  c7878800000000000000 mov dword ptr [edi + 0x88], 0
// 00525b46  5f                   pop edi
// 00525b47  5e                   pop esi
// 00525b48  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _start_output_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
