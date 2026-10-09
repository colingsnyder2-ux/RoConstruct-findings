// from server: 75% by colin
// roc 2007-08 0055e3f0  unit: RBX::DataModel  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055e3f0
//
// 0055e3f0  53                   push ebx
// 0055e3f1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0055e3f5  85db                 test ebx, ebx
// 0055e3f7  56                   push esi
// 0055e3f8  57                   push edi
// 0055e3f9  8bf1                 mov esi, ecx
// 0055e3fb  7408                 je 0x55e405
// 0055e3fd  8dbb4c010000         lea edi, [ebx + 0x14c]
// 0055e403  eb02                 jmp 0x55e407
// 0055e405  33ff                 xor edi, edi
// 0055e407  83ec1c               sub esp, 0x1c
// 0055e40a  8bcc                 mov ecx, esp
// 0055e40c  8964242c             mov dword ptr [esp + 0x2c], esp
// 0055e410  6820917a00           push 0x7a9120
// 0055e415  ff1598e67700         call dword ptr [0x77e698]
// 0055e41b  57                   push edi
// 0055e41c  8bce                 mov ecx, esi
// 0055e41e  e82d680000           call 0x564c50
// 0055e423  5f                   pop edi
// 0055e424  895e0c               mov dword ptr [esi + 0xc], ebx
// 0055e427  c7060c917a00         mov dword ptr [esi], 0x7a910c
// 0055e42d  8bc6                 mov eax, esi
// 0055e42f  5e                   pop esi
// 0055e430  5b                   pop ebx
// 0055e431  c20400               ret 4

struct DataModel;

struct DataModel {
    char pad[0xc];
    DataModel* field_c;
    DataModel(DataModel* other);
};

extern "C" void* __stdcall sub_77E698();
extern "C" void __stdcall sub_564C50(DataModel* self, void* arg);

DataModel::DataModel(DataModel* other) {
    char buf[0x1c];
    void* p;
    if (other) {
        p = (char*)other + 0x14c;
    } else {
        p = 0;
    }
    sub_77E698();
    sub_564C50(this, p);
    field_c = other;
    *(void**)this = (void*)0x7a910c;
}
