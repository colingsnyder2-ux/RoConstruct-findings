// from server: 73% by atomic.potato
// roc 2009-12 00642b10  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00642b10

struct type_info {
    bool operator==(const type_info&) const;
};

struct S {
};

void* __cdecl f(void* arg) {
    if (arg == 0) return 0;
    type_info* ti = *(type_info**)arg;
    type_info* p;
    if (ti != 0) {
        p = (type_info*)(*(void***)ti)[1];
        // call virtual
        p = ((type_info* (*)(type_info*))((*(void***)ti)[1]))(ti);
    } else {
        p = (type_info*)0xb0030c;
    }
    if (p->operator==(*(type_info*)0xb1d76c)) {
        return (char*)(*(void**)arg) + 4;
    }
    return 0;
}
