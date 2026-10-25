// from server: 100% by colin
// roc 2008-06 004d8390  unit: RBX::RenderBase::SimpleSceneManager  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d8390
//
// 004d8390  51                   push ecx
// 004d8391  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004d8395  33d2                 xor edx, edx
// 004d8397  891424               mov dword ptr [esp], edx
// 004d839a  3bc2                 cmp eax, edx
// 004d839c  7428                 je 0x4d83c6
// 004d839e  56                   push esi
// 004d839f  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004d83a3  52                   push edx
// 004d83a4  8b542418             mov edx, dword ptr [esp + 0x18]
// 004d83a8  52                   push edx
// 004d83a9  8d542420             lea edx, [esp + 0x20]
// 004d83ad  52                   push edx
// 004d83ae  56                   push esi
// 004d83af  50                   push eax
// 004d83b0  e82bf20a00           call 0x5875e0
// 004d83b5  8bc8                 mov ecx, eax
// 004d83b7  83c110               add ecx, 0x10
// 004d83ba  e801feffff           call 0x4d81c0
// 004d83bf  8bc6                 mov eax, esi
// 004d83c1  5e                   pop esi
// 004d83c2  59                   pop ecx
// 004d83c3  c21000               ret 0x10
// 004d83c6  8b442408             mov eax, dword ptr [esp + 8]
// 004d83ca  895004               mov dword ptr [eax + 4], edx
// 004d83cd  895008               mov dword ptr [eax + 8], edx
// 004d83d0  88500c               mov byte ptr [eax + 0xc], dl
// 004d83d3  59                   pop ecx
// 004d83d4  c21000               ret 0x10

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
