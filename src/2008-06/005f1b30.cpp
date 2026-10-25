// from server: 100% by king_originala
// roc 2008-06 005f1b30  unit: RBX::FaceInstance  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f1b30
//
// 005f1b30  83ec10               sub esp, 0x10
// 005f1b33  53                   push ebx
// 005f1b34  56                   push esi
// 005f1b35  57                   push edi
// 005f1b36  8d44240c             lea eax, [esp + 0xc]
// 005f1b3a  6a01                 push 1
// 005f1b3c  50                   push eax
// 005f1b3d  e8fe4ffbff           call 0x5a6b40
// 005f1b42  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005f1b46  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005f1b4a  8b442430             mov eax, dword ptr [esp + 0x30]
// 005f1b4e  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005f1b52  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 005f1b56  8b542418             mov edx, dword ptr [esp + 0x18]
// 005f1b5a  83c408               add esp, 8
// 005f1b5d  3bcf                 cmp ecx, edi
// 005f1b5f  751d                 jne 0x5f1b7e
// 005f1b61  3bf2                 cmp esi, edx
// 005f1b63  751b                 jne 0x5f1b80
// 005f1b65  8bd0                 mov edx, eax
// 005f1b67  2bd3                 sub edx, ebx
// 005f1b69  85d2                 test edx, edx
// 005f1b6b  7f1b                 jg 0x5f1b88
// 005f1b6d  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005f1b71  5f                   pop edi
// 005f1b72  5e                   pop esi
// 005f1b73  c70100000000         mov dword ptr [ecx], 0
// 005f1b79  5b                   pop ebx
// 005f1b7a  83c410               add esp, 0x10
// 005f1b7d  c3                   ret 
// 005f1b7e  3bf2                 cmp esi, edx
// 005f1b80  7f06                 jg 0x5f1b88
// 005f1b82  7ce9                 jl 0x5f1b6d
// 005f1b84  3bcf                 cmp ecx, edi
// 005f1b86  76e5                 jbe 0x5f1b6d
// 005f1b88  3bd8                 cmp ebx, eax
// 005f1b8a  7e0b                 jle 0x5f1b97
// 005f1b8c  0500ca9a3b           add eax, 0x3b9aca00
// 005f1b91  83c1ff               add ecx, -1
// 005f1b94  83d6ff               adc esi, -1
// 005f1b97  2bc3                 sub eax, ebx
// 005f1b99  0520a10700           add eax, 0x7a120
// 005f1b9e  8bd0                 mov edx, eax
// 005f1ba0  b883de1b43           mov eax, 0x431bde83
// 005f1ba5  f7ea                 imul edx
// 005f1ba7  2bcf                 sub ecx, edi
// 005f1ba9  69c9e8030000         imul ecx, ecx, 0x3e8
// 005f1baf  c1fa12               sar edx, 0x12
// 005f1bb2  8bc2                 mov eax, edx
// 005f1bb4  c1e81f               shr eax, 0x1f
// 005f1bb7  03c2                 add eax, edx
// 005f1bb9  5f                   pop edi
// 005f1bba  03c1                 add eax, ecx
// 005f1bbc  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005f1bc0  5e                   pop esi
// 005f1bc1  8901                 mov dword ptr [ecx], eax
// 005f1bc3  5b                   pop ebx
// 005f1bc4  83c410               add esp, 0x10
// 005f1bc7  c3                   ret 

struct TimeValue {
    __int64 seconds;
    int nanoseconds;
};

extern int __cdecl readTime(TimeValue*, int);

void __cdecl remainingTime(TimeValue target, unsigned long* result)
{
    TimeValue now;
    readTime(&now, 1);

    if ((target.seconds == now.seconds
             ? target.nanoseconds - now.nanoseconds
             : (target.seconds > now.seconds ? 1 : -1)) <= 0) {
        *result = 0;
        return;
    }

    if (now.nanoseconds > target.nanoseconds) {
        target.nanoseconds += 1000000000;
        --target.seconds;
    }

    *result = (long)(target.seconds - now.seconds) * 1000
            + (target.nanoseconds - now.nanoseconds + 500000) / 1000000;
}
