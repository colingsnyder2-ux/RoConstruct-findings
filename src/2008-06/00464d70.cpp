// from server: 30% by colin
struct EventData {
    char pad0[4];
    int field4;
    char pad8[4];
    int fieldC;
    int field10;
    void clear();
};

extern "C" void __stdcall sub_4574B0(EventData*);

void EventData::clear()
{
    if (fieldC != 0) {
        sub_4574B0(this);
        int* p = (int*)fieldC;
        void (__stdcall *fn)(int, int) = *(void (__stdcall **)(int, int))(*(int*)p + 8);
        fn(field4, field10);
    }
}
