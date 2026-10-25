// from server: 100% by king_originala
// roc 2008-06 0044e310  unit: CRobloxControlColorSelector  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044e310
//
// 0044e310  56                   push esi
// 0044e311  57                   push edi
// 0044e312  8bf9                 mov edi, ecx
// 0044e314  8bb778010000         mov esi, dword ptr [edi + 0x178]
// 0044e31a  83feff               cmp esi, -1
// 0044e31d  743f                 je 0x44e35e
// 0044e31f  8b0d34dd9600         mov ecx, dword ptr [0x96dd34]
// 0044e325  2b0d30dd9600         sub ecx, dword ptr [0x96dd30]
// 0044e32b  b8abaaaa2a           mov eax, 0x2aaaaaab
// 0044e330  f7e9                 imul ecx
// 0044e332  d1fa                 sar edx, 1
// 0044e334  8bc2                 mov eax, edx
// 0044e336  c1e81f               shr eax, 0x1f
// 0044e339  03c2                 add eax, edx
// 0044e33b  3bf0                 cmp esi, eax
// 0044e33d  7206                 jb 0x44e345
// 0044e33f  ff1590288000         call dword ptr [0x802890]
// 0044e345  8b1530dd9600         mov edx, dword ptr [0x96dd30]
// 0044e34b  8d0c76               lea ecx, [esi + esi*2]
// 0044e34e  8b048a               mov eax, dword ptr [edx + ecx*4]
// 0044e351  898780010000         mov dword ptr [edi + 0x180], eax
// 0044e357  c6877c01000001       mov byte ptr [edi + 0x17c], 1
// 0044e35e  8bcf                 mov ecx, edi
// 0044e360  5f                   pop edi
// 0044e361  5e                   pop esi
// 0044e362  e949f42500           jmp 0x6ad7b0

struct Entry {
    unsigned color;
    unsigned data[2];
};

extern Entry* entries_begin;
extern Entry* entries_end;
extern "C" void (__cdecl* invalid_parameter_noinfo)();

struct S {
    char padding[0x178];
    unsigned index;
    unsigned char selected;
    char padding2[3];
    unsigned color;

    void update();
    void finish();
};

void S::update()
{
    unsigned i = index;
    if (i != (unsigned)-1) {
        if (i >= (unsigned)(entries_end - entries_begin))
            invalid_parameter_noinfo();
        color = entries_begin[i].color;
        selected = 1;
    }
    finish();
}
