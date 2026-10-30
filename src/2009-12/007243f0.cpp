// roc 2009-12 007243f0  unit: VWinHttpRequest_source::?$stream_buffer  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007243f0
//
// 007243f0  56                   push esi
// 007243f1  8bf1                 mov esi, ecx
// 007243f3  8b4614               mov eax, dword ptr [esi + 0x14]
// 007243f6  8b08                 mov ecx, dword ptr [eax]
// 007243f8  8b5624               mov edx, dword ptr [esi + 0x24]
// 007243fb  8b02                 mov eax, dword ptr [edx]
// 007243fd  2bc1                 sub eax, ecx
// 007243ff  85c0                 test eax, eax
// 00724401  7e24                 jle 0x724427
// 00724403  50                   push eax
// 00724404  51                   push ecx
// 00724405  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 00724408  ff15f8b39800         call dword ptr [0x98b3f8]
// 0072440e  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 00724411  8b5614               mov edx, dword ptr [esi + 0x14]
// 00724414  8b4650               mov eax, dword ptr [esi + 0x50]
// 00724417  890a                 mov dword ptr [edx], ecx
// 00724419  8b5624               mov edx, dword ptr [esi + 0x24]
// 0072441c  03c1                 add eax, ecx
// 0072441e  890a                 mov dword ptr [edx], ecx
// 00724420  2bc1                 sub eax, ecx
// 00724422  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00724425  8901                 mov dword ptr [ecx], eax
// 00724427  5e                   pop esi
// 00724428  c3                   ret 
// copied from an identical function in another client (function ?flush@S@@QAEXXZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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