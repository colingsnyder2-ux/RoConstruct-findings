// from server: 90% by colin
// roc 2008-06 00419ae0  unit: VCLuaFunction::?$CComObject  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00419ae0

extern "C" void* __cdecl operator_new(unsigned int size);
extern "C" void __stdcall sub_4192a0();
extern "C" void __stdcall sub_429040(void* a, void* b);

struct VCLuaFunction {
    char pad0[0x10];
    void** array;      // +0x10
    int capacity;      // +0x14
    int size;          // +0x18
    int offset;        // +0x1c
    void push_back(void* value);
};

void VCLuaFunction::push_back(void* value) {
    int newSize = offset + 1;
    if (capacity <= (unsigned)newSize) {
        sub_4192a0();
    }
    int idx = size + offset;
    if ((unsigned)capacity <= (unsigned)idx) {
        idx -= capacity;
    }
    if (array[idx] == 0) {
        array[idx] = operator_new(0x20);
    }
    sub_429040(array[idx], value);
    offset++;
}
