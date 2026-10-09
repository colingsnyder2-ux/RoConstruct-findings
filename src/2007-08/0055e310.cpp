// from server: 75% by colin
// roc 2007-08 0055e310  unit: RBX::DataModel  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055e310
//
// 0055e310  53                   push ebx
// 0055e311  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0055e315  85db                 test ebx, ebx
// 0055e317  56                   push esi
// 0055e318  57                   push edi
// 0055e319  8bf1                 mov esi, ecx
// 0055e31b  7408                 je 0x55e325
// 0055e31d  8dbb4c010000         lea edi, [ebx + 0x14c]
// 0055e323  eb02                 jmp 0x55e327
// 0055e325  33ff                 xor edi, edi
// 0055e327  83ec1c               sub esp, 0x1c
// 0055e32a  8bcc                 mov ecx, esp
// 0055e32c  8964242c             mov dword ptr [esp + 0x2c], esp
// 0055e330  6890267900           push 0x792690
// 0055e335  ff1598e67700         call dword ptr [0x77e698]
// 0055e33b  57                   push edi
// 0055e33c  8bce                 mov ecx, esi
// 0055e33e  e80d690000           call 0x564c50
// 0055e343  5f                   pop edi
// 0055e344  895e0c               mov dword ptr [esi + 0xc], ebx
// 0055e347  c706a8907a00         mov dword ptr [esi], 0x7a90a8
// 0055e34d  8bc6                 mov eax, esi
// 0055e34f  5e                   pop esi
// 0055e350  5b                   pop ebx
// 0055e351  c20400               ret 4

struct DataModel;

struct S {
    void* vtable;
    char pad[8];
    DataModel* model;
    S* init(DataModel* dm);
};

extern "C" void* __stdcall sub_77E698();
extern "C" void __stdcall sub_564C50(void* a, void* b);

S* S::init(DataModel* dm) {
    char* p;
    if (dm != 0) {
        p = (char*)dm + 0x14c;
    } else {
        p = 0;
    }
    char buf[0x1c];
    sub_77E698();
    sub_564C50(this, p);
    this->model = dm;
    this->vtable = (void*)0x7a90a8;
    return this;
}
