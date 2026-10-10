// from server: 84% by colin
struct VPartInstance {
    char pad[0x1d8];
    void* field_1d8;
    void setSomething(char);
};

void __stdcall sub_5B48A0(char);
void __fastcall sub_444710(VPartInstance*, const char*);

void VPartInstance::setSomething(char value)
{
    char flag;
    char* p = (char*)field_1d8;
    if (p[0x70] == 0 && p[0x72] != 0)
        flag = 1;
    else
        flag = 0;

    if (value != flag)
    {
        sub_5B48A0(value);
        sub_444710(this, (const char*)0x8c282c);
    }
}
