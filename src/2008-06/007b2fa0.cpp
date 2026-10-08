// from server: 100% by auto
// roc 2008-06 007b2fa0  unit: RBX::RenderNew::TextureProxy  size: 383 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007b2fa0
//
// 007b2fa0  6aff                 push -1
// 007b2fa2  68f0e07e00           push 0x7ee0f0
// 007b2fa7  64a100000000         mov eax, dword ptr fs:[0]
// 007b2fad  50                   push eax
// 007b2fae  64892500000000       mov dword ptr fs:[0], esp
// 007b2fb5  51                   push ecx
// 007b2fb6  53                   push ebx
// 007b2fb7  56                   push esi
// 007b2fb8  8bf1                 mov esi, ecx
// 007b2fba  57                   push edi
// 007b2fbb  8974240c             mov dword ptr [esp + 0xc], esi
// 007b2fbf  c7069c598700         mov dword ptr [esi], 0x87599c
// 007b2fc5  8b4644               mov eax, dword ptr [esi + 0x44]
// 007b2fc8  50                   push eax
// 007b2fc9  c744241c07000000     mov dword ptr [esp + 0x1c], 7
// 007b2fd1  e84a4dd5ff           call 0x507d20
// 007b2fd6  33db                 xor ebx, ebx
// 007b2fd8  895e44               mov dword ptr [esi + 0x44], ebx
// 007b2fdb  895e48               mov dword ptr [esi + 0x48], ebx
// 007b2fde  895e4c               mov dword ptr [esi + 0x4c], ebx
// 007b2fe1  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 007b2fe4  51                   push ecx
// 007b2fe5  c644242006           mov byte ptr [esp + 0x20], 6
// 007b2fea  e8314dd5ff           call 0x507d20
// 007b2fef  8b3dac218000         mov edi, dword ptr [0x8021ac]
// 007b2ff5  895e38               mov dword ptr [esi + 0x38], ebx
// 007b2ff8  895e3c               mov dword ptr [esi + 0x3c], ebx
// 007b2ffb  895e40               mov dword ptr [esi + 0x40], ebx
// 007b2ffe  8b4634               mov eax, dword ptr [esi + 0x34]
// 007b3001  83c408               add esp, 8
// 007b3004  c644241805           mov byte ptr [esp + 0x18], 5
// 007b3009  3bc3                 cmp eax, ebx
// 007b300b  7424                 je 0x7b3031
// 007b300d  83c004               add eax, 4
// 007b3010  50                   push eax
// 007b3011  ffd7                 call edi
// 007b3013  85c0                 test eax, eax
// 007b3015  7517                 jne 0x7b302e
// 007b3017  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007b301a  e8717dcaff           call 0x45ad90
// 007b301f  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007b3022  3bcb                 cmp ecx, ebx
// 007b3024  7408                 je 0x7b302e
// 007b3026  8b11                 mov edx, dword ptr [ecx]
// 007b3028  8b02                 mov eax, dword ptr [edx]
// 007b302a  6a01                 push 1
// 007b302c  ffd0                 call eax
// 007b302e  895e34               mov dword ptr [esi + 0x34], ebx
// 007b3031  8b4630               mov eax, dword ptr [esi + 0x30]
// 007b3034  c644241804           mov byte ptr [esp + 0x18], 4
// 007b3039  3bc3                 cmp eax, ebx
// 007b303b  7424                 je 0x7b3061
// 007b303d  83c004               add eax, 4
// 007b3040  50                   push eax
// 007b3041  ffd7                 call edi
// 007b3043  85c0                 test eax, eax
// 007b3045  7517                 jne 0x7b305e
// 007b3047  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 007b304a  e8417dcaff           call 0x45ad90
// 007b304f  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 007b3052  3bcb                 cmp ecx, ebx
// 007b3054  7408                 je 0x7b305e
// 007b3056  8b11                 mov edx, dword ptr [ecx]
// 007b3058  8b02                 mov eax, dword ptr [edx]
// 007b305a  6a01                 push 1
// 007b305c  ffd0                 call eax
// 007b305e  895e30               mov dword ptr [esi + 0x30], ebx
// 007b3061  8b462c               mov eax, dword ptr [esi + 0x2c]
// 007b3064  c644241803           mov byte ptr [esp + 0x18], 3
// 007b3069  3bc3                 cmp eax, ebx
// 007b306b  7424                 je 0x7b3091
// 007b306d  83c004               add eax, 4
// 007b3070  50                   push eax
// 007b3071  ffd7                 call edi
// 007b3073  85c0                 test eax, eax
// 007b3075  7517                 jne 0x7b308e
// 007b3077  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 007b307a  e8117dcaff           call 0x45ad90
// 007b307f  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 007b3082  3bcb                 cmp ecx, ebx
// 007b3084  7408                 je 0x7b308e
// 007b3086  8b11                 mov edx, dword ptr [ecx]
// 007b3088  8b02                 mov eax, dword ptr [edx]
// 007b308a  6a01                 push 1
// 007b308c  ffd0                 call eax
// 007b308e  895e2c               mov dword ptr [esi + 0x2c], ebx
// 007b3091  8b4628               mov eax, dword ptr [esi + 0x28]
// 007b3094  c644241802           mov byte ptr [esp + 0x18], 2
// 007b3099  3bc3                 cmp eax, ebx
// 007b309b  7424                 je 0x7b30c1
// 007b309d  83c004               add eax, 4
// 007b30a0  50                   push eax
// 007b30a1  ffd7                 call edi
// 007b30a3  85c0                 test eax, eax
// 007b30a5  7517                 jne 0x7b30be
// 007b30a7  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 007b30aa  e8e17ccaff           call 0x45ad90
// 007b30af  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 007b30b2  3bcb                 cmp ecx, ebx
// 007b30b4  7408                 je 0x7b30be
// 007b30b6  8b11                 mov edx, dword ptr [ecx]
// 007b30b8  8b02                 mov eax, dword ptr [edx]
// 007b30ba  6a01                 push 1
// 007b30bc  ffd0                 call eax
// 007b30be  895e28               mov dword ptr [esi + 0x28], ebx
// 007b30c1  8b4624               mov eax, dword ptr [esi + 0x24]
// 007b30c4  c644241801           mov byte ptr [esp + 0x18], 1
// 007b30c9  3bc3                 cmp eax, ebx
// 007b30cb  7424                 je 0x7b30f1
// 007b30cd  83c004               add eax, 4
// 007b30d0  50                   push eax
// 007b30d1  ffd7                 call edi
// 007b30d3  85c0                 test eax, eax
// 007b30d5  7517                 jne 0x7b30ee
// 007b30d7  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 007b30da  e8b17ccaff           call 0x45ad90
// 007b30df  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 007b30e2  3bcb                 cmp ecx, ebx
// 007b30e4  7408                 je 0x7b30ee
// 007b30e6  8b11                 mov edx, dword ptr [ecx]
// 007b30e8  8b02                 mov eax, dword ptr [edx]
// 007b30ea  6a01                 push 1
// 007b30ec  ffd0                 call eax
// 007b30ee  895e24               mov dword ptr [esi + 0x24], ebx
// 007b30f1  68702a5000           push 0x502a70
// 007b30f6  6a06                 push 6
// 007b30f8  6a04                 push 4
// 007b30fa  8d4e0c               lea ecx, [esi + 0xc]
// 007b30fd  51                   push ecx
// 007b30fe  885c2428             mov byte ptr [esp + 0x28], bl
// 007b3102  e854e5eeff           call 0x6a165b
// 007b3107  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007b310b  5f                   pop edi
// 007b310c  c706e0e18100         mov dword ptr [esi], 0x81e1e0
// 007b3112  5e                   pop esi
// 007b3113  5b                   pop ebx
// 007b3114  64890d00000000       mov dword ptr fs:[0], ecx
// 007b311b  83c410               add esp, 0x10
// 007b311e  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Sky.cpp (function ??1Sky@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Sky.cpp
