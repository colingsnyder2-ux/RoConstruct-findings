// from server: 91% by colin
struct CXTPPropertyGridItem {
    char reserved00[0x24];
    void* items[3];

    CXTPPropertyGridItem(void* value);
};

struct Vector3Item : CXTPPropertyGridItem {
    Vector3Item(void* value);
};

Vector3Item::Vector3Item(void* value)
    : CXTPPropertyGridItem(value)
{
    for (int i = 0; i < 3; ++i) {
        if (items[i] != 0) {
            void** vtable = *(void***)((char*)items[i] + 0x10C);
            ((void (__thiscall*)(void*, void*))vtable[0])((char*)items[i] + 0x10C, value);
        }
    }
}
