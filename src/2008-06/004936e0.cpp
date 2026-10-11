// from server: 88% by colin
// roc 2008-06 004936e0  unit: RBX::VShirt::?$FactoryProduct  size: 121 bytes

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl operator_delete(void*);
extern "C" void __cdecl sub_491290(void*, void*);
extern "C" void __cdecl sub_48d7a0(void*);
extern "C" int __cdecl sub_802878(void*, void*);

struct type_info;

struct S {
};

void __cdecl f(int a, void* b, void* c)
{
    if (a == 0) {
        void* p = *(void**)b;
        void* q = operator_new(0x24);
        sub_491290(q, p);
        *(void**)c = q;
    }
    else if (a == 1) {
        void* p = *(void**)b;
        sub_48d7a0(p);
        operator_delete(p);
        *(void**)b = 0;
    }
    else {
        void* p = *(void**)b;
        if (sub_802878(p, (void*)0x9376e8)) {
            *(void**)b = *(void**)c;
        }
        else {
            *(void**)b = 0;
        }
    }
}
