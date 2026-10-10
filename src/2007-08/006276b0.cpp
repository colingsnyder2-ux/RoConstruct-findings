// from server: 68% by colin
struct CollisionStage {
    void f(void*);
};

struct StageNode {
    char pad0[4];
    void* m_unk4;
    char pad8[0x14];
    int m_index;
};

struct StageList {
    char pad0[4];
    int m_count;
};

struct StageOwner {
    char pad0[4];
    StageList* m_list;
    char pad8[0xc];
    void* m_unk14;
    int m_unk18;
};

void __stdcall sub_5FF850(int, int);

void CollisionStage::f(void* arg)
{
    StageNode* node = (StageNode*)arg;
    StageOwner* owner = (StageOwner*)this;

    int a = ((int (__thiscall*)(void*))((*(void***)node->m_unk4)[1]))(node->m_unk4);
    int b = ((int (__thiscall*)(void*))((*(void***)this)[1]))(this);

    if (a > b) {
        void* p = *(void**)((char*)this + 8);
        ((void (__thiscall*)(void*, void*))((*(void***)p)[5]))(p, arg);
    }

    int idx = node->m_index;
    if (idx >= 0) {
        int* arr = (int*)owner->m_unk14;
        int cnt = owner->m_unk18;
        int val = arr[cnt - 1];
        arr[idx] = val;
        *(int*)((char*)val + 0x1c) = idx;
        sub_5FF850(owner->m_unk18 - 1, 0);
        node->m_index = -1;
    }
}
