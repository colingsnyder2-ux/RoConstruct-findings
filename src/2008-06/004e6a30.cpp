// from server: 75% by colin
struct PartChunk {
    void sub_4E6740();
    void sub_4E68B0();
    void sub_4E6A30(int type);
};

extern "C" bool __cdecl sub_5EC9F0(int type);

extern float g_819BAC;
extern float g_827494;

void PartChunk::sub_4E6A30(int type)
{
    if (type == 0x976148) {
        sub_4E6740();
        sub_4E68B0();
        return;
    }
    if (type == 0x976128) {
        sub_4E68B0();
        return;
    }
    if (type == 0x9760A8) {
        sub_4E6740();
        return;
    }
    if (sub_5EC9F0(type)) {
        sub_4E6740();
        return;
    }
    if (type == 0x97626C) {
        float f = *(float*)(*(int*)((char*)this + 0xbc) + 0x224);
        (*(void(__thiscall**)(PartChunk*, float))(*(int*)this + 0x20))(this, f);
        if (*(int*)(*(int*)((char*)this + 0xbc) + 0x1c8) != 0) {
            float r = (*(float(__thiscall**)(PartChunk*))(*(int*)this + 0x24))(this);
            if (r > g_819BAC) {
                (*(void(__thiscall**)(PartChunk*, float))(*(int*)this + 0x20))(this, r);
            }
        } else {
            float r = (*(float(__thiscall**)(PartChunk*))(*(int*)this + 0x24))(this);
            if (!(r < g_827494)) {
                (*(void(__thiscall**)(PartChunk*, float))(*(int*)this + 0x20))(this, 0.0f);
            }
        }
    }
}
