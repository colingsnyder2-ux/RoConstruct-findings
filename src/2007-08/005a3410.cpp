// from server: 72% by colin
struct RBX_Instance;

struct RBX_Player;

struct RBX_Teams {
    float getTeamColorForPlayer(RBX_Player* player, float* outColor);
};

extern "C" void __stdcall _invalid_parameter_noinfo();

extern "C" void* __cdecl sub_48DFB0();
extern "C" int __fastcall sub_487C10(void* self);
extern "C" void* __cdecl sub_50B200();
extern "C" void __fastcall sub_586B80(void* self, void* unused, void* arg);
extern "C" int __fastcall sub_5A0120(void* self);
extern "C" void* __cdecl sub_630D36(void* a, void* b, void* c, void* d, void* e);

struct RBX_Teams_Impl {
    char pad[0xC0];
    void* players;
};

float RBX_Teams::getTeamColorForPlayer(RBX_Player* player, float* outColor) {
    RBX_Teams_Impl* self = (RBX_Teams_Impl*)this;
    void* list = sub_48DFB0();
    int count = sub_487C10(list);
    int i = 0;
    if (count > 0) {
        do {
            void* vec = self->players;
            void* begin = *(void**)((char*)vec + 4);
            void* end = *(void**)((char*)vec + 8);
            if (begin == 0 || i >= (int)(((char*)end - (char*)begin) >> 3)) {
                _invalid_parameter_noinfo();
            }
            void* entry = *(void**)((char*)begin + i * 8);
            void* obj = sub_630D36(entry, (void*)0x881F4C, (void*)0x88E1C8, (void*)0, (void*)0);
            if (obj != 0) {
                if (*(char*)((char*)obj + 0x124) == 0) {
                    void* p = *(void**)((char*)obj + 0x118);
                    if (p != 0) {
                        if (sub_5A0120(p) == (int)player) {
                            void* color = *(void**)((char*)obj + 0x120);
                            void* tmp = outColor;
                            sub_586B80(&tmp, 0, color);
                            return *outColor;
                        }
                    }
                }
            }
            i++;
            count = sub_487C10(list);
        } while (i < count);
    }
    float* def = (float*)sub_50B200();
    outColor[0] = def[0];
    outColor[1] = def[1];
    outColor[2] = def[2];
    return *outColor;
}
