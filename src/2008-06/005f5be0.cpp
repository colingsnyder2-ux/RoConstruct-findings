// from server: 100% by colin
// roc 2008-06 005f5be0  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f5be0
//
// 005f5be0  55                   push ebp
// 005f5be1  8bec                 mov ebp, esp
// 005f5be3  6aff                 push -1
// 005f5be5  6860767d00           push 0x7d7660
// 005f5bea  64a100000000         mov eax, dword ptr fs:[0]
// 005f5bf0  50                   push eax
// 005f5bf1  64892500000000       mov dword ptr fs:[0], esp
// 005f5bf8  51                   push ecx
// 005f5bf9  8b01                 mov eax, dword ptr [ecx]
// 005f5bfb  8b08                 mov ecx, dword ptr [eax]
// 005f5bfd  53                   push ebx
// 005f5bfe  56                   push esi
// 005f5bff  33f6                 xor esi, esi
// 005f5c01  897124               mov dword ptr [ecx + 0x24], esi
// 005f5c04  8b08                 mov ecx, dword ptr [eax]
// 005f5c06  8b5114               mov edx, dword ptr [ecx + 0x14]
// 005f5c09  57                   push edi
// 005f5c0a  8965f0               mov dword ptr [ebp - 0x10], esp
// 005f5c0d  89511c               mov dword ptr [ecx + 0x1c], edx
// 005f5c10  895120               mov dword ptr [ecx + 0x20], edx
// 005f5c13  8b00                 mov eax, dword ptr [eax]
// 005f5c15  6a01                 push 1
// 005f5c17  56                   push esi
// 005f5c18  8bc8                 mov ecx, eax
// 005f5c1a  8975fc               mov dword ptr [ebp - 4], esi
// 005f5c1d  e81e7f0500           call 0x64db40
// 005f5c22  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005f5c25  5f                   pop edi
// 005f5c26  5e                   pop esi
// 005f5c27  64890d00000000       mov dword ptr fs:[0], ecx
// 005f5c2e  5b                   pop ebx
// 005f5c2f  8be5                 mov esp, ebp
// 005f5c31  5d                   pop ebp
// 005f5c32  c3                   ret 

// from server: 88% by king_originala
struct StreamOwner {
    void* stream;
    unsigned char padding[16];
    int field14;
    int field18;
    int field1c;
    int field20;
    int field24;

    int finish(bool reset, bool compress);
};

struct S {
    StreamOwner** owner;
    void f();
};

void S::f()
{
    StreamOwner** p = owner;
    (*p)->field24 = 0;

    StreamOwner* s = *p;
    int value = s->field14;
    s->field1c = value;
    s->field20 = value;

    s = *p;
    try {
        s->finish(false, true);
    }
    catch (...) {
    }
}
