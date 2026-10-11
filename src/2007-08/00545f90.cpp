// from server: 58% by colin
// roc 2007-08 00545f90  unit: RBX::MD5HasherImpl  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00545f90

extern "C" int __cdecl string_less(const void*, const void*);

struct MD5HasherImpl {
    void find(void* a, void* b, void* c);
};

void MD5HasherImpl::find(void* a, void* b, void* c)
{
    void* node = a;
    while (node != b) {
        if (string_less((char*)node + 8, c))
            break;
        node = *(void**)node;
    }
    *(void**)((char*)c + 4) = node;
    *(void**)c = a;
}
