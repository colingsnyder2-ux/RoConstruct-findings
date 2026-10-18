// from server: 57% by colin
extern void (__stdcall *setValues)(int, int, int, int, int);

struct S {
    float f0;
    float pad1[4];
    float f5;
    float pad2[4];
    float f10;
    float pad3[4];
    float f15;
    void applyValues(int location);
};

void S::applyValues(int location)
{
    setValues(location,
              (int)f15,
              (int)f10,
              (int)f5,
              (int)f0);
}
