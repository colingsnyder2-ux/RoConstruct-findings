// from server: 92% by colin
struct LDraw2RobloxMapRoot {
    char pad[0x40];
};

struct LDraw2RobloxMapEntry {
    int a;
    int b;
    char pad1[0x18];
    char pad2[0x18];
};

struct StringAssign {
    void assign(const StringAssign& other);
};

void assign(LDraw2RobloxMapRoot* first, LDraw2RobloxMapRoot* last, LDraw2RobloxMapEntry* src)
{
    while (first != last) {
        *(int*)first = *(int*)src;
        *(int*)((char*)first + 4) = *(int*)((char*)src + 4);
        ((StringAssign*)((char*)first + 8))->assign(*(StringAssign*)((char*)src + 8));
        ((StringAssign*)((char*)first + 0x24))->assign(*(StringAssign*)((char*)src + 0x24));
        first = (LDraw2RobloxMapRoot*)((char*)first + 0x40);
    }
}
