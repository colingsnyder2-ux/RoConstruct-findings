// roc 2007-08 006161c0  unit: seg_00610000  size: 257 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006161c0
//
// 006161c0  83ec30               sub esp, 0x30
// 006161c3  817b101d010000       cmp dword ptr [ebx + 0x10], 0x11d
// 006161ca  55                   push ebp
// 006161cb  56                   push esi
// 006161cc  57                   push edi
// 006161cd  8b7b30               mov edi, dword ptr [ebx + 0x30]
// 006161d0  7424                 je 0x6161f6
// 006161d2  681d010000           push 0x11d
// 006161d7  53                   push ebx
// 006161d8  e8e3120000           call 0x6174c0
// 006161dd  50                   push eax
// 006161de  8b4334               mov eax, dword ptr [ebx + 0x34]
// 006161e1  6870337c00           push 0x7c3370
// 006161e6  50                   push eax
// 006161e7  e8a48cffff           call 0x60ee90
// 006161ec  50                   push eax
// 006161ed  53                   push ebx
// 006161ee  e8cd130000           call 0x6175c0
// 006161f3  83c41c               add esp, 0x1c
// 006161f6  8b6b18               mov ebp, dword ptr [ebx + 0x18]
// 006161f9  53                   push ebx
// 006161fa  e8f1270000           call 0x6189f0
// 006161ff  8b7330               mov esi, dword ptr [ebx + 0x30]
// 00616202  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 00616206  83c101               add ecx, 1
// 00616209  83c404               add esp, 4
// 0061620c  81f9c8000000         cmp ecx, 0xc8
// 00616212  7e0f                 jle 0x616223
// 00616214  b914347c00           mov ecx, 0x7c3414
// 00616219  bac8000000           mov edx, 0xc8
// 0061621e  e8add8ffff           call 0x613ad0
// 00616223  55                   push ebp
// 00616224  53                   push ebx
// 00616225  e8e6d9ffff           call 0x613c10
// 0061622a  0fb65632             movzx edx, byte ptr [esi + 0x32]
// 0061622e  66898456ac000000     mov word ptr [esi + edx*2 + 0xac], ax
// 00616236  8b4724               mov eax, dword ptr [edi + 0x24]
// 00616239  83c9ff               or ecx, 0xffffffff
// 0061623c  6a01                 push 1
// 0061623e  57                   push edi
// 0061623f  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00616243  894c2430             mov dword ptr [esp + 0x30], ecx
// 00616247  c744241c06000000     mov dword ptr [esp + 0x1c], 6
// 0061624f  89442424             mov dword ptr [esp + 0x24], eax
// 00616253  e858260100           call 0x6288b0
// 00616258  8b4330               mov eax, dword ptr [ebx + 0x30]
// 0061625b  80403201             add byte ptr [eax + 0x32], 1
// 0061625f  0fb64832             movzx ecx, byte ptr [eax + 0x32]
// 00616263  0fb78c48aa000000     movzx ecx, word ptr [eax + ecx*2 + 0xaa]
// 0061626b  8d1449               lea edx, [ecx + ecx*2]
// 0061626e  8b08                 mov ecx, dword ptr [eax]
// 00616270  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 00616273  8b4018               mov eax, dword ptr [eax + 0x18]
// 00616276  89449104             mov dword ptr [ecx + edx*4 + 4], eax
// 0061627a  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0061627d  51                   push ecx
// 0061627e  8d542438             lea edx, [esp + 0x38]
// 00616282  6a00                 push 0
// 00616284  52                   push edx
// 00616285  8bc3                 mov eax, ebx
// 00616287  e8d4e6ffff           call 0x614960
// 0061628c  8d442440             lea eax, [esp + 0x40]
// 00616290  50                   push eax
// 00616291  8d4c242c             lea ecx, [esp + 0x2c]
// 00616295  51                   push ecx
// 00616296  57                   push edi
// 00616297  e8e4320100           call 0x629580
// 0061629c  0fb65732             movzx edx, byte ptr [edi + 0x32]
// 006162a0  8b0f                 mov ecx, dword ptr [edi]
// 006162a2  0fb78457aa000000     movzx eax, word ptr [edi + edx*2 + 0xaa]
// 006162aa  8b5118               mov edx, dword ptr [ecx + 0x18]
// 006162ad  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 006162b0  83c428               add esp, 0x28
// 006162b3  5f                   pop edi
// 006162b4  8d0440               lea eax, [eax + eax*2]
// 006162b7  5e                   pop esi
// 006162b8  894c8204             mov dword ptr [edx + eax*4 + 4], ecx
// 006162bc  5d                   pop ebp
// 006162bd  83c430               add esp, 0x30
// 006162c0  c3                   ret 
// library lua-5.1.4/lparser.c (function _localfunc)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
