// from server: 92% by colin
struct CInsertObjectDialog {
    char pad[0x74];
    int field74;
    CInsertObjectDialog* destroy(char flag);
};

extern "C" void __fastcall sub_77ddbc(int*);
extern "C" void __fastcall sub_630412(CInsertObjectDialog*);
extern "C" void __cdecl sub_62fc62(void*);

CInsertObjectDialog* CInsertObjectDialog::destroy(char flag)
{
    *(int*)this = 0x787b84;
    sub_77ddbc(&field74);
    sub_630412(this);
    if (flag & 1) {
        sub_62fc62(this);
    }
    return this;
}
