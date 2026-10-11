// from server: 35% by atomic.potato
// roc 2009-06 005ab560  unit: RBX::Mesh  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ab560

struct RBX_Mesh {
    int* getElement(int index);
};

int* RBX_Mesh::getElement(int index) {
    int* base = *(int**)this;
    return base + index;
}
