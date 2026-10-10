// from server: 48% by tester
// roc 2007-08 005bc1c0  unit: RBX::VPVInstance::?$EnumPropDescriptor  size: 295 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bc1c0

struct XmlNameValuePair {
    int type;
    int value;
    bool isValueType() const;
    bool isString() const;
    bool getString(void* out) const;
    bool getInt(int* out) const;
};

struct String {
    char buf[0x1c];
    String();
    ~String();
};

struct PropDescriptor {
    void* vtable;
    void* field_4;
    void* field_8;
    void* field_c;
    void* field_10;
    void* field_14;
    void* field_18;
    void* field_1c;
    bool sub_5bc1c0(void* a, void* b, void* c);
};

extern "C" {
    void __stdcall GetSystemTimeAsFileTime(void*);
    void __stdcall SystemTimeToFileTime(void*);
}

bool PropDescriptor::sub_5bc1c0(void* a, void* b, void* c) {
    XmlNameValuePair* pair = (XmlNameValuePair*)a;
    if (pair->isValueType()) {
        return false;
    }
    XmlNameValuePair* pair2 = (XmlNameValuePair*)((char*)a + 0xc);
    if (pair2->isString()) {
        String str;
        if (pair2->getString(&str)) {
            int val;
            if (pair2->getInt(&val)) {
                void* p = *(void**)((char*)this + 0x1c);
                void** vt = *(void***)p;
                void (*fn)(void*, void*, void*) = (void (*)(void*, void*, void*))vt[2];
                fn(p, b, &val);
                str.~String();
                return true;
            }
            if (val == 0) {
                void** vt = *(void***)this;
                bool (*fn)(void*, void*, int) = (bool (*)(void*, void*, int))vt[10];
                if (fn(this, b, 0)) {
                    str.~String();
                    return true;
                }
            }
        }
        str.~String();
    }
    int val2;
    if (pair2->getInt(&val2)) {
        void* p = *(void**)((char*)this + 0x1c);
        void** vt = *(void***)p;
        void (*fn)(void*, void*, void*) = (void (*)(void*, void*, void*))vt[2];
        fn(p, b, &val2);
    }
    return false;
}
