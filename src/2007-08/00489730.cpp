// from server: 41% by colin
struct VPlayerFactoryProduct {
    int field0;
    char pad1[0x0c];
    int field10;
    int field14;
    int field18;
    char field1c;
    char pad1d[0x03];
    int field20;
    int field24;
    int field28;
    int field2c;
    char field30;
    char pad31[0x03];
    void sub_488650(int* out, int a, int b, int c, int d);
    void method();
};

extern "C" void __stdcall _invalid_parameter_noinfo();

void VPlayerFactoryProduct::method()
{
    int local0;
    int local4;
    int local8;
    int localc;
    int local10;
    int local14;
    int local18;

    if (this->field0 != 0) {
        this->sub_488650(&local0, this->field20, this->field24, this->field28, this->field2c);
        local4 = local0;
        local8 = local4;
        localc = local8;
        local10 = localc;
        local14 = local10;
        local18 = local14;
    } else {
        local4 = this->field28;
        local8 = this->field2c;
        localc = local4;
        local10 = local8;
        local14 = localc;
        local18 = local10;
    }

    if (local4 != -2) {
        if (local4 != 0) {
            if (local4 != this->field28) {
                _invalid_parameter_noinfo();
            }
        }
    }

    if (local8 == this->field2c) {
        if (localc != -2) {
            if (localc != 0) {
                if (localc != this->field28) {
                    _invalid_parameter_noinfo();
                }
            }
        }
        if (local10 == this->field2c) {
            if (this->field14 != -2) {
                if (this->field14 != 0) {
                    if (this->field14 != this->field28) {
                        _invalid_parameter_noinfo();
                    }
                }
            }
            if (this->field18 == this->field2c) {
                this->field30 = 1;
            }
        }
    }

    this->field10 = this->field20;
    this->field14 = local4;
    this->field18 = local8;
    this->field1c = 0;
    this->field20 = localc;
    this->field24 = local10;
}
