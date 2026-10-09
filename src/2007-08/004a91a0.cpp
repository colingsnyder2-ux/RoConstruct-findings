// from server: 95% by colin
// roc 2007-08 004a91a0  unit: RBX::Network::VClient::FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a91a0

extern "C" void* __cdecl sub_62fef6(unsigned int size);
extern "C" void __cdecl sub_62fc62(void* p);

struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

extern type_info* g_typeInfoPtr;

void* __cdecl FactoryProduct_create(void* src, int mode)
{
    if (mode == 2) {
        void* p = src;
        if (g_typeInfoPtr->operator==(*(type_info*)p)) {
            return p;
        }
        return 0;
    }
    if (mode == 0) {
        void* mem = sub_62fef6(8);
        if (mem != 0) {
            *(void**)mem = *(void**)src;
            *(void**)((char*)mem + 4) = *(void**)((char*)src + 4);
        }
        return mem;
    }
    sub_62fc62(src);
    return 0;
}
