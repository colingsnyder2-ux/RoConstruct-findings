// from server: 52% by Intel
extern "C" void callee(void* a, void* b);

void __stdcall wrapper(void* p1, void* p2) {
    callee(p1, p2);
}
