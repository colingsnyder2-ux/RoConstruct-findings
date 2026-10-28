// from server: 0% by atomic.potato
struct PyramidPoly {
    void* field0;
    PyramidPoly(int);
};

extern "C" void* __cdecl operator_new(unsigned int);

PyramidPoly::PyramidPoly(int a) {
    field0 = 0;
    void* p = operator_new(0x10);
    if (p) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(int*)p = 0xabcd14;
        *(int*)((char*)p + 0xc) = a;
    } else {
        p = 0;
    }
    field0 = p;
}
