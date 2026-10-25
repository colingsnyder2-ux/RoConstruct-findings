// from server: 100% by colin
// roc 2008-06 004a3340  unit: RBX::Network::Server::ClientProxy  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a3340
//
// 004a3340  51                   push ecx
// 004a3341  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004a3345  33d2                 xor edx, edx
// 004a3347  891424               mov dword ptr [esp], edx
// 004a334a  3bc2                 cmp eax, edx
// 004a334c  7428                 je 0x4a3376
// 004a334e  56                   push esi
// 004a334f  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004a3353  52                   push edx
// 004a3354  8b542418             mov edx, dword ptr [esp + 0x18]
// 004a3358  52                   push edx
// 004a3359  8d542420             lea edx, [esp + 0x20]
// 004a335d  52                   push edx
// 004a335e  56                   push esi
// 004a335f  50                   push eax
// 004a3360  e87b420e00           call 0x5875e0
// 004a3365  8bc8                 mov ecx, eax
// 004a3367  83c110               add ecx, 0x10
// 004a336a  e8b1fcffff           call 0x4a3020
// 004a336f  8bc6                 mov eax, esi
// 004a3371  5e                   pop esi
// 004a3372  59                   pop ecx
// 004a3373  c21000               ret 0x10
// 004a3376  8b442408             mov eax, dword ptr [esp + 8]
// 004a337a  895004               mov dword ptr [eax + 4], edx
// 004a337d  895008               mov dword ptr [eax + 8], edx
// 004a3380  88500c               mov byte ptr [eax + 0xc], dl
// 004a3383  59                   pop ecx
// 004a3384  c21000               ret 0x10

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
