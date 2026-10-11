// from server: 37% by colin
// roc 2008-06 0046f820  unit: RBX::LDraw2Lua::LDrawParser  size: 217 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046f820

extern "C" void __stdcall sub_6A067A(void* p);
extern "C" void __stdcall sub_802468(void* p);
extern "C" void __stdcall sub_802890();
extern "C" void __stdcall sub_445DC0(void* a, void* b, void* c, void* d, void* e, void* f);

struct Inner {
    void* field0;
    void* field4;
    void* field8;
    void* fieldC;
    void* field10;
    void* field14;
};

struct Outer {
    void* vtable;
    char pad[0x1C];
    Inner inner;
    void* field2C;
    void* field30;

    void method();
    void* getAt(int idx);
};

void* Outer::getAt(int idx) {
    return 0;
}

void Outer::method() {
    this->vtable = (void*)0x81cbd4;

    Inner* in = &this->inner;
    int count = (int)((char*)this->field30 - (char*)this->field2C) >> 2;

    for (int i = 0; i < count; i++) {
        void* p = this->getAt(i);
        void* obj = *(void**)p;
        if (obj) {
            void** vt = *(void***)obj;
            ((void (__thiscall*)(void*, int))vt[0])(obj, 1);
        }
    }

    void* a = in->field10;
    if (in->fieldC > a) {
        sub_802890();
    }

    void* b = in->fieldC;
    void* c = in->field0;
    if (b > in->field10) {
        sub_802890();
    }

    void* d = in->field0;
    void* tmp = 0;
    sub_445DC0(in, &tmp, d, b, c, a);

    void* e = in->fieldC;
    if (e) {
        sub_6A067A(e);
    }
    in->fieldC = 0;
    in->field10 = 0;
    in->field14 = 0;

    void* f = in->field0;
    sub_6A067A(f);

    sub_802468((char*)this + 4);
}
