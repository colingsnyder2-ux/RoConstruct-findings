// from server: 76% by colin
// roc 2008-06 005fd770  unit: RBX::Tool  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fd770

struct CNameItem {
    char data[36];
    CNameItem();
};

struct Tool;

extern "C" void* __cdecl sub_5b08a0(void* p);

struct Helper {
    void method();
};

struct Tool {
    char pad[0x24];
    float f24;
    float f28;
    float f2c;
    Tool* copyFrom(Tool* other);
};

Tool* Tool::copyFrom(Tool* other) {
    void* src;
    void* p = sub_5b08a0((char*)this - 0x26c);
    if (p) {
        Helper* h = (Helper*)p;
        h->method();
        src = p;
    } else {
        CNameItem item;
        src = &item;
    }
    other->copyFrom((Tool*)src);
    other->f24 = ((Tool*)src)->f24;
    other->f28 = ((Tool*)src)->f28;
    other->f2c = ((Tool*)src)->f2c;
    return other;
}
