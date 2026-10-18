// from server: 81% by colin
struct Object;
typedef unsigned long (__stdcall *ObjectMethod)(Object *);

struct Object {
    ObjectMethod *vtable;
};

extern "C" void __cdecl release_memory(void *);

struct COutputView {
    unsigned char padding[16];
    Object ***map;
    unsigned int mapSize;
    unsigned int offset;
    unsigned int count;

    void clear();
};

void COutputView::clear()
{
    if (count != 0) {
        while (count != 0) {
            unsigned int position = offset + count - 1;
            unsigned int block = position >> 2;
            if (mapSize <= block)
                block -= mapSize;

            Object **entry = map[block] + (position & 3);
            Object *object = *entry;
            if (object != 0)
                object->vtable[2](object);

            if (--count == 0)
                offset = 0;
        }
    }

    unsigned int i = mapSize;
    while (i > 0) {
        --i;
        if (map[i] != 0)
            release_memory(map[i]);
    }

    if (map != 0)
        release_memory(map);

    mapSize = 0;
    map = 0;
}
