// roc 2007-08 006169e0  unit: seg_00610000  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006169e0
//
// 006169e0  51                   push ecx
// 006169e1  8b4e04               mov ecx, dword ptr [esi + 4]
// 006169e4  6a04                 push 4
// 006169e6  8d442404             lea eax, [esp + 4]
// 006169ea  50                   push eax
// 006169eb  51                   push ecx
// 006169ec  e8cfc9ffff           call 0x6133c0
// 006169f1  83c40c               add esp, 0xc
// 006169f4  85c0                 test eax, eax
// 006169f6  7423                 je 0x616a1b
// 006169f8  8b560c               mov edx, dword ptr [esi + 0xc]
// 006169fb  8b06                 mov eax, dword ptr [esi]
// 006169fd  68e0357c00           push 0x7c35e0
// 00616a02  52                   push edx
// 00616a03  68c4357c00           push 0x7c35c4
// 00616a08  50                   push eax
// 00616a09  e88284ffff           call 0x60ee90
// 00616a0e  8b0e                 mov ecx, dword ptr [esi]
// 00616a10  6a03                 push 3
// 00616a12  51                   push ecx
// 00616a13  e808f6faff           call 0x5c6020
// 00616a18  83c418               add esp, 0x18
// 00616a1b  8b0424               mov eax, dword ptr [esp]
// 00616a1e  85c0                 test eax, eax
// 00616a20  7502                 jne 0x616a24
// 00616a22  59                   pop ecx
// 00616a23  c3                   ret 
// 00616a24  8b5608               mov edx, dword ptr [esi + 8]
// 00616a27  57                   push edi
// 00616a28  50                   push eax
// 00616a29  8b06                 mov eax, dword ptr [esi]
// 00616a2b  52                   push edx
// 00616a2c  50                   push eax
// 00616a2d  e82ecaffff           call 0x613460
// 00616a32  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00616a36  8b5604               mov edx, dword ptr [esi + 4]
// 00616a39  51                   push ecx
// 00616a3a  8bf8                 mov edi, eax
// 00616a3c  57                   push edi
// 00616a3d  52                   push edx
// 00616a3e  e87dc9ffff           call 0x6133c0
// 00616a43  83c418               add esp, 0x18
// 00616a46  85c0                 test eax, eax
// 00616a48  7423                 je 0x616a6d
// 00616a4a  8b460c               mov eax, dword ptr [esi + 0xc]
// 00616a4d  8b0e                 mov ecx, dword ptr [esi]
// 00616a4f  68e0357c00           push 0x7c35e0
// 00616a54  50                   push eax
// 00616a55  68c4357c00           push 0x7c35c4
// 00616a5a  51                   push ecx
// 00616a5b  e83084ffff           call 0x60ee90
// 00616a60  8b16                 mov edx, dword ptr [esi]
// 00616a62  6a03                 push 3
// 00616a64  52                   push edx
// 00616a65  e8b6f5faff           call 0x5c6020
// 00616a6a  83c418               add esp, 0x18
// 00616a6d  8b442404             mov eax, dword ptr [esp + 4]
// 00616a71  8b0e                 mov ecx, dword ptr [esi]
// 00616a73  83c0ff               add eax, -1
// 00616a76  50                   push eax
// 00616a77  57                   push edi
// 00616a78  51                   push ecx
// 00616a79  e8f2c2ffff           call 0x612d70
// 00616a7e  83c40c               add esp, 0xc
// 00616a81  5f                   pop edi
// 00616a82  59                   pop ecx
// 00616a83  c3                   ret 
// library lua-5.1.4/lundump.c (function _LoadString)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lundump.c
