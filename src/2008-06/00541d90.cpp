// from server: 16% by Intel
struct VChunk {
    int* _weakReferenceCountedPointer;

    void WeakReferenceCountedPointer();
};

void VChunk::WeakReferenceCountedPointer() {
    int* ptr = _weakReferenceCountedPointer;
    ptr += 15;
}
