// from server: 80% by colin
struct Verb {
    char pad[8];
    int name;
};

struct CameraVerb {
    char pad[12];
    int workspace;
    void doIt(int);
};

extern "C" int __stdcall sub_00561B10(int, int);
extern "C" int __stdcall sub_0058C810(int);
extern "C" void __stdcall sub_004108B0(int, int);

void CameraVerb::doIt(int a)
{
    int v = sub_00561B10(workspace, 0xb);
    sub_0058C810(v);
    sub_004108B0(a, -1);
    int* p = (int*)a;
    int vt = *p;
    int fn = *(int*)(vt + 4);
    *(int*)(a + 4) = -1;
    ((void (__thiscall*)(int, int))fn)(a, 1);
}
