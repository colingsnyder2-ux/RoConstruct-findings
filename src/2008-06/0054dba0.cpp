// from server: 20% by tester
// roc 2008-06 0054dba0  unit: RBX::RenderBase::Mesh  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054dba0

extern "C" void __stdcall sub_515ed0(void* self, int count);

struct Mesh {
    int field0;
    int field4;
    int field8;
    void construct(int* data, int count);
};

void Mesh::construct(int* data, int count) {
    field4 = 0;
    field8 = 0;
    field0 = 0;
    if (count > 0) {
        sub_515ed0(this, (int)data);
    } else {
        field0 = 0;
    }
}
