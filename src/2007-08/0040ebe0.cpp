// from server: 95% by colin
// roc 2007-08 0040ebe0  unit: CChildFrame  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040ebe0
//
// 0040ebe0  56                   push esi
// 0040ebe1  8bf1                 mov esi, ecx
// 0040ebe3  8b4620               mov eax, dword ptr [esi + 0x20]
// 0040ebe6  50                   push eax
// 0040ebe7  ff15f8eb7700         call dword ptr [0x77ebf8]
// 0040ebed  50                   push eax
// 0040ebee  e8cd152200           call 0x6301c0
// 0040ebf3  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0040ebf6  6a05                 push 5
// 0040ebf8  51                   push ecx
// 0040ebf9  ff15f4eb7700         call dword ptr [0x77ebf4]
// 0040ebff  50                   push eax
// 0040ec00  e8bb152200           call 0x6301c0
// 0040ec05  3bc6                 cmp eax, esi
// 0040ec07  b803000000           mov eax, 3
// 0040ec0c  7404                 je 0x40ec12
// 0040ec0e  8b442408             mov eax, dword ptr [esp + 8]
// 0040ec12  50                   push eax
// 0040ec13  8bce                 mov ecx, esi
// 0040ec15  e898172200           call 0x6303b2
// 0040ec1a  5e                   pop esi
// 0040ec1b  c20400               ret 4

struct CChildFrame {
    char pad[0x20];
    int field_20;
    int sub_6303B2(int);
    int method(int);
};

extern "C" void* (__stdcall *GetParent)(void*);
extern "C" void* (__stdcall *GetWindow)(void*, unsigned int);
extern "C" void* __stdcall sub_6301C0(void*);

int CChildFrame::method(int arg) {
    void* p = GetParent((void*)field_20);
    void* q = sub_6301C0(p);
    void* r = GetWindow((void*)*(int*)((char*)q + 0x20), 5);
    void* s = sub_6301C0(r);
    int result;
    if (s == this) {
        result = 3;
    } else {
        result = arg;
    }
    return sub_6303B2(result);
}
