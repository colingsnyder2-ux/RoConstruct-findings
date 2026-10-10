// from server: 36% by colin
// roc 2009-06 005ae3f0  unit: RBX::Mesh  size: 304 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ae3f0

extern "C" int* __cdecl sub_5c1a70(int);
extern "C" int* __cdecl sub_5c1a50(int);
extern "C" int* __cdecl sub_5c1a60(int);
extern "C" char* __cdecl sub_5ad100(int);
extern "C" int* __cdecl sub_5c10a0();

struct Mesh {
    void func(int);
};

void Mesh::func(int a) {
    int v4 = *sub_5c1a70(a);
    int* esi = sub_5c1a50(v4);
    *sub_5c1a70(a) = *esi;
    if (*sub_5ad100(*sub_5c1a50(v4)) == 0) {
        *sub_5c1a60(*sub_5c1a50(v4)) = a;
    }
    *sub_5c1a60(a) = *sub_5c1a60(v4);
    if (a == *sub_5c10a0()) {
        *sub_5c10a0() = v4;
    } else if (a == *sub_5c1a50(*sub_5c1a60(a))) {
        *sub_5c1a50(*sub_5c1a60(a)) = v4;
    } else {
        *sub_5c1a70(*sub_5c1a60(a)) = v4;
    }
    *sub_5c1a50(v4) = a;
    *sub_5c1a60(a) = v4;
}
