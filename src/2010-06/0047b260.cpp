// from server: 76% by colin
struct DxUserInput {
    int* ptr;
    unsigned int count;
    DxUserInput& increment();
};

extern "C" void __stdcall invalid_parameter_noinfo();
extern "C" char* __stdcall myptr(int* p);

DxUserInput& DxUserInput::increment() {
    int* p = ptr;
    if (p != (int*)-4) {
        if (p == 0) {
            invalid_parameter_noinfo();
        }
        int* q = ptr;
        char* base = myptr(q);
        unsigned int len = *(unsigned int*)(q + 5);
        if (count >= (unsigned int)(base + len)) {
            invalid_parameter_noinfo();
        }
    }
    count++;
    return *this;
}
