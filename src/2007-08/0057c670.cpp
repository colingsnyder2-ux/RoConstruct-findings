// from server: 81% by colin
struct Workspace {
    char pad0[0x68];
    bool flag68;
    char pad1[0x3];
    char field6c[0x8];

    void method(int a, int b);
};

extern bool __cdecl func4915f0(void*, int);
extern void __cdecl func5e29b0(void*, int*, int*);
extern void __cdecl func53d0e0(int);

void Workspace::method(int a, int b) {
    int local1;
    int local2;
    if (func4915f0((char*)this - 0x2d0, 1)) {
        if (!flag68) {
            func5e29b0(field6c, &local1, &local2);
            return;
        }
    }
    func53d0e0(local1);
}
