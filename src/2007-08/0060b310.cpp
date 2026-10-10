// from server: 47% by colin
struct Node {
    char pad0[8];
    Node* m_next;
    Node* m_prev;
    char pad1[0x64 - 0x0c];
    void* m_data64;
};

struct Result {
    int a;
    int b;
};

struct CXTCaptionButtonTheme {
    Result* f(Node* a1, Node* a2, Result* a3);
};

extern "C" Node* __stdcall sub_5b4dc0(Node* a1);
extern "C" Node* __stdcall sub_5b4de0(Node* a1);
extern "C" Result* __stdcall sub_60b270(Result* a1, Result* a2, Result* a3);

Result* CXTCaptionButtonTheme::f(Node* a1, Node* a2, Result* a3)
{
    Result* result = a3;
    result->a = 0;
    result->b = 0;

    Node* node = sub_5b4dc0(a1);
    if (node == 0)
        return result;

    do {
        Node* ebp;
        if (node->m_next == a1)
            ebp = node->m_prev;
        else
            ebp = node->m_next;

        Node* ebx = node->m_prev;
        Node* eax = node->m_next;
        void* ecx = *(void**)((char*)eax + 0x64);
        void* edx = *(void**)((char*)ebx + 0x64);

        if (*(void**)((char*)edx + 8) == ecx || *(void**)((char*)ecx + 8) == edx) {
            eax = ebx;
        }

        if (eax != 0) {
            if (eax == a1) {
                Result tmp;
                this->f(ebp, a2, &tmp);
                Result* r = sub_60b270(&tmp, result, &tmp);
                result->a = r->a;
                result->b = r->b;
            } else {
                if (*(void**)((char*)ebp + 0x20) == *(void**)((char*)a2 + 0x20)) {
                    void* p = *(void**)((char*)ebp + 0x64);
                    void* q = *(void**)((char*)a2 + 0x64);
                    if (p != 0) {
                        while (p != q) {
                            p = *(void**)((char*)p + 8);
                            if (p == 0)
                                break;
                        }
                    }
                    if (p == 0) {
                        Result tmp;
                        tmp.a = (int)ebp;
                        tmp.b = (int)node;
                        Result* r = sub_60b270(&tmp, result, &tmp);
                        result->a = r->a;
                        result->b = r->b;
                    }
                }
            }
        }

        node = sub_5b4de0(node);
    } while (node != 0);

    return result;
}
