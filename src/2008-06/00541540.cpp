// from server: 34% by colin
// roc 2008-06 00541540  unit: RBX::RenderBase::VChunk::?$WeakReferenceCountedPointer  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00541540

extern "C" void __cdecl helper_545f50(int, int, int, int);

struct S {
    char pad[8];
    int f(int a, int b, int c);
};

int S::f(int a, int b, int c) {
    helper_545f50(a, b, c, (int)(this->pad + 8));
    return a + b * 4;
}
