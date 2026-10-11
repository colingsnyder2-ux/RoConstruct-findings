// from server: 39% by colin
// roc 2008-06 006710e0  unit: RBX::AdornRbxGfx  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006710e0

extern "C" void __stdcall _invalid_parameter_noinfo();

struct String {
    int a;
    int b;
};

struct Node {
    char pad[0x18];
    Node* parent;
};

struct Tree {
    Node* head;
    Node* nil;
};

struct Map {
    Tree tree;
    Node* find(const String* key);
};

struct S {
    Map map;
    String* find(const String* key);
};

String* S::find(const String* key)
{
    Node* result = map.find(key);
    if (this == 0)
        _invalid_parameter_noinfo();
    Node* head = map.tree.head;
    Node* nil = map.tree.nil;
    if (head == 0) {
        _invalid_parameter_noinfo();
    } else {
        if (head != head)
            _invalid_parameter_noinfo();
    }
    if (result != nil) {
        if (!(*(bool (__stdcall*)(const String*, const String*))0x80235c)(key, (const String*)((char*)result + 0xc)))
            return (String*)&result;
    }
    return (String*)&nil;
}
