// from server: 58% by colin
// roc 2007-08 0041d6a0  unit: CInstanceRecord::CNameItem  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041d6a0
//
// 0041d6a0  51                   push ecx
// 0041d6a1  8b497c               mov ecx, dword ptr [ecx + 0x7c]
// 0041d6a4  56                   push esi
// 0041d6a5  81c1c8000000         add ecx, 0xc8
// 0041d6ab  c744240400000000     mov dword ptr [esp + 4], 0
// 0041d6b3  ff15a8e67700         call dword ptr [0x77e6a8]
// 0041d6b9  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0041d6bd  50                   push eax
// 0041d6be  8bce                 mov ecx, esi
// 0041d6c0  ff15b8dd7700         call dword ptr [0x77ddb8]
// 0041d6c6  8bc6                 mov eax, esi
// 0041d6c8  5e                   pop esi
// 0041d6c9  59                   pop ecx
// 0041d6ca  c20800               ret 8

struct CInstanceRecord_CNameItem {
    char pad[0x7c];
    void* field_7c;
    void* method_41d6a0(const char*, int);
};

extern "C" void* __stdcall sub_77e6a8(void*);
extern "C" void* __stdcall sub_77ddb8(void*, const char*);

void* CInstanceRecord_CNameItem::method_41d6a0(const char* arg1, int arg2) {
    void* p = (void*)((char*)this->field_7c + 0xc8);
    void* r = sub_77e6a8(p);
    sub_77ddb8(this, arg1);
    return this;
}
