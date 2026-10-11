// from server: 64% by atomic.potato
struct CXTPCustomizeSheet {
    char pad0[0xb8];
    void* field_b8;

    int func_0083e140(void* arg);
};

extern "C" char __stdcall sub_98ddbc(void*);

int CXTPCustomizeSheet::func_0083e140(void* arg)
{
    void* p = field_b8;
    int* esi = *(int**)((char*)p + 0x58);
    int result;
    if (esi == 0) {
        return 0;
    }
    if (esi[0x90/4] > 0) {
        result = 1;
    } else {
        if (sub_98ddbc((char*)esi + 0xdc) && esi[0x14c/4] == -1) {
            result = 0;
        } else {
            result = 1;
        }
    }
    return result;
}
