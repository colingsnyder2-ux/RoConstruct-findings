// from server: 61% by atomic.potato
struct MarkerItem {
    void* field_0;
    void* field_4;
    void* field_8;
    char field_3D;

    void sub_4af0c0(MarkerItem* arg);
};

extern "C" void __cdecl sub_4ab8c0(void*);
extern "C" void __stdcall sub_6a067a(void*);

void MarkerItem::sub_4af0c0(MarkerItem* arg) {
    MarkerItem* esi = arg;
    MarkerItem* edi = arg;
    MarkerItem* ebx = this;

    while (edi->field_3D == 0) {
        void* eax = esi->field_8;
        this->sub_4af0c0(esi);
        esi = reinterpret_cast<MarkerItem*>(esi->field_0);
        sub_4ab8c0(reinterpret_cast<void*>(reinterpret_cast<char*>(edi) + 0x10));
        sub_6a067a(edi);
        edi = esi;
    }
}
