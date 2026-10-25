// from server: 100% by king_originala
// roc 2008-06 005f8170  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f8170
//
// 005f8170  55                   push ebp
// 005f8171  8bec                 mov ebp, esp
// 005f8173  6aff                 push -1
// 005f8175  6850797d00           push 0x7d7950
// 005f817a  64a100000000         mov eax, dword ptr fs:[0]
// 005f8180  50                   push eax
// 005f8181  64892500000000       mov dword ptr fs:[0], esp
// 005f8188  51                   push ecx
// 005f8189  53                   push ebx
// 005f818a  56                   push esi
// 005f818b  57                   push edi
// 005f818c  8965f0               mov dword ptr [ebp - 0x10], esp
// 005f818f  8bf1                 mov esi, ecx
// 005f8191  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005f8198  e8e3fbffff           call 0x5f7d80
// 005f819d  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 005f81a3  85c9                 test ecx, ecx
// 005f81a5  7406                 je 0x5f81ad
// 005f81a7  ff1570238000         call dword ptr [0x802370]
// 005f81ad  33c0                 xor eax, eax
// 005f81af  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005f81b2  64890d00000000       mov dword ptr fs:[0], ecx
// 005f81b9  5f                   pop edi
// 005f81ba  5e                   pop esi
// 005f81bb  5b                   pop ebx
// 005f81bc  8be5                 mov esp, ebp
// 005f81be  5d                   pop ebp
// 005f81bf  c3                   ret 

struct StreamBuffer;

extern int (__thiscall *pubsync)(StreamBuffer*);

struct S {
    char reserved[0x8c];
    StreamBuffer* buffer;

    void flush();
    int sync();
};

int S::sync()
{
    try {
        flush();
        if (buffer)
            pubsync(buffer);
        return 0;
    }
    catch (...) {
        return -1;
    }
}
