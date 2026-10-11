// from server: 38% by colin
extern "C" void __stdcall _invalid_parameter_noinfo();

struct SoundChannel {
    void* field0;
    void* field4;
    void* field8;
    void* fieldC;
    void* field10;
    void* field14;
    void* field18;
    void func(void* arg1, void* arg2);
};

void SoundChannel::func(void* arg1, void* arg2) {
    void* node = field18;
    void* parent = *(void**)((char*)node + 4);
    void* result;

    if (*(char*)((char*)parent + 0x19) == 0) {
        void* key = *(void**)arg1;
        void* cur = parent;
        void* prev = node;
        while (*(char*)((char*)cur + 0x19) == 0) {
            if (*(int*)((char*)cur + 0xC) < (int)key) {
                cur = *(void**)((char*)cur + 8);
            } else {
                prev = cur;
                cur = *(void**)cur;
            }
        }
        parent = prev;
    }

    void* self = field0;
    void* root = field18;
    void* local1 = parent;
    void* local0 = self;

    if (self != 0) {
        if (self != self) {
            _invalid_parameter_noinfo();
        }
    }

    if (parent != root && *(int*)arg1 >= *(int*)((char*)parent + 0xC)) {
        *(void**)arg2 = local0;
        *(void**)((char*)arg2 + 4) = local1;
    } else {
        void* r = field18;
        void* s = field0;
        *(void**)((char*)arg2 + 4) = r;
        *(void**)arg2 = s;
    }
}
