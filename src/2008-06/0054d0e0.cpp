// from server: 52% by tester
struct Mesh {
    bool compare(const void* a, const void* b) const;
};

bool Mesh::compare(const void* a, const void* b) const {
    unsigned int x = *(const unsigned int*)a;
    unsigned int y = *(const unsigned int*)b;
    return x < y;
}
