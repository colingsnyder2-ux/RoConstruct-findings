// from server: 41% by colin
// roc 2007-08 0054e2d0  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054e2d0
//
// 0054e2d0  55                   push ebp
// 0054e2d1  8bec                 mov ebp, esp
// 0054e2d3  6aff                 push -1
// 0054e2d5  6870277500           push 0x752770
// 0054e2da  64a100000000         mov eax, dword ptr fs:[0]
// 0054e2e0  50                   push eax
// 0054e2e1  64892500000000       mov dword ptr fs:[0], esp
// 0054e2e8  83ec08               sub esp, 8
// 0054e2eb  53                   push ebx
// 0054e2ec  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 0054e2ef  56                   push esi
// 0054e2f0  8b7508               mov esi, dword ptr [ebp + 8]
// 0054e2f3  57                   push edi
// 0054e2f4  8bc3                 mov eax, ebx
// 0054e2f6  2bc6                 sub eax, esi
// 0054e2f8  8965f0               mov dword ptr [ebp - 0x10], esp
// 0054e2fb  8bf9                 mov edi, ecx
// 0054e2fd  50                   push eax
// 0054e2fe  897dec               mov dword ptr [ebp - 0x14], edi
// 0054e301  ff154ce57700         call dword ptr [0x77e54c]
// 0054e307  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0054e30e  8bff                 mov edi, edi
// 0054e310  3bf3                 cmp esi, ebx
// 0054e312  7429                 je 0x54e33d
// 0054e314  0fb606               movzx eax, byte ptr [esi]
// 0054e317  50                   push eax
// 0054e318  6a01                 push 1
// 0054e31a  8bcf                 mov ecx, edi
// 0054e31c  ff1550e57700         call dword ptr [0x77e550]
// 0054e322  83c601               add esi, 1
// 0054e325  ebe9                 jmp 0x54e310

struct allocator_holder {
    void assign_range(const char* first, const char* last);
};

extern "C" void* __stdcall _Malloc(unsigned int);
extern "C" void* __stdcall _Realloc(void*, unsigned int);

struct string_holder {
    char pad[0x18];
    void reserve(unsigned int);
    void append(unsigned int, char);
};

void allocator_holder::assign_range(const char* first, const char* last) {
    string_holder* s = (string_holder*)((char*)this + 0);
    unsigned int count = (unsigned int)(last - first);
    s->reserve(count);
    while (first != last) {
        s->append(1, *first);
        ++first;
    }
}
