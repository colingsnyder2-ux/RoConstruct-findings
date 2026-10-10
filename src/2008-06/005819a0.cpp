// from server: 57% by atomic.potato
extern "C" int __cdecl sub_5807b0(int, int);
extern "C" int sub_5bd820(int);

struct CameraVerb
{
    int field_0C;
    int f(int);
};

int CameraVerb::f(int arg)
{
    int value = sub_5807b0(field_0C, 11);
    value = sub_5bd820(value);
    return (*(int (**)(int *))(*(int **)arg))((int *)1);
}
