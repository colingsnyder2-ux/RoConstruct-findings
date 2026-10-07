// roc 2010-06 0072f830  unit: VWaitScriptSlot::?$TGenericSlotWrapper  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0072f830
//
// 0072f830  8b442408             mov eax, dword ptr [esp + 8]
// 0072f834  56                   push esi
// 0072f835  8b742410             mov esi, dword ptr [esp + 0x10]
// 0072f839  83c0fe               add eax, -2
// 0072f83c  57                   push edi
// 0072f83d  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0072f841  83f803               cmp eax, 3
// 0072f844  7749                 ja 0x72f88f
// 0072f846  ff248598f87200       jmp dword ptr [eax*4 + 0x72f898]
// 0072f84d  6a11                 push 0x11
// 0072f84f  68c8dba400           push 0xa4dbc8
// 0072f854  57                   push edi
// 0072f855  e886e50400           call 0x77dde0
// 0072f85a  83c40c               add esp, 0xc
// 0072f85d  8906                 mov dword ptr [esi], eax
// 0072f85f  c7460804000000       mov dword ptr [esi + 8], 4
// 0072f866  83c610               add esi, 0x10
// 0072f869  897708               mov dword ptr [edi + 8], esi
// 0072f86c  5f                   pop edi
// 0072f86d  5e                   pop esi
// 0072f86e  c3                   ret 
// 0072f86f  6a17                 push 0x17
// 0072f871  68b0dba400           push 0xa4dbb0
// 0072f876  ebdc                 jmp 0x72f854
// 0072f878  8b4708               mov eax, dword ptr [edi + 8]
// 0072f87b  8b48f0               mov ecx, dword ptr [eax - 0x10]
// 0072f87e  83e810               sub eax, 0x10
// 0072f881  890e                 mov dword ptr [esi], ecx
// 0072f883  8b5004               mov edx, dword ptr [eax + 4]
// 0072f886  895604               mov dword ptr [esi + 4], edx
// 0072f889  8b4008               mov eax, dword ptr [eax + 8]
// 0072f88c  894608               mov dword ptr [esi + 8], eax
// 0072f88f  83c610               add esi, 0x10
// 0072f892  897708               mov dword ptr [edi + 8], esi
// 0072f895  5f                   pop edi
// 0072f896  5e                   pop esi
// 0072f897  c3                   ret 
// 0072f898  78f8                 js 0x72f892
// 0072f89a  7200                 jb 0x72f89c
// 0072f89c  78f8                 js 0x72f896
// 0072f89e  7200                 jb 0x72f8a0
// 0072f8a0  4d                   dec ebp
// 0072f8a1  f8                   clc 
// 0072f8a2  7200                 jb 0x72f8a4
// 0072f8a4  6f                   outsd dx, dword ptr [esi]
// 0072f8a5  f8                   clc 
// 0072f8a6  7200                 jb 0x72f8a8
// library lua-5.1.4/ldo.c (function _luaD_seterrorobj)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
