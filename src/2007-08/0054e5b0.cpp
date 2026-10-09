// from server: 72% by colin
// roc 2007-08 0054e5b0  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054e5b0
//
// 0054e5b0  53                   push ebx
// 0054e5b1  55                   push ebp
// 0054e5b2  57                   push edi
// 0054e5b3  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0054e5b7  33db                 xor ebx, ebx
// 0054e5b9  85ff                 test edi, edi
// 0054e5bb  8be9                 mov ebp, ecx
// 0054e5bd  7e35                 jle 0x54e5f4
// 0054e5bf  56                   push esi
// 0054e5c0  8b7500               mov esi, dword ptr [ebp]
// 0054e5c3  8b442414             mov eax, dword ptr [esp + 0x14]
// 0054e5c7  57                   push edi
// 0054e5c8  50                   push eax
// 0054e5c9  8bce                 mov ecx, esi
// 0054e5cb  ff150ce67700         call dword ptr [0x77e60c]
// 0054e5d1  85c0                 test eax, eax
// 0054e5d3  7507                 jne 0x54e5dc
// 0054e5d5  8a463c               mov al, byte ptr [esi + 0x3c]
// 0054e5d8  f6d8                 neg al
// 0054e5da  1bc0                 sbb eax, eax
// 0054e5dc  83f8ff               cmp eax, -1
// 0054e5df  7406                 je 0x54e5e7
// 0054e5e1  03d8                 add ebx, eax
// 0054e5e3  3bdf                 cmp ebx, edi
// 0054e5e5  7cd9                 jl 0x54e5c0
// 0054e5e7  85db                 test ebx, ebx
// 0054e5e9  5e                   pop esi
// 0054e5ea  7408                 je 0x54e5f4
// 0054e5ec  5f                   pop edi
// 0054e5ed  5d                   pop ebp
// 0054e5ee  8bc3                 mov eax, ebx
// 0054e5f0  5b                   pop ebx
// 0054e5f1  c20800               ret 8
// 0054e5f4  5f                   pop edi
// 0054e5f5  5d                   pop ebp
// 0054e5f6  83c8ff               or eax, 0xffffffff
// 0054e5f9  5b                   pop ebx
// 0054e5fa  c20800               ret 8

struct S {
    void* field0;
    int m(char* b, int a);
};

extern "C" int __stdcall sgetn_stub(void*, char*, int);

int S::m(char* b, int a)
{
    int total = 0;
    if (a > 0) {
        do {
            void* p = field0;
            int r = sgetn_stub(p, b, a);
            if (r == 0) {
                unsigned char c = *(unsigned char*)((char*)p + 0x3c);
                r = (c != 0) ? 0 : -1;
            }
            if (r == -1)
                break;
            total += r;
            if (total >= a)
                break;
        } while (1);
    }
    if (total == 0)
        return -1;
    return total;
}
