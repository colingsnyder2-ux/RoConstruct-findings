// from server: 42% by colin
struct RBX_Instance {
    void* vtable;
    char pad[0xbc];
    void* container;
};

struct RBX_Team {
    void* vtable;
    char pad[0xbc];
    void* container;
};

struct RBX_VTeams {
    char pad[0xc0];
    void* teams;
    int getNumTeams();
    int getTeamIndex(RBX_Team* team);
    void setTeamColor(int index, int color);
    void setTeamColorForTeam(RBX_Team* team, int color);
    void assignNewPlayerToTeam(RBX_Instance* player);
};

extern "C" int __stdcall sub_487C10(RBX_VTeams* self);
extern "C" void __stdcall sub_48F270(void* self, int val);
extern "C" void __stdcall sub_48F2A0(void* self, int val);
extern "C" int __stdcall sub_553F90(void* self);
extern "C" void* __stdcall sub_553F80(void* self, void* out);
extern "C" int __stdcall sub_5A3380(RBX_VTeams* self, int val);
extern "C" void* __stdcall sub_630D36(void* a, void* b, void* c, void* d, void* e);
extern "C" void __stdcall sub_77E6D8();

int RBX_VTeams::getNumTeams() {
    return sub_487C10(this);
}

int RBX_VTeams::getTeamIndex(RBX_Team* team) {
    return sub_5A3380(this, *(int*)team);
}

void RBX_VTeams::setTeamColor(int index, int color) {
    sub_48F270(this, color);
    sub_48F2A0(this, 0);
}

void RBX_VTeams::setTeamColorForTeam(RBX_Team* team, int color) {
    int idx = getTeamIndex(team);
    if (idx >= 0) {
        setTeamColor(idx, color);
    }
}

void RBX_VTeams::assignNewPlayerToTeam(RBX_Instance* player) {
    int minCount = 0x2710;
    int maxCount = 0x1c;
    bool found = false;
    int bestIndex = 0;
    int bestColor = 0;
    int numTeams = getNumTeams();
    for (int i = 0; i < numTeams; i++) {
        RBX_Team* team = (RBX_Team*)((void**)((char*)this + 0xc0))[i];
        if (!team) {
            sub_77E6D8();
        }
        void* obj = sub_630D36(team, 0, (void*)0x881f4c, (void*)0x89de08, 0);
        if (obj) {
            if (sub_553F90(obj) == 1) {
                int val;
                sub_553F80(obj, &val);
                int idx = sub_5A3380(this, val);
                if (idx < minCount) {
                    sub_553F80(obj, &val);
                    bestColor = val;
                    bestIndex = idx;
                    found = true;
                }
            }
        }
    }
    if (found) {
        sub_48F270(player, bestColor);
        sub_48F2A0(player, 0);
    }
}
