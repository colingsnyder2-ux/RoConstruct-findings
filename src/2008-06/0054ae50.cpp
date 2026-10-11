// from server: 18% by colin
struct Mesh {
    int* data;
    int count;
    int getFace(int i);
};

int Mesh::getFace(int i) {
    int saved = data[count - 1];
    int idx = count - 1;
    int result = ((int (*)(int, int))0x480020)(idx, i);
    return saved;
}
