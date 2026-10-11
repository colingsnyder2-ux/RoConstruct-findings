// from server: 14% by colin
// roc 2008-06 005409e0  unit: RBX::RenderBase::AggregatingSceneManager::Bucket  size: 147 bytes

struct Bucket {
    char pad[8];
    void* field8;

    void func(void* out, void* arg);
};

struct Inner {
    char pad[0x14];
};

extern "C" void __stdcall sub_541c70(void* out, void* arg);
extern "C" void* __stdcall sub_5409b0(void* out);
extern "C" char __stdcall sub_540ed0(void* self, void* arg);
extern "C" void* __stdcall sub_54bf70(void* self);
extern "C" void* __stdcall sub_54c610(void* p);
extern "C" char __stdcall sub_541d70(void* self, void* a, void* b);

void Bucket::func(void* out, void* arg) {
    char buf[0x14];
    void* tmp;
    void* result;
    char c;

    sub_541c70(buf, arg);
    tmp = sub_5409b0(&buf[0x14]);
    c = sub_540ed0(buf, tmp);
    if (c == 0) {
        void* p = sub_54bf70(buf);
        void* q = sub_54c610(p);
        c = sub_541d70(&field8, arg, q);
        if (c == 0) {
            result = buf;
        } else {
            result = sub_5409b0(&buf[0x14]);
        }
    } else {
        result = sub_5409b0(&buf[0x14]);
    }
    *(void**)out = *(void**)result;
    *(void**)((char*)out + 4) = *(void**)((char*)result + 4);
}
