// from server: 100% by king_originala
// roc 2008-06 0051bf70  unit: G3D::_internal::DialogTemplate  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051bf70
//
// 0051bf70  56                   push esi
// 0051bf71  8b742408             mov esi, dword ptr [esp + 8]
// 0051bf75  8b86e4000000         mov eax, dword ptr [esi + 0xe4]
// 0051bf7b  3b86d0000000         cmp eax, dword ptr [esi + 0xd0]
// 0051bf81  0f83b9000000         jae 0x51c040
// 0051bf87  57                   push edi
// 0051bf88  8d7e74               lea edi, [esi + 0x74]
// 0051bf8b  eb03                 jmp 0x51bf90
// 0051bf8d  8d4900               lea ecx, [ecx]
// 0051bf90  6a02                 push 2
// 0051bf92  57                   push edi
// 0051bf93  e858a52800           call 0x7a64f0
// 0051bf98  85c0                 test eax, eax
// 0051bf9a  741b                 je 0x51bfb7
// 0051bf9c  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 0051bfa2  85c0                 test eax, eax
// 0051bfa4  7403                 je 0x51bfa9
// 0051bfa6  50                   push eax
// 0051bfa7  eb05                 jmp 0x51bfae
// 0051bfa9  68108e8200           push 0x828e10
// 0051bfae  56                   push esi
// 0051bfaf  e8fcd90000           call 0x5299b0
// 0051bfb4  83c408               add esp, 8
// 0051bfb7  83be8400000000       cmp dword ptr [esi + 0x84], 0
// 0051bfbe  7531                 jne 0x51bff1
// 0051bfc0  8b8eb0000000         mov ecx, dword ptr [esi + 0xb0]
// 0051bfc6  8b96ac000000         mov edx, dword ptr [esi + 0xac]
// 0051bfcc  51                   push ecx
// 0051bfcd  52                   push edx
// 0051bfce  56                   push esi
// 0051bfcf  e84cba0000           call 0x527a20
// 0051bfd4  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 0051bfda  8b8eb0000000         mov ecx, dword ptr [esi + 0xb0]
// 0051bfe0  83c40c               add esp, 0xc
// 0051bfe3  898680000000         mov dword ptr [esi + 0x80], eax
// 0051bfe9  898e84000000         mov dword ptr [esi + 0x84], ecx
// 0051bfef  eb9f                 jmp 0x51bf90
// 0051bff1  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 0051bff7  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 0051bffd  5f                   pop edi
// 0051bffe  3bc1                 cmp eax, ecx
// 0051c000  742b                 je 0x51c02d
// 0051c002  8b96ac000000         mov edx, dword ptr [esi + 0xac]
// 0051c008  2bc1                 sub eax, ecx
// 0051c00a  50                   push eax
// 0051c00b  52                   push edx
// 0051c00c  56                   push esi
// 0051c00d  e80eba0000           call 0x527a20
// 0051c012  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 0051c018  8b8eb0000000         mov ecx, dword ptr [esi + 0xb0]
// 0051c01e  83c40c               add esp, 0xc
// 0051c021  898680000000         mov dword ptr [esi + 0x80], eax
// 0051c027  898e84000000         mov dword ptr [esi + 0x84], ecx
// 0051c02d  56                   push esi
// 0051c02e  c7865401000000000000 mov dword ptr [esi + 0x154], 0
// 0051c038  e8d31a0000           call 0x51db10
// 0051c03d  83c404               add esp, 4
// 0051c040  5e                   pop esi
// 0051c041  c3                   ret 

struct ZStream {
    unsigned char* next_in;
    unsigned int avail_in;
    unsigned int total_in;
    unsigned char* next_out;
    unsigned int avail_out;
    unsigned int total_out;
    char* msg;
    unsigned char reserved[0x1c];
};

struct PNG {
    unsigned char reserved0[0x74];
    ZStream zstream;
    unsigned char* zbuf;
    unsigned int zbuf_size;
    unsigned char reserved1[0x1c];
    unsigned int num_rows;
    unsigned char reserved2[0x10];
    unsigned int row_number;
    unsigned char reserved3[0x6c];
    unsigned int flush_rows;
};

extern "C" int __stdcall deflate(ZStream*, int);
extern "C" void __cdecl png_error(PNG*, const char*);
extern "C" void __cdecl png_write_IDAT(PNG*, unsigned char*, unsigned int);
extern "C" void __cdecl png_flush(PNG*);

extern "C" void __cdecl png_write_flush(PNG* p)
{
    if (p->row_number >= p->num_rows)
        return;

    for (;;) {
        if (deflate(&p->zstream, 2) != 0) {
            if (p->zstream.msg)
                png_error(p, p->zstream.msg);
            else
                png_error(p, "zlib error");
        }

        if (p->zstream.avail_out != 0)
            break;

        png_write_IDAT(p, p->zbuf, p->zbuf_size);
        p->zstream.next_out = p->zbuf;
        p->zstream.avail_out = p->zbuf_size;
    }

    if (p->zbuf_size != p->zstream.avail_out) {
        png_write_IDAT(p, p->zbuf, p->zbuf_size - p->zstream.avail_out);
        p->zstream.next_out = p->zbuf;
        p->zstream.avail_out = p->zbuf_size;
    }

    p->flush_rows = 0;
    png_flush(p);
}
