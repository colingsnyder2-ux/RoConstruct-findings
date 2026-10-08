// from server: 73% by colin
// roc 2007-08 00564eb0  unit: RBX::Verb  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00564eb0
//
// 00564eb0  56                   push esi
// 00564eb1  8bf1                 mov esi, ecx
// 00564eb3  8b4e04               mov ecx, dword ptr [esi + 4]
// 00564eb6  ff15bce47700         call dword ptr [0x77e4bc]
// 00564ebc  0fbec0               movsx eax, al
// 00564ebf  80b890f4890000       cmp byte ptr [eax + 0x89f490], 0
// 00564ec6  7426                 je 0x564eee
// 00564ec8  eb06                 jmp 0x564ed0
// 00564eca  8d9b00000000         lea ebx, [ebx]
// 00564ed0  8b4e04               mov ecx, dword ptr [esi + 4]
// 00564ed3  ff15c0e47700         call dword ptr [0x77e4c0]
// 00564ed9  8b4e04               mov ecx, dword ptr [esi + 4]
// 00564edc  ff15bce47700         call dword ptr [0x77e4bc]
// 00564ee2  0fbec8               movsx ecx, al
// 00564ee5  80b990f4890000       cmp byte ptr [ecx + 0x89f490], 0
// 00564eec  75e2                 jne 0x564ed0
// 00564eee  5e                   pop esi
// 00564eef  c3                   ret 

struct basic_streambuf {
    int sgetc();
    int sbumpc();
};

struct Verb {
    char pad[4];
    basic_streambuf* stream;
    void f();
};

extern char g_table[1];

void Verb::f()
{
    int c = stream->sgetc();
    if (g_table[(signed char)c] != 0) {
        do {
            stream->sbumpc();
            c = stream->sgetc();
        } while (g_table[(signed char)c] != 0);
    }
}
