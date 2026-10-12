// from server: 48% by colin
// roc 2008-06 004b5ed0  unit: RBX::Network::VSharedStringDictionary::?$sp_counted_impl_p  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b5ed0

struct BitStream {
    void writeBits(const unsigned char* data, unsigned int numBits, bool align);
};

struct SenderDictionary {
    void send(BitStream& stream, const char* value);
};

struct ReceiverDictionary {
    void receive(BitStream& stream, const char*& value);
};

struct SharedStringDictionary : SenderDictionary, ReceiverDictionary {
    char pad[0x2c58];
    void* map;
    void send(BitStream& stream, const char* value);
    void receive(BitStream& stream, const char*& value);
};

struct MarshaledListener {
    void* p;
    void addListener(void* listener);
};

struct Callback {
    void* vtable;
    void* unk;
    void* obj;
    void* arg;
};

extern "C" void __stdcall sub_618a40(void* dst, const char* src, unsigned int len);
extern "C" void __stdcall sub_4ae570(void* obj, void* callback);

void SharedStringDictionary::send(BitStream& stream, const char* value)
{
    if (value) {
        void* local;
        MarshaledListener* ml = (MarshaledListener*)((char*)this + 0x2c58);
        ml->addListener(&local);
        sub_618a40(&local, value, 0);
        this->SenderDictionary::send(stream, value);
        Callback cb;
        cb.vtable = (void*)0x4aff70;
        cb.unk = 0;
        cb.obj = this;
        cb.arg = local;
        sub_4ae570((void*)value, &cb);
    }
}
