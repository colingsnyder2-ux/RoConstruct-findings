// from server: 22% by colin
// roc 2008-06 005ed300  unit: RBX::Controller::W4InputType::?$holder  size: 232 bytes
// library rbxgs-net/Server.cpp

extern "C" void __stdcall _invalid_parameter_noinfo();

struct Node {
    Node* next;
    Node* prev;
    int pad[4];
    int value;
};

struct Map {
    int pad0[12];
    Node* head;
    int pad1[5];
    int size;
};

struct Holder {
    int pad0[12];
    Map map30;
    int pad1[8];
    Map map50;
    bool find(int key, int* out);
};

bool Holder::find(int key, int* out) {
    Node* head = map30.head;
    Node* node = head->next;
    while (node != head) {
        if (node->value >= key) break;
        node = node->next;
    }
    if (node != head && node->value == key) {
        *out = node->pad[4];
        return true;
    }
    head = map50.head;
    node = head->next;
    while (node != head) {
        if (node->value >= key) break;
        node = node->next;
    }
    if (node != head && node->value == key) {
        *out = node->pad[4];
        return true;
    }
    return false;
}
