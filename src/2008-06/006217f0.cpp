// from server: 100% by auto
// roc 2008-06 006217f0  unit: RBX::Lua::VThreadRef::?$sp_counted_impl_p  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006217f0
//
// 006217f0  8b442408             mov eax, dword ptr [esp + 8]
// 006217f4  56                   push esi
// 006217f5  8b742410             mov esi, dword ptr [esp + 0x10]
// 006217f9  83c0fe               add eax, -2
// 006217fc  57                   push edi
// 006217fd  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00621801  83f803               cmp eax, 3
// 00621804  7749                 ja 0x62184f
// 00621806  ff248558186200       jmp dword ptr [eax*4 + 0x621858]
// 0062180d  6a11                 push 0x11
// 0062180f  68b4478400           push 0x8447b4
// 00621814  57                   push edi
// 00621815  e8e6da0300           call 0x65f300
// 0062181a  83c40c               add esp, 0xc
// 0062181d  8906                 mov dword ptr [esi], eax
// 0062181f  c7460804000000       mov dword ptr [esi + 8], 4
// 00621826  83c610               add esi, 0x10
// 00621829  897708               mov dword ptr [edi + 8], esi
// 0062182c  5f                   pop edi
// 0062182d  5e                   pop esi
// 0062182e  c3                   ret 
// 0062182f  6a17                 push 0x17
// 00621831  689c478400           push 0x84479c
// 00621836  ebdc                 jmp 0x621814
// 00621838  8b4708               mov eax, dword ptr [edi + 8]
// 0062183b  8b48f0               mov ecx, dword ptr [eax - 0x10]
// 0062183e  83e810               sub eax, 0x10
// 00621841  890e                 mov dword ptr [esi], ecx
// 00621843  8b5004               mov edx, dword ptr [eax + 4]
// 00621846  895604               mov dword ptr [esi + 4], edx
// 00621849  8b4008               mov eax, dword ptr [eax + 8]
// 0062184c  894608               mov dword ptr [esi + 8], eax
// 0062184f  83c610               add esi, 0x10
// 00621852  897708               mov dword ptr [edi + 8], esi
// 00621855  5f                   pop edi
// 00621856  5e                   pop esi
// 00621857  c3                   ret 
// 00621858  3818                 cmp byte ptr [eax], bl
// 0062185a  6200                 bound eax, qword ptr [eax]
// 0062185c  3818                 cmp byte ptr [eax], bl
// 0062185e  6200                 bound eax, qword ptr [eax]
// 00621860  0d1862002f           or eax, 0x2f006218
// 00621865  186200               sbb byte ptr [edx], ah
// library lua-5.1.4/ldo.c (function _luaD_seterrorobj)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
