// from server: 47% by colin
struct CPatchedControlComboBox {
    int get_Item(int index, int* out);
};

extern "C" void __stdcall sub_62ff3e(void* dest, void* src);
extern "C" void __stdcall sub_62ff38(void* p, int a);
extern "C" int __stdcall sub_7383c4(int a);

int CPatchedControlComboBox::get_Item(int index, int* out)
{
    int local[4];
    sub_62ff3e(local, *(void**)((char*)this - 4));
    *out = 0;
    if (*(int*)((char*)this + 0xdc) != 0) {
        *out = sub_7383c4(1);
        if (local[1] != 0) {
            sub_62ff38((void*)local[0], 0);
        }
        return 0;
    }
    if (local[1] != 0) {
        sub_62ff38((void*)local[0], 0);
    }
    return (int)0x80004005;
}
