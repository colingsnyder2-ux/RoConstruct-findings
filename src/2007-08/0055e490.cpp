// from server: 79% by colin
// roc 2007-08 0055e490  unit: RBX::DataModel  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055e490
//
// 0055e490  53                   push ebx
// 0055e491  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0055e495  85db                 test ebx, ebx
// 0055e497  56                   push esi
// 0055e498  57                   push edi
// 0055e499  8bf1                 mov esi, ecx
// 0055e49b  7408                 je 0x55e4a5
// 0055e49d  8dbb4c010000         lea edi, [ebx + 0x14c]
// 0055e4a3  eb02                 jmp 0x55e4a7
// 0055e4a5  33ff                 xor edi, edi
// 0055e4a7  83ec1c               sub esp, 0x1c
// 0055e4aa  8bcc                 mov ecx, esp
// 0055e4ac  8964242c             mov dword ptr [esp + 0x2c], esp
// 0055e4b0  6870917a00           push 0x7a9170
// 0055e4b5  ff1598e67700         call dword ptr [0x77e698]
// 0055e4bb  57                   push edi
// 0055e4bc  8bce                 mov ecx, esi
// 0055e4be  e88d670000           call 0x564c50
// 0055e4c3  5f                   pop edi
// 0055e4c4  895e0c               mov dword ptr [esi + 0xc], ebx
// 0055e4c7  c7065c917a00         mov dword ptr [esi], 0x7a915c
// 0055e4cd  8bc6                 mov eax, esi
// 0055e4cf  5e                   pop esi
// 0055e4d0  5b                   pop ebx
// 0055e4d1  c20400               ret 4

struct DataModel;

struct IntellesenseResult
{
    char pad[0x1c];
};

struct DataModel
{
    DataModel* construct(DataModel* other);
    char pad[8];
    DataModel* model;
    void* vtable;
};

extern "C" void* __stdcall sub_77E698(const char* s);
extern "C" void __stdcall sub_564C50(DataModel* self, void* arg);

DataModel* DataModel::construct(DataModel* other)
{
    DataModel* p = other ? (DataModel*)((char*)other + 0x14c) : 0;
    IntellesenseResult tmp;
    sub_77E698("ClearBackpack");
    sub_564C50(this, p);
    this->model = other;
    this->vtable = (void*)0x7a915c;
    return this;
}
