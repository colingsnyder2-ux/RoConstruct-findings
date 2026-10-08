// from server: 56% by colin
// roc 2007-08 0046a670  unit: RBX::LDraw2Lua::LDraw2RobloxMapRoot  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0046a670

struct MapEntry
{
    int a;
    int b;
    char str1[0x1c];
    char str2[0x1c];
};

struct LDraw2RobloxMapRoot
{
    void assign(MapEntry* first, MapEntry* last, MapEntry* src);
};

extern "C" void* __stdcall string_assign(void* dst, const void* src);

void LDraw2RobloxMapRoot::assign(MapEntry* first, MapEntry* last, MapEntry* src)
{
    if (first == last)
        return;
    do
    {
        first->a = src->a;
        first->b = src->b;
        string_assign(first->str1, src->str1);
        string_assign(first->str2, src->str2);
        first = (MapEntry*)((char*)first + 0x40);
        src = (MapEntry*)((char*)src + 0x40);
    } while (first != last);
}
