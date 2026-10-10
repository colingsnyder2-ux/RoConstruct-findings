// from server: 27% by colin
struct ScoreHud {
    char pad0[4];
    void* field4;
    void* field8;
    char padC[0x1c];
    void* field28;

    void someMethod(void* arg);
};

struct Node {
    Node* next;
    Node* prev;
    char pad8[0x25];
    char flag2d;
};

struct String {
    void* data;
    int size;
    int capacity;
};

extern "C" {
    void __stdcall _invalid_parameter_noinfo();
    int __stdcall string_less(const String* a, const String* b);
}

void* __cdecl sub_579890();
void* __cdecl sub_61dcc0(void* a);
void __cdecl sub_61e120(void* a);
void* __cdecl sub_61e4a0(void* a, void* b, void* c);
void* __cdecl sub_620350(void* a, void* b, void* c, void* d);
void __cdecl sub_62fc62(void* a);
void __cdecl sub_543460(void* a, void* b, void* c, void* d, void* e);

void ScoreHud::someMethod(void* arg) {
    void* ebp_val = arg;
    void* edi_val = this;
    void* esi_val = sub_61dcc0(edi_val);
    int ebx_val = 0;
    if (edi_val == 0) {
        _invalid_parameter_noinfo();
    }
    if (esi_val != *(void**)((char*)edi_val + 4)) {
        if (!string_less((String*)((char*)esi_val + 0xc), (String*)ebp_val)) {
            goto label_88a;
        }
    }
    {
        Node* node = (Node*)sub_579890();
        *(void**)((char*)this + 0x24) = node;
        node->flag2d = 1;
        node->next = node;
        node->prev = node;
        *(void**)((char*)this + 0x28) = 0;
        void* tmp = sub_61e4a0((char*)this + 0x20, ebp_val, (char*)this + 0x20);
        void* result = sub_620350(edi_val, esi_val, tmp, (char*)this + 0x18);
        void* r_edi = *(void**)result;
        void* r_esi = *(void**)((char*)result + 4);
        sub_61e120((char*)this + 0x2c);
        void* eax_val = *(void**)((char*)this + 0x24);
        void* edx_val = *(void**)eax_val;
        sub_543460((char*)this + 0x24, (char*)this + 0x24, edx_val, (char*)this + 0x24, (char*)this + 0x24);
        sub_62fc62(*(void**)((char*)this + 0x24));
        *(void**)((char*)this + 0x24) = 0;
        *(void**)((char*)this + 0x28) = 0;
        if (r_edi == 0) {
            _invalid_parameter_noinfo();
        }
        if (r_esi == *(void**)((char*)r_edi + 4)) {
            _invalid_parameter_noinfo();
        }
        *(void**)((char*)this + 0x28) = (char*)r_esi + 0x28;
    }
label_88a:
    return;
}
