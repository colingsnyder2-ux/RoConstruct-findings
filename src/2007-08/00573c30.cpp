// from server: 80% by colin
struct S {
    char pad[0x1d8];
    void* field_1d8;
    bool func_00573c30();
};

extern void* __stdcall func_005b4d10(void*);
extern void* __stdcall func_005b4d20(void*, void*);
extern int __stdcall func_005b9b00(void*);
extern int __stdcall func_005b9950(int, int);

bool S::func_00573c30()
{
    bool bl = false;
    bool flag = false;
    void* esi = func_005b4d10(this->field_1d8);
    while (esi != 0) {
        int v = (*(int (__thiscall**)(void*))(*((int*)esi) + 0xc))(esi);
        if (v == 0) {
            int t = (*(int (__thiscall**)(void*))(*((int*)esi) + 0x14))(esi);
            if (t == 5 || t == 6 || t == 7) {
                int r;
                if (this->field_1d8 == *(void**)((char*)esi + 8)) {
                    r = func_005b9b00((char*)esi + 0x28);
                } else {
                    r = func_005b9950(func_005b9b00((char*)esi + 0x58), 0);
                }
                if (r == 1) {
                    bl = true;
                } else if (r == 4) {
                    flag = true;
                }
            }
        }
        esi = func_005b4d20(this->field_1d8, esi);
    }
    if (bl && !flag) {
        return true;
    }
    return false;
}
