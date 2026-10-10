// from server: 95% by atomic.potato
// roc 2007-08 0049f8b0  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0049f8b0

extern "C" void* __cdecl malloc(unsigned int size);
extern "C" void __cdecl memcpy(void* dst, const void* src, unsigned int size);

struct BoundFuncDesc {
    int field0;
    int field4;
    int field8;
    int fieldC;
    unsigned char field10;
    unsigned char pad[3];
    BoundFuncDesc* ctor(void* src, unsigned int count, unsigned char flag);
};

BoundFuncDesc* BoundFuncDesc::ctor(void* src, unsigned int count, unsigned char flag) {
    unsigned int n = count;
    this->field0 = n * 8;
    this->field8 = 0;
    this->field10 = flag;
    this->field4 = n * 8;
    if (flag != 0) {
        if (n > 0) {
            if (n < 0x100) {
                this->fieldC = (int)((char*)this + 0x11);
                this->field4 = 0x800;
            } else {
                this->fieldC = (int)malloc(n);
            }
            memcpy((void*)this->fieldC, src, n);
        } else {
            this->fieldC = 0;
        }
    } else {
        this->fieldC = (int)src;
    }
    return this;
}
