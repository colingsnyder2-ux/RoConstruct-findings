// from server: 51% by colin
struct RenderSystem;
struct Root {
    static Root& getSingleton();
    RenderSystem* getRenderSystem();
};

struct RenderSystemVtbl {
    char pad[0x108];
    void (__thiscall* func_108)(RenderSystem*, float*, float*);
};

struct RenderSystem {
    RenderSystemVtbl* vtbl;
};

struct ListNode {
    ListNode* next;
    ListNode* prev;
};

struct List {
    ListNode* head;
    int size;
};

struct E {
    char data[48];
};

struct Holder {
    char pad[0x3c];
    List list;
    char pad2[0x50 - 0x3c - sizeof(List)];
    ListNode* field_50;
};

extern "C" Root* __stdcall getRootSingleton();
extern "C" RenderSystem* __stdcall getRenderSystemCall(Root*);

ListNode* __fastcall sub_682b90(List* self, int edx, ListNode* pos, ListNode* node, void* val);
void __fastcall sub_682bd0(List* self, int edx, int val);

void __fastcall sub_6830b0(Holder* self, int edx, float a, float b, float c, float d, float* vec)
{
    float v0 = a;
    float v1 = b;
    float v2 = c;
    float v3 = d;

    Root* root = getRootSingleton();
    RenderSystem* rs = getRenderSystemCall(root);

    float out0, out1;
    float in0 = vec[0];
    float in1 = vec[1];
    float in2 = vec[2];
    float in3 = vec[3];

    float tmp[4];
    tmp[0] = in0;
    tmp[1] = in1;
    tmp[2] = in2;
    tmp[3] = in3;

    rs->vtbl->func_108(rs, &out0, tmp);

    ListNode* node = self->field_50;
    List* list = &self->list;

    E e;
    *(int*)(e.data + 0) = 0;
    *(int*)(e.data + 4) = 2;
    *(int*)(e.data + 8) = 1;

    ListNode* result = sub_682b90(list, edx, node, node->next, &e);
    sub_682bd0(list, edx, 1);
    node->next = result;
    result->next->prev = result;
}
