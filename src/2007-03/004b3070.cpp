// from server: 100% by auto
// roc 2007-03 004b3070  unit: seg_004b0000  size: 418 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b3070
//
// 004b3070  81ec80000000         sub esp, 0x80
// 004b3076  53                   push ebx
// 004b3077  55                   push ebp
// 004b3078  56                   push esi
// 004b3079  57                   push edi
// 004b307a  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 004b3081  8b08                 mov ecx, dword ptr [eax]
// 004b3083  8b5004               mov edx, dword ptr [eax + 4]
// 004b3086  894c2430             mov dword ptr [esp + 0x30], ecx
// 004b308a  8b4808               mov ecx, dword ptr [eax + 8]
// 004b308d  89542434             mov dword ptr [esp + 0x34], edx
// 004b3091  8b500c               mov edx, dword ptr [eax + 0xc]
// 004b3094  33c0                 xor eax, eax
// 004b3096  89442440             mov dword ptr [esp + 0x40], eax
// 004b309a  89442444             mov dword ptr [esp + 0x44], eax
// 004b309e  89442448             mov dword ptr [esp + 0x48], eax
// 004b30a2  8944244c             mov dword ptr [esp + 0x4c], eax
// 004b30a6  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 004b30ad  894c2438             mov dword ptr [esp + 0x38], ecx
// 004b30b1  8b08                 mov ecx, dword ptr [eax]
// 004b30b3  8954243c             mov dword ptr [esp + 0x3c], edx
// 004b30b7  8b5004               mov edx, dword ptr [eax + 4]
// 004b30ba  894c2470             mov dword ptr [esp + 0x70], ecx
// 004b30be  8b4808               mov ecx, dword ptr [eax + 8]
// 004b30c1  89542474             mov dword ptr [esp + 0x74], edx
// 004b30c5  8b500c               mov edx, dword ptr [eax + 0xc]
// 004b30c8  33c0                 xor eax, eax
// 004b30ca  89842480000000       mov dword ptr [esp + 0x80], eax
// 004b30d1  89842484000000       mov dword ptr [esp + 0x84], eax
// 004b30d8  89842488000000       mov dword ptr [esp + 0x88], eax
// 004b30df  8984248c000000       mov dword ptr [esp + 0x8c], eax
// 004b30e6  8b84249c000000       mov eax, dword ptr [esp + 0x9c]
// 004b30ed  894c2478             mov dword ptr [esp + 0x78], ecx
// 004b30f1  8b08                 mov ecx, dword ptr [eax]
// 004b30f3  8954247c             mov dword ptr [esp + 0x7c], edx
// 004b30f7  8b5004               mov edx, dword ptr [eax + 4]
// 004b30fa  894c2450             mov dword ptr [esp + 0x50], ecx
// 004b30fe  8b4808               mov ecx, dword ptr [eax + 8]
// 004b3101  89542454             mov dword ptr [esp + 0x54], edx
// 004b3105  8b500c               mov edx, dword ptr [eax + 0xc]
// 004b3108  33c0                 xor eax, eax
// 004b310a  89442460             mov dword ptr [esp + 0x60], eax
// 004b310e  89442464             mov dword ptr [esp + 0x64], eax
// 004b3112  89442468             mov dword ptr [esp + 0x68], eax
// 004b3116  8944246c             mov dword ptr [esp + 0x6c], eax
// 004b311a  89442414             mov dword ptr [esp + 0x14], eax
// 004b311e  89442418             mov dword ptr [esp + 0x18], eax
// 004b3122  8944241c             mov dword ptr [esp + 0x1c], eax
// 004b3126  89442420             mov dword ptr [esp + 0x20], eax
// 004b312a  89442424             mov dword ptr [esp + 0x24], eax
// 004b312e  89442428             mov dword ptr [esp + 0x28], eax
// 004b3132  8944242c             mov dword ptr [esp + 0x2c], eax
// 004b3136  8d442430             lea eax, [esp + 0x30]
// 004b313a  894c2458             mov dword ptr [esp + 0x58], ecx
// 004b313e  50                   push eax
// 004b313f  8d4c2454             lea ecx, [esp + 0x54]
// 004b3143  89542460             mov dword ptr [esp + 0x60], edx
// 004b3147  51                   push ecx
// 004b3148  8bd0                 mov edx, eax
// 004b314a  52                   push edx
// 004b314b  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 004b3153  e878d2ffff           call 0x4b03d0
// 004b3158  83c40c               add esp, 0xc
// 004b315b  33f6                 xor esi, esi
// 004b315d  33ed                 xor ebp, ebp
// 004b315f  90                   nop 
// 004b3160  8b5cac70             mov ebx, dword ptr [esp + ebp*4 + 0x70]
// 004b3164  85db                 test ebx, ebx
// 004b3166  bf20000000           mov edi, 0x20
// 004b316b  746a                 je 0x4b31d7
// 004b316d  8d4900               lea ecx, [ecx]
// 004b3170  f6c301               test bl, 1
// 004b3173  7456                 je 0x4b31cb
// 004b3175  85f6                 test esi, esi
// 004b3177  742b                 je 0x4b31a4
// 004b3179  8da42400000000       lea esp, [esp]
// 004b3180  8d442430             lea eax, [esp + 0x30]
// 004b3184  50                   push eax
// 004b3185  e876bcffff           call 0x4aee00
// 004b318a  8d4c2434             lea ecx, [esp + 0x34]
// 004b318e  51                   push ecx
// 004b318f  8d542458             lea edx, [esp + 0x58]
// 004b3193  52                   push edx
// 004b3194  8bc1                 mov eax, ecx
// 004b3196  50                   push eax
// 004b3197  e834d2ffff           call 0x4b03d0
// 004b319c  83c410               add esp, 0x10
// 004b319f  83ee01               sub esi, 1
// 004b31a2  75dc                 jne 0x4b3180
// 004b31a4  8d4c2410             lea ecx, [esp + 0x10]
// 004b31a8  51                   push ecx
// 004b31a9  8d542434             lea edx, [esp + 0x34]
// 004b31ad  52                   push edx
// 004b31ae  8bc1                 mov eax, ecx
// 004b31b0  50                   push eax
// 004b31b1  e84ae4ffff           call 0x4b1600
// 004b31b6  8d4c241c             lea ecx, [esp + 0x1c]
// 004b31ba  51                   push ecx
// 004b31bb  8d542460             lea edx, [esp + 0x60]
// 004b31bf  52                   push edx
// 004b31c0  8bc1                 mov eax, ecx
// 004b31c2  50                   push eax
// 004b31c3  e808d2ffff           call 0x4b03d0
// 004b31c8  83c418               add esp, 0x18
// 004b31cb  d1eb                 shr ebx, 1
// 004b31cd  83c601               add esi, 1
// 004b31d0  83ef01               sub edi, 1
// 004b31d3  85db                 test ebx, ebx
// 004b31d5  7599                 jne 0x4b3170
// 004b31d7  83c501               add ebp, 1
// 004b31da  03f7                 add esi, edi
// 004b31dc  83fd04               cmp ebp, 4
// 004b31df  0f827bffffff         jb 0x4b3160
// 004b31e5  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 004b31ec  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004b31f0  8b542414             mov edx, dword ptr [esp + 0x14]
// 004b31f4  5f                   pop edi
// 004b31f5  8908                 mov dword ptr [eax], ecx
// 004b31f7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004b31fb  895004               mov dword ptr [eax + 4], edx
// 004b31fe  8b542418             mov edx, dword ptr [esp + 0x18]
// 004b3202  5e                   pop esi
// 004b3203  5d                   pop ebp
// 004b3204  894808               mov dword ptr [eax + 8], ecx
// 004b3207  89500c               mov dword ptr [eax + 0xc], edx
// 004b320a  5b                   pop ebx
// 004b320b  81c480000000         add esp, 0x80
// 004b3211  c3                   ret 

// from server: 29% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp