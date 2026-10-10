// from server: 85% by colin
struct Node
{
    Node* next;
    void* value;
};

struct CXTCaptionButtonTheme
{
    char pad[0x3c];
    Node head;
    void* field_40;
    bool compare(void* arg);
};

extern "C" void __stdcall _invalid_parameter_noinfo();

Node* __stdcall find_node(Node* head, Node** out1, Node** out2);

bool CXTCaptionButtonTheme::compare(void* arg)
{
    void* saved = field_40;
    Node* out1;
    Node* out2;
    Node* result = find_node(&head, &out1, &out2);
    if (result->next != 0 && result->next != &head)
        _invalid_parameter_noinfo();
    return result->value != saved;
}
