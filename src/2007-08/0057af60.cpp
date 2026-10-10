// from server: 53% by colin
struct Instance;

struct Workspace {
    char pad[0x2d0];
    int field_2d0;

    int __thiscall func(Instance* a);
};

extern "C" int __cdecl sub_630D36(int, int, int, int, int);
extern "C" char __cdecl sub_4915F0(int, int);
extern "C" int __cdecl sub_495840(int);
extern "C" char __cdecl sub_4200C0(int, int);

int __thiscall Workspace::func(Instance* a)
{
    int r = sub_630D36(0, 0x89a7cc, 0x884f70, 0, (int)a);
    Workspace* self = (Workspace*)((char*)this - 0x2d0);
    if (r == 0) {
        if (sub_4915F0((int)self, 1)) {
            if (self != 0) {
                return (int)&self->field_2d0;
            }
        }
        return 0;
    }
    int p = sub_495840((int)self);
    if (p != 0) {
        if (sub_4200C0((int)a, p)) {
            if (self != 0) {
                return (int)&self->field_2d0;
            }
        }
    }
    return 0;
}
