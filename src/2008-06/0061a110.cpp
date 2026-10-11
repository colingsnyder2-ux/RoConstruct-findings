// from server: 43% by tester


extern "C" {
    __declspec(dllimport) void __stdcall EnterCriticalSection(void*);
    __declspec(dllimport) void __stdcall LeaveCriticalSection(void*);
    __declspec(dllimport) void* __stdcall TlsGetValue(unsigned long);
    __declspec(dllimport) int __stdcall TlsSetValue(unsigned long, void*);
    __declspec(dllimport) void __stdcall _invalid_parameter_noinfo();
}

void __stdcall sub_557330(const char*, const char*);
void __stdcall sub_6a067a(void*);
void __stdcall sub_682b40();
void __stdcall sub_5888f0(void*, void*, void*);

struct Node {
    Node* next;
    Node* prev;
    void* data;
};

struct Container {
    char pad[0x14];
    Node* head;
    int count;
};

struct InletTool {
    void* vtable;
    char pad[0x10];
    Container* container;
    int field18;
    void method();
};

void InletTool::method()
{
    sub_557330((const char*)0x97bf54, (const char*)0x61a080);
    EnterCriticalSection((void*)0x97bf3c);
    unsigned long tlsIndex = *(unsigned long*)0x95af6c;
    if (tlsIndex == 0xFFFFFFFF) {
        LeaveCriticalSection((void*)0x97bf3c);
        return;
    }
    void* tlsVal = TlsGetValue(tlsIndex);
    if (tlsVal == 0) {
        LeaveCriticalSection((void*)0x97bf3c);
        return;
    }
    if (TlsSetValue(tlsIndex, 0) == 0) {
        LeaveCriticalSection((void*)0x97bf3c);
        return;
    }
    *(int*)0x97bf58 -= 1;
    LeaveCriticalSection((void*)0x97bf3c);

    Container* c = this->container;
    if (c->count != 0) {
        void* ebx = *(void**)0x802890;
        while (c->count != 0) {
            Node* n = c->head;
            void* edi = n->data;
            if (this->vtable != 0) {
                this->vtable = *(void**)this->vtable;
            }
            if (edi == *(void**)((char*)0 + 0x14)) {
                ((void(*)())ebx)();
            }
            void* f = *(void**)((char*)edi + 8);
            if (f != 0) {
                ((void(*)())f)();
            }
            Node* n2 = c->head;
            void* a = n2->data;
            void* b = this->vtable;
            void* tmp;
            sub_5888f0(&tmp, b, a);
        }
    }
    sub_682b40();
    sub_6a067a(this->vtable);
    sub_6a067a(this);
}
