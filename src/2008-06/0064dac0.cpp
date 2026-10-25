// from server: 100% by king_originala
// roc 2008-06 0064dac0  unit: RBX::SimJobStage  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064dac0
//
// 0064dac0  53                   push ebx
// 0064dac1  55                   push ebp
// 0064dac2  56                   push esi
// 0064dac3  8bf1                 mov esi, ecx
// 0064dac5  807e0400             cmp byte ptr [esi + 4], 0
// 0064dac9  57                   push edi
// 0064daca  8b3e                 mov edi, dword ptr [esi]
// 0064dacc  8b1f                 mov ebx, dword ptr [edi]
// 0064dace  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 0064dad1  742d                 je 0x64db00
// 0064dad3  807c241c00           cmp byte ptr [esp + 0x1c], 0
// 0064dad8  740a                 je 0x64dae4
// 0064dada  8b442414             mov eax, dword ptr [esp + 0x14]
// 0064dade  8b08                 mov ecx, dword ptr [eax]
// 0064dae0  8bc3                 mov eax, ebx
// 0064dae2  eb08                 jmp 0x64daec
// 0064dae4  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0064dae8  8b09                 mov ecx, dword ptr [ecx]
// 0064daea  8bc5                 mov eax, ebp
// 0064daec  2bc1                 sub eax, ecx
// 0064daee  85c0                 test eax, eax
// 0064daf0  760e                 jbe 0x64db00
// 0064daf2  8b5608               mov edx, dword ptr [esi + 8]
// 0064daf5  50                   push eax
// 0064daf6  51                   push ecx
// 0064daf7  52                   push edx
// 0064daf8  e813a61500           call 0x7a8110
// 0064dafd  894608               mov dword ptr [esi + 8], eax
// 0064db00  8b4708               mov eax, dword ptr [edi + 8]
// 0064db03  8b542414             mov edx, dword ptr [esp + 0x14]
// 0064db07  89460c               mov dword ptr [esi + 0xc], eax
// 0064db0a  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 0064db0d  8b442418             mov eax, dword ptr [esp + 0x18]
// 0064db11  5f                   pop edi
// 0064db12  894e10               mov dword ptr [esi + 0x10], ecx
// 0064db15  891a                 mov dword ptr [edx], ebx
// 0064db17  5e                   pop esi
// 0064db18  8928                 mov dword ptr [eax], ebp
// 0064db1a  5d                   pop ebp
// 0064db1b  5b                   pop ebx
// 0064db1c  c20c00               ret 0xc

extern "C" unsigned long __stdcall crc32(
    unsigned long crc, const unsigned char* buffer, unsigned int length);

struct BufferState
{
    const unsigned char* begin;
    unsigned long reserved0;
    unsigned long value0;
    const unsigned char* end;
    unsigned long reserved1;
    unsigned long value1;
};

struct S
{
    BufferState* state;
    bool enabled;
    unsigned long crc;
    unsigned long value0;
    unsigned long value1;

    void update(const unsigned char** first, const unsigned char** last,
                bool useFirst);
};

void S::update(const unsigned char** first, const unsigned char** last,
               bool useFirst)
{
    BufferState* p = state;
    const unsigned char* begin = p->begin;
    const unsigned char* end = p->end;

    if (enabled)
    {
        const unsigned char* buffer;
        unsigned int length;

        if (useFirst)
        {
            buffer = *first;
            length = begin - buffer;
        }
        else
        {
            buffer = *last;
            length = end - buffer;
        }

        if (length > 0)
            crc = crc32(crc, buffer, length);
    }

    value0 = p->value0;
    value1 = p->value1;
    *first = begin;
    *last = end;
}
