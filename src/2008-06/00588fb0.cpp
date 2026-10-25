// from server: 100% by colin
// roc 2008-06 00588fb0  unit: RBX::VChangeHistoryService::?$FactoryProduct  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00588fb0
//
// 00588fb0  51                   push ecx
// 00588fb1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00588fb5  33d2                 xor edx, edx
// 00588fb7  891424               mov dword ptr [esp], edx
// 00588fba  3bc2                 cmp eax, edx
// 00588fbc  7428                 je 0x588fe6
// 00588fbe  56                   push esi
// 00588fbf  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00588fc3  52                   push edx
// 00588fc4  8b542418             mov edx, dword ptr [esp + 0x18]
// 00588fc8  52                   push edx
// 00588fc9  8d542420             lea edx, [esp + 0x20]
// 00588fcd  52                   push edx
// 00588fce  56                   push esi
// 00588fcf  50                   push eax
// 00588fd0  e80be6ffff           call 0x5875e0
// 00588fd5  8bc8                 mov ecx, eax
// 00588fd7  83c110               add ecx, 0x10
// 00588fda  e8d1fdffff           call 0x588db0
// 00588fdf  8bc6                 mov eax, esi
// 00588fe1  5e                   pop esi
// 00588fe2  59                   pop ecx
// 00588fe3  c21000               ret 0x10
// 00588fe6  8b442408             mov eax, dword ptr [esp + 8]
// 00588fea  895004               mov dword ptr [eax + 4], edx
// 00588fed  895008               mov dword ptr [eax + 8], edx
// 00588ff0  88500c               mov byte ptr [eax + 0xc], dl
// 00588ff3  59                   pop ecx
// 00588ff4  c21000               ret 0x10

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
