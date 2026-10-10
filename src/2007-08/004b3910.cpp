// from server: 48% by colin
struct VMarker {
    void destroy(VMarker* node);
};

extern "C" void __cdecl free(void*);
extern "C" void __cdecl sub_4A1BA0(void*, void*, void*, void*);

void VMarker::destroy(VMarker* node)
{
    VMarker* p = node;
    while (!*(unsigned char*)((char*)p + 0x21)) {
        destroy(*(VMarker**)((char*)p + 8));
        VMarker* next = *(VMarker**)p;
        void* q = (char*)p + 0x10;
        void* r = *(void**)((char*)p + 0x14);
        if (r) {
            sub_4A1BA0(r, q, *(void**)((char*)p + 0x18), *(void**)((char*)p + 0x14));
            free(*(void**)((char*)p + 0x14));
        }
        *(void**)((char*)p + 0x14) = 0;
        *(void**)((char*)p + 0x18) = 0;
        *(void**)((char*)p + 0x1C) = 0;
        free(p);
        p = next;
    }
}
