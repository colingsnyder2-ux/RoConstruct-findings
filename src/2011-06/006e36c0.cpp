// roc 2011-06 006e36c0  unit: UString_sink::?$stream_buffer  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e36c0
//
// 006e36c0  56                   push esi
// 006e36c1  8bf1                 mov esi, ecx
// 006e36c3  8b4614               mov eax, dword ptr [esi + 0x14]
// 006e36c6  8b08                 mov ecx, dword ptr [eax]
// 006e36c8  8b5624               mov edx, dword ptr [esi + 0x24]
// 006e36cb  8b02                 mov eax, dword ptr [edx]
// 006e36cd  2bc1                 sub eax, ecx
// 006e36cf  85c0                 test eax, eax
// 006e36d1  7e24                 jle 0x6e36f7
// 006e36d3  50                   push eax
// 006e36d4  51                   push ecx
// 006e36d5  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 006e36d8  ff150406a400         call dword ptr [0xa40604]
// 006e36de  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 006e36e1  8b5614               mov edx, dword ptr [esi + 0x14]
// 006e36e4  8b4650               mov eax, dword ptr [esi + 0x50]
// 006e36e7  890a                 mov dword ptr [edx], ecx
// 006e36e9  8b5624               mov edx, dword ptr [esi + 0x24]
// 006e36ec  03c1                 add eax, ecx
// 006e36ee  890a                 mov dword ptr [edx], ecx
// 006e36f0  2bc1                 sub eax, ecx
// 006e36f2  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006e36f5  8901                 mov dword ptr [ecx], eax
// 006e36f7  5e                   pop esi
// 006e36f8  c3                   ret 
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