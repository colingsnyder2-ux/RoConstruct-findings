// from server: 29% by colin
struct Texture {
    int field0;
    int field4;
    int field8;
    int fieldC;
    void method(int a, int b);
};

extern "C" void* __cdecl operator_new(unsigned int size);
extern "C" void __cdecl func_4cdf20();
extern "C" void __cdecl func_4d0100(int);
extern "C" void __cdecl func_4d2150();
extern "C" void* __cdecl func_4d3170();

void Texture::method(int a, int b) {
    int* p = (int*)a;
    int val = *p;
    int idx = val % fieldC;
    int* arr = (int*)field8;
    int existing = arr[idx];
    if (existing == 0) {
        void* mem = operator_new(0x1c);
        if (mem != 0) {
            func_4d2150();
            void* result = func_4d3170();
            arr[idx] = (int)result;
        } else {
            arr[idx] = 0;
        }
        field4++;
        return;
    }
    int count = 1;
    int found = 0;
    int* node = (int*)existing;
    while (node != 0) {
        if (val == node[0]) {
            found = 1;
            break;
        }
        node = (int*)node[6];
        count++;
    }
    if (!found && count > 5) {
        int limit = field4 * 10;
        if (fieldC < limit) {
            func_4d0100(fieldC * 2 + 1);
        }
    }
    int idx2 = val % fieldC;
    void* mem2 = operator_new(0x1c);
    if (mem2 != 0) {
        int* arr2 = (int*)field8;
        int old = arr2[idx2];
        func_4d2150();
        func_4d3170();
        arr2[idx2] = (int)mem2;
    } else {
        int* arr3 = (int*)field8;
        arr3[idx2] = 0;
    }
    field4++;
}
