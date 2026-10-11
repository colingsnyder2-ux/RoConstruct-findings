// from server: 47% by tester
struct ColorMap
{
    char pad[0x3c];
    struct Node
    {
        Node* next;
        char pad1[0xc];
        int value;
        Node* prev;
    };
    Node* head;
    char pad2[0x14];
    Node* tail;

    int find(int key);
};

extern "C" void __stdcall _invalid_parameter_noinfo();

extern "C" void __stdcall sub_5B3990(void* out, void* out2, void* container);

int ColorMap::find(int key)
{
    Node* result;
    Node* end;
    sub_5B3990(&result, &end, &head);

    Node* first = head;
    Node* last = tail;
    Node* cur = result;

    if (cur != last)
    {
        while (cur != last)
        {
            if (cur->value == key)
                break;
            cur = cur->next;
        }
    }
    else
    {
        return 0;
    }

    return cur->value;
}
