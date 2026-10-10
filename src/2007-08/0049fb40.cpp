// from server: 55% by colin
extern "C" void* __cdecl malloc(unsigned int);
extern "C" void* __cdecl realloc(void*, unsigned int);
extern "C" void __cdecl memcpy(void*, const void*, unsigned int);

struct S {
    int field0;
    int field4;
    int field8;
    int fieldC;
    char field10;
    char field11;
    void grow(int amount);
};

void S::grow(int amount) {
    if (amount <= 0) return;
    int newSize = field0 + amount;
    if (newSize <= 0) return;
    int cap = field4 - 1;
    int rounded = (newSize - 1) & ~7;
    cap &= ~7;
    if (cap >= rounded) return;
    int* buf = (int*)fieldC;
    newSize += newSize;
    int bytes = (newSize + 7) >> 3;
    char* inlineBuf = &field11;
    if (buf == (int*)inlineBuf) {
        if (bytes > 0x100) {
            void* p = malloc(bytes);
            int oldBytes = (field4 + 7) >> 3;
            memcpy(p, inlineBuf, oldBytes);
            fieldC = (int)p;
        }
    } else {
        void* p = realloc(buf, bytes);
        fieldC = (int)p;
    }
    if (newSize > field4) {
        field4 = newSize;
    }
}
