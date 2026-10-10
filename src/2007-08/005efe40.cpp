// from server: 42% by tester
struct BodyMover {
    BodyMover* construct(int);
};

extern "C" void __stdcall sub_5426B0(int);
extern "C" void* __stdcall sub_58E2B0();

struct Hint {
    char pad[0x90];
    void* field_0x0c;
    Hint* construct(int);
};

Hint* Hint::construct(int a) {
    BodyMover* bm = (BodyMover*)this;
    bm->construct(a);
    *(int*)((char*)this + 0x00) = 0x7bfee4;
    *(int*)((char*)this + 0x04) = 0x7bfedc;
    *(int*)((char*)this + 0x10) = 0x7bfed4;
    *(int*)((char*)this + 0x14) = 0x7bfec4;
    *(int*)((char*)this + 0x2c) = 0x7bfeb4;
    *(int*)((char*)this + 0x44) = 0x7bfea4;
    *(int*)((char*)this + 0x5c) = 0x7bfe94;
    *(int*)((char*)this + 0x74) = 0x7bfe84;
    *(int*)((char*)this + 0x8c) = 0x7bfe74;
    field_0x0c = sub_58E2B0();
    return this;
}
