// from server: 80% by king_originala
// roc 2008-06 00575300  unit: RBX::ServiceProvider  size: 244 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00575300
//
// 00575300  6aff                 push -1
// 00575302  680c057d00           push 0x7d050c
// 00575307  64a100000000         mov eax, dword ptr fs:[0]
// 0057530d  50                   push eax
// 0057530e  64892500000000       mov dword ptr fs:[0], esp
// 00575315  81ec20010000         sub esp, 0x120
// 0057531b  d9ee                 fldz 
// 0057531d  83ec08               sub esp, 8
// 00575320  dd842438010000       fld qword ptr [esp + 0x138]
// 00575327  c744240800000000     mov dword ptr [esp + 8], 0
// 0057532f  d8d1                 fcom st(1)
// 00575331  dfe0                 fnstsw ax
// 00575333  ddd9                 fstp st(1)
// 00575335  dd1c24               fstp qword ptr [esp]
// 00575338  f6c441               test ah, 0x41
// 0057533b  0f8593000000         jne 0x5753d4
// 00575341  8d44240c             lea eax, [esp + 0xc]
// 00575345  50                   push eax
// 00575346  e815190300           call 0x5a6c60
// 0057534b  83c40c               add esp, 0xc
// 0057534e  dd842430010000       fld qword ptr [esp + 0x130]
// 00575355  dd05a0fd8200         fld qword ptr [0x82fda0]
// 0057535b  c784242801000000000000 mov dword ptr [esp + 0x128], 0
// 00575366  d8c9                 fmul st(1)
// 00575368  e883c41200           call 0x6a17f0
// 0057536d  837c241c10           cmp dword ptr [esp + 0x1c], 0x10
// 00575372  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00575376  7304                 jae 0x57537c
// 00575378  8d4c2408             lea ecx, [esp + 8]
// 0057537c  d9e8                 fld1 
// 0057537e  83ec08               sub esp, 8
// 00575381  def1                 fdivrp st(1)
// 00575383  dd1c24               fstp qword ptr [esp]
// 00575386  51                   push ecx
// 00575387  50                   push eax
// 00575388  8d4c2430             lea ecx, [esp + 0x30]
// 0057538c  688cfd8200           push 0x82fd8c
// 00575391  51                   push ecx
// 00575392  ff1530288000         call dword ptr [0x802830]
// 00575398  83c418               add esp, 0x18
// 0057539b  8d542420             lea edx, [esp + 0x20]
// 0057539f  52                   push edx
// 005753a0  8bce                 mov ecx, esi
// 005753a2  ff1558248000         call dword ptr [0x802458]
// 005753a8  8d4c2404             lea ecx, [esp + 4]
// 005753ac  c7842428010000ffffffff mov dword ptr [esp + 0x128], 0xffffffff
// 005753b7  ff1568248000         call dword ptr [0x802468]
// 005753bd  8bc6                 mov eax, esi
// 005753bf  8b8c2420010000       mov ecx, dword ptr [esp + 0x120]
// 005753c6  64890d00000000       mov dword ptr fs:[0], ecx
// 005753cd  81c42c010000         add esp, 0x12c
// 005753d3  c3                   ret 
// 005753d4  56                   push esi
// 005753d5  e886180300           call 0x5a6c60
// 005753da  8b8c242c010000       mov ecx, dword ptr [esp + 0x12c]
// 005753e1  83c40c               add esp, 0xc
// 005753e4  8bc6                 mov eax, esi
// 005753e6  64890d00000000       mov dword ptr fs:[0], ecx
// 005753ed  81c42c010000         add esp, 0x12c
// 005753f3  c3                   ret 

extern "C" int (__cdecl *sprintf)(char *, const char *, ...);

struct String
{
    unsigned char allocator;
    union
    {
        char buffer[16];
        char *pointer;
    } storage;
    unsigned int length;
    unsigned int capacity;

    String(const char *);
    ~String();
};

String __cdecl formatTime(double);
String __cdecl formatRate(double);

String __cdecl formatRate(double seconds)
{
    if (seconds > 0.0)
    {
        String text = formatTime(seconds);
        char buffer[256];
        int percent = (int)(100.0 * seconds);
        const char *value = text.storage.pointer;
        if (text.capacity < 16)
            value = text.storage.buffer;
        sprintf(buffer, "%i %%  %s (%.3gfps)",
                percent, value, 1.0 / seconds);
        return String(buffer);
    }
    return formatTime(seconds);
}
