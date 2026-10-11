// from server: 58% by colin
struct Mesh {
    unsigned short getNumSubMeshes() const;
    void *getSubMesh(unsigned short) const;
};

struct SubMesh;

struct S_func_004208f0 {
    char pad0[84];
    int m_x;
    void f(int a1);
};

struct S_func_00671d60 {
    char pad0[0xf0];
    int m_data[16];
};

struct S_func_006850a0 {
    void f(int a1);
};

struct S_func_0067da50 {
    void f(void *a1);
};

struct S_func_00671f00 {
    char pad0[0x98];
    void *m_ptr98;
    void f(void *a1, void *a2, void *a3);
};

extern "C" unsigned short __stdcall getNumSubMeshes_wrap(void *mesh);
extern "C" void *__stdcall getSubMesh_wrap(void *mesh, unsigned short idx);

void S_func_00671f00::f(void *a1, void *a2, void *a3)
{
    unsigned short n = ((Mesh*)a1)->getNumSubMeshes();
    unsigned short i = 0;
    if (i < n) {
        do {
            S_func_00671d60 *p = (S_func_00671d60*)0;
            (void)p;
            void *sub = ((Mesh*)a1)->getSubMesh(i);
            S_func_004208f0 *q = (S_func_004208f0*)sub;
            q->f((int)a2);
            S_func_00671d60 *r = (S_func_00671d60*)sub;
            int *dst = (int*)((char*)r + 0xf0);
            int *src = (int*)a3;
            for (int k = 0; k < 16; k++) dst[k] = src[k];
            ((S_func_006850a0*)sub)->f((int)a3);
            ((S_func_0067da50*)m_ptr98)->f(sub);
            i++;
            n = ((Mesh*)a1)->getNumSubMeshes();
        } while (i < n);
    }
}
