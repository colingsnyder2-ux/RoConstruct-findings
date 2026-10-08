// roc 2007-08 0054a950  unit: RBX::ServiceProvider  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054a950
//
// 0054a950  6aff                 push -1
// 0054a952  683f237500           push 0x75233f
// 0054a957  64a100000000         mov eax, dword ptr fs:[0]
// 0054a95d  50                   push eax
// 0054a95e  64892500000000       mov dword ptr fs:[0], esp
// 0054a965  83ec0c               sub esp, 0xc
// 0054a968  53                   push ebx
// 0054a969  c744240400000000     mov dword ptr [esp + 4], 0
// 0054a971  56                   push esi
// 0054a972  b9501c8c00           mov ecx, 0x8c1c50
// 0054a977  c744240c501c8c00     mov dword ptr [esp + 0xc], 0x8c1c50
// 0054a97f  e8ccad1d00           call 0x725750
// 0054a984  bb01000000           mov ebx, 1
// 0054a989  885c2410             mov byte ptr [esp + 0x10], bl
// 0054a98d  841d481c8c00         test byte ptr [0x8c1c48], bl
// 0054a993  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0054a997  7522                 jne 0x54a9bb
// 0054a999  091d481c8c00         or dword ptr [0x8c1c48], ebx
// 0054a99f  68401c8c00           push 0x8c1c40
// 0054a9a4  c644242002           mov byte ptr [esp + 0x20], 2
// 0054a9a9  e822ffffff           call 0x54a8d0
// 0054a9ae  68209a7700           push 0x779a20
// 0054a9b3  e86b630e00           call 0x630d23
// 0054a9b8  83c408               add esp, 8
// 0054a9bb  a1401c8c00           mov eax, dword ptr [0x8c1c40]
// 0054a9c0  8b742424             mov esi, dword ptr [esp + 0x24]
// 0054a9c4  8906                 mov dword ptr [esi], eax
// 0054a9c6  8b0d441c8c00         mov ecx, dword ptr [0x8c1c44]
// 0054a9cc  894e04               mov dword ptr [esi + 4], ecx
// 0054a9cf  a1441c8c00           mov eax, dword ptr [0x8c1c44]
// 0054a9d4  85c0                 test eax, eax
// 0054a9d6  7409                 je 0x54a9e1
// 0054a9d8  83c004               add eax, 4
// 0054a9db  8bd3                 mov edx, ebx
// 0054a9dd  f00fc110             lock xadd dword ptr [eax], edx
// 0054a9e1  b9501c8c00           mov ecx, 0x8c1c50
// 0054a9e6  895c2408             mov dword ptr [esp + 8], ebx
// 0054a9ea  c644241c00           mov byte ptr [esp + 0x1c], 0
// 0054a9ef  e87cad1d00           call 0x725770
// 0054a9f4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0054a9f8  8bc6                 mov eax, esi
// 0054a9fa  5e                   pop esi
// 0054a9fb  5b                   pop ebx
// 0054a9fc  64890d00000000       mov dword ptr fs:[0], ecx
// 0054aa03  83c418               add esp, 0x18
// 0054aa06  c3                   ret 
// library rbxgs/v8datamodel\GlobalSettings.cpp (function ?singleton@GlobalSettings@RBX@@SA?AV?$shared_ptr@VGlobalSettings@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/GlobalSettings.cpp
