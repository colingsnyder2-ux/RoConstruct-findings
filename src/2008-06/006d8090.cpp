// from server: 26% by colin
struct CArrayBase {
    void* data;
    int size;
    int capacity;
};

struct CArray : CArrayBase {
    CArray();
};

extern "C" void* __cdecl operator_new(unsigned int size);

CArray::CArray() {
    data = 0;
    size = 0;
    capacity = 0;
}

void* __cdecl AllocArray(unsigned int size);

struct CArrayHolder {
    CArray* p;
    CArrayHolder();
};

CArrayHolder::CArrayHolder() {
    p = (CArray*)AllocArray(0x54);
    if (p) {
        p->CArray::CArray();
    }
}
