// from server: 86% by colin
struct VBrickColor {
    int number;
    void setNumber(int);
};

extern "C" int __stdcall sub_586A20(int* out, int* in);

void VBrickColor::setNumber(int value)
{
    int local;
    sub_586A20(&local, &value);
    unsigned char* p = (unsigned char*)&local;
    int n = (p[2] << 8) | p[1];
    n = (n << 8) | p[0];
    void (VBrickColor::*fn)(int) = *(void (VBrickColor::**)(int))((*(int*)this) + 0xe4);
    (this->*fn)(n);
}
