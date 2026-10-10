// from server: 78% by colin
struct CXTPImageManagerIcon {
    void* field0;
    void* field4;
    void func(void* out);
};

extern "C" int __stdcall sub_649CC0(void*, void*);
extern "C" int __stdcall GetObjectA(void*, int, void*);

void CXTPImageManagerIcon::func(void* out) {
    if (field0 != 0) {
        sub_649CC0(out, field0);
        return;
    }
    if (field4 != 0) {
        int buf[6];
        if (GetObjectA(field4, 0x18, buf) != 0) {
            *(int*)out = buf[0];
            *(int*)((char*)out + 4) = buf[1];
            return;
        }
    }
    *(int*)out = 0;
    *(int*)((char*)out + 4) = 0;
}
