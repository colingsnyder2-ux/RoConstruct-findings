// roc 2009-06 00683290  unit: RBX::Sky  size: 273 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00683290
//
// 00683290  d9ee                 fldz 
// 00683292  83ec24               sub esp, 0x24
// 00683295  53                   push ebx
// 00683296  bb01000000           mov ebx, 1
// 0068329b  56                   push esi
// 0068329c  841d402aa400         test byte ptr [0xa42a40], bl
// 006832a2  751c                 jne 0x6832c0
// 006832a4  d9e8                 fld1 
// 006832a6  091d402aa400         or dword ptr [0xa42a40], ebx
// 006832ac  d91d342aa400         fstp dword ptr [0xa42a34]
// 006832b2  d915382aa400         fst dword ptr [0xa42a38]
// 006832b8  d91d3c2aa400         fstp dword ptr [0xa42a3c]
// 006832be  eb02                 jmp 0x6832c2
// 006832c0  ddd8                 fstp st(0)
// 006832c2  8b542434             mov edx, dword ptr [esp + 0x34]
// 006832c6  52                   push edx
// 006832c7  8d442424             lea eax, [esp + 0x24]
// 006832cb  68342aa400           push 0xa42a34
// 006832d0  50                   push eax
// 006832d1  e8fafbffff           call 0x682ed0
// 006832d6  83c40c               add esp, 0xc
// 006832d9  841db01ca400         test byte ptr [0xa41cb0], bl
// 006832df  751c                 jne 0x6832fd
// 006832e1  d9ee                 fldz 
// 006832e3  091db01ca400         or dword ptr [0xa41cb0], ebx
// 006832e9  d915a41ca400         fst dword ptr [0xa41ca4]
// 006832ef  d9e8                 fld1 
// 006832f1  d91da81ca400         fstp dword ptr [0xa41ca8]
// 006832f7  d91dac1ca400         fstp dword ptr [0xa41cac]
// 006832fd  52                   push edx
// 006832fe  8d4c2418             lea ecx, [esp + 0x18]
// 00683302  68a41ca400           push 0xa41ca4
// 00683307  51                   push ecx
// 00683308  e8c3fbffff           call 0x682ed0
// 0068330d  83c40c               add esp, 0xc
// 00683310  841d44c8a300         test byte ptr [0xa3c844], bl
// 00683316  751c                 jne 0x683334
// 00683318  d9ee                 fldz 
// 0068331a  091d44c8a300         or dword ptr [0xa3c844], ebx
// 00683320  d91538c8a300         fst dword ptr [0xa3c838]
// 00683326  d91d3cc8a300         fstp dword ptr [0xa3c83c]
// 0068332c  d9e8                 fld1 
// 0068332e  d91d40c8a300         fstp dword ptr [0xa3c840]
// 00683334  52                   push edx
// 00683335  6838c8a300           push 0xa3c838
// 0068333a  8d542410             lea edx, [esp + 0x10]
// 0068333e  52                   push edx
// 0068333f  e88cfbffff           call 0x682ed0
// 00683344  d944241c             fld dword ptr [esp + 0x1c]
// 00683348  d95c2408             fstp dword ptr [esp + 8]
// 0068334c  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 00683350  d9442428             fld dword ptr [esp + 0x28]
// 00683354  83ec18               sub esp, 0x18
// 00683357  d95c241c             fstp dword ptr [esp + 0x1c]
// 0068335b  8bce                 mov ecx, esi
// 0068335d  d944244c             fld dword ptr [esp + 0x4c]
// 00683361  d95c2418             fstp dword ptr [esp + 0x18]
// 00683365  d9442430             fld dword ptr [esp + 0x30]
// 00683369  d95c2414             fstp dword ptr [esp + 0x14]
// 0068336d  d944243c             fld dword ptr [esp + 0x3c]
// 00683371  d95c2410             fstp dword ptr [esp + 0x10]
// 00683375  d9442448             fld dword ptr [esp + 0x48]
// 00683379  d95c240c             fstp dword ptr [esp + 0xc]
// 0068337d  d944242c             fld dword ptr [esp + 0x2c]
// 00683381  d95c2408             fstp dword ptr [esp + 8]
// 00683385  d9442438             fld dword ptr [esp + 0x38]
// 00683389  d95c2404             fstp dword ptr [esp + 4]
// 0068338d  d9442444             fld dword ptr [esp + 0x44]
// 00683391  d91c24               fstp dword ptr [esp]
// 00683394  e84751efff           call 0x5784e0
// 00683399  8bc6                 mov eax, esi
// 0068339b  5e                   pop esi
// 0068339c  5b                   pop ebx
// 0068339d  83c424               add esp, 0x24
// 006833a0  c3                   ret 
// library openrbx-client/App\util\NormalId.cpp (function ?normalIdToMatrix3Internal@RBX@@YA?AVMatrix3@G3D@@W4NormalId@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/NormalId.cpp
