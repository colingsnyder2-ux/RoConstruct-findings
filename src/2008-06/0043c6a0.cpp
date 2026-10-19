// from server: 16% by colin
//

struct GuardData {
    int first;
    int second;
    int third;
    GuardData();
    void acquire(void*);
    ~GuardData();
};

extern "C" void __stdcall invalid_parameter_noinfo();

struct VecNode {
    VecNode* next;
    VecNode* prev;
};

struct VecIter {
    VecNode* node;
};

struct VecBase {
    VecNode* first;
    VecNode* last;
    VecNode* end;
};

struct Item {
    void* vtable;
    int value;
    int index;
};

struct EnumDescriptor;

struct ItemOwner {
    EnumDescriptor* owner;
};

struct EnumDescriptor {
    char pad[0x10];
    VecBase items;
    int count;
    int countMSB;
};

struct Outer {
    char pad0[0x10];
    VecBase vec;
    char pad1[0x100];
};

struct Target {
    char pad0[4];
    VecNode* first;
    char pad1[8];
    VecNode* last;
    VecNode* end;
    char pad2[0x100];
    int setHidden(int);
    int convertToValue(int, void*);
    int convertToString(int, void*);
    int process(void*);
};

extern "C" int __stdcall sub_43a320(void*, void*);
extern "C" int __stdcall sub_43abc0(void*, void*);
extern "C" int __stdcall sub_7119f0(void*);
extern "C" int __stdcall sub_7110d0(void*, int);

int Target::process(void* arg) {
    int* p = (int*)arg;
    int v0 = p[0];
    int v1 = p[6];
    VecNode* it = this->first;
    VecNode* endNode = this->last;
    char flag = 0;
    int saved0 = v0;
    int saved1 = v1;
    VecNode* savedIt = it;
    VecNode* savedEnd = endNode;
    while (it != endNode) {
        Item* item = (Item*)it;
        int val = item->value;
        int idx = item->index;
        if (flag == 0) {
            int r = this->convertToValue(val, &idx);
            int* pr = &r;
            this->convertToString(r, pr);
        } else {
            int r = this->convertToValue(val, &idx);
            int out;
            if (!this->convertToString(r, &out)) {
                sub_7119f0(this);
                sub_7110d0(this, 0);
                return 0;
            }
        }
        flag = 1;
        it = (VecNode*)((char*)it + 8);
    }
    sub_7110d0(this, flag == 0 ? 1 : 0);
    return 0;
}
