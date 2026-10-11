// from server: 41% by colin
struct S {
    char pad0[0x24];
    char field24;
    char pad25[0x1b];
    int field40;
    int field44;
};

extern "C" void __stdcall sub_005f5750(void*, int);
extern "C" void __stdcall sub_005f52e0(void*, int);
extern "C" void __stdcall sub_008023dc(void*);

void __cdecl f(S* self, int a, int b)
{
    if (b & 2) {
        sub_005f5750(self, 2);
        if (self->field44 & 1) {
            int v0 = *(int*)self;
            int v1 = *(int*)(v0 + 8);
            sub_005f52e0(&a, v1);
            sub_005f52e0(&a, v1 >> 8);
            sub_005f52e0(&a, v1 >> 16);
            sub_005f52e0(&a, v1 >> 24);
            int v2 = *(int*)(*(int*)self + 12);
            sub_005f52e0(&a, v2);
            sub_005f52e0(&a, v2 >> 8);
            sub_005f52e0(&a, v2 >> 16);
            sub_005f52e0(&a, v2 >> 24);
        }
    }
    sub_008023dc(&self->field24);
    self->field40 = 0;
    self->field44 = 0;
}
