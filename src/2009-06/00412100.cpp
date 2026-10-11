// from server: 52% by atomic.potato
struct S {
    char pad0[0x28];
    void* field28;
    int field2c;
    int field30;
    int field34;
    int field38;
};

extern "C" void __stdcall sub_409480(void*);

S* __fastcall sub_412100(S* self, void* unused, void* arg) {
    sub_409480(arg);
    self->field28 = (void*)0x8ad294;
    self->field2c = 0;
    self->field30 = 0;
    self->field34 = 0;
    self->field38 = -1;
    *(void**)self = (void*)0x8af4bc;
    self->field28 = (void*)0x8af4b4;
    return self;
}
