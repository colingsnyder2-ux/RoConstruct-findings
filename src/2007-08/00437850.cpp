// from server: 64% by colin
struct MarshaledListener {
    int unknown0;
    int* data;
    int size;
    int count;
    void clear();
};

void __stdcall freePtr(void* p);

void MarshaledListener::clear()
{
    if (count != 0) {
        do {
            int n = count;
            if (n != 0) {
                int idx = n + size - 1;
                int block = (unsigned)idx >> 2;
                if (block <= (unsigned)size) {
                    block = size - block;
                }
                int* slot = (int*)((char*)data + block * 4);
                int* obj = (int*)((char*)slot + (idx & 3) * 4);
                int* p = (int*)*obj;
                if (p != 0) {
                    void (__stdcall *fn)(void*) = *(void (__stdcall **)(void*))((char*)*p + 8);
                    fn(p);
                }
            }
            count--;
            if (count != 0) {
                size = 0;
            }
        } while (count != 0);
    }

    int i = size;
    if (i > 0) {
        do {
            i--;
            int* slot = (int*)((char*)data + i * 4);
            if (*slot != 0) {
                freePtr((void*)*slot);
            }
        } while (i > 0);
    }

    if (data != 0) {
        freePtr(data);
    }
    data = 0;
    size = 0;
}
