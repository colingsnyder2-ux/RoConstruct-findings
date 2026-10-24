// from server: 61% by 41k
// roc 2007-08 00545f90  unit: RBX::MD5HasherImpl  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00545f90

extern "C" int __cdecl string_less(const void*, const void*);

struct MD5HasherImpl {
};

void __cdecl find(void* a, void* b, void* c)
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
