// roc 2012-06 0085ba10  unit: VWinHttpRequest_source::?$stream_buffer  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0085ba10
//
// 0085ba10  56                   push esi
// 0085ba11  8bf1                 mov esi, ecx
// 0085ba13  8b4614               mov eax, dword ptr [esi + 0x14]
// 0085ba16  8b08                 mov ecx, dword ptr [eax]
// 0085ba18  8b5624               mov edx, dword ptr [esi + 0x24]
// 0085ba1b  8b02                 mov eax, dword ptr [edx]
// 0085ba1d  2bc1                 sub eax, ecx
// 0085ba1f  85c0                 test eax, eax
// 0085ba21  7e24                 jle 0x85ba47
// 0085ba23  50                   push eax
// 0085ba24  51                   push ecx
// 0085ba25  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 0085ba28  ff15b824b200         call dword ptr [0xb224b8]
// 0085ba2e  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 0085ba31  8b5614               mov edx, dword ptr [esi + 0x14]
// 0085ba34  8b4650               mov eax, dword ptr [esi + 0x50]
// 0085ba37  890a                 mov dword ptr [edx], ecx
// 0085ba39  8b5624               mov edx, dword ptr [esi + 0x24]
// 0085ba3c  03c1                 add eax, ecx
// 0085ba3e  890a                 mov dword ptr [edx], ecx
// 0085ba40  2bc1                 sub eax, ecx
// 0085ba42  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0085ba45  8901                 mov dword ptr [ecx], eax
// 0085ba47  5e                   pop esi
// 0085ba48  c3                   ret 
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