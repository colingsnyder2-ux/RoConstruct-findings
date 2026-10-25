// from server: 100% by king_originala
// roc 2008-06 0063c810  unit: RBX::VSeat::?$FactoryProduct  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063c810
//
// 0063c810  807c240400           cmp byte ptr [esp + 4], 0
// 0063c815  56                   push esi
// 0063c816  8bf1                 mov esi, ecx
// 0063c818  7546                 jne 0x63c860
// 0063c81a  8d8efc030000         lea ecx, [esi + 0x3fc]
// 0063c820  e80b8af5ff           call 0x595230
// 0063c825  e8e6bbecff           call 0x508410
// 0063c82a  dd9e10040000         fstp qword ptr [esi + 0x410]
// 0063c830  8b8e18040000         mov ecx, dword ptr [esi + 0x418]
// 0063c836  81c618040000         add esi, 0x418
// 0063c83c  85c9                 test ecx, ecx
// 0063c83e  7420                 je 0x63c860
// 0063c840  6a00                 push 0
// 0063c842  e8a9e0f1ff           call 0x55a8f0
// 0063c847  8b0e                 mov ecx, dword ptr [esi]
// 0063c849  6a00                 push 0
// 0063c84b  e8007cfaff           call 0x5e4450
// 0063c850  8b0e                 mov ecx, dword ptr [esi]
// 0063c852  6a00                 push 0
// 0063c854  e8177cfaff           call 0x5e4470
// 0063c859  8bce                 mov ecx, esi
// 0063c85b  e820a6e1ff           call 0x456e80
// 0063c860  5e                   pop esi
// 0063c861  c20400               ret 4

struct State {
    char data[20];
    void reset();
};

struct Object {
    void setFirst(int);
    void setSecond(int);
    void setThird(int);
};

struct Handle {
    Object* object;
    void* control;
    void reset();
};

extern "C" double __cdecl getTime();

struct S {
    char padding[0x3FC];
    State state;
    double timestamp;
    Handle handle;

    void update(bool enabled);
};

void S::update(bool enabled)
{
    if (!enabled) {
        state.reset();
        timestamp = getTime();
        if (handle.object) {
            handle.object->setFirst(0);
            handle.object->setSecond(0);
            handle.object->setThird(0);
            handle.reset();
        }
    }
}
