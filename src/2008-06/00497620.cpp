// from server: 54% by colin
struct Players;

struct Node {
    Node* next;
    Node* prev;
    void* data;
    int pad0;
    void* field10;
    int pad1;
    int pad2;
    Node* field20;
    Node* field24;
};

struct List {
    Node* head;
    Node* tail;
};

struct ChatMessage {
    int field0;
    int field4;
    void* field8;
    int fieldC;
    void* field10;
};

extern "C" void* __stdcall sub_553F90(int a, int b);
extern "C" void* __stdcall sub_6A0920(unsigned int size);
extern "C" void __stdcall sub_495DD0(void* p);
extern "C" void __stdcall sub_497120(void* p, void* q);
extern "C" void __stdcall sub_80245C(void* dst, void* src);

struct Players {
    void method(void* arg1, void* arg2);
};

void Players::method(void* arg1, void* arg2)
{
    void* esi_val;
    void* eax_val;
    void* edi_val;
    void* ebx_val;
    void* ebp_val;
    void* ecx_val;
    void* edx_val;
    void* tmp;

    esi_val = sub_553F90(0x82256c, -1);
    eax_val = sub_6A0920(0x28);
    if (eax_val != 0) {
        *(int*)((char*)eax_val + 0) = 0;
        *(int*)((char*)eax_val + 4) = 0;
        *(int*)((char*)eax_val + 8) = 0;
        *(void**)((char*)eax_val + 0x10) = esi_val;
        *(int*)((char*)eax_val + 0x14) = 0;
        *(int*)((char*)eax_val + 0x20) = 0;
        *(int*)((char*)eax_val + 0x24) = 0;
        esi_val = eax_val;
    } else {
        esi_val = 0;
    }

    eax_val = arg1;
    edx_val = *(void**)((char*)eax_val + 8);
    if (edx_val != 0) {
        *(void**)edx_val = esi_val;
    } else {
        *(void**)((char*)eax_val + 4) = esi_val;
    }
    *(void**)((char*)eax_val + 8) = esi_val;

    edi_val = arg2;
    sub_80245C((char*)edi_val + 4, (char*)edi_val + 4);
    sub_495DD0((char*)esi_val + 0x10);

    ebx_val = *(void**)edi_val;
    ebp_val = sub_553F90(0x822708, -1);
    eax_val = sub_6A0920(0x18);
    if (eax_val != 0) {
        *(int*)((char*)eax_val + 0) = 0;
        *(void**)((char*)eax_val + 8) = ebp_val;
        *(int*)((char*)eax_val + 0xc) = 5;
        *(void**)((char*)eax_val + 0x10) = ebx_val;
    } else {
        eax_val = 0;
    }

    ecx_val = *(void**)((char*)esi_val + 0x24);
    if (ecx_val != 0) {
        *(void**)ecx_val = eax_val;
    } else {
        *(void**)((char*)esi_val + 0x20) = eax_val;
    }
    *(void**)((char*)esi_val + 0x24) = eax_val;

    edi_val = (char*)edi_val + 0x20;
    sub_80245C(edi_val, edi_val);

    tmp = sub_553F90(0x822700, -1);
    sub_497120(esi_val, tmp);
}
