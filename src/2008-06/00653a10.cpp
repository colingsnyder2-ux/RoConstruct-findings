// from server: 30% by tester
struct ScoreHud {
    void destroyChildren(void*);
};

struct Node {
    char pad[0x49];
    char flag;
};

extern "C" void __stdcall sub_46B070(void*);
extern "C" void __stdcall sub_6A067A(void*);
extern "C" void __stdcall sub_802468(void*);

void ScoreHud::destroyChildren(void* p)
{
    Node* n = (Node*)p;
    if (n->flag == 0) {
        Node* child = *(Node**)((char*)n + 8);
        destroyChildren(child);
        Node* next = *(Node**)n;
        void* base = (char*)n + 0xc;
        sub_46B070((char*)base + 0x1c);
        sub_802468(base);
        sub_6A067A(n);
        n = next;
        while (n->flag == 0) {
            child = *(Node**)((char*)n + 8);
            destroyChildren(child);
            next = *(Node**)n;
            base = (char*)n + 0xc;
            sub_46B070((char*)base + 0x1c);
            sub_802468(base);
            sub_6A067A(n);
            n = next;
        }
    }
}
