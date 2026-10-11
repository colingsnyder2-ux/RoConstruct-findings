// from server: 43% by atomic.potato
extern "C" void __stdcall _invalid_parameter_noinfo();

struct Flag {
    char pad0[0x9c];
    void* field_9c;
    char pad1[0x10];
    void** field_b0;
    void* field_b4;
    int find(void* key);
};

int Flag::find(void* key) {
    if (field_b4 == 0)
        return 0;
    void** head = field_b0;
    void* node = *head;
    void* saved = field_9c;
    void* first = node;
    while (1) {
        void** cur = field_b0;
        void* curval = field_9c;
        if (saved != 0 && saved == curval) {
        } else {
            _invalid_parameter_noinfo();
        }
        if (first == *cur)
            return 0;
        if (saved == 0) {
            _invalid_parameter_noinfo();
            if (first == *(void**)((char*)0 + 0x14))
                _invalid_parameter_noinfo();
        } else {
            void* tmp = *(void**)saved;
            (void)tmp;
        }
        int r = ((Flag*)((char*)first + 8))->find(key);
        if (r == *(int*)((char*)&key + 0)) {
            if (saved == 0) {
                _invalid_parameter_noinfo();
                if (first == *(void**)((char*)saved + 0x14))
                    _invalid_parameter_noinfo();
            } else {
                saved = *(void**)saved;
            }
            return *(int*)((char*)first + 8);
        }
        if (saved == 0) {
            _invalid_parameter_noinfo();
            if (first == *(void**)((char*)0 + 0x14))
                _invalid_parameter_noinfo();
        } else {
            void* tmp = *(void**)saved;
            (void)tmp;
        }
        first = *(void**)first;
    }
}
