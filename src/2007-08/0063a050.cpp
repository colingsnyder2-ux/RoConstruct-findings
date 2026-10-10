// from server: 75% by colin
struct CRobloxControlColorSelector {
    char pad0[0x84];
    int field_0x84;
    int field_0x88;
    int field_0x90;
    char pad1[0x158 - 0x94];
    void* field_0x158;
    int getColor(int a1);
};

extern "C" int __stdcall sub_00639FD0(int a1, int a2);
extern "C" int __stdcall sub_0064D9B0(int a1);

int CRobloxControlColorSelector::getColor(int a1)
{
    int eax = this->field_0x90;
    int edx;
    if (eax != 0) {
        edx = eax;
    } else {
        edx = this->field_0x88;
        if (edx <= 0) {
            void* esi = this->field_0x158;
            if (esi != 0) {
                edx = *(int*)((char*)esi + 0x2c);
                if (edx <= 0) {
                    edx = *(int*)((char*)esi + 0x28);
                }
            } else {
                edx = this->field_0x84;
            }
        }
    }
    if (edx != 0) {
        return 0;
    }
    if (eax == 0) {
        eax = this->field_0x88;
        if (eax <= 0) {
            void* edx2 = this->field_0x158;
            if (edx2 != 0) {
                eax = *(int*)((char*)edx2 + 0x2c);
                if (eax <= 0) {
                    eax = *(int*)((char*)edx2 + 0x28);
                }
            } else {
                eax = this->field_0x84;
            }
        }
    }
    int r = sub_00639FD0(eax, a1);
    return sub_0064D9B0(r);
}
