// roc 2008-06 00663690  unit: RBX::FilterStairs  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00663690
//
// 00663690  51                   push ecx
// 00663691  8b4e04               mov ecx, dword ptr [esi + 4]
// 00663694  6a04                 push 4
// 00663696  8d442404             lea eax, [esp + 4]
// 0066369a  50                   push eax
// 0066369b  51                   push ecx
// 0066369c  e85fc2ffff           call 0x65f900
// 006636a1  83c40c               add esp, 0xc
// 006636a4  85c0                 test eax, eax
// 006636a6  7423                 je 0x6636cb
// 006636a8  8b560c               mov edx, dword ptr [esi + 0xc]
// 006636ab  8b06                 mov eax, dword ptr [esi]
// 006636ad  6830c78400           push 0x84c730
// 006636b2  52                   push edx
// 006636b3  6814c78400           push 0x84c714
// 006636b8  50                   push eax
// 006636b9  e802f4fbff           call 0x622ac0
// 006636be  8b0e                 mov ecx, dword ptr [esi]
// 006636c0  6a03                 push 3
// 006636c2  51                   push ecx
// 006636c3  e888e9fbff           call 0x622050
// 006636c8  83c418               add esp, 0x18
// 006636cb  8b0424               mov eax, dword ptr [esp]
// 006636ce  85c0                 test eax, eax
// 006636d0  7502                 jne 0x6636d4
// 006636d2  59                   pop ecx
// 006636d3  c3                   ret 
// 006636d4  8b5608               mov edx, dword ptr [esi + 8]
// 006636d7  57                   push edi
// 006636d8  50                   push eax
// 006636d9  8b06                 mov eax, dword ptr [esi]
// 006636db  52                   push edx
// 006636dc  50                   push eax
// 006636dd  e8aec2ffff           call 0x65f990
// 006636e2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006636e6  8b5604               mov edx, dword ptr [esi + 4]
// 006636e9  51                   push ecx
// 006636ea  8bf8                 mov edi, eax
// 006636ec  57                   push edi
// 006636ed  52                   push edx
// 006636ee  e80dc2ffff           call 0x65f900
// 006636f3  83c418               add esp, 0x18
// 006636f6  85c0                 test eax, eax
// 006636f8  7423                 je 0x66371d
// 006636fa  8b460c               mov eax, dword ptr [esi + 0xc]
// 006636fd  8b0e                 mov ecx, dword ptr [esi]
// 006636ff  6830c78400           push 0x84c730
// 00663704  50                   push eax
// 00663705  6814c78400           push 0x84c714
// 0066370a  51                   push ecx
// 0066370b  e8b0f3fbff           call 0x622ac0
// 00663710  8b16                 mov edx, dword ptr [esi]
// 00663712  6a03                 push 3
// 00663714  52                   push edx
// 00663715  e836e9fbff           call 0x622050
// 0066371a  83c418               add esp, 0x18
// 0066371d  8b442404             mov eax, dword ptr [esp + 4]
// 00663721  8b0e                 mov ecx, dword ptr [esi]
// 00663723  48                   dec eax
// 00663724  50                   push eax
// 00663725  57                   push edi
// 00663726  51                   push ecx
// 00663727  e8d4bbffff           call 0x65f300
// 0066372c  83c40c               add esp, 0xc
// 0066372f  5f                   pop edi
// 00663730  59                   pop ecx
// 00663731  c3                   ret 
// library lua-5.1.4/lundump.c (function _LoadString)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lundump.c
