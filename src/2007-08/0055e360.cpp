// from server: 46% by colin
// roc 2007-08 0055e360  unit: RBX::DataModel  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055e360
//
// 0055e360  8b442404             mov eax, dword ptr [esp + 4]
// 0055e364  85c0                 test eax, eax
// 0055e366  56                   push esi
// 0055e367  57                   push edi
// 0055e368  8bf1                 mov esi, ecx
// 0055e36a  7408                 je 0x55e374
// 0055e36c  8db84c010000         lea edi, [eax + 0x14c]
// 0055e372  eb02                 jmp 0x55e376
// 0055e374  33ff                 xor edi, edi
// 0055e376  83ec1c               sub esp, 0x1c
// 0055e379  8bcc                 mov ecx, esp
// 0055e37b  89642428             mov dword ptr [esp + 0x28], esp
// 0055e37f  68d4907a00           push 0x7a90d4
// 0055e384  ff1598e67700         call dword ptr [0x77e698]
// 0055e38a  57                   push edi
// 0055e38b  8bce                 mov ecx, esi
// 0055e38d  e8be680000           call 0x564c50
// 0055e392  5f                   pop edi
// 0055e393  c706c0907a00         mov dword ptr [esi], 0x7a90c0
// 0055e399  8bc6                 mov eax, esi
// 0055e39b  5e                   pop esi
// 0055e39c  c20400               ret 4

struct DataModel {
    char pad[0x14c];
    int field_14c;
};

extern "C" void* __stdcall sub_77E698(void*, const char*);
extern "C" void sub_564C50();

struct DataModelCtor {
    void construct(DataModel* other);
};

void DataModelCtor::construct(DataModel* other)
{
    DataModel* p = other;
    int* pfield;
    if (p) {
        pfield = &p->field_14c;
    } else {
        pfield = 0;
    }
    char buf[0x1c];
    void* sp = buf;
    sub_77E698(sp, (const char*)0x7a90d4);
    sub_564C50();
    *(int*)this = 0x7a90c0;
}
