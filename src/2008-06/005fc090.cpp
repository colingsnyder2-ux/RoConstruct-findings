// from server: 50% by colin
struct LocalBackpackItem {
    char pad[0x104];
    int field_104;
    int getTextureId();
};

extern int __stdcall func_005fbff0(int);

int LocalBackpackItem::getTextureId()
{
    return func_005fbff0(field_104);
}
