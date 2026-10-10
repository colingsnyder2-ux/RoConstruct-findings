// from server: 90% by colin
struct LightInfo {
    char data[24];
};

struct SceneManager {
    LightInfo* first;
    LightInfo* last;
};

struct LightInfoAssigner {
    LightInfo* __thiscall assign(const LightInfo* src);
};

void assign_range(LightInfo* first, LightInfo* last, const LightInfo* value)
{
    while (first != last) {
        ((LightInfoAssigner*)first)->assign(value);
        first = (LightInfo*)((char*)first + 24);
    }
}
