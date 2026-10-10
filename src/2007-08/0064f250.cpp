// from server: 64% by colin
struct CControlButtonExpand {
    char pad[0xfc];
    void* field_fc;
    char pad2[0x68];
    void* field_168;
    void* field_16c;

    void SetControl(void*);
    void OnControlRemoved(void*);
    int GetState();
};

extern "C" void __stdcall sub_6301e4(void*);
extern "C" void* __stdcall sub_630202(void*);
extern "C" void __stdcall sub_631f90(void*);
extern "C" void __stdcall sub_63a120(void*, int);
extern "C" void __stdcall sub_63a690(void*, int);
extern "C" void* __stdcall sub_643980(void*);
extern "C" int __stdcall sub_644710(void*);
extern "C" void* __stdcall sub_646570(void*);
extern "C" void* __stdcall sub_677380(void*);
extern "C" void* __stdcall sub_6778d0(void*);
extern "C" void* __stdcall sub_67d2a0(void*, int, int, int, int, int);
extern "C" void* __stdcall SendMessageA(void*, unsigned int, unsigned int, void*);

void CControlButtonExpand::OnControlRemoved(void* p)
{
    void* ecx = field_16c;
    field_168 = p;
    if (p == 0) {
        (*(void (__thiscall**)(void*, int, int, int))(*(int*)ecx + 0x140))(ecx, 0, 1, 0);
    } else {
        if (ecx != 0) {
            sub_6301e4(ecx);
        }
        field_16c = 0;
        void* v = sub_646570(field_fc);
        if (v != 0) {
            char buf[0x18];
            *(int*)&buf[0] = 0;
            *(int*)&buf[4] = 0;
            *(int*)&buf[8] = 0;
            *(int*)&buf[12] = 0;
            *(int*)&buf[16] = 0;
            *(int*)&buf[20] = 0;
            *(int*)&buf[24] = 0;
            *(int*)&buf[28] = 0;
            *(int*)&buf[8] = 1;
            if (SendMessageA(*(void**)((char*)v + 0x20), 0x2861, 0, buf) != 0) {
                void* r = sub_677380(*(void**)&buf[0]);
                field_16c = sub_630202(r);
            }
        }
        if (field_16c == 0) {
            void* r = sub_643980(field_fc);
            field_16c = sub_6778d0(r);
        }
        void* edi = field_16c;
        if ((*(int (__thiscall**)(void*))(*(int*)edi + 0x188))(edi) == 0) {
            *(int*)((char*)edi + 0x134) = 0;
        }
        void* ebx = sub_643980(field_fc);
        if (ebx != 0) {
            (*(void (__thiscall**)(void*, void*))(*(int*)ebx + 0x70))(ebx, field_fc);
            void* eax = *(void**)((char*)ebx + 0x74);
            if (*(int*)((char*)eax + 0x38) != 0 || *(int*)((char*)ebx + 0x60) != 0) {
                void* ecx2 = *(void**)((char*)field_16c + 0xf8);
                void* edi2 = sub_67d2a0(ecx2, 2, 0x23a2, 0, -1, 0);
                sub_63a120(edi2, 8);
                int state = sub_644710(field_16c);
                (*(void (__thiscall**)(void*, int))(*(int*)edi2 + 0x64))(edi2, state > 1);
                int r = (*(int (__thiscall**)(void*))(*(int*)edi2 + 0x8c))(edi2);
                (*(void (__thiscall**)(void*, void*, int))(*(int*)ebx + 0x74))(ebx, field_fc, r);
            }
        } else {
            sub_631f90(field_fc);
        }
        int s = GetState();
        int flag;
        if (s == 2 || s == 3) {
            flag = 1;
        } else {
            flag = 0;
        }
        (*(void (__thiscall**)(void*, void*, int))(*(int*)field_16c + 0x158))(field_16c, this, flag);
    }
    sub_63a690(this, 1);
}
