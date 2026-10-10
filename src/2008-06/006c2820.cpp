// roc 2008-06 006c2820  unit: CXTPCommandBar  size: 342 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c2820
//
// 006c2820  83ec30               sub esp, 0x30
// 006c2823  56                   push esi
// 006c2824  8bf1                 mov esi, ecx
// 006c2826  e8c524ffff           call 0x6b4cf0
// 006c282b  85c0                 test eax, eax
// 006c282d  0f8435010000         je 0x6c2968
// 006c2833  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 006c2839  83f802               cmp eax, 2
// 006c283c  7412                 je 0x6c2850
// 006c283e  85c0                 test eax, eax
// 006c2840  740e                 je 0x6c2850
// 006c2842  83f803               cmp eax, 3
// 006c2845  7409                 je 0x6c2850
// 006c2847  83f801               cmp eax, 1
// 006c284a  0f8518010000         jne 0x6c2968
// 006c2850  83be8401000000       cmp dword ptr [esi + 0x184], 0
// 006c2857  0f840b010000         je 0x6c2968
// 006c285d  f686ec0000001f       test byte ptr [esi + 0xec], 0x1f
// 006c2864  0f84fe000000         je 0x6c2968
// 006c286a  56                   push esi
// 006c286b  8d4c2418             lea ecx, [esp + 0x18]
// 006c286f  e8bc520300           call 0x6f7b30
// 006c2874  8bce                 mov ecx, esi
// 006c2876  e85526ffff           call 0x6b4ed0
// 006c287b  8b10                 mov edx, dword ptr [eax]
// 006c287d  8b92b4000000         mov edx, dword ptr [edx + 0xb4]
// 006c2883  56                   push esi
// 006c2884  8d4c2428             lea ecx, [esp + 0x28]
// 006c2888  51                   push ecx
// 006c2889  8bc8                 mov ecx, eax
// 006c288b  ffd2                 call edx
// 006c288d  8bce                 mov ecx, esi
// 006c288f  e83c26ffff           call 0x6b4ed0
// 006c2894  8b10                 mov edx, dword ptr [eax]
// 006c2896  8b9288000000         mov edx, dword ptr [edx + 0x88]
// 006c289c  6a00                 push 0
// 006c289e  56                   push esi
// 006c289f  6a00                 push 0
// 006c28a1  8d4c2410             lea ecx, [esp + 0x10]
// 006c28a5  51                   push ecx
// 006c28a6  8bc8                 mov ecx, eax
// 006c28a8  ffd2                 call edx
// 006c28aa  8b06                 mov eax, dword ptr [esi]
// 006c28ac  8b9098010000         mov edx, dword ptr [eax + 0x198]
// 006c28b2  8bce                 mov ecx, esi
// 006c28b4  ffd2                 call edx
// 006c28b6  85c0                 test eax, eax
// 006c28b8  741d                 je 0x6c28d7
// 006c28ba  8b442424             mov eax, dword ptr [esp + 0x24]
// 006c28be  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006c28c2  03c8                 add ecx, eax
// 006c28c4  8b442414             mov eax, dword ptr [esp + 0x14]
// 006c28c8  03c8                 add ecx, eax
// 006c28ca  83c003               add eax, 3
// 006c28cd  894c241c             mov dword ptr [esp + 0x1c], ecx
// 006c28d1  89442414             mov dword ptr [esp + 0x14], eax
// 006c28d5  eb13                 jmp 0x6c28ea
// 006c28d7  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 006c28dd  51                   push ecx
// 006c28de  e82dbbd6ff           call 0x42e410
// 006c28e3  83c404               add esp, 4
// 006c28e6  85c0                 test eax, eax
// 006c28e8  7414                 je 0x6c28fe
// 006c28ea  8b542428             mov edx, dword ptr [esp + 0x28]
// 006c28ee  8b442408             mov eax, dword ptr [esp + 8]
// 006c28f2  03c2                 add eax, edx
// 006c28f4  03442418             add eax, dword ptr [esp + 0x18]
// 006c28f8  89442420             mov dword ptr [esp + 0x20], eax
// 006c28fc  eb12                 jmp 0x6c2910
// 006c28fe  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006c2902  8b542404             mov edx, dword ptr [esp + 4]
// 006c2906  03d1                 add edx, ecx
// 006c2908  03542414             add edx, dword ptr [esp + 0x14]
// 006c290c  8954241c             mov dword ptr [esp + 0x1c], edx
// 006c2910  8d44240c             lea eax, [esp + 0xc]
// 006c2914  50                   push eax
// 006c2915  ff159c2d8000         call dword ptr [0x802d9c]
// 006c291b  8b5620               mov edx, dword ptr [esi + 0x20]
// 006c291e  8d4c240c             lea ecx, [esp + 0xc]
// 006c2922  51                   push ecx
// 006c2923  52                   push edx
// 006c2924  ff15a02d8000         call dword ptr [0x802da0]
// 006c292a  8b442410             mov eax, dword ptr [esp + 0x10]
// 006c292e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006c2932  50                   push eax
// 006c2933  51                   push ecx
// 006c2934  8d54241c             lea edx, [esp + 0x1c]
// 006c2938  52                   push edx
// 006c2939  ff152c2d8000         call dword ptr [0x802d2c]
// 006c293f  85c0                 test eax, eax
// 006c2941  7425                 je 0x6c2968
// 006c2943  e8dedffdff           call 0x6a0926
// 006c2948  68867f0000           push 0x7f86
// 006c294d  6a00                 push 0
// 006c294f  ff15d02d8000         call dword ptr [0x802dd0]
// 006c2955  50                   push eax
// 006c2956  ff15042d8000         call dword ptr [0x802d04]
// 006c295c  b801000000           mov eax, 1
// 006c2961  5e                   pop esi
// 006c2962  83c430               add esp, 0x30
// 006c2965  c20c00               ret 0xc
// 006c2968  8bce                 mov ecx, esi
// 006c296a  e8f9e2fdff           call 0x6a0c68
// 006c296f  5e                   pop esi
// 006c2970  83c430               add esp, 0x30
// 006c2973  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPToolBar.cpp (function ?OnSetCursor@CXTPToolBar@@IAEHPAVCWnd@@II@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPToolBar.cpp
