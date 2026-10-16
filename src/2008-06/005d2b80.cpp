// from server: 15% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" {
    void* __stdcall func_00491e50(void*);
    void __stdcall func_00409d50(void*);
    void __stdcall func_004213a0(void*);
    void __stdcall func_004293d0(void*);
    void __stdcall func_0042a8f0(void*);
    void __stdcall func_0055a8f0(void*);
    void __stdcall func_005909e0(void*);
    void __stdcall func_00598cb0(void*);
    void __stdcall func_005c1520(void*);
    void __stdcall func_005d2b30(void*);
    void __stdcall func_0063bbc0(void*);
    void __stdcall func_006a067a(void*);
    void __stdcall func_006a158c(void*);
    void __stdcall func_00802458(void*);
    void __stdcall func_008027b0(void);
    void __stdcall func_00802890(void);
}

struct SpawnerService {
    char pad[0x130];
    void* field_130;
    char pad2[0x10];
    void* field_144;
    void* field_148;
    char pad3[0x2c];
    int field_178;
    char field_17c;
    void SpawnPlayer(void* model, void* player, void* preferedSpawnName);
};

void SpawnerService::SpawnPlayer(void* model, void* player, void* preferedSpawnName) {
    void* sp = func_00491e50(this);
    if (!sp) {
        func_00802458((void*)0x83bda0);
        func_00409d50((void*)0x8d1bc8);
        func_006a158c((void*)0x8d1bc8);
    }
    if (field_148 == 0) {
        func_005909e0(model);
        return;
    }
    func_004293d0(this);
    void* list = field_144;
    void* first = *(void**)list;
    void* cur = first;
    void* end = field_144;
    void* node = field_130;
    while (cur != end) {
        void* obj = *(void**)((char*)cur + 8);
        if (*(char*)((char*)obj + 0x400) == 0) {
            if (field_17c == 0) {
                void* v = *(void**)((char*)cur + 8);
                void* vt = *(void**)v;
                int val = *(int*)((char*)vt + 0x3e8);
                if (field_178 == val) {
                    func_0042a8f0((char*)cur + 8);
                    func_004213a0((char*)cur + 8);
                }
            }
        }
        cur = *(void**)cur;
    }
    int count = 0;
    if (count == 0) {
        func_005909e0(model);
        func_006a067a(0);
        func_006a067a(0);
        return;
    }
    func_008027b0();
    int idx = 0;
    void* item = *(void**)((char*)list + idx * 4);
    func_00598cb0(item);
    float x = *(float*)((char*)item + 0x24);
    float y = *(float*)((char*)item + 0x28);
    float z = *(float*)((char*)item + 0x2c);
    int n = *(int*)((char*)item + 0x404);
    if (n > 0) {
        func_005c1520((char*)item + 0x18);
        func_0055a8f0(this);
        func_005d2b30(this);
        func_0063bbc0(this);
    }
    func_005909e0(model);
    func_006a067a(0);
    func_006a067a(0);
}
