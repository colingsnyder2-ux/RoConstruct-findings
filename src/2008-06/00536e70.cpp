// from server: 100% by auto
// roc 2008-06 00536e70  unit: seg_00530000  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00536e70
//
// 00536e70  56                   push esi
// 00536e71  8b742408             mov esi, dword ptr [esp + 8]
// 00536e75  8b4604               mov eax, dword ptr [esi + 4]
// 00536e78  8b08                 mov ecx, dword ptr [eax]
// 00536e7a  6a58                 push 0x58
// 00536e7c  6a01                 push 1
// 00536e7e  56                   push esi
// 00536e7f  ffd1                 call ecx
// 00536e81  8986a8010000         mov dword ptr [esi + 0x1a8], eax
// 00536e87  33c9                 xor ecx, ecx
// 00536e89  c700606d5300         mov dword ptr [eax], 0x536d60
// 00536e8f  c7400810d44700       mov dword ptr [eax + 8], 0x47d410
// 00536e96  c7400c506e5300       mov dword ptr [eax + 0xc], 0x536e50
// 00536e9d  894844               mov dword ptr [eax + 0x44], ecx
// 00536ea0  894834               mov dword ptr [eax + 0x34], ecx
// 00536ea3  b804000000           mov eax, 4
// 00536ea8  83c40c               add esp, 0xc
// 00536eab  394664               cmp dword ptr [esi + 0x64], eax
// 00536eae  7e18                 jle 0x536ec8
// 00536eb0  8b16                 mov edx, dword ptr [esi]
// 00536eb2  c7421437000000       mov dword ptr [edx + 0x14], 0x37
// 00536eb9  8b0e                 mov ecx, dword ptr [esi]
// 00536ebb  894118               mov dword ptr [ecx + 0x18], eax
// 00536ebe  8b16                 mov edx, dword ptr [esi]
// 00536ec0  8b02                 mov eax, dword ptr [edx]
// 00536ec2  56                   push esi
// 00536ec3  ffd0                 call eax
// 00536ec5  83c404               add esp, 4
// 00536ec8  b800010000           mov eax, 0x100
// 00536ecd  394654               cmp dword ptr [esi + 0x54], eax
// 00536ed0  7e18                 jle 0x536eea
// 00536ed2  8b0e                 mov ecx, dword ptr [esi]
// 00536ed4  c7411439000000       mov dword ptr [ecx + 0x14], 0x39
// 00536edb  8b16                 mov edx, dword ptr [esi]
// 00536edd  894218               mov dword ptr [edx + 0x18], eax
// 00536ee0  8b06                 mov eax, dword ptr [esi]
// 00536ee2  8b08                 mov ecx, dword ptr [eax]
// 00536ee4  56                   push esi
// 00536ee5  ffd1                 call ecx
// 00536ee7  83c404               add esp, 4
// 00536eea  56                   push esi
// 00536eeb  e860f5ffff           call 0x536450
// 00536ef0  56                   push esi
// 00536ef1  e8caf6ffff           call 0x5365c0
// 00536ef6  83c408               add esp, 8
// 00536ef9  837e4c02             cmp dword ptr [esi + 0x4c], 2
// 00536efd  7505                 jne 0x536f04
// 00536eff  e81cfeffff           call 0x536d20
// 00536f04  5e                   pop esi
// 00536f05  c3                   ret 
// library jpeg-6b/jquant1.c (function _jinit_1pass_quantizer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
