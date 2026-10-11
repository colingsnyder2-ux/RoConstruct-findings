// from server: 50% by colin
struct CArray {
    char pad0[0x20];
    int field20;
    char pad1[0x4];
    int* field24;
    int field28;

    void Clear();
    void RemoveAll();
    void Destruct();
};

extern "C" void __stdcall sub_6A0944();
extern "C" void __stdcall sub_6A0BE4();
extern "C" void __stdcall sub_70E1D0(int, int);
extern "C" void __stdcall sub_794990();

void CArray::Destruct()
{
    int i = 0;
    if (field28 > 0) {
        do {
            int* p;
            if (i >= 0 && i >= field28) {
                if (i >= field28)
                    sub_6A0944();
                p = (int*)((char*)field24 + i * 4);
                p = *(int**)p;
            } else {
                p = 0;
            }
            (*(void(__thiscall**)(int*))(*(int*)p + 0x70))(p);
            sub_6A0BE4();
            i++;
        } while (i < field28);
    }
    sub_70E1D0(-1, 0);
    sub_794990();
}
