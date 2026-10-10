// from server: 76% by colin
struct CXTMaskEditT {
    char pad[0x20];
    void* field_20;
    char pad2[0x30];
    int field_54;
    int field_58;
    char pad3[0x10];
    char field_6c;
    char pad4[0x13];
    void* field_80;
    void* field_84;
    void SetModified(int);
    void sub_6f6400();
    void sub_6f7540(int*, int);
    void sub_6f6f50(int);
    void sub_630250(void*);
};

extern "C" int (__stdcall *SendMessageA)(void*, unsigned int, unsigned int, int);
extern "C" int (__stdcall *sub_77dcc8)(void*);
extern "C" int (__stdcall *sub_77d578)(void*, int);
extern "C" int (__stdcall *sub_77e41c)(void*, int, int);

void CXTMaskEditT::SetModified(int bModified)
{
    if (field_6c != (char)bModified) {
        if (*(int*)((char*)this + 0x10) != 0) {
            if (field_20 != 0) {
                SendMessageA(field_20, 0xb0, (unsigned int)&field_54, (int)&field_58);
                sub_630250(&field_80);
                sub_6f6400();
                sub_6f7540(&field_54, 1);
                sub_6f7540(&field_58, 1);
                if (field_58 < field_54)
                    field_58 = field_54;
            }
            int i = 0;
            if (sub_77dcc8(&field_84) > 0) {
                do {
                    if ((char)sub_77d578(&field_84, i) == field_6c) {
                        sub_77e41c(&field_84, i, bModified);
                    }
                    i++;
                } while (i < sub_77dcc8(&field_84));
            }
            i = 0;
            if (sub_77dcc8(&field_80) > 0) {
                do {
                    if ((char)sub_77d578(&field_80, i) == field_6c) {
                        sub_77e41c(&field_80, i, bModified);
                    }
                    i++;
                } while (i < sub_77dcc8(&field_80));
            }
            sub_6f6f50(1);
        }
        field_6c = (char)bModified;
    }
}
