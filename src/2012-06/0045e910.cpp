// from server: 49% by atomic.potato
struct FacesComponentItem {
    char pad[0x128];
    void* field_128;
    bool compare(void* a, void* b);
};

extern "C" bool __stdcall sub_7462A0(void* a, void* b);

bool FacesComponentItem::compare(void* a, void* b) {
    bool r1 = sub_7462A0(field_128, a);
    bool r2 = sub_7462A0(field_128, b);
    return r1 == r2;
}
