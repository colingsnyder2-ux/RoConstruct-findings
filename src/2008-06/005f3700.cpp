// from server: 100% by king_originala
// roc 2008-06 005f3700  unit: std::D::V?$allocator::V?$zlib_decompressor_impl::?$symmetric_filter::Uimpl::?$sp_counted_impl_p  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f3700
//
// 005f3700  56                   push esi
// 005f3701  8bf1                 mov esi, ecx
// 005f3703  8b4614               mov eax, dword ptr [esi + 0x14]
// 005f3706  8b08                 mov ecx, dword ptr [eax]
// 005f3708  8b5624               mov edx, dword ptr [esi + 0x24]
// 005f370b  8b02                 mov eax, dword ptr [edx]
// 005f370d  2bc1                 sub eax, ecx
// 005f370f  85c0                 test eax, eax
// 005f3711  7e24                 jle 0x5f3737
// 005f3713  50                   push eax
// 005f3714  51                   push ecx
// 005f3715  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 005f3718  ff1540258000         call dword ptr [0x802540]
// 005f371e  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 005f3721  8b5614               mov edx, dword ptr [esi + 0x14]
// 005f3724  8b4650               mov eax, dword ptr [esi + 0x50]
// 005f3727  890a                 mov dword ptr [edx], ecx
// 005f3729  8b5624               mov edx, dword ptr [esi + 0x24]
// 005f372c  03c1                 add eax, ecx
// 005f372e  890a                 mov dword ptr [edx], ecx
// 005f3730  2bc1                 sub eax, ecx
// 005f3732  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 005f3735  8901                 mov dword ptr [ecx], eax
// 005f3737  5e                   pop esi
// 005f3738  c3                   ret 

typedef void *(__thiscall *AppendFunction)(void *, const char *, unsigned int);
extern AppendFunction append;

struct S {
    char padding0[0x14];
    char **first;
    char padding1[0x0C];
    char **last;
    char padding2[0x0C];
    int *available;
    char padding3[0x08];
    void *output;
    char padding4[0x08];
    char *buffer;
    int length;

    void flush();
};

void S::flush()
{
    char *start = *first;
    int count = *last - start;
    if (count > 0) {
        append(output, start, count);
        char *begin = buffer;
        char *end = begin + length;
        *first = begin;
        *last = begin;
        *available = end - begin;
    }
}
