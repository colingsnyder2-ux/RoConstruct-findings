// from server: 52% by colin
extern "C" void __stdcall invalid_parameter_noinfo();

struct Inner {
    char pad[0xc];
    int* begin;
    int* end;
};

struct Outer {
    char pad[0x108];
    Inner* inner;
    char pad2[0x9c];
    int field_1a8;
    int field_1a0;
};

extern "C" int __fastcall sub_48ae20(Outer* self);
extern "C" void __fastcall sub_55a8f0(Outer* self, int);
extern "C" void __fastcall sub_456e80(int* p);

void __fastcall func_005fbc80(Outer* self, int arg)
{
    int i = 0;
    int count = sub_48ae20(self);
    if (count > 0) {
        while (i < count) {
            Inner* inner = self->inner;
            int n = (inner->end - inner->begin) >> 3;
            if (i >= n) {
                invalid_parameter_noinfo();
            }
            int* item = inner->begin + i * 2;
            if (*(int*)((char*)item + 0x148) == arg) {
                self->field_1a8 = i;
                sub_55a8f0(self, 0);
                if (arg == self->field_1a0) {
                    sub_456e80(&self->field_1a0);
                }
                return;
            }
            i++;
            count = sub_48ae20(self);
        }
    }
}
