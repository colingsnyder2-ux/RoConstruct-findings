// from server: 40% by colin
extern "C" void __stdcall _invalid_parameter_noinfo();

struct Inner {
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
};

struct Outer {
    Inner* begin;
    Inner* end;
    int field8;
    int fieldC;
    int field10;
};

int __cdecl sub_5aba50(Inner* item, int arg);

int __cdecl sub_5abf90(Outer* self, int arg) {
    int total = 0;
    Inner* it = self->begin;
    Inner* last = self->end;
    int savedEnd = self->field10;
    int savedBegin = self->field8;

    if (self->fieldC > self->field10)
        _invalid_parameter_noinfo();

    int limit = self->field10;
    Inner* first = self->begin;

    if (self->fieldC > limit)
        _invalid_parameter_noinfo();

    Inner* cur = self->begin;

    if (first != 0 && first == cur) {
    } else {
        _invalid_parameter_noinfo();
    }

    while (it != last) {
        if (it == 0) {
            _invalid_parameter_noinfo();
            total += sub_5aba50(it, arg);
            _invalid_parameter_noinfo();
            it = (Inner*)((char*)it + 8);
        } else {
            total += sub_5aba50(it, arg);
            it = (Inner*)((char*)it + 8);
        }
    }

    return total;
}
