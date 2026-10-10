// from server: 49% by colin
struct CXTPCustomizeSheet {
    char pad[0xc0];
    void* field_c0;
    void OnSomething(void* item);
};

extern "C" void* __cdecl sub_62FEF6(unsigned int size);
extern "C" void __cdecl sub_6CA460(void* self);
extern "C" void __cdecl sub_67D1E0(void* self, void* item, int a, int b, int c, int d);
extern "C" void __cdecl sub_63A690(void* self, int flag);
extern "C" void __cdecl sub_63A120(void* self, int val);
extern "C" int __cdecl sub_644710(void* self);
extern "C" void __cdecl sub_643C30(void* self, int val);
extern "C" void __cdecl sub_63119E();
extern "C" int __cdecl sub_630D60();

void CXTPCustomizeSheet::OnSomething(void* item) {
    if (*(int*)((char*)item + 0xd4) != 0x23aa)
        return;
    if (sub_644710(item) > 0)
        return;

    int count = *(int*)((char*)field_c0 + 0x30);
    if (count > 0) {
        int idx = 1;
        int n = count;
        do {
            void* obj = sub_62FEF6(0x168);
            if (obj != 0) {
                sub_6CA460(obj);
                *(void**)obj = (void*)0x7cc124;
                *(void**)((char*)obj + 0x20) = (void*)0x7cc0c4;
            } else {
                obj = 0;
            }
            void* result = 0;
            {
                typedef void* (__thiscall *Fn)(void*, void*, int, int, int, int);
                Fn fn = (Fn)0x67d1e0;
                result = fn(*(void**)((char*)item + 0xf8), obj, 0x23aa, 0, -1, 0);
            }
            if (*(int*)((char*)result + 0x88) != idx) {
                *(int*)((char*)result + 0x88) = idx;
                sub_63A690(result, 1);
            }
            sub_63A120(result, 8);
            idx++;
            n--;
        } while (n != 0);
    }

    sub_63119E();
    int v = sub_630D60();
    v = v * 0x17 + 6;
    sub_643C30(item, v);
}
