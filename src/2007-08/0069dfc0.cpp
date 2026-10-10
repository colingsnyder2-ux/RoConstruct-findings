// from server: 51% by colin
struct CXTPPropertyGridItemBool {
    char pad[0x110];
    void* field_110;
    void* GetValue(void* out);
};

extern "C" void* __stdcall sub_697D60(void* out);
extern "C" void __stdcall sub_77DD98(void* p);
extern "C" void __stdcall sub_77DDB8(void* p, void* v);
extern "C" void __stdcall sub_77DDBC(void* p);

void* CXTPPropertyGridItemBool::GetValue(void* out) {
    void* result = 0;
    if (field_110 != 0) {
        result = (void*)0x785954;
    } else {
        void* tmp;
        sub_697D60(&tmp);
        sub_77DD98(&tmp);
        result = tmp;
    }
    sub_77DDB8(out, result);
    sub_77DDBC(&result);
    return out;
}
