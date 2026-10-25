// from server: 100% by king_originala
// roc 2008-06 004080f0  unit: VCApp::?$CComObject  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004080f0
//
// 004080f0  837c240800           cmp dword ptr [esp + 8], 0
// 004080f5  7408                 je 0x4080ff
// 004080f7  b80b000280           mov eax, 0x8002000b
// 004080fc  c21000               ret 0x10
// 004080ff  56                   push esi
// 00408100  8b742414             mov esi, dword ptr [esp + 0x14]
// 00408104  85f6                 test esi, esi
// 00408106  7509                 jne 0x408111
// 00408108  b803400080           mov eax, 0x80004003
// 0040810d  5e                   pop esi
// 0040810e  c21000               ret 0x10
// 00408111  33c0                 xor eax, eax
// 00408113  3905e48b9200         cmp dword ptr [0x928be4], eax
// 00408119  750f                 jne 0x40812a
// 0040811b  8b442410             mov eax, dword ptr [esp + 0x10]
// 0040811f  50                   push eax
// 00408120  b9d88b9200           mov ecx, 0x928bd8
// 00408125  e856c9ffff           call 0x404a80
// 0040812a  8b0de48b9200         mov ecx, dword ptr [0x928be4]
// 00408130  890e                 mov dword ptr [esi], ecx
// 00408132  8b0de48b9200         mov ecx, dword ptr [0x928be4]
// 00408138  85c9                 test ecx, ecx
// 0040813a  740a                 je 0x408146
// 0040813c  8b11                 mov edx, dword ptr [ecx]
// 0040813e  8b4204               mov eax, dword ptr [edx + 4]
// 00408141  51                   push ecx
// 00408142  ffd0                 call eax
// 00408144  33c0                 xor eax, eax
// 00408146  5e                   pop esi
// 00408147  c21000               ret 0x10

struct Interface;

struct InterfaceTable {
    void *unused;
    unsigned long (__stdcall *AddRef)(Interface *);
};

struct Interface {
    InterfaceTable *table;
};

struct Cache {
    unsigned char padding[12];
    Interface *value;
    long initialize(unsigned long locale);
};

extern Cache cache;

long __stdcall GetTypeInfo(void *object, unsigned int index,
                           unsigned long locale, Interface **output)
{
    if (index != 0)
        return 0x8002000BL;

    if (!output)
        return 0x80004003L;

    long result = 0;
    if (!cache.value)
        result = cache.initialize(locale);

    *output = cache.value;
    if (cache.value) {
        cache.value->table->AddRef(cache.value);
        result = 0;
    }
    return result;
}
