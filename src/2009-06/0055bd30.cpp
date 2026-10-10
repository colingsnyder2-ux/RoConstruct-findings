// from server: 93% by atomic.potato
struct TorsoBuilder {
    float unknown_28; // Offset 0x28

    TorsoBuilder* __thiscall someFunction(int arg);
};

extern "C" void __stdcall sub_537020(int);

TorsoBuilder* TorsoBuilder::someFunction(int arg) {
    sub_537020(arg);
    unknown_28 = 0.0f;
    return this;
}
