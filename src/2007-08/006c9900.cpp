// from server: 50% by colin
struct VCRectCArray {
    void* vtable;          // 0x00
    char pad_04[0x0c];     // 0x04
    void* field_10;        // 0x10
    char pad_14[0x08];     // 0x14
    int field_1c;          // 0x1c
    void** field_20;       // 0x20
    int count;             // 0x24
    void clear();
};

struct CXTPCommandBarAnimation {
    void* m_pAnimateInfo;
    void* m_pad0;
    void* m_pAnimateInfo2;
    char m_pad[0x18];
    void* m_pCommandBar;
    void Clear();
};

extern "C" void __stdcall sub_62fc62(void* p);
extern "C" void __stdcall sub_6ffab0(int a, int b);
extern "C" void __stdcall sub_62ff20();
extern "C" void* __stdcall KillTimer(void* hWnd, unsigned int uID);

void VCRectCArray::clear()
{
    int i = 0;
    if (count > 0) {
        do {
            if (i < 0 || i >= count) {
                sub_62ff20();
            }
            void* p = field_20[i];
            if (p) {
                ((CXTPCommandBarAnimation*)p)->Clear();
                sub_62fc62(p);
            }
            ++i;
        } while (i < count);
    }
    sub_6ffab0(-1, 0);
    if (field_10 != 0) {
        void* vt = vtable;
        if (vt != 0) {
            void* h = *(void**)((char*)vt + 0x20);
            if (h != 0) {
                KillTimer(h, 0xacd43);
            }
        }
    }
    field_10 = 0;
}
