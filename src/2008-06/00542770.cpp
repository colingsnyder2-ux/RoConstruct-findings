// from server: 26% by colin
// roc 2008-06 00542770  unit: RBX::RenderBase::VChunk::?$WeakReferenceCountedPointer  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00542770

extern "C" void* __cdecl operator_new(unsigned int size);

struct Inner {
    void* field0;
    void* field4;
    void* field8;
};

struct Outer {
    void* field0;
    Inner* field4;
    void set(void* p);
};

void Outer::set(void* p) {
    field4 = (Inner*)p;
    if (field4 != 0) {
        Inner* tmp = (Inner*)operator_new(8);
        if (tmp != 0) {
            tmp->field0 = field4->field8;
            tmp->field4 = 0;
        }
        field4->field8 = tmp;
    }
}
