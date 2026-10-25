// from server: 100% by king_originala
// roc 2008-06 004052b0  unit: VCWorkspace::?$CComObject  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004052b0
//
// 004052b0  837c240800           cmp dword ptr [esp + 8], 0
// 004052b5  7408                 je 0x4052bf
// 004052b7  b80b000280           mov eax, 0x8002000b
// 004052bc  c21000               ret 0x10
// 004052bf  56                   push esi
// 004052c0  8b742414             mov esi, dword ptr [esp + 0x14]
// 004052c4  85f6                 test esi, esi
// 004052c6  7509                 jne 0x4052d1
// 004052c8  b803400080           mov eax, 0x80004003
// 004052cd  5e                   pop esi
// 004052ce  c21000               ret 0x10
// 004052d1  33c0                 xor eax, eax
// 004052d3  390560879200         cmp dword ptr [0x928760], eax
// 004052d9  750f                 jne 0x4052ea
// 004052db  8b442410             mov eax, dword ptr [esp + 0x10]
// 004052df  50                   push eax
// 004052e0  b954879200           mov ecx, 0x928754
// 004052e5  e896f7ffff           call 0x404a80
// 004052ea  8b0d60879200         mov ecx, dword ptr [0x928760]
// 004052f0  890e                 mov dword ptr [esi], ecx
// 004052f2  8b0d60879200         mov ecx, dword ptr [0x928760]
// 004052f8  85c9                 test ecx, ecx
// 004052fa  740a                 je 0x405306
// 004052fc  8b11                 mov edx, dword ptr [ecx]
// 004052fe  8b4204               mov eax, dword ptr [edx + 4]
// 00405301  51                   push ecx
// 00405302  ffd0                 call eax
// 00405304  33c0                 xor eax, eax
// 00405306  5e                   pop esi
// 00405307  c21000               ret 0x10

struct TypeInfo {
    virtual long __stdcall QueryInterface(void*, void**) = 0;
    virtual unsigned long __stdcall AddRef() = 0;
};

struct TypeInfoCache {
    unsigned long reserved[3];
    TypeInfo* info;
    long Load(unsigned long locale);
};

extern TypeInfoCache cache;

struct S {
    long __stdcall GetTypeInfo(unsigned int index,
                              unsigned long locale,
                              TypeInfo** result);
};

long __stdcall S::GetTypeInfo(unsigned int index,
                             unsigned long locale,
                             TypeInfo** result)
{
    if (index != 0)
        return (long)0x8002000B;
    if (result == 0)
        return (long)0x80004003;

    long status = 0;
    if (cache.info == 0)
        status = cache.Load(locale);

    *result = cache.info;
    if (cache.info != 0) {
        cache.info->AddRef();
        status = 0;
    }
    return status;
}
