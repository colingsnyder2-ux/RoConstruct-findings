// from server: 17% by tester
// roc 2008-06 005530e0  unit: RBX::RenderBase::AggregateChunk  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005530e0

struct Agg {
    char pad0[8];
    int field8;
    int fieldC;
    int field10;
    int field14;
    int getCount();
    int alloc(int n);
    bool grow(int n);
};

extern "C" void __stdcall sub_553270();

int Agg::getCount() {
    return field8;
}

int Agg::alloc(int n) {
    return 0;
}

bool Agg::grow(int n) {
    fieldC = 0;
    field10 = 0;
    field14 = 0;
    if (n != 0) {
        return false;
    }
    if ((unsigned)getCount() < (unsigned)n) {
        sub_553270();
    } else {
        int p = alloc(n);
        fieldC = p;
        field10 = p;
        field14 = p + n * 4;
    }
    return true;
}
