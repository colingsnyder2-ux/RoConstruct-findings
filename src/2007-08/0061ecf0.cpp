// from server: 57% by colin
struct Node {
    char pad0[8];
    Node* left;
    char padC[8];
    void* vecBegin;
    void* vecEnd;
    void* vecCap;
    char pad20;
    char flag21;
};

struct ScoreHud {
    void destroy(Node* n);
};

void __stdcall sub_62fc62(void* p);

extern "C" void (__stdcall *g_dtor)(void*);

void ScoreHud::destroy(Node* n)
{
    if (n->flag21 != 0)
        return;

    Node* cur = n;
    do {
        destroy(cur->left);

        Node* next = cur->left;
        void* begin = cur->vecBegin;
        if (begin != 0) {
            void* end = cur->vecEnd;
            if (begin != end) {
                char* p = (char*)begin;
                do {
                    g_dtor(p);
                    p += 0x1c;
                } while (p != end);
            }
            sub_62fc62(cur->vecBegin);
        }
        cur->vecBegin = 0;
        cur->vecEnd = 0;
        cur->vecCap = 0;
        sub_62fc62(cur);
        cur = next;
    } while (cur->flag21 == 0);
}
