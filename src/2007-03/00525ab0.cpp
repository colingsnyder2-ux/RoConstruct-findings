// roc 2007-03 00525ab0  unit: seg_00520000  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00525ab0
//
// 00525ab0  56                   push esi
// 00525ab1  8b742408             mov esi, dword ptr [esp + 8]
// 00525ab5  8b4604               mov eax, dword ptr [esi + 4]
// 00525ab8  8b08                 mov ecx, dword ptr [eax]
// 00525aba  6a58                 push 0x58
// 00525abc  6a01                 push 1
// 00525abe  56                   push esi
// 00525abf  ffd1                 call ecx
// 00525ac1  8986a8010000         mov dword ptr [esi + 0x1a8], eax
// 00525ac7  33c9                 xor ecx, ecx
// 00525ac9  c700a0595200         mov dword ptr [eax], 0x5259a0
// 00525acf  c74008c07d6900       mov dword ptr [eax + 8], 0x697dc0
// 00525ad6  c7400c905a5200       mov dword ptr [eax + 0xc], 0x525a90
// 00525add  894844               mov dword ptr [eax + 0x44], ecx
// 00525ae0  894834               mov dword ptr [eax + 0x34], ecx
// 00525ae3  b804000000           mov eax, 4
// 00525ae8  83c40c               add esp, 0xc
// 00525aeb  394664               cmp dword ptr [esi + 0x64], eax
// 00525aee  7e18                 jle 0x525b08
// 00525af0  8b16                 mov edx, dword ptr [esi]
// 00525af2  c7421437000000       mov dword ptr [edx + 0x14], 0x37
// 00525af9  8b0e                 mov ecx, dword ptr [esi]
// 00525afb  894118               mov dword ptr [ecx + 0x18], eax
// 00525afe  8b16                 mov edx, dword ptr [esi]
// 00525b00  8b02                 mov eax, dword ptr [edx]
// 00525b02  56                   push esi
// 00525b03  ffd0                 call eax
// 00525b05  83c404               add esp, 4
// 00525b08  b800010000           mov eax, 0x100
// 00525b0d  394654               cmp dword ptr [esi + 0x54], eax
// 00525b10  7e18                 jle 0x525b2a
// 00525b12  8b0e                 mov ecx, dword ptr [esi]
// 00525b14  c7411439000000       mov dword ptr [ecx + 0x14], 0x39
// 00525b1b  8b16                 mov edx, dword ptr [esi]
// 00525b1d  894218               mov dword ptr [edx + 0x18], eax
// 00525b20  8b06                 mov eax, dword ptr [esi]
// 00525b22  8b08                 mov ecx, dword ptr [eax]
// 00525b24  56                   push esi
// 00525b25  ffd1                 call ecx
// 00525b27  83c404               add esp, 4
// 00525b2a  56                   push esi
// 00525b2b  e830f5ffff           call 0x525060
// 00525b30  56                   push esi
// 00525b31  e89af6ffff           call 0x5251d0
// 00525b36  83c408               add esp, 8
// 00525b39  837e4c02             cmp dword ptr [esi + 0x4c], 2
// 00525b3d  7505                 jne 0x525b44
// 00525b3f  e81cfeffff           call 0x525960
// 00525b44  5e                   pop esi
// 00525b45  c3                   ret 
// library jpeg-6b/jquant1.c (function _jinit_1pass_quantizer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
