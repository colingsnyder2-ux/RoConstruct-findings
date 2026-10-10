// from server: 37% by colin
struct SpawnLocation;

struct SpawnerService {
    char pad[0xe8];
    void* spawners_begin;
    void* spawners_end;
    int hasSpawners;
    void* GetSpawnLocation(void* player, void* preferedSpawnName, void* result);
};

extern "C" int __stdcall rand();
extern "C" void __cdecl _invalid_parameter_noinfo();

extern float g_78fef0;
extern float g_7a9968;

void* __fastcall sub_5b4070(void* self, void* unused, void* arg);
void* __fastcall sub_573f80(void* self);
void __cdecl sub_62fc62(void* p);

void* SpawnerService::GetSpawnLocation(void* player, void* preferedSpawnName, void* result)
{
    if (this->hasSpawners == 0) {
        *(float*)result = 0.0f;
        *(float*)((char*)result + 4) = g_78fef0;
        *(float*)((char*)result + 8) = g_78fef0;
        return result;
    }

    void** begin = &this->spawners_begin;
    void** end = &this->spawners_end;

    void* localBegin = 0;
    void* localEnd = 0;
    void* localCap = 0;

    void* cur = *begin;
    void* last = *end;

    while (cur != last) {
        void* node = cur;
        void* spawner = *(void**)((char*)node + 8);
        if (*(char*)((char*)spawner + 0x298) == 0) {
            if (*(char*)((char*)player + 0x124) == 0) {
                if (*(int*)((char*)spawner + 0x280) == *(int*)((char*)player + 0x120)) {
                    goto add;
                }
            }
        } else {
        add:
            sub_5b4070(&localBegin, 0, (char*)node + 8);
        }
        cur = *(void**)node;
    }

    int count = 0;
    if (localBegin != 0) {
        count = ((char*)localEnd - (char*)localBegin) >> 2;
    }

    if (count == 0) {
        *(float*)result = 0.0f;
        *(float*)((char*)result + 4) = g_78fef0;
        *(float*)((char*)result + 8) = g_78fef0;
    } else {
        unsigned int r = (unsigned int)rand();
        unsigned int idx = r % (unsigned int)count;
        void* chosen = ((void**)localBegin)[idx];
        void* loc = sub_573f80(chosen);
        float x = *(float*)((char*)loc + 0x24);
        float y = *(float*)((char*)loc + 0x28);
        float z = *(float*)((char*)loc + 0x2c);
        *(float*)result = x;
        *(float*)((char*)result + 4) = y + g_7a9968;
        *(float*)((char*)result + 8) = z;
    }

    if (localBegin != 0) {
        sub_62fc62(localBegin);
    }

    return result;
}
