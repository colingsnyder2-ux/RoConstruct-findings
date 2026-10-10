// from server: 49% by colin
// roc 2007-08 006a55a0  size: 334 bytes
// ATL::CMap-like clear/erase helper

extern "C" {
    void __stdcall sub_6306ac(void*);
    void* __stdcall sub_6306a6(void*);
    void __stdcall sub_630af7(void*, int, int, void*);
    void __stdcall sub_630bdc(void*, int, int, void*, void*);
    void __stdcall sub_68b860(void*, void*, int);
    void __stdcall sub_738904(void*, void*, int);
    void __stdcall sub_6a54d0(void*, void*, void*);
    void* __stdcall sub_77dd74(void*, void*);
    void* __stdcall sub_77d434(void*);
    void* __stdcall sub_77ddbc(void*);
}

struct CMap {
    int field0;
    void** field4;
    unsigned int field8;
    void* fieldC;
    void Clear(void* p);
};

void CMap::Clear(void* p)
{
    if ((*(unsigned int*)((char*)p + 0x18) ^ 0xFFFFFFFF) & 1) {
        sub_6306ac(p);
        if (fieldC != 0) {
            unsigned int i = 0;
            if (field8 > 0) {
                do {
                    void* node = field4[i];
                    while (node != 0) {
                        sub_68b860(p, node, 1);
                        sub_738904(p, (char*)node + 4, 1);
                        node = *(void**)((char*)node + 8);
                    }
                    i++;
                } while (i < field8);
            }
        }
    } else {
        void* it = sub_6306a6(p);
        if (it != 0) {
            int count = -1;
            do {
                void* tmp;
                sub_630bdc(&tmp, 4, 1, (void*)0x77ddac, (void*)0x77ddbc);
                void* local = 0;
                sub_68b860(p, &local, 1);
                sub_738904(p, &local, 1);
                sub_77dd74(&local, &tmp);
                void* val = local;
                sub_6a54d0(this, val, &tmp);
                sub_77d434(val);
                sub_77ddbc(&local);
                sub_630af7(&tmp, 4, 1, (void*)0x77ddbc);
                count--;
            } while (count != 0);
        }
    }
}
