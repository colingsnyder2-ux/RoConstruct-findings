// from server: 36% by colin
extern "C" void* __cdecl malloc(unsigned int size);
extern "C" void __cdecl __security_check_cookie(unsigned int cookie);

struct TSignalInstance;

struct TSignalDesc {
    void construct(TSignalInstance* inst, void* arg);
};

struct TSignalInstance {
    void* field0;
    void init(TSignalInstance* other, void* arg);
};

void TSignalInstance::init(TSignalInstance* other, void* arg) {
    void* mem = malloc(0x160);
    TSignalInstance* tmp = 0;
    if (mem != 0) {
        tmp = (TSignalInstance*)mem;
        tmp->field0 = 0;
        TSignalDesc* desc = (TSignalDesc*)0;
        desc->construct(tmp, 0);
    }
    this->field0 = tmp;
    TSignalDesc* d = (TSignalDesc*)0;
    d->construct(this, arg);
}
