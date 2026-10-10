// from server: 50% by colin
struct Assembly {
    int f0;
    int f4;
    int f8;
    int fC;
};

struct Joint {
    int f0;
    int f4;
    int f8;
    int fC;
};

struct Contact {
    int f0;
    int f4;
    int f8;
    int fC;
};

struct AssemblySet {
    struct Node {
        Node* parent;
        Node* left;
        Node* right;
        int color;
        Assembly* value;
    };
    Node* head;
    unsigned int size;
};

struct JointSet {
    struct Node {
        Node* parent;
        Node* left;
        Node* right;
        int color;
        Joint* value;
    };
    Node* head;
    unsigned int size;
};

struct ContactList {
    Contact** data;
    int count;
    int capacity;
};

struct SleepStage {
    char pad0[4];
    int f4;
    char pad8[4];
    int f8;
    char padC[0x10];
    int f1C;
    char pad20[4];
    AssemblySet awake;
    char pad2C[0x10];
    int f3C;

    void stepAssembliesAwake();
    void stepAssembliesSleepingChecking();
    void changeAssemblyState(Assembly* a);
    void changeContactState(Contact* c);
    void changeJointState(Joint* j);
    void doContacts(ContactList* lists);
    void stepContacts(ContactList* list);
    void stepJoints();
    void stepAssembliesRecursiveWakePending();
    void stepAssembliesWakePending();
    void stepSleepStage(Assembly* a, int depth);
};

extern "C" int __stdcall sub_5B2FB0(int);
extern "C" int __stdcall sub_5B2FC0(int);
extern "C" int __stdcall sub_5B3040(int, int);
extern "C" int __stdcall sub_5B3060(int, int);
extern "C" int __stdcall sub_5E29B0(int, int, int);
extern "C" int __stdcall sub_6271E0(int, int);
extern "C" int __stdcall sub_627240(int);
extern "C" int __stdcall sub_627A30(int, int);
extern "C" void __stdcall sub_77E6D8();

void SleepStage::stepSleepStage(Assembly* a, int depth) {
    if (sub_5B2FB0((int)a)) {
        return;
    }
    if (sub_5B2FC0((int)a)) {
        changeAssemblyState(a);
    }

    AssemblySet::Node* node = awake.head;
    AssemblySet::Node* end = (AssemblySet::Node*)((char*)&awake + 4);
    Assembly* cur = node->value;

    while (node != end) {
        if (node != 0 || node != (AssemblySet::Node*)((char*)&awake + 4)) {
            sub_77E6D8();
        }
        if (cur == (Assembly*)((char*)&awake + 4)) {
            break;
        }
        if (node == 0) {
            sub_77E6D8();
        }
        if (cur == (Assembly*)node->value) {
            sub_77E6D8();
        }

        Assembly* assembly = (Assembly*)node->value;
        if (assembly->f4 == (int)this) {
            int v1 = ((int (__thiscall*)(Assembly*))((*(int**)assembly->f4)[1]))(assembly);
            int v2 = ((int (__thiscall*)(SleepStage*))((*(int**)this)[1]))(this);
            if (v1 <= v2) {
                ((void (__thiscall*)(int, Assembly*))((*(int**)f8)[4]))(f8, assembly);
            }
        }

        Assembly* next = (Assembly*)sub_5B3060((int)this, (int)node->value);
        if (sub_5B2FC0((int)next)) {
            if (depth > 0) {
                if (sub_5B2FC0((int)next)) {
                    stepSleepStage(next, depth - 1);
                }
            } else if (sub_5B2FC0((int)next) == 2) {
                changeContactState((Contact*)next);
                int tmp1;
                int tmp2;
                sub_5E29B0((int)&f1C, (int)&tmp2, (int)&tmp1);
                sub_5B3040((int)next, 1);
                if (sub_5B2FC0((int)next) == 0) {
                    sub_6271E0(f8, (int)next);
                }
            }
        }

        sub_627240((int)&node);
        node = awake.head;
        cur = node->value;
    }

    sub_627A30(f4, (int)a);
}
