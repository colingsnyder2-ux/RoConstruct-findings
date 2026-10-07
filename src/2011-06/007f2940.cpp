// roc 2011-06 007f2940  unit: RBX::AdvLuaDragTool  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007f2940
//
// 007f2940  56                   push esi
// 007f2941  8b742408             mov esi, dword ptr [esp + 8]
// 007f2945  8b460c               mov eax, dword ptr [esi + 0xc]
// 007f2948  57                   push edi
// 007f2949  8b7e20               mov edi, dword ptr [esi + 0x20]
// 007f294c  c74620ffffffff       mov dword ptr [esi + 0x20], 0xffffffff
// 007f2953  8b4808               mov ecx, dword ptr [eax + 8]
// 007f2956  51                   push ecx
// 007f2957  681680ff7f           push 0x7fff8016
// 007f295c  e8affdffff           call 0x7f2710
// 007f2961  57                   push edi
// 007f2962  8d542418             lea edx, [esp + 0x18]
// 007f2966  52                   push edx
// 007f2967  56                   push esi
// 007f2968  89442420             mov dword ptr [esp + 0x20], eax
// 007f296c  e8dff8ffff           call 0x7f2250
// 007f2971  8b442420             mov eax, dword ptr [esp + 0x20]
// 007f2975  83c414               add esp, 0x14
// 007f2978  5f                   pop edi
// 007f2979  5e                   pop esi
// 007f297a  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_jump)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
