// from server: 31% by colin
extern "C" void __stdcall G1_00496020();
extern "C" void __stdcall G1_00594ce0();
extern "C" void __stdcall G1_00594d00();
extern "C" void __stdcall G1_00437150();

extern "C" void* __stdcall G1_00802460();
extern "C" void* __stdcall G1_00802468();
extern "C" void* __stdcall G1_0080240c();
extern "C" void* __stdcall G1_00802464();
extern "C" void* __stdcall G1_00802890();

struct CStandardOutputView {
    char pad0[0x124];
    int field124;
    char pad1[0x10];
    int field134;
    int field138;
    int field13c;
    int field140;
    int field144;
    void func_00437520(int, int);
};

void CStandardOutputView::func_00437520(int a1, int a2)
{
    char buf[0x44];
    int local_2c;
    int local_30;
    int local_34;
    int local_38;
    int local_3c;
    int local_40;
    int local_44;
    int local_48;
    int local_4c;
    int local_50;
    int local_54;
    int local_58;
    int local_5c;

    G1_00802460();
    local_2c = (int)(this->pad0 + 0x144);
    local_5c = 0;
    G1_00594ce0();
    local_30 = 1;
    local_5c = 1;

    while (this->field140 != 0) {
        if (this->field140 > 0xfa) {
            if (this->field140 != 0) {
                int* p = (int*)(this->field134 + this->field13c * 4);
                G1_00802468();
                this->field13c++;
                if (this->field138 <= this->field13c) {
                    this->field13c = 0;
                }
                this->field140--;
                if (this->field140 == 0) {
                    this->field13c = 0;
                }
            }
            local_5c = 0;
            G1_00594d00();
            local_5c = -1;
            G1_00802468();
            continue;
        }

        int edi = this->field13c;
        int edx = this->field140 + edi;
        if (edi > edx) {
            G1_00802890();
        }

        local_34 = this->field124;
        local_38 = edi;
        G1_00496020();
        int ebx = *(int*)local_34;

        edi = this->field13c;
        int ecx = this->field140 + edi;
        if (edi > ecx) {
            G1_00802890();
        }

        local_3c = this->field124;
        local_40 = edi;
        G1_00496020();
        G1_0080240c();

        edi = this->field13c;
        int eax = this->field140 + edi;
        if (edi > eax) {
            G1_00802890();
        }

        local_44 = this->field124;
        local_48 = edi;
        G1_00496020();
        int edi2 = *(int*)(local_44 + 0x20);
        int ebp = *(int*)(local_44 + 0x24);

        if (this->field140 != 0) {
            int* p = (int*)(this->field134 + this->field13c * 4);
            G1_00802468();
            this->field13c++;
            if (this->field138 <= this->field13c) {
                this->field13c = 0;
            }
            this->field140--;
            if (this->field140 == 0) {
                this->field13c = 0;
            }
        }

        local_5c = 0;
        G1_00594d00();
        G1_00802464();
        G1_00437150();
        local_5c = -1;
        G1_00802468();
    }

    local_5c = 0;
    G1_00594d00();
    local_5c = -1;
    G1_00802468();
}
