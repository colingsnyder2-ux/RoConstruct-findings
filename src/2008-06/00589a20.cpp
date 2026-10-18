// from server: 33% by colin
extern "C" void __cdecl _invalid_parameter_noinfo();

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl operator_delete(void*);

struct Node {
    Node* left;
    Node* parent;
    Node* right;
    unsigned int key;
    unsigned char reserved[57];
    unsigned char nil;
};

struct Iterator {
    void* owner;
    Node* node;
};

struct Alloc {
    void* ptr;
    Alloc() : ptr(0) {}
};

struct List {
    Node* head;
    unsigned int size;
    List() : head(0), size(0) {}
};

struct Vec {
    void* begin;
    void* end;
    void* cap;
    Vec() : begin(0), end(0), cap(0) {}
};

struct S {
    void* vtable;
    int f();
};

void* __cdecl sub_6A0920(unsigned int);
void __cdecl sub_6A067A(void*);
void __cdecl sub_64FA10(void*);
void __cdecl sub_436420(void*, void*);
void __cdecl sub_588440(void*);
void __cdecl sub_589330(void*, void*);
void __cdecl sub_587CE0(void*, void*, void*);

int S::f()
{
    void* p = sub_6A0920(4);
    if (p) {
        *(void**)p = 0;
    }
    void* a = p;

    List list;
    Vec vec;

    void* vtable = *(void**)this;
    void* ebp_val = *(void**)((char*)vtable + 0x15c);
    void* edi_val = *(void**)((char*)vtable + 0x160);

    while (true) {
        void* vt = *(void**)this;
        void* ecx_val = *(void**)((char*)vt + 0x14c);
        void* esi_val = *(void**)ecx_val;
        void* eax_val = *(void**)((char*)vt + 0x138);

        if (ebp_val != 0 && ebp_val != eax_val) {
            _invalid_parameter_noinfo();
        }

        if (edi_val == esi_val) {
            break;
        }

        if (ebp_val == 0) {
            _invalid_parameter_noinfo();
        }

        edi_val = *(void**)((char*)edi_val + 4);

        void* eax2;
        if (ebp_val != 0) {
            eax2 = *(void**)ebp_val;
        } else {
            eax2 = 0;
        }

        if (edi_val != *(void**)((char*)eax2 + 0x14)) {
            _invalid_parameter_noinfo();
        }

        void* esi2 = *(void**)((char*)this + 4);

        if (ebp_val == 0) {
            _invalid_parameter_noinfo();
            void* eax3 = 0;
            if (edi_val != *(void**)((char*)eax3 + 0x14)) {
                _invalid_parameter_noinfo();
            }
        } else {
            void* eax3 = *(void**)ebp_val;
            if (edi_val != *(void**)((char*)eax3 + 0x14)) {
                _invalid_parameter_noinfo();
            }
        }

        void* tmp1 = esi2;
        void* node = *(void**)((char*)edi_val + 8);
        sub_587CE0(node, &tmp1, &a);

        void* edi2 = a;
        void* ebx2 = *(void**)((char*)node + 0x18);
        void* esi3 = *(void**)node;

        if (edi2 != 0 && edi2 != esi3) {
            _invalid_parameter_noinfo();
        }

        void* esi4 = a;
        if (esi4 == ebx2) {
            void* ecx2 = 0;
            if (ecx2 != 0) {
                if (*(int*)((char*)ecx2 + 0xc) == 1) {
                    sub_588440(ecx2);
                } else {
                    sub_589330(&a, &list);
                }
            }
        } else {
            if (edi2 == 0) {
                _invalid_parameter_noinfo();
            }
            if (esi4 != *(void**)((char*)edi2 + 0x18)) {
                _invalid_parameter_noinfo();
            }
            void* ecx2 = (char*)esi4 + 0x10;
            if (ecx2 != 0) {
                if (*(int*)((char*)ecx2 + 0xc) == 1) {
                    sub_588440(ecx2);
                } else {
                    sub_589330(&a, &list);
                }
            }
        }
    }

    if (list.size != 0) {
        void* esi5 = (char*)list.head + list.size;
        if (list.head > esi5) {
            _invalid_parameter_noinfo();
        }
        void* eax4 = a;
        void* edi3 = eax4;
        void* ebx3 = edi3;
        void* esi6 = esi5;
        if (eax4 == 0) {
            _invalid_parameter_noinfo();
            void* eax5 = 0;
            void* ecx3 = 0;
            unsigned int edx = *(unsigned int*)((char*)ecx3 + 0x1c) + *(unsigned int*)((char*)eax5 + 0x18);
            esi6 = (char*)esi6 - 1;
            if ((unsigned int)esi6 > edx) {
                _invalid_parameter_noinfo();
            }
            if (edi3 != 0) {
                edi3 = *(void**)edi3;
            } else {
                edi3 = 0;
            }
            if ((unsigned int)esi6 < *(unsigned int*)((char*)edi3 + 0x18)) {
                _invalid_parameter_noinfo();
            }
        }
        void* tmp2 = ebx3;
        void* tmp3 = esi6;
        sub_436420(&tmp2, &tmp3);
        void* ecx4 = *(void**)tmp2;
        sub_588440(ecx4);
        list.size--;
        if (list.size == 0) {
            list.head = 0;
        }
    }

    sub_64FA10(&a);
    sub_6A067A(a);
    return 0;
}
