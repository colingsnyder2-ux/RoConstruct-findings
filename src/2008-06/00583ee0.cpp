// from server: 79% by colin
struct ModelInstance {
    float x, y, z;
    float nx, ny, nz;
    char flag;
    char pad[3];
    int a, b, c, d;
    ModelInstance* init(int, int, int, int);
};

extern "C" float* __cdecl sub_510960();

ModelInstance* ModelInstance::init(int p1, int p2, int p3, int p4)
{
    float* v = sub_510960();
    x = v[0];
    y = v[1];
    z = v[2];
    v = sub_510960();
    nx = -v[0];
    ny = -v[1];
    nz = -v[2];
    a = p1;
    b = p2;
    c = p3;
    d = p4;
    flag = 1;
    return this;
}
