// from server: 24% by colin
struct LDraw2RobloxColorMap {
    void destroy();
};

extern "C" void __stdcall sub_802890();
extern "C" void __stdcall sub_802468(void*);

extern "C" void __fastcall sub_46b070(void*);
extern "C" void __fastcall sub_553d80(void*);
extern "C" void __fastcall sub_68d1a0(void*);
extern "C" void __fastcall sub_68dfa0(void*);

struct Node {
    Node* next;
    char pad[0x0c];
    void* obj;
    char pad2[0x04];
    Node* owner;
};

struct List {
    Node* head;
    Node* tail;
};

void LDraw2RobloxColorMap::destroy()
{
    *(int*)this = 0x81c904;

    List* l1 = (List*)((char*)this + 0x3c);
    Node* n1 = l1->head;
    Node* end1 = *(Node**)((char*)this + 0x54);
    end1 = end1->next;

    while (n1 != end1) {
        if (n1 == 0) {
            sub_802890();
        }
        if (n1->owner != n1) {
            if (n1 == 0) {
                sub_802890();
            }
            if (n1->owner == n1) {
                sub_802890();
            }
            void* o = n1->obj;
            if (o) {
                (*(void(__thiscall**)(void*, int))*(void**)o)(o, 1);
            }
            sub_68dfa0(&n1);
            n1 = l1->head;
            end1 = *(Node**)((char*)this + 0x54);
            end1 = end1->next;
        } else {
            n1 = n1->next;
        }
    }

    List* l2 = (List*)((char*)this + 0x5c);
    Node* n2 = l2->head;
    Node* end2 = *(Node**)((char*)this + 0x74);
    end2 = end2->next;

    while (n2 != end2) {
        if (n2 == 0) {
            sub_802890();
        }
        if (n2->owner != n2) {
            if (n2 == 0) {
                sub_802890();
            }
            if (n2->owner == n2) {
                sub_802890();
            }
            void* o = n2->obj;
            if (o) {
                (*(void(__thiscall**)(void*, int))*(void**)o)(o, 1);
            }
            sub_68d1a0(&n2);
            n2 = l2->head;
            end2 = *(Node**)((char*)this + 0x74);
            end2 = end2->next;
        } else {
            n2 = n2->next;
        }
    }

    sub_46b070(l2);
    sub_553d80((char*)this + 0x3c);
    sub_802468((char*)this + 0x20);
    sub_802468((char*)this + 4);
}
