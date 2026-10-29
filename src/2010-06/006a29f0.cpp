// roc 2010-06 006a29f0  unit: UString_sink::?$stream_buffer  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a29f0
//
// 006a29f0  56                   push esi
// 006a29f1  8bf1                 mov esi, ecx
// 006a29f3  8b4614               mov eax, dword ptr [esi + 0x14]
// 006a29f6  8b08                 mov ecx, dword ptr [eax]
// 006a29f8  8b5624               mov edx, dword ptr [esi + 0x24]
// 006a29fb  8b02                 mov eax, dword ptr [edx]
// 006a29fd  2bc1                 sub eax, ecx
// 006a29ff  85c0                 test eax, eax
// 006a2a01  7e24                 jle 0x6a2a27
// 006a2a03  50                   push eax
// 006a2a04  51                   push ecx
// 006a2a05  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 006a2a08  ff1594a59e00         call dword ptr [0x9ea594]
// 006a2a0e  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 006a2a11  8b5614               mov edx, dword ptr [esi + 0x14]
// 006a2a14  8b4650               mov eax, dword ptr [esi + 0x50]
// 006a2a17  890a                 mov dword ptr [edx], ecx
// 006a2a19  8b5624               mov edx, dword ptr [esi + 0x24]
// 006a2a1c  03c1                 add eax, ecx
// 006a2a1e  890a                 mov dword ptr [edx], ecx
// 006a2a20  2bc1                 sub eax, ecx
// 006a2a22  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006a2a25  8901                 mov dword ptr [ecx], eax
// 006a2a27  5e                   pop esi
// 006a2a28  c3                   ret 
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