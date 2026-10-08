// from server: 100% by auto
// roc 2009-06 006c7830  unit: seg_006c0000  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c7830
//
// 006c7830  53                   push ebx
// 006c7831  55                   push ebp
// 006c7832  56                   push esi
// 006c7833  8bf1                 mov esi, ecx
// 006c7835  57                   push edi
// 006c7836  8bd8                 mov ebx, eax
// 006c7838  e833ffffff           call 0x6c7770
// 006c783d  53                   push ebx
// 006c783e  56                   push esi
// 006c783f  8be8                 mov ebp, eax
// 006c7841  e83a14ffff           call 0x6b8c80
// 006c7846  83c40c               add esp, 0xc
// 006c7849  85c0                 test eax, eax
// 006c784b  750e                 jne 0x6c785b
// 006c784d  68ecc18e00           push 0x8ec1ec
// 006c7852  57                   push edi
// 006c7853  e8e829ffff           call 0x6ba240
// 006c7858  83c408               add esp, 8
// 006c785b  83fd01               cmp ebp, 1
// 006c785e  741d                 je 0x6c787d
// 006c7860  8b04ad38bf8e00       mov eax, dword ptr [ebp*4 + 0x8ebf38]
// 006c7867  50                   push eax
// 006c7868  68d0c18e00           push 0x8ec1d0
// 006c786d  57                   push edi
// 006c786e  e8ed1bffff           call 0x6b9460
// 006c7873  83c40c               add esp, 0xc
// 006c7876  5e                   pop esi
// 006c7877  5d                   pop ebp
// 006c7878  83c8ff               or eax, 0xffffffff
// 006c787b  5b                   pop ebx
// 006c787c  c3                   ret 
// 006c787d  53                   push ebx
// 006c787e  56                   push esi
// 006c787f  57                   push edi
// 006c7880  e86b14ffff           call 0x6b8cf0
// 006c7885  56                   push esi
// 006c7886  57                   push edi
// 006c7887  e8b414ffff           call 0x6b8d40
// 006c788c  53                   push ebx
// 006c788d  56                   push esi
// 006c788e  e8fdbdffff           call 0x6c3690
// 006c7893  83c41c               add esp, 0x1c
// 006c7896  85c0                 test eax, eax
// 006c7898  7418                 je 0x6c78b2
// 006c789a  83f801               cmp eax, 1
// 006c789d  7413                 je 0x6c78b2
// 006c789f  6a01                 push 1
// 006c78a1  57                   push edi
// 006c78a2  56                   push esi
// 006c78a3  e84814ffff           call 0x6b8cf0
// 006c78a8  83c40c               add esp, 0xc
// 006c78ab  5e                   pop esi
// 006c78ac  5d                   pop ebp
// 006c78ad  83c8ff               or eax, 0xffffffff
// 006c78b0  5b                   pop ebx
// 006c78b1  c3                   ret 
// 006c78b2  56                   push esi
// 006c78b3  e8c814ffff           call 0x6b8d80
// 006c78b8  8bd8                 mov ebx, eax
// 006c78ba  8d4b01               lea ecx, [ebx + 1]
// 006c78bd  51                   push ecx
// 006c78be  57                   push edi
// 006c78bf  e8bc13ffff           call 0x6b8c80
// 006c78c4  83c40c               add esp, 0xc
// 006c78c7  85c0                 test eax, eax
// 006c78c9  750e                 jne 0x6c78d9
// 006c78cb  68b4c18e00           push 0x8ec1b4
// 006c78d0  57                   push edi
// 006c78d1  e86a29ffff           call 0x6ba240
// 006c78d6  83c408               add esp, 8
// 006c78d9  53                   push ebx
// 006c78da  57                   push edi
// 006c78db  56                   push esi
// 006c78dc  e80f14ffff           call 0x6b8cf0
// 006c78e1  83c40c               add esp, 0xc
// 006c78e4  5e                   pop esi
// 006c78e5  5d                   pop ebp
// 006c78e6  8bc3                 mov eax, ebx
// 006c78e8  5b                   pop ebx
// 006c78e9  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _auxresume)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
