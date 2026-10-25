// from server: 100% by king_originala
// roc 2008-06 00419080  unit: VCLuaFunction::?$CComObject  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00419080
//
// 00419080  837c240800           cmp dword ptr [esp + 8], 0
// 00419085  7408                 je 0x41908f
// 00419087  b80b000280           mov eax, 0x8002000b
// 0041908c  c21000               ret 0x10
// 0041908f  56                   push esi
// 00419090  8b742414             mov esi, dword ptr [esp + 0x14]
// 00419094  85f6                 test esi, esi
// 00419096  7509                 jne 0x4190a1
// 00419098  b803400080           mov eax, 0x80004003
// 0041909d  5e                   pop esi
// 0041909e  c21000               ret 0x10
// 004190a1  33c0                 xor eax, eax
// 004190a3  390524c69200         cmp dword ptr [0x92c624], eax
// 004190a9  750f                 jne 0x4190ba
// 004190ab  8b442410             mov eax, dword ptr [esp + 0x10]
// 004190af  50                   push eax
// 004190b0  b918c69200           mov ecx, 0x92c618
// 004190b5  e8c6b9feff           call 0x404a80
// 004190ba  8b0d24c69200         mov ecx, dword ptr [0x92c624]
// 004190c0  890e                 mov dword ptr [esi], ecx
// 004190c2  8b0d24c69200         mov ecx, dword ptr [0x92c624]
// 004190c8  85c9                 test ecx, ecx
// 004190ca  740a                 je 0x4190d6
// 004190cc  8b11                 mov edx, dword ptr [ecx]
// 004190ce  8b4204               mov eax, dword ptr [edx + 4]
// 004190d1  51                   push ecx
// 004190d2  ffd0                 call eax
// 004190d4  33c0                 xor eax, eax
// 004190d6  5e                   pop esi
// 004190d7  c21000               ret 0x10

struct Interface;

struct InterfaceTable {
    void* first;
    unsigned long (__stdcall *addRef)(Interface*);
};

struct Interface {
    InterfaceTable* table;
};

struct Cache {
    unsigned char reserved[12];
    Interface* value;
    long initialize(unsigned long locale);
};

extern Cache cache;

struct S {
    long __stdcall f(unsigned int index, unsigned long locale, Interface** output);
};

long __stdcall S::f(unsigned int index, unsigned long locale, Interface** output)
{
    if (index != 0)
        return (long)0x8002000BUL;
    if (output == 0)
        return (long)0x80004003UL;

    long result = 0;
    if (cache.value == 0)
        result = cache.initialize(locale);

    *output = cache.value;
    if (cache.value != 0) {
        cache.value->table->addRef(cache.value);
        result = 0;
    }
    return result;
}
