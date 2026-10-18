// from server: 87% by colin
struct DataSource {
    const void* get();
    void setValue(const float*);
};

struct VMember {
    void setValue(const void*);
};

struct S {
    char reserved0[0x2c8];
    DataSource* dataSource;
    void method(const float*);
};

void S::method(const float* value) {
    DataSource* ds = dataSource;
    ds->get();
    float local[6];
    local[0] = *reinterpret_cast<const float*>(reinterpret_cast<char*>(ds) + 0xc4);
    local[1] = *reinterpret_cast<const float*>(reinterpret_cast<char*>(ds) + 0xc8);
    local[2] = *reinterpret_cast<const float*>(reinterpret_cast<char*>(ds) + 0xcc);
    local[3] = *reinterpret_cast<const float*>(reinterpret_cast<char*>(ds) + 0xd0);
    local[4] = *reinterpret_cast<const float*>(reinterpret_cast<char*>(ds) + 0xd4);
    local[5] = *reinterpret_cast<const float*>(reinterpret_cast<char*>(ds) + 0xd8);
    if (value[0] == local[2] && value[1] == local[3] && value[2] == local[4]) {
        return;
    }
    local[0] = value[0];
    local[1] = value[1];
    local[2] = value[2];
    DataSource* ds2 = dataSource;
    ds2->setValue(local);
    reinterpret_cast<VMember*>(this)->setValue(reinterpret_cast<const void*>(0x97632c));
}
