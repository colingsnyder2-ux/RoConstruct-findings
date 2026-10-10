// from server: 64% by colin
struct Assembly;
struct Joint;
struct Contact;

struct AssemblySet {
    struct Node {
        Node* next;
        Node* prev;
        int color;
        Assembly* value;
    };
    Node* head;
    unsigned int size;
};

struct SleepStage {
    char pad[0xa8];
    AssemblySet recursiveWakePending;
    int numContactsInStage;
    int numContactsInKernel;
    bool throttling;
    bool debugReentrant;
    int longStepId;
    AssemblySet wakePending;
    AssemblySet awake;
    AssemblySet sleepingChecking;
    AssemblySet sleepingDeeply;
    AssemblySet removing;
    int recursivePassId;
    bool externalRecursiveWake;

    void stepAssembliesRecursiveWakePending();
};

extern "C" void __stdcall _invalid_parameter_noinfo();

extern "C" void __stdcall sub_5B3470(void*, void*, void*);
extern "C" void* __stdcall sub_5B4830(void*);
extern "C" void __stdcall sub_5B3BE0(void*, void*);
extern "C" void __stdcall sub_5B3B80(void*, void*);
extern "C" bool __stdcall sub_5B2FB0(void*);

void SleepStage::stepAssembliesRecursiveWakePending()
{
    if (numContactsInStage != 0) {
        AssemblySet* set = &recursiveWakePending;
        for (;;) {
            AssemblySet::Node* node = set->head->next;
            if (node == set->head) {
                _invalid_parameter_noinfo();
            }
            AssemblySet::Node* cur = set->head->next;
            Assembly* a = node->value;
            void* tmp;
            sub_5B3470(set, set, &tmp);
            void* edi = sub_5B4830(*(void**)((char*)a + 8));
            void* ebp = sub_5B4830(*(void**)((char*)a + 0xc));
            if (edi == ebp) {
                sub_5B3BE0(edi, a);
            } else {
                sub_5B3B80(edi, a);
                sub_5B3B80(ebp, a);
                if (sub_5B2FB0(edi)) {
                    if (!sub_5B2FB0(ebp)) {
                        void* obj = *(void**)((char*)&tmp + 8);
                        void* vtable = *(void**)obj;
                        void* fn = *(void**)((char*)vtable + 0x10);
                        ((void (__stdcall*)(void*))fn)(a);
                    }
                } else {
                    void* obj = *(void**)((char*)&tmp + 8);
                    void* vtable = *(void**)obj;
                    void* fn = *(void**)((char*)vtable + 0x10);
                    ((void (__stdcall*)(void*))fn)(a);
                }
            }
            if (numContactsInStage == 0) {
                break;
            }
        }
    }
}
