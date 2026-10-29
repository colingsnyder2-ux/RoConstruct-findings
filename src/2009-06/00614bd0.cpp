// roc 2009-06 00614bd0  unit: UString_sink::?$stream_buffer  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00614bd0
//
// 00614bd0  56                   push esi
// 00614bd1  8bf1                 mov esi, ecx
// 00614bd3  8b4614               mov eax, dword ptr [esi + 0x14]
// 00614bd6  8b08                 mov ecx, dword ptr [eax]
// 00614bd8  8b5624               mov edx, dword ptr [esi + 0x24]
// 00614bdb  8b02                 mov eax, dword ptr [edx]
// 00614bdd  2bc1                 sub eax, ecx
// 00614bdf  85c0                 test eax, eax
// 00614be1  7e24                 jle 0x614c07
// 00614be3  50                   push eax
// 00614be4  51                   push ecx
// 00614be5  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 00614be8  ff1528e68900         call dword ptr [0x89e628]
// 00614bee  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 00614bf1  8b5614               mov edx, dword ptr [esi + 0x14]
// 00614bf4  8b4650               mov eax, dword ptr [esi + 0x50]
// 00614bf7  890a                 mov dword ptr [edx], ecx
// 00614bf9  8b5624               mov edx, dword ptr [esi + 0x24]
// 00614bfc  03c1                 add eax, ecx
// 00614bfe  890a                 mov dword ptr [edx], ecx
// 00614c00  2bc1                 sub eax, ecx
// 00614c02  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00614c05  8901                 mov dword ptr [ecx], eax
// 00614c07  5e                   pop esi
// 00614c08  c3                   ret 
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