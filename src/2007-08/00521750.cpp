// from server: 84% by colin
struct Seg521750 {
    char pad[0x6c];
    unsigned int flags6c;
    char pad2[0xac - 0x70];
    unsigned int field_ac;
    unsigned int field_b0;
    char pad3[0x11c - 0xb4];
    unsigned char field_11c;
};

extern "C" void __cdecl sub_5206a0(Seg521750* self, unsigned int a, unsigned int b);
extern "C" int __cdecl sub_5206d0(Seg521750* self);
extern "C" void __cdecl sub_51ea20(Seg521750* self, const char* msg);
extern "C" void __cdecl sub_51e9f0(Seg521750* self, const char* msg);

extern const char str_7a3780[];

int __cdecl sub_521750(Seg521750* self, unsigned int amount) {
    unsigned int chunk = self->field_b0;
    while (amount > chunk) {
        sub_5206a0(self, self->field_ac, self->field_b0);
        amount -= chunk;
    }
    if (amount != 0) {
        sub_5206a0(self, self->field_ac, amount);
    }
    if (sub_5206d0(self)) {
        unsigned char al = self->field_11c & 0x20;
        if (al != 0) {
            if ((self->flags6c & 0x200) != 0) {
                sub_51ea20(self, str_7a3780);
                return 1;
            }
        } else {
            if ((self->flags6c & 0x400) == 0) {
                sub_51ea20(self, str_7a3780);
                return 1;
            }
        }
        sub_51e9f0(self, str_7a3780);
        return 1;
    }
    return 0;
}
