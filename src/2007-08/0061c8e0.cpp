// from server: 80% by colin
struct ChatOutput {
    char pad[0x11c];
    int field_11c;
    int field_120;
    int field_124;
    int field_128;
    void pop_front();
};

extern "C" void __stdcall _invalid_parameter_noinfo();
extern "C" void __cdecl sub_62FC62(void* p);
extern "C" void __fastcall sub_61C500(void* p);

void ChatOutput::pop_front()
{
    unsigned int idx = field_124;
    unsigned int count = field_128;
    unsigned int total = idx + count;
    if (idx > total) {
        _invalid_parameter_noinfo();
    }
    unsigned int total2 = field_128 + field_124;
    unsigned int q = idx >> 2;
    unsigned int r = idx & 3;
    if (idx >= total2) {
        _invalid_parameter_noinfo();
    }
    unsigned int cap = field_120;
    if (cap > q) {
    } else {
        q -= cap;
    }
    int* arr = (int*)field_11c;
    int* inner = (int*)arr[q];
    void* p = (void*)inner[r];
    unsigned int n = field_128;
    if (n != 0) {
        unsigned int c = field_120;
        field_124 = field_124 + 1;
        unsigned int cur = field_124;
        c = c + c;
        c = c + c;
        if (c > cur) {
        } else {
            field_124 = 0;
        }
        n = n - 1;
        field_128 = n;
        if (n == 0) {
            field_124 = 0;
        }
    }
    if (p != 0) {
        sub_61C500(p);
        sub_62FC62(p);
    }
}
