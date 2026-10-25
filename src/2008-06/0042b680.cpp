// from server: 100% by king_originala
// roc 2008-06 0042b680  unit: EventHandler  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042b680
//
// 0042b680  51                   push ecx
// 0042b681  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0042b685  33d2                 xor edx, edx
// 0042b687  891424               mov dword ptr [esp], edx
// 0042b68a  3bc2                 cmp eax, edx
// 0042b68c  7428                 je 0x42b6b6
// 0042b68e  56                   push esi
// 0042b68f  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0042b693  52                   push edx
// 0042b694  8b542418             mov edx, dword ptr [esp + 0x18]
// 0042b698  52                   push edx
// 0042b699  8d542420             lea edx, [esp + 0x20]
// 0042b69d  52                   push edx
// 0042b69e  56                   push esi
// 0042b69f  50                   push eax
// 0042b6a0  e83bbf1500           call 0x5875e0
// 0042b6a5  8bc8                 mov ecx, eax
// 0042b6a7  83c110               add ecx, 0x10
// 0042b6aa  e851fdffff           call 0x42b400
// 0042b6af  8bc6                 mov eax, esi
// 0042b6b1  5e                   pop esi
// 0042b6b2  59                   pop ecx
// 0042b6b3  c21000               ret 0x10
// 0042b6b6  8b442408             mov eax, dword ptr [esp + 8]
// 0042b6ba  895004               mov dword ptr [eax + 4], edx
// 0042b6bd  895008               mov dword ptr [eax + 8], edx
// 0042b6c0  88500c               mov byte ptr [eax + 0xc], dl
// 0042b6c3  59                   pop ecx
// 0042b6c4  c21000               ret 0x10

struct Result {
    unsigned int reserved;
    unsigned int first;
    unsigned int second;
    unsigned char flag;
};

struct ProductPart {
    void finish();
};

struct Product {
    unsigned char padding[16];
    ProductPart part;
};

struct S {
    Product& createProduct(unsigned int source, Result* result,
                           unsigned int* value, unsigned int option,
                           unsigned int zero);
    Result* f(Result* result, unsigned int source,
              unsigned int option, unsigned int value);
};

Result* S::f(Result* result, unsigned int source,
             unsigned int option, unsigned int value)
{
    volatile unsigned int zero = 0;
    if (source) {
        createProduct(source, result, &value, option, 0).part.finish();
        return result;
    }
    result->first = 0;
    result->second = 0;
    result->flag = 0;
    return result;
}
