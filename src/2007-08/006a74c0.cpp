// from server: 44% by colin
struct CXTPMenuBar {
    char pad[0x1b4];
    int field_1b4;
    char pad2[4];
    void* field_1bc;
    void CopyFrom(CXTPMenuBar* other, int flag);
};

extern "C" void __stdcall InterlockedIncrement(long*);
extern "C" void __stdcall sub_64f010(CXTPMenuBar* self, CXTPMenuBar* other, int flag);
extern "C" void* __stdcall sub_6a5bc0(void* p);
extern "C" void __stdcall sub_6a5bd0(void* p, void** out1, void** out2);
extern "C" void* __stdcall sub_6a6af0(void* p, int val);
extern "C" void __stdcall sub_6a6f60(void* p, int val, void* item);
extern "C" void __stdcall sub_6301e4(void* p);

void CXTPMenuBar::CopyFrom(CXTPMenuBar* other, int flag) {
    sub_64f010(this, other, flag);
    this->field_1b4 = other->field_1b4;
    void* p = sub_6a5bc0(other->field_1bc);
    if (p != 0) {
        void* out1;
        void* out2;
        do {
            sub_6a5bd0(other->field_1bc, &out1, &out2);
            void* item = out1;
            void* found = sub_6a6af0(this->field_1bc, *(int*)((char*)item + 0x30));
            if (found != 0) {
                sub_6301e4(*(void**)((char*)found + 0x20));
                *(void**)((char*)found + 0x20) = *(void**)((char*)item + 0x20);
            } else {
                sub_6a6f60(this->field_1bc, *(int*)((char*)item + 0x30), item);
            }
            InterlockedIncrement((long*)((char*)item + 4));
        } while (out2 != 0);
    }
}
