// from server: 97% by colin
struct CRobloxControlColorSelector {
    char pad[0xfc];
    void* field_fc;
    int sub_63a130();

    int sub_63a140();
};

extern "C" int __fastcall sub_643980(void*);

int CRobloxControlColorSelector::sub_63a140()
{
    if (field_fc != 0) {
        void** vtbl = *(void***)field_fc;
        int (__thiscall *fn)(void*) = (int (__thiscall *)(void*))vtbl[0x178 / 4];
        if (fn(field_fc) != 0) {
            if (!(sub_63a130() & 0x10)) {
                return 1;
            }
        }
    }
    int result = sub_643980(field_fc);
    if (result != 0 && *(int*)(result + 0x28) != 0) {
        return 1;
    }
    return 0;
}
