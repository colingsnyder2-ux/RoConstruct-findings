// from server: 81% by colin
// roc 2007-08 0055e440  unit: RBX::DataModel  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055e440
//
// 0055e440  53                   push ebx
// 0055e441  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0055e445  85db                 test ebx, ebx
// 0055e447  56                   push esi
// 0055e448  57                   push edi
// 0055e449  8bf1                 mov esi, ecx
// 0055e44b  7408                 je 0x55e455
// 0055e44d  8dbb4c010000         lea edi, [ebx + 0x14c]
// 0055e453  eb02                 jmp 0x55e457
// 0055e455  33ff                 xor edi, edi
// 0055e457  83ec1c               sub esp, 0x1c
// 0055e45a  8bcc                 mov ecx, esp
// 0055e45c  8964242c             mov dword ptr [esp + 0x2c], esp
// 0055e460  6844917a00           push 0x7a9144
// 0055e465  ff1598e67700         call dword ptr [0x77e698]
// 0055e46b  57                   push edi
// 0055e46c  8bce                 mov ecx, esi
// 0055e46e  e8dd670000           call 0x564c50
// 0055e473  5f                   pop edi
// 0055e474  895e0c               mov dword ptr [esi + 0xc], ebx
// 0055e477  c70630917a00         mov dword ptr [esi], 0x7a9130
// 0055e47d  8bc6                 mov eax, esi
// 0055e47f  5e                   pop esi
// 0055e480  5b                   pop ebx
// 0055e481  c20400               ret 4

struct DataModel {
    char pad[0xc];
    void* field_c;
    DataModel(void* other);
};

extern "C" void* __stdcall sub_77E698(void*);

struct String {
    void* buf[7];
    String(const char*);
};

extern "C" void sub_564C50(void*, void*);

DataModel::DataModel(void* other) {
    void* p;
    if (other) {
        p = (char*)other + 0x14c;
    } else {
        p = 0;
    }
    char tmp[0x1c];
    String s("ClearStarterpack");
    sub_564C50(this, p);
    field_c = other;
    *(void**)this = (void*)0x7a9130;
}
