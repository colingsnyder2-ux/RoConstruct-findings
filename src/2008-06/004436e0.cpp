// from server: 40% by colin
// roc 2008-06 004436e0  unit: RBX::Reflection::H::?$TypedPropertyDescriptor  size: 160 bytes

extern "C" void __stdcall _invalid_parameter_noinfo();

struct Descriptor {
    char pad[0x108];
    void* field_108;
    int find(void* key);
};

int Descriptor::find(void* key) {
    void* p = field_108;
    if (p == 0) {
        return 0;
    }
    void* end = *(void**)((char*)p + 0x10);
    void* start = *(void**)((char*)p + 0xc);
    if (start > end) {
        _invalid_parameter_noinfo();
    }
    void* first = *(void**)p;
    p = field_108;
    void* cur = *(void**)((char*)p + 0xc);
    void* last = *(void**)((char*)p + 0x10);
    if (cur > last) {
        _invalid_parameter_noinfo();
    }
    void* node = *(void**)p;
    while (1) {
        if (node != 0 && node != first) {
            _invalid_parameter_noinfo();
        }
        if (cur == end) {
            return 0;
        }
        if (node == 0) {
            _invalid_parameter_noinfo();
            void* v = 0;
            if (cur < *(void**)((char*)v + 0x10)) {
                _invalid_parameter_noinfo();
            }
            void* r = *(void**)cur;
            int res = ((int (__cdecl*)(void*, void*, void*, void*, void*))0x6a17c6)(r, 0, (void*)0x92907c, (void*)0x92a950, 0);
            if (res != 0) {
                return res;
            }
            if (node == 0) {
                _invalid_parameter_noinfo();
                void* v2 = 0;
                if (cur < *(void**)((char*)v2 + 0x10)) {
                    _invalid_parameter_noinfo();
                }
            } else {
                node = *(void**)node;
            }
            cur = (char*)cur + 8;
        } else {
            node = *(void**)node;
        }
    }
}
