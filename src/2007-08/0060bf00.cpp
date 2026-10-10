// from server: 90% by colin
struct CXTCaptionButtonTheme {
    char pad[0x3c];
    int field_3c;

    int sub_60BF00(int arg);
};

extern "C" int __stdcall sub_605B30(int* a, int* b);

int CXTCaptionButtonTheme::sub_60BF00(int arg)
{
    return sub_605B30(&this->field_3c, &arg);
}
