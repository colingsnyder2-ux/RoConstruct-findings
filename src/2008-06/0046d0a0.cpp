// from server: 33% by colin
struct LDraw2RobloxColorMap {
    char pad[0x5c];
    struct Node {
        Node* next;
        char pad1[0x14];
        Node* prev;
        char pad2[0x0c];
        int value;
    };
    Node* head;
    char pad2[0x18];
    Node* tail;
    int find(int key);
};

extern "C" void __stdcall _invalid_parameter_noinfo();

int LDraw2RobloxColorMap::find(int key)
{
    Node* result;
    Node* sentinel;
    Node* cur;
    Node* end;
    Node* tmp;

    // call 0x696f30 - likely a map lookup helper
    // signature: (Node** out, int key) with ecx = this+0x5c
    // We emulate: result = lookup(key)
    // Since we can't know exact, reconstruct from assembly flow.

    // The call at 0x696f30 takes (ecx=this+0x5c, arg1=key, arg2=&result)
    // It returns a Node* in result.
    // We'll declare it as extern and call it.
    extern void __stdcall lookup_helper(void* self, int key, Node** out);

    lookup_helper((char*)this + 0x5c, key, &result);

    sentinel = *(Node**)((char*)this + 0x5c + 0x18);
    cur = *(Node**)((char*)this + 0x5c);

    if (result != 0 && result != cur) {
        _invalid_parameter_noinfo();
    }

    tmp = result;
    if (tmp != sentinel) {
        if (result != 0) {
            _invalid_parameter_noinfo();
            if (tmp == *(Node**)((char*)result + 0x18)) {
                _invalid_parameter_noinfo();
            }
        } else {
            result = *(Node**)result;
            if (tmp == *(Node**)((char*)result + 0x18)) {
                _invalid_parameter_noinfo();
            }
        }
        return tmp->value;
    }

    return 0;
}
