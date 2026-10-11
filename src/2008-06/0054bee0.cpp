// from server: 32% by colin
// roc 2008-06 0054bee0  unit: RBX::RenderBase::Mesh  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054bee0

extern "C" void __stdcall sub_4D76E0(void*);
extern "C" void __cdecl sub_507D20(void*);

struct Mesh {
    void* data;
    int count;
    int capacity;
    void clear();
};

void Mesh::clear() {
    int i = 0;
    while (i < count) {
        sub_4D76E0((char*)data + i * 4);
        i++;
    }
    sub_507D20(data);
    data = 0;
    count = 0;
    capacity = 0;
}
