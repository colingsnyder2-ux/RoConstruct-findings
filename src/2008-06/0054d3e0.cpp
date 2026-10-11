// from server: 21% by colin
struct Mesh {
    int field0;
    int field4;
    int field8;
    void init(int* data, int count);
    Mesh(int* data, int count);
};

extern "C" void __stdcall helper(int* data);

void Mesh::init(int* data, int count) {
    field4 = 0;
    field8 = 0;
    field0 = 0;
    if (count > 0) {
        helper(data);
    } else {
        field0 = 0;
    }
}

Mesh::Mesh(int* data, int count) {
    field4 = 0;
    field8 = 0;
    field0 = 0;
    if (count > 0) {
        helper(data);
    } else {
        field0 = 0;
    }
}
