// from server: 98% by king_originala
extern "C" void* __cdecl runtime_cast(void*, long, void*, void*, int);

extern char instance_type[];
extern char workspace_type[];
extern char selectable_type[];

struct Node
{
    char padding[0x104];
    Node* parent;
};

Node* __cdecl findSelectable(Node* node)
{
    Node* result = node;
    Node** link = &node->parent;

    while (!runtime_cast(*link, 0, instance_type, workspace_type, 0))
    {
        Node* parent = *link;
        if (runtime_cast(parent, 0, instance_type, selectable_type, 0))
            result = parent;
        link = &parent->parent;
    }

    return result;
}
