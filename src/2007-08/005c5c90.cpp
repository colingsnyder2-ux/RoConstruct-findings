// roc 2007-08 005c5c90  unit: lua_exception  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c5c90
//
// 005c5c90  53                   push ebx
// 005c5c91  55                   push ebp
// 005c5c92  6a10                 push 0x10
// 005c5c94  57                   push edi
// 005c5c95  56                   push esi
// 005c5c96  e8d5a30400           call 0x610070
// 005c5c9b  8bef                 mov ebp, edi
// 005c5c9d  2b6e20               sub ebp, dword ptr [esi + 0x20]
// 005c5ca0  8bd8                 mov ebx, eax
// 005c5ca2  83c40c               add esp, 0xc
// 005c5ca5  837b0806             cmp dword ptr [ebx + 8], 6
// 005c5ca9  740f                 je 0x5c5cba
// 005c5cab  6884967b00           push 0x7b9684
// 005c5cb0  57                   push edi
// 005c5cb1  56                   push esi
// 005c5cb2  e879150000           call 0x5c7230
// 005c5cb7  83c40c               add esp, 0xc
// 005c5cba  8b4e08               mov ecx, dword ptr [esi + 8]
// 005c5cbd  3bcf                 cmp ecx, edi
// 005c5cbf  761d                 jbe 0x5c5cde
// 005c5cc1  8d41f0               lea eax, [ecx - 0x10]
// 005c5cc4  8b10                 mov edx, dword ptr [eax]
// 005c5cc6  8911                 mov dword ptr [ecx], edx
// 005c5cc8  8b5004               mov edx, dword ptr [eax + 4]
// 005c5ccb  895104               mov dword ptr [ecx + 4], edx
// 005c5cce  8b5008               mov edx, dword ptr [eax + 8]
// 005c5cd1  895018               mov dword ptr [eax + 0x18], edx
// 005c5cd4  83e910               sub ecx, 0x10
// 005c5cd7  83e810               sub eax, 0x10
// 005c5cda  3bcf                 cmp ecx, edi
// 005c5cdc  77e6                 ja 0x5c5cc4
// 005c5cde  8b461c               mov eax, dword ptr [esi + 0x1c]
// 005c5ce1  2b4608               sub eax, dword ptr [esi + 8]
// 005c5ce4  83f810               cmp eax, 0x10
// 005c5ce7  7f1b                 jg 0x5c5d04
// 005c5ce9  8b462c               mov eax, dword ptr [esi + 0x2c]
// 005c5cec  83f801               cmp eax, 1
// 005c5cef  7c06                 jl 0x5c5cf7
// 005c5cf1  8d0c00               lea ecx, [eax + eax]
// 005c5cf4  51                   push ecx
// 005c5cf5  eb04                 jmp 0x5c5cfb
// 005c5cf7  83c001               add eax, 1
// 005c5cfa  50                   push eax
// 005c5cfb  56                   push esi
// 005c5cfc  e82ffdffff           call 0x5c5a30
// 005c5d01  83c408               add esp, 8
// 005c5d04  83460810             add dword ptr [esi + 8], 0x10
// 005c5d08  8b4620               mov eax, dword ptr [esi + 0x20]
// 005c5d0b  8b13                 mov edx, dword ptr [ebx]
// 005c5d0d  03c5                 add eax, ebp
// 005c5d0f  8910                 mov dword ptr [eax], edx
// 005c5d11  8b4b04               mov ecx, dword ptr [ebx + 4]
// 005c5d14  894804               mov dword ptr [eax + 4], ecx
// 005c5d17  8b5308               mov edx, dword ptr [ebx + 8]
// 005c5d1a  5d                   pop ebp
// 005c5d1b  895008               mov dword ptr [eax + 8], edx
// 005c5d1e  5b                   pop ebx
// 005c5d1f  c3                   ret 
// library lua-5.1.4/ldo.c (function _tryfuncTM)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
