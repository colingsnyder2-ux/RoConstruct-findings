// from server: 40% by colin
struct Node {
    char pad0[0x10];
    Node* next;
    char pad14[0x0c];
    int field20;
    char pad24[0x4c];
    int field70;
    char pad74[0x1c];
    int field90;
};

struct List {
    char pad0[0xd0];
    void* fieldD0;
    int f(int, int, int);
};

extern "C" int __stdcall sub_66e0d0(void*);
extern "C" int __stdcall sub_66e0b0(void*);
extern "C" void* __stdcall sub_66e190(void);
extern "C" void __stdcall sub_66ed20(void*, void*, int);
extern "C" void __stdcall sub_6e3400(void*, void*, void*);
extern "C" void __stdcall sub_6e48c0(void*, void*, void*);
extern "C" void __stdcall sub_6e4920(void*, void*, void*, void*);
extern "C" void __stdcall sub_6e5260(void*, void*, void*, void*);

int List::f(int a, int b, int c)
{
    Node* edi = (Node*)a;
    int ebp = 0;
    if (edi != 0) {
        if (edi->field20 == 0) {
            Node* ebx = (Node*)((char*)edi - 0x20);
            if (sub_66e0d0(ebx) == 0) {
                if (sub_66e0b0(ebx) != 0)
                    goto L415;
            } else {
                goto L415;
            }
        } else {
            goto L41e;
        }
    }
L415:
    edi = (Node*)sub_66e190();
L41e:
    if (edi == 0)
        goto L609;

    {
        int (*fn)(void*) = *(int (**)(void*))(*(int*)edi + 0x18);
        int v14 = fn(edi);

        int v24;
        int v20;
        if (b == 0 || b == 1) {
            v24 = 1;
        } else {
            v24 = 0;
        }
        if (b == 1) {
            v20 = 1;
        } else if (b == 3) {
            v20 = 1;
        } else {
            v20 = 0;
        }

        Node* ebp2 = (Node*)c;
        if (ebp2->field20 == 0) {
            void* ecx = this->fieldD0;
            int (*fn2)(void*, int, void*) = *(int (**)(void*, int, void*))(*(int*)this + 0x144);
            void* r = (void*)fn2(this, 1, ecx);
            Node* esi;
            if (r != 0)
                esi = (Node*)((char*)r - 0x54);
            else
                esi = 0;
            sub_6e3400(esi, (char*)ebp2 - 0x20, (void*)v14);
            if (esi != 0)
                ebp2 = (Node*)((char*)esi + 0x54);
            else
                ebp2 = 0;
        }

        if (edi == (Node*)sub_66e190()) {
            Node* ebx = (Node*)((char*)edi - 0x20);
            if (edi->field70 == v24) {
                sub_6e4920(ebx, ebp2, 0, (void*)v20);
                sub_66ed20(this, edi, 1);
                return 0;
            } else {
                void* ecx = this->fieldD0;
                int (*fn2)(void*, int, void*) = *(int (**)(void*, int, void*))(*(int*)this + 0x144);
                void* r = (void*)fn2(this, 2, ecx);
                Node* esi;
                if (r != 0)
                    esi = (Node*)((char*)r - 0x20);
                else
                    esi = 0;
                sub_6e5260(esi, (char*)ebx + 0x20, (void*)v24, (void*)v14);
                sub_6e4920(esi, ebp2, 0, (void*)v20);
                this->fieldD0 = (void*)((char*)esi + 0x20);
                sub_66ed20(this, edi, 1);
                return 0;
            }
        }

        {
            Node* eax = edi->next;
            if (eax == 0)
                goto L609;
            if (eax->field20 == 1) {
                edi = eax;
                eax = edi->next;
                if (eax == 0)
                    goto L609;
            }
            Node* ebx;
            if (eax != 0)
                ebx = (Node*)((char*)eax - 0x20);
            else
                ebx = 0;
            if (ebx->field90 == v24) {
                sub_6e4920(ebx, ebp2, edi, (void*)v20);
                sub_66ed20(this, edi, 1);
                return 0;
            } else {
                void* ecx = this->fieldD0;
                int (*fn2)(void*, int, void*) = *(int (**)(void*, int, void*))(*(int*)this + 0x144);
                void* r = (void*)fn2(this, 2, ecx);
                Node* esi;
                if (r != 0)
                    esi = (Node*)((char*)r - 0x20);
                else
                    esi = 0;
                sub_6e5260(esi, edi, (void*)v24, (void*)v14);
                sub_6e4920(esi, ebp2, edi, (void*)v20);
                Node* tmp;
                if (esi != 0)
                    tmp = (Node*)((char*)esi + 0x20);
                else
                    tmp = 0;
                sub_6e48c0(ebx, edi, tmp);
                sub_66ed20(this, edi, 1);
            }
        }
    }
L609:
    return 0;
}
