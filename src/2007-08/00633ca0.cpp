// from server: 77% by colin
struct CXTPCommandBar {
    int field_0x44;
    int field_0x74;
    int field_0x84;
    int method_0x58();
    int method_0x1e4(int);
    int method_0xb0();
};

extern "C" unsigned int __stdcall MapVirtualKeyA(unsigned int, unsigned int);
extern int __cdecl sub_00631c00(int);
extern int __fastcall sub_00632910(CXTPCommandBar*, int);
extern int __fastcall sub_006338d0(CXTPCommandBar*, int);
extern int __fastcall sub_00633a20(CXTPCommandBar*, int, int, int*);
extern int __fastcall sub_00633c70(CXTPCommandBar*);

int __fastcall sub_00633ca0(CXTPCommandBar* self, int, int arg)
{
    int* p = (int*)self->field_0x74;
    if (p[0x5c / 4] == 2)
        return 0;

    int v = arg - 0x60;
    if (v > 9 || p[0x7c / 4] == 0)
    {
        if (MapVirtualKeyA(arg, 2) == 0)
            return 0;
    }

    int ebx = self->method_0x58();
    int esi = sub_00631c00(ebx);
    esi = esi != 0 ? ebx : 0;

    int i = 0;
    if (self->field_0x84 > 0)
    {
        do
        {
            int ebp = sub_00632910(self, i);
            if (*(int*)(ebp + 0xdc) != 0)
            {
                esi = ebp;
                break;
            }
            if ((*(unsigned char*)(self->field_0x74 + 0x5c) & 1) != 0 && esi == 0)
            {
                if (sub_00631c00(ebp) != 0)
                    esi = ebp;
            }
            i++;
        } while (i < self->field_0x84);
    }

    if (esi != 0)
    {
        if (sub_00631c00(esi) != 0)
        {
            if (((CXTPCommandBar*)esi)->method_0x1e4(arg) == 0)
            {
                int local = 0;
                int ebx2 = sub_00633a20(self, esi, arg, &local);
                if (ebx2 != 0)
                {
                    int* esi2 = *(int**)(ebx2 + 0xfc);
                    int ebp2 = *(int*)(ebx2 + 0x80);
                    if (*(int*)((char*)esi2 + 0xdc) == 0)
                        sub_00633c70(self);
                    sub_006338d0(self, 1);
                    self->field_0x44 = 1;
                    (*(int(__thiscall**)(int*, int, int, int))(*(int*)esi2 + 0x140))(esi2, 1, 0, 1);
                    (*(int(__thiscall**)(int*, int, int))(*(int*)esi2 + 0x148))(esi2, ebp2, 1);
                    if (local == 0)
                        (*(int(__thiscall**)(int*))(*(int*)ebx2 + 0xb0))((int*)ebx2);
                }
            }
        }
    }
    return 1;
}
