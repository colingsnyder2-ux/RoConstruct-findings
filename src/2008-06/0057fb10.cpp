// from server: 79% by king_originala
extern "C" void __cdecl _ReadWriteBarrier();
#pragma intrinsic(_ReadWriteBarrier)

extern "C" {
    extern void (__cdecl *invalid_parameter_noinfo)();
}

struct Node;

struct Entry {
    Node* object;
    void* control;
};

struct Children {
    char reserved[12];
    Entry* first;
    Entry* last;
};

struct Node {
    char reserved[0x108];
    Children* children;

    void finish();
    void reset(int);
};

struct Listener {
    void invoke(Node**);
};

struct Selection {
    Listener* listener;
    unsigned char* changed;

    void process(Node**);
};

void Selection::process(Node** object)
{
    Children* children = (*object)->children;
    if (children && (unsigned int)(children->last - children->first) > 0) {
        unsigned int i = 0;
        Node* node;
        for (;;) {
            _ReadWriteBarrier();
            node = *object;
            children = node->children;
            if (!children ||
                i >= (unsigned int)(children->last - children->first))
                break;

            Children* current = children;
            _ReadWriteBarrier();
            if (i >= (unsigned int)(current->last - current->first))
                invalid_parameter_noinfo();

            Node* child = current->first[i].object;
            listener->invoke(&child);
            ++i;
        }

        node->finish();
        (*object)->reset(0);
        *changed = 1;
    }
}
