// from server: 100% by king_originala
// roc 2008-06 0055c6a0  unit: RBX::MD5HasherImpl  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055c6a0
//
// 0055c6a0  81ec00040000         sub esp, 0x400
// 0055c6a6  56                   push esi
// 0055c6a7  8bb42408040000       mov esi, dword ptr [esp + 0x408]
// 0055c6ae  8b06                 mov eax, dword ptr [esi]
// 0055c6b0  57                   push edi
// 0055c6b1  8bf9                 mov edi, ecx
// 0055c6b3  8b4804               mov ecx, dword ptr [eax + 4]
// 0055c6b6  6a00                 push 0
// 0055c6b8  6a00                 push 0
// 0055c6ba  03ce                 add ecx, esi
// 0055c6bc  ff15e8248000         call dword ptr [0x8024e8]
// 0055c6c2  6a00                 push 0
// 0055c6c4  6a00                 push 0
// 0055c6c6  8bce                 mov ecx, esi
// 0055c6c8  ff1518248000         call dword ptr [0x802418]
// 0055c6ce  8bff                 mov edi, edi
// 0055c6d0  6800040000           push 0x400
// 0055c6d5  8d4c240c             lea ecx, [esp + 0xc]
// 0055c6d9  51                   push ecx
// 0055c6da  8bce                 mov ecx, esi
// 0055c6dc  ff15e4248000         call dword ptr [0x8024e4]
// 0055c6e2  8b4604               mov eax, dword ptr [esi + 4]
// 0055c6e5  8b17                 mov edx, dword ptr [edi]
// 0055c6e7  8b12                 mov edx, dword ptr [edx]
// 0055c6e9  50                   push eax
// 0055c6ea  8d4c240c             lea ecx, [esp + 0xc]
// 0055c6ee  51                   push ecx
// 0055c6ef  8bcf                 mov ecx, edi
// 0055c6f1  ffd2                 call edx
// 0055c6f3  837e0400             cmp dword ptr [esi + 4], 0
// 0055c6f7  7fd7                 jg 0x55c6d0
// 0055c6f9  5f                   pop edi
// 0055c6fa  5e                   pop esi
// 0055c6fb  81c400040000         add esp, 0x400
// 0055c701  c20400               ret 4

struct Stream {
    int* offsets;
    int count;
};

extern void (__thiscall *clear_stream)(void*, int, bool);
extern Stream& (__thiscall *seek_stream)(Stream*, long, int);
extern Stream& (__thiscall *read_stream)(Stream*, char*, int);

struct Hasher {
    virtual void update(const char*, int);
    void hash(Stream&);
};

void Hasher::hash(Stream& stream)
{
    char buffer[1024];
    clear_stream(reinterpret_cast<char*>(&stream) + stream.offsets[1], 0, false);
    seek_stream(&stream, 0, 0);
    do {
        read_stream(&stream, buffer, 1024);
        update(buffer, stream.count);
    } while (stream.count > 0);
}
