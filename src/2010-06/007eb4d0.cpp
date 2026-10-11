// from server: 64% by atomic.potato
struct CXTPToolBar {
    char pad[0xa0];
    void* field_a0;
    void* GetItem(void*);
    void RemoveItem(void*);
};

struct CArray {
    int m_nSize;
    char pad[4];
    void** m_pData;
};

struct Item {
    char pad0[8];
    int field8;
    char pad_c[0x2c];
    void* field38;
};

extern "C" void __stdcall sub_7a7c4c();
extern "C" void __stdcall sub_7c8e30();
extern "C" void __stdcall sub_7c8310(void*);
extern "C" void __stdcall sub_7e92c0(void*);

void CXTPToolBar::RemoveItem(void* p)
{
    CArray* arr = (CArray*)p;
    int i = 0;
    if (arr->m_nSize > 0) {
        do {
            if (i < 0 || i >= arr->m_nSize) {
                sub_7a7c4c();
            }
            Item* item = (Item*)arr->m_pData[i];
            if (item) {
                void* v = GetItem(*(void**)item);
                item->field38 = v;
                if (v) {
                    if (item->field8) {
                        sub_7c8310(v);
                    } else {
                        void* p2 = field_a0;
                        void* vt = *(void**)v;
                        void* fn = *(void**)((char*)vt + 0x20c);
                        ((void (__stdcall*)(void*, void*, int))fn)(v, p2, 0);
                    }
                    sub_7e92c0(item);
                }
            }
            i++;
        } while (i < arr->m_nSize);
    }
}
