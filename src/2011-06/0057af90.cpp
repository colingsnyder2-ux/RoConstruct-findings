// from server: 100% by auto
// roc 2011-06 0057af90  unit: seg_00570000  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057af90
//
// 0057af90  56                   push esi
// 0057af91  8b742408             mov esi, dword ptr [esp + 8]
// 0057af95  8b4604               mov eax, dword ptr [esi + 4]
// 0057af98  8b08                 mov ecx, dword ptr [eax]
// 0057af9a  6a58                 push 0x58
// 0057af9c  6a01                 push 1
// 0057af9e  56                   push esi
// 0057af9f  ffd1                 call ecx
// 0057afa1  8986a8010000         mov dword ptr [esi + 0x1a8], eax
// 0057afa7  33c9                 xor ecx, ecx
// 0057afa9  c70080ae5700         mov dword ptr [eax], 0x57ae80
// 0057afaf  c7400840b68600       mov dword ptr [eax + 8], 0x86b640
// 0057afb6  c7400c70af5700       mov dword ptr [eax + 0xc], 0x57af70
// 0057afbd  894844               mov dword ptr [eax + 0x44], ecx
// 0057afc0  894834               mov dword ptr [eax + 0x34], ecx
// 0057afc3  b804000000           mov eax, 4
// 0057afc8  83c40c               add esp, 0xc
// 0057afcb  394664               cmp dword ptr [esi + 0x64], eax
// 0057afce  7e18                 jle 0x57afe8
// 0057afd0  8b16                 mov edx, dword ptr [esi]
// 0057afd2  c7421437000000       mov dword ptr [edx + 0x14], 0x37
// 0057afd9  8b0e                 mov ecx, dword ptr [esi]
// 0057afdb  894118               mov dword ptr [ecx + 0x18], eax
// 0057afde  8b16                 mov edx, dword ptr [esi]
// 0057afe0  8b02                 mov eax, dword ptr [edx]
// 0057afe2  56                   push esi
// 0057afe3  ffd0                 call eax
// 0057afe5  83c404               add esp, 4
// 0057afe8  b800010000           mov eax, 0x100
// 0057afed  394654               cmp dword ptr [esi + 0x54], eax
// 0057aff0  7e18                 jle 0x57b00a
// 0057aff2  8b0e                 mov ecx, dword ptr [esi]
// 0057aff4  c7411439000000       mov dword ptr [ecx + 0x14], 0x39
// 0057affb  8b16                 mov edx, dword ptr [esi]
// 0057affd  894218               mov dword ptr [edx + 0x18], eax
// 0057b000  8b06                 mov eax, dword ptr [esi]
// 0057b002  8b08                 mov ecx, dword ptr [eax]
// 0057b004  56                   push esi
// 0057b005  ffd1                 call ecx
// 0057b007  83c404               add esp, 4
// 0057b00a  56                   push esi
// 0057b00b  e860f5ffff           call 0x57a570
// 0057b010  56                   push esi
// 0057b011  e8caf6ffff           call 0x57a6e0
// 0057b016  83c408               add esp, 8
// 0057b019  837e4c02             cmp dword ptr [esi + 0x4c], 2
// 0057b01d  7505                 jne 0x57b024
// 0057b01f  e81cfeffff           call 0x57ae40
// 0057b024  5e                   pop esi
// 0057b025  c3                   ret 
// library jpeg-6b/jquant1.c (function _jinit_1pass_quantizer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
