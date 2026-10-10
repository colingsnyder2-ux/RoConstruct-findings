// from server: 47% by colin
struct CXTPCustomizeSheet_CCustomizeEdit {
    void construct(int a, int b);
    char pad[0xac];
    int field_ac;
    int field_b0;
    int field_b4;
    int field_b8;
    int field_bc;
    int field_c0;
};

extern "C" {
    int __stdcall GetObjectA(void*, int, void*);
    void __stdcall sub_77ddac(void*);
    void __stdcall sub_77dd98(void*, int);
    void __stdcall sub_77ddbc(void*);
    void __stdcall sub_77d0cc(void*, int, void*);
}

void __fastcall sub_738754(void*);
void __fastcall sub_73874e(void*, void*);
void* __cdecl sub_62fef6(int);
void* __cdecl sub_62ff32(int);
void __cdecl sub_62ff26(void*);
void __fastcall sub_6f48f0(void*, void*);
void __fastcall sub_6766c0(void*, void*);
void __fastcall sub_64c6e0(void*);
void __fastcall sub_64d4f0(void*, void*, int, int, int, int, int, int);
void __fastcall sub_6733d0(void*, void*);
void __fastcall sub_673d30(void*);
void* __fastcall sub_6b3010(void);
void __fastcall sub_41f680(void*);

void CXTPCustomizeSheet_CCustomizeEdit::construct(int a, int b)
{
    void* obj;
    void* tmp;
    int count;
    int* arr;
    int i;
    int v;

    sub_738754(this);
    *(int*)this = 0x7cbdb4;
    sub_77ddac(&obj);
    tmp = sub_6b3010();
    (*(void(__thiscall**)(void*, void*, int))((*(int**)tmp)[1]))(tmp, &obj, 0x23c9);
    sub_77dd98(&obj, *(int*)(b + 0xa0));
    sub_73874e(this, &obj);
    tmp = sub_62fef6(0x248);
    if (tmp != 0) {
        sub_6f48f0(tmp, this);
    } else {
        tmp = 0;
    }
    field_ac = (int)tmp;
    sub_6733d0(this, tmp);
    tmp = sub_62fef6(0x150);
    if (tmp != 0) {
        sub_6766c0(tmp, this);
    } else {
        tmp = 0;
    }
    field_b0 = (int)tmp;
    sub_6733d0(this, tmp);
    field_b4 = *(int*)(b + 0xa0);
    field_b8 = b;
    v = 0;
    tmp = sub_6b3010();
    (*(void(__thiscall**)(void*, void*, int))((*(int**)tmp)[4]))(tmp, &v, 0x238f);
    GetObjectA((void*)v, 0x18, &count);
    count = count / 16;
    tmp = sub_62fef6(0x68);
    if (tmp != 0) {
        sub_64c6e0(tmp);
    } else {
        tmp = 0;
    }
    field_c0 = (int)tmp;
    arr = (int*)sub_62ff32(count * 4);
    for (i = 0; i < count; i++) {
        arr[i] = i + 1;
    }
    sub_64d4f0((void*)field_c0, arr, count, 0x10, 0x10, 0, 0, 0);
    sub_62ff26(arr);
    *(int*)((char*)this + 0x58) |= 0x80;
    field_bc = 0;
    sub_673d30(this);
    sub_41f680(&v);
    sub_77ddbc(&obj);
}
