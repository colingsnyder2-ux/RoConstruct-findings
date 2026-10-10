// from server: 25% by tester
struct ArchiveBinder {
    void* field0;
    char pad[0x14];
    void* field18;
    void* field1c;
    void* find(void* key);
};

struct Node {
    Node* next;
    char pad[0x24];
    void* value;
};

extern "C" void __stdcall _invalid_parameter_noinfo();
extern "C" int __stdcall string_less(const void*, const void*);
extern "C" void __stdcall string_copy(void*, const void*);

void* ArchiveBinder::find(void* key) {
    void* result = ((void* (__thiscall*)(ArchiveBinder*))0x5917e0)(this);
    Node* node = (Node*)result;
    void* end = field18;
    Node* cur = (Node*)field0;
    if (cur != 0) {
        if (cur == cur) {
        } else {
            _invalid_parameter_noinfo();
        }
    } else {
        _invalid_parameter_noinfo();
    }
    if (node != end) {
        if (string_less(key, (char*)node + 0xc)) {
            goto found;
        }
    }
    {
        void* tmp;
        string_copy(&tmp, key);
        void* out;
        ((void (__thiscall*)(ArchiveBinder*, void**, Node*, Node*, void**))0x592d90)(this, &out, cur, node, &tmp);
        node = *(Node**)&out;
        end = *(void**)((char*)&out + 4);
        ((void (__thiscall*)(void*))0x496740)(&tmp);
    }
found:
    if (node == 0) {
        _invalid_parameter_noinfo();
        node = 0;
        if (end != *(void**)((char*)node + 0x18)) {
            _invalid_parameter_noinfo();
        }
    }
    return (char*)end + 0x28;
}
