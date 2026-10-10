// from server: 58% by colin
extern "C" void __stdcall _invalid_parameter_noinfo();

struct Node {
    Node* next;
    Node* prev;
    char pad[4];
    char* data;
};

struct List {
    Node* head;
    Node* tail;
};

struct CXTCaptionButtonTheme {
    char pad[0x30];
    List list;
    Node* field_34;
    bool check();
};

struct Iter {
    Node* node;
    Node* list;
    void advance();
};

bool CXTCaptionButtonTheme::check()
{
    Node* end = field_34->next;
    Iter it;
    it.list = list.head;
    it.node = it.list;
    Node* first = end;

    while (true) {
        if (it.node != 0 && it.node != it.list) {
            _invalid_parameter_noinfo();
        }
        if (first == list.tail) {
            return true;
        }
        if (it.node == 0) {
            _invalid_parameter_noinfo();
        }
        if (first == it.node->next) {
            _invalid_parameter_noinfo();
        }
        if (it.node->data[0x73] == 0) {
            return false;
        }
        it.advance();
        first = it.node;
    }
}
